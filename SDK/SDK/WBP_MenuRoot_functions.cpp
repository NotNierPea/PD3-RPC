﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuRoot

#include "Basic.hpp"

#include "WBP_MenuRoot_classes.hpp"
#include "WBP_MenuRoot_parameters.hpp"


namespace SDK
{

// Function WBP_MenuRoot.WBP_MenuRoot_C.ExecuteUbergraph_WBP_MenuRoot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::ExecuteUbergraph_WBP_MenuRoot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "ExecuteUbergraph_WBP_MenuRoot");

	Params::WBP_MenuRoot_C_ExecuteUbergraph_WBP_MenuRoot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "PreConstruct");

	Params::WBP_MenuRoot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnQuitConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ClosingActionName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::OnQuitConfirmed(class FName ClosingActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnQuitConfirmed");

	Params::WBP_MenuRoot_C_OnQuitConfirmed Parms{};

	Parms.ClosingActionName = ClosingActionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_MenuRoot_QuitButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::BndEvt__WBP_MenuRoot_QuitButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_MenuRoot_QuitButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_MenuRoot_QuitButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_UI_MainMenu_CrimeNet_HeistOnline_LargetTextButton_K2Node_ComponentBoundEvent_9_OnMenuButtonSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::BndEvt__WBP_UI_MainMenu_CrimeNet_HeistOnline_LargetTextButton_K2Node_ComponentBoundEvent_9_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_UI_MainMenu_CrimeNet_HeistOnline_LargetTextButton_K2Node_ComponentBoundEvent_9_OnMenuButtonSelected__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_UI_MainMenu_CrimeNet_HeistOnline_LargetTextButton_K2Node_ComponentBoundEvent_9_OnMenuButtonSelected__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnPlayerJoinedParty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::OnPlayerJoinedParty(const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnPlayerJoinedParty");

	Params::WBP_MenuRoot_C_OnPlayerJoinedParty Parms{};

	Parms.PlayerId = std::move(PlayerId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnPlayerLeftParty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::OnPlayerLeftParty(const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnPlayerLeftParty");

	Params::WBP_MenuRoot_C_OnPlayerLeftParty Parms{};

	Parms.PlayerId = std::move(PlayerId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnPlayerKickedFromParty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::OnPlayerKickedFromParty(const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnPlayerKickedFromParty");

	Params::WBP_MenuRoot_C_OnPlayerKickedFromParty Parms{};

	Parms.PlayerId = std::move(PlayerId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_UI_MainMenu_CrimeNet_Blackmarket_LargetTextButton_K2Node_ComponentBoundEvent_11_OnMenuButtonSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::BndEvt__WBP_UI_MainMenu_CrimeNet_Blackmarket_LargetTextButton_K2Node_ComponentBoundEvent_11_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_UI_MainMenu_CrimeNet_Blackmarket_LargetTextButton_K2Node_ComponentBoundEvent_11_OnMenuButtonSelected__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_UI_MainMenu_CrimeNet_Blackmarket_LargetTextButton_K2Node_ComponentBoundEvent_11_OnMenuButtonSelected__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnControlReferencePressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::OnControlReferencePressed(class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnControlReferencePressed");

	Params::WBP_MenuRoot_C_OnControlReferencePressed Parms{};

	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_UI_MainMenu_CrimeNet_Loadout_LargetTextButton_K2Node_ComponentBoundEvent_12_OnMenuButtonSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::BndEvt__WBP_UI_MainMenu_CrimeNet_Loadout_LargetTextButton_K2Node_ComponentBoundEvent_12_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_UI_MainMenu_CrimeNet_Loadout_LargetTextButton_K2Node_ComponentBoundEvent_12_OnMenuButtonSelected__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_UI_MainMenu_CrimeNet_Loadout_LargetTextButton_K2Node_ComponentBoundEvent_12_OnMenuButtonSelected__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_UI_MainMenu_CrimeNet_ChallengesButton_K2Node_ComponentBoundEvent_13_OnMenuButtonSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::BndEvt__WBP_UI_MainMenu_CrimeNet_ChallengesButton_K2Node_ComponentBoundEvent_13_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_UI_MainMenu_CrimeNet_ChallengesButton_K2Node_ComponentBoundEvent_13_OnMenuButtonSelected__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_UI_MainMenu_CrimeNet_ChallengesButton_K2Node_ComponentBoundEvent_13_OnMenuButtonSelected__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_UI_MainMenu_CrimeNet_SocialsButton_K2Node_ComponentBoundEvent_14_OnMenuButtonSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::BndEvt__WBP_UI_MainMenu_CrimeNet_SocialsButton_K2Node_ComponentBoundEvent_14_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_UI_MainMenu_CrimeNet_SocialsButton_K2Node_ComponentBoundEvent_14_OnMenuButtonSelected__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_UI_MainMenu_CrimeNet_SocialsButton_K2Node_ComponentBoundEvent_14_OnMenuButtonSelected__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_MenuRoot_ChallengesButton_K2Node_ComponentBoundEvent_8_OnMenuButtonStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnabled_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::BndEvt__WBP_MenuRoot_ChallengesButton_K2Node_ComponentBoundEvent_8_OnMenuButtonStateChanged__DelegateSignature(class USBZMenuButton* Button, bool bIsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_MenuRoot_ChallengesButton_K2Node_ComponentBoundEvent_8_OnMenuButtonStateChanged__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_MenuRoot_ChallengesButton_K2Node_ComponentBoundEvent_8_OnMenuButtonStateChanged__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.bIsEnabled_0 = bIsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_UI_MainMenu_CrimeNet_SettingsButton_K2Node_ComponentBoundEvent_15_OnMenuButtonSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::BndEvt__WBP_UI_MainMenu_CrimeNet_SettingsButton_K2Node_ComponentBoundEvent_15_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_UI_MainMenu_CrimeNet_SettingsButton_K2Node_ComponentBoundEvent_15_OnMenuButtonSelected__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_UI_MainMenu_CrimeNet_SettingsButton_K2Node_ComponentBoundEvent_15_OnMenuButtonSelected__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_MenuRoot_Loadout_LargetTextButton_K2Node_ComponentBoundEvent_7_OnMenuButtonStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnabled_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::BndEvt__WBP_MenuRoot_Loadout_LargetTextButton_K2Node_ComponentBoundEvent_7_OnMenuButtonStateChanged__DelegateSignature(class USBZMenuButton* Button, bool bIsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_MenuRoot_Loadout_LargetTextButton_K2Node_ComponentBoundEvent_7_OnMenuButtonStateChanged__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_MenuRoot_Loadout_LargetTextButton_K2Node_ComponentBoundEvent_7_OnMenuButtonStateChanged__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.bIsEnabled_0 = bIsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_MenuRoot_Blackmarket_LargetTextButton_K2Node_ComponentBoundEvent_5_OnMenuButtonStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnabled_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::BndEvt__WBP_MenuRoot_Blackmarket_LargetTextButton_K2Node_ComponentBoundEvent_5_OnMenuButtonStateChanged__DelegateSignature(class USBZMenuButton* Button, bool bIsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_MenuRoot_Blackmarket_LargetTextButton_K2Node_ComponentBoundEvent_5_OnMenuButtonStateChanged__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_MenuRoot_Blackmarket_LargetTextButton_K2Node_ComponentBoundEvent_5_OnMenuButtonStateChanged__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.bIsEnabled_0 = bIsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_MenuRoot_HeistOnline_LargetTextButton_K2Node_ComponentBoundEvent_0_OnMenuButtonStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnabled_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::BndEvt__WBP_MenuRoot_HeistOnline_LargetTextButton_K2Node_ComponentBoundEvent_0_OnMenuButtonStateChanged__DelegateSignature(class USBZMenuButton* Button, bool bIsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_MenuRoot_HeistOnline_LargetTextButton_K2Node_ComponentBoundEvent_0_OnMenuButtonStateChanged__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_MenuRoot_HeistOnline_LargetTextButton_K2Node_ComponentBoundEvent_0_OnMenuButtonStateChanged__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.bIsEnabled_0 = bIsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_MenuRoot_SettingsButton_K2Node_ComponentBoundEvent_18_OnMenuButtonStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnabled_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::BndEvt__WBP_MenuRoot_SettingsButton_K2Node_ComponentBoundEvent_18_OnMenuButtonStateChanged__DelegateSignature(class USBZMenuButton* Button, bool bIsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_MenuRoot_SettingsButton_K2Node_ComponentBoundEvent_18_OnMenuButtonStateChanged__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_MenuRoot_SettingsButton_K2Node_ComponentBoundEvent_18_OnMenuButtonStateChanged__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.bIsEnabled_0 = bIsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.BndEvt__WBP_MenuRoot_SocialsButton_K2Node_ComponentBoundEvent_17_OnMenuButtonStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnabled_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::BndEvt__WBP_MenuRoot_SocialsButton_K2Node_ComponentBoundEvent_17_OnMenuButtonStateChanged__DelegateSignature(class USBZMenuButton* Button, bool bIsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "BndEvt__WBP_MenuRoot_SocialsButton_K2Node_ComponentBoundEvent_17_OnMenuButtonStateChanged__DelegateSignature");

	Params::WBP_MenuRoot_C_BndEvt__WBP_MenuRoot_SocialsButton_K2Node_ComponentBoundEvent_17_OnMenuButtonStateChanged__DelegateSignature Parms{};

	Parms.Button = Button;
	Parms.bIsEnabled_0 = bIsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.UpdateFocusedButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   InButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::UpdateFocusedButton(class USBZMenuButton* InButton, bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "UpdateFocusedButton");

	Params::WBP_MenuRoot_C_UpdateFocusedButton Parms{};

	Parms.InButton = InButton;
	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnMatchmakingStarted
// (BlueprintCallable, BlueprintEvent)

void UWBP_MenuRoot_C::OnMatchmakingStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnMatchmakingStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnPrivilegeQueried
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBZUserPrivilegesProxy                 Privilege                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPrivilegeAllowed                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::OnPrivilegeQueried(ESBZUserPrivilegesProxy Privilege, bool bPrivilegeAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnPrivilegeQueried");

	Params::WBP_MenuRoot_C_OnPrivilegeQueried Parms{};

	Parms.Privilege = Privilege;
	Parms.bPrivilegeAllowed = bPrivilegeAllowed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnInstallStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsGameInstallPending                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::OnInstallStateChanged(bool bIsGameInstallPending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnInstallStateChanged");

	Params::WBP_MenuRoot_C_OnInstallStateChanged Parms{};

	Parms.bIsGameInstallPending = bIsGameInstallPending;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MenuRoot_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnGainedStackFocused
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FName&                      PreviousValue                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MenuRoot_C::OnGainedStackFocused(const class FName& PreviousValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnGainedStackFocused");

	Params::WBP_MenuRoot_C_OnGainedStackFocused Parms{};

	Parms.PreviousValue = PreviousValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.OnLostStackFocused
// (Event, Protected, BlueprintEvent)

void UWBP_MenuRoot_C::OnLostStackFocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "OnLostStackFocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.SetNoneState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MenuRoot_C::SetNoneState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "SetNoneState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.SetMatchMakingState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MenuRoot_C::SetMatchMakingState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "SetMatchMakingState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.UpdateAccessBasedOnPrivilege
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanPlayOnline                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InstallPending                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::UpdateAccessBasedOnPrivilege(bool CanPlayOnline, bool InstallPending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "UpdateAccessBasedOnPrivilege");

	Params::WBP_MenuRoot_C_UpdateAccessBasedOnPrivilege Parms{};

	Parms.CanPlayOnline = CanPlayOnline;
	Parms.InstallPending = InstallPending;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.NavigateToMaskOfTheWeek
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MenuRoot_C::NavigateToMaskOfTheWeek(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "NavigateToMaskOfTheWeek");

	Params::WBP_MenuRoot_C_NavigateToMaskOfTheWeek Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.NavigateToPlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MenuRoot_C::NavigateToPlay(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "NavigateToPlay");

	Params::WBP_MenuRoot_C_NavigateToPlay Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_MenuRoot.WBP_MenuRoot_C.SetInputEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEnabled_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MenuRoot_C::SetInputEnabled(bool bIsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MenuRoot_C", "SetInputEnabled");

	Params::WBP_MenuRoot_C_SetInputEnabled Parms{};

	Parms.bIsEnabled_0 = bIsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

