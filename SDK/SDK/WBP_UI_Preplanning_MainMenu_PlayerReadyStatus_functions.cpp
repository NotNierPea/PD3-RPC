﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Preplanning_MainMenu_PlayerReadyStatus

#include "Basic.hpp"

#include "WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_classes.hpp"
#include "WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.ExecuteUbergraph_WBP_UI_Preplanning_MainMenu_PlayerReadyStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::ExecuteUbergraph_WBP_UI_Preplanning_MainMenu_PlayerReadyStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "ExecuteUbergraph_WBP_UI_Preplanning_MainMenu_PlayerReadyStatus");

	Params::WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C_ExecuteUbergraph_WBP_UI_Preplanning_MainMenu_PlayerReadyStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "PreConstruct");

	Params::WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.ButtonFocusedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInHasFocus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::ButtonFocusedChanged(bool bInHasFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "ButtonFocusedChanged");

	Params::WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C_ButtonFocusedChanged Parms{};

	Parms.bInHasFocus = bInHasFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.OnPlayerStatusRemoved_Event
// (BlueprintCallable, BlueprintEvent)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::OnPlayerStatusRemoved_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "OnPlayerStatusRemoved_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.OnLobbyPlayerStatusUpdated
// (Event, Public, BlueprintEvent)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::OnLobbyPlayerStatusUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "OnLobbyPlayerStatusUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.OnMMStopped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBZOnlineCode                          ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::OnMMStopped(ESBZOnlineCode ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "OnMMStopped");

	Params::WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C_OnMMStopped Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.OnLobbyUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBZOnlineCode                          ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::OnLobbyUpdate(ESBZOnlineCode ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "OnLobbyUpdate");

	Params::WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C_OnLobbyUpdate Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.OnLeft
// (BlueprintCallable, BlueprintEvent)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::OnLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "OnLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.GetLobbyInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBZLobbyCharacterInfoUi*        CharacterUIInfo                                        (Parm, OutParm)
// bool*                                   IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::GetLobbyInfo(struct FSBZLobbyCharacterInfoUi* CharacterUIInfo, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "GetLobbyInfo");

	Params::WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C_GetLobbyInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterUIInfo != nullptr)
		*CharacterUIInfo = std::move(Parms.CharacterUIInfo);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.CleanWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::CleanWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "CleanWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.SetPlayerUIInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSBZLobbyCharacterInfoUi&  InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::SetPlayerUIInfo(const struct FSBZLobbyCharacterInfoUi& InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "SetPlayerUIInfo");

	Params::WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C_SetPlayerUIInfo Parms{};

	Parms.InCharacter = std::move(InCharacter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.OnControlsReferencePressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::OnControlsReferencePressed(class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "OnControlsReferencePressed");

	Params::WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C_OnControlsReferencePressed Parms{};

	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.OnFocusedVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsFocused                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::OnFocusedVisuals(bool bIsFocused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "OnFocusedVisuals");

	Params::WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C_OnFocusedVisuals Parms{};

	Parms.bIsFocused = bIsFocused;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.RefreshVisual
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::RefreshVisual()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "RefreshVisual");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Preplanning_MainMenu_PlayerReadyStatus.WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C.SetLobbyOwnerVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    InUserID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C::SetLobbyOwnerVisibility(const class FString& InUserID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C", "SetLobbyOwnerVisibility");

	Params::WBP_UI_Preplanning_MainMenu_PlayerReadyStatus_C_SetLobbyOwnerVisibility Parms{};

	Parms.InUserID = std::move(InUserID);

	UObject::ProcessEvent(Func, &Parms);
}

}

