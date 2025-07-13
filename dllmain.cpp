#include <Windows.h>
#include <iostream>
#include <atomic>

#include <chrono>

#include <codecvt>
#include <locale>
#include <unordered_set>

// discord
#include "DiscordSDK/cpp/discord.h"

// engine
#include "SDK/SDK/Engine_classes.hpp"

// sbz's classes
#include "SDK/SDK/Starbreeze_classes.hpp"

// widgets
#include "SDK/SDK/WBP_UI_Widget_RiskLevel_classes.hpp"
#include "SDK/SDK/WBP_UI_Preplanning_MainMenu_classes.hpp"
#include "SDK/SDK/WBP_ScreenTitle_classes.hpp"

#include <thread>

#include <algorithm>

bool IsValid(const SDK::UObject* Object) {
    // can we fucking check if the object is a valid pointer before passing it? ffs
    return Object && SDK::UKismetSystemLibrary::IsValid(Object);
}

bool ObjectFindName(const SDK::UObject* ObjAct, const std::string& Name) {
    return IsValid(ObjAct) && ObjAct->GetName().find(Name) != std::string::npos;
}

// Global
std::atomic<bool> g_Running = true;
inline discord::Core* core{ };
inline int64_t startTimestamp = 0;

void PrintConsole(std::string data) {
    std::cout << "[Console] " << data.c_str() << std::endl;
}

std::string ToLower(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(),
        [](unsigned char c) { return std::tolower(c); });
    return str;
}

std::string utf8_encode(const std::wstring& wstr) {
    if(wstr.empty())
        return std::string();
    int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
    std::string strTo(size_needed, 0);
    WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
    return strTo;
}

std::string GetDifficultyName(SDK::ESBZDifficulty Difficulty)
{
    switch(Difficulty)
    {
    case SDK::ESBZDifficulty::Normal:    return "Normal";
    case SDK::ESBZDifficulty::Hard:      return "Hard";
    case SDK::ESBZDifficulty::VeryHard:  return "Very Hard";
    case SDK::ESBZDifficulty::Overkill:  return "Overkill";
    default:                             return "Normal"; // fallback
    }
}

std::string ToDiscordRPCKey(const std::string& input)
{
    std::string result;

    for(char c : input)
    {
        if(std::isalnum(c)) {
            result += std::tolower(c);
        }
        else if(c == ' ') {
            result += '_';
        }
        // skip all other characters (e.g., &, !, ', etc.)
    }

    return result;
}

bool EqualsIgnoreCase(const std::string& a, const std::string& b)
{
    return std::equal(a.begin(), a.end(), b.begin(), b.end(),
        [](char a, char b) { return std::tolower(a) == std::tolower(b); });
}

DWORD WINAPI MainThread(HMODULE Module)
{
    // wait till world is defined..
    while(true) {
        auto* World_Wait = SDK::UWorld::GetWorld();
        if(!IsValid(World_Wait)) {
            Sleep(1000);
            continue;
        }
        break;
    }

    // Open console
    //AllocConsole();
    //FILE* Dummy;
    //freopen_s(&Dummy, "CONOUT$", "w", stdout);
    //freopen_s(&Dummy, "CONIN$", "r", stdin);

    std::cout << "starting.." << std::endl;
    //std::cout << "Press END to unload." << std::endl;

    // create discord
    auto result = discord::Core::Create(1393544325111222334, DiscordCreateFlags_NoRequireDiscord, &core);

    if(result == discord::Result::Ok) {
        PrintConsole("[Discord] Created core");
    }
    else {
        PrintConsole("[Discord] Failed to create core");
    }

    while(g_Running)
    {
        if(!g_Running)
            break;

        //if(GetAsyncKeyState(VK_END) & 1) // Press END to unhook
        //{
        //    std::cout << "Unloading..." << std::endl;
        //    g_Running = false;
        //    break;
        //}

        SDK::UWorld* World = SDK::UWorld::GetWorld();

        if(!IsValid(World))
        {
            PrintConsole("world is null..");
            Sleep(250);
            continue;
        }

        SDK::UEngine* Engine = SDK::UEngine::GetEngine();

        if(!IsValid(Engine))
        {
            PrintConsole("engine is null..");
            Sleep(250);
            continue;
        }

        // Large Image
        std::string LargePic = "game_logo";
        std::string LargePicText = "Payday 3";

        // Small Image
        std::string SmallPic = "player_info";
        std::string SmallPicText = "Logging in.."; // no info

        // Details
        std::string StateStatus = "";
        std::string StateDetails = "In Menus";

        static std::string tactic = "Any";
        static std::string diff = "";

        // Info from SDK
        // Menus, pre-planning
        // i dont know how to get widgets, so scanning them i guess
        for(int i = 0; i < SDK::UObject::GObjects->Num(); ++i)
        {
            SDK::UObject* obj = SDK::UObject::GObjects->GetByIndex(i);
            if(!obj) continue;

            // don't check for blueprints, too much useage
            if(obj->IsA(SDK::USBZMainMenuPrePlanningWidget::StaticClass()))
            {
                auto PrePlanningWidget = static_cast<SDK::UWBP_UI_Preplanning_MainMenu_C*>(obj);

                // if its active, PrePlanningWidget->IsAsyncLoadingDone() -> means if ready loading is completed, good way to check if you are in the screen.
                if (IsValid(PrePlanningWidget) && PrePlanningWidget->IsAsyncLoadingDone()
                    && IsValid(PrePlanningWidget->Text_Difficulty))
                {
                    PrintConsole("got preplanning, updating..");

                    StateDetails = "In Pre-Planning";
                    
                    // get heist + tactic
                    std::string HeistDisplayName_Preplanning = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(PrePlanningWidget->WBP_ScreenTitle->TitleText).ToWString());
                    tactic = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(PrePlanningWidget->TacticType_T->Text).ToWString());

                    // Starbreeze.. what the fuck?
                    if (EqualsIgnoreCase(HeistDisplayName_Preplanning, "Heist name"))
                    {
                        // either joining or hosting, i dont fucking know, we will leave it to joining..
                        StateDetails = "Joining a heist";
                    }
                    else
                    {
                        StateDetails += ": " + HeistDisplayName_Preplanning;

                        LargePic = ToDiscordRPCKey(ToLower(HeistDisplayName_Preplanning));
                        LargePicText = tactic;

                        // get diff
                        diff = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(PrePlanningWidget->Text_Difficulty->Text).ToWString());
                        StateStatus = diff;
                    }
                }
            }
        }

        // ------------------------ \\

        // LEVEL AND STUFF
        auto MissionState = SDK::ASBZMissionState::GetSBZMissionState(World);
        if (IsValid(MissionState))
        {
            auto HeistData = MissionState->CurrentHeistData;

            std::string HeistDisplayName = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(HeistData->HeistDisplayName).ToWString());
            //std::string HeistLocationName = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(HeistData->HeistLocation).ToWString());

            // update heist
            StateDetails = "In " + HeistDisplayName;

            LargePic = ToDiscordRPCKey(ToLower(HeistDisplayName));
            //LargePicText = HeistLocationName;
            LargePicText = tactic;

            // Get Difficulty, sadly this will not work for other languages, can't find anything for it yet
            auto Difficulty = MissionState->GetDifficulty();

            if(!EqualsIgnoreCase(GetDifficultyName(Difficulty), diff))
            {
                PrintConsole("getting diff normal way");

                diff = GetDifficultyName(Difficulty);
            }
           
            //SmallPic = ToLower(diff);

            if (!MissionState->IsTutorialLevel())
            {
                StateStatus = diff;
            }
            else
            {
                // tut
                LargePic = "game_logo";
                StateStatus = "Tutorial";
            }

            // lol
            if(HeistData->bIsSmashAndGrab)
                StateDetails += " (Smash and Grab)";

            //PrintConsole(ToDiscordRPCKey(ToLower(HeistDisplayName)));
        }

        // --------------------------- \\

        // PLAYER INFO
        auto PlayerState = SDK::USBZPlayerLibrary::GetLocalPlayerState(World);
        auto InfamyManager = SDK::USBZInfamyManager::GetInfamyManager(World);

        // if valid and logged in
        if (IsValid(PlayerState) && IsValid(InfamyManager) && InfamyManager->ClientGetCurrentLevel() > 1)
        {
            SmallPicText = PlayerState->GetPlayerName().ToString();

            // update level stuff
            SmallPicText += " | Level: " + std::to_string(InfamyManager->ClientGetCurrentLevel())
                + " | Renown: " + std::to_string(InfamyManager->ClientGetCurrentRenownLevel());
        }

        // --------------------------- \\

        // PARTY
        int PartySize = SDK::USBZOnlineFunctionLibrary::GetPlayersCount(World);
        if(PartySize <= 0)
            PartySize = 1; // fallback for menu, should work find in lobby/pre-planning.

        // update party
        std::string PartyStr = " (" + std::to_string(PartySize) + " of 4)";

        StateStatus += PartyStr;

        // --------------------------- \\

        // update discord
        core->RunCallbacks();

        discord::Activity activity{ };

        activity.SetName("Payday 3");

        activity.GetAssets().SetLargeImage(LargePic.c_str());
        activity.GetAssets().SetLargeText(LargePicText.c_str());

        activity.GetAssets().SetSmallImage(SmallPic.c_str());
        activity.GetAssets().SetSmallText(SmallPicText.c_str());

        activity.SetState(StateStatus.c_str());
        activity.SetDetails(StateDetails.c_str());

        if(startTimestamp == 0) {
            startTimestamp = std::chrono::duration_cast<std::chrono::seconds>(
                std::chrono::system_clock::now().time_since_epoch())
                .count();
        }

        activity.GetTimestamps().SetStart(startTimestamp);
        core->ActivityManager().UpdateActivity(activity, [](discord::Result result) {

            });

        Sleep(1000);
    }

    // Cleanup
    PrintConsole("[Discord] Clearing...");

    if(core)
    {
        core->RunCallbacks();

        core->ActivityManager().ClearActivity([](discord::Result result) {
            if(result == discord::Result::Ok) {
                PrintConsole("[Discord] Cleared activity.");
            }
            else {
                PrintConsole("[Discord] Failed to clear activity.");
            }
            });

        core->RunCallbacks();

        delete core;
        core = nullptr;
    }

    PrintConsole("[Discord] Deleted Core!");

    //fclose(stdin);
    //fclose(stdout);
    //FreeConsole();

    // Unload DLL
    FreeLibraryAndExitThread(Module, 0);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    if(reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule); // optional
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);
    }

    return TRUE;
}