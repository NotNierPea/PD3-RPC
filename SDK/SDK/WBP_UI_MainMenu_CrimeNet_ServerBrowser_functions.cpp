﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_MainMenu_CrimeNet_ServerBrowser

#include "Basic.hpp"

#include "WBP_UI_MainMenu_CrimeNet_ServerBrowser_classes.hpp"
#include "WBP_UI_MainMenu_CrimeNet_ServerBrowser_parameters.hpp"


namespace SDK
{

// Function WBP_UI_MainMenu_CrimeNet_ServerBrowser.WBP_UI_MainMenu_CrimeNet_ServerBrowser_C.ExecuteUbergraph_WBP_UI_MainMenu_CrimeNet_ServerBrowser
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_MainMenu_CrimeNet_ServerBrowser_C::ExecuteUbergraph_WBP_UI_MainMenu_CrimeNet_ServerBrowser(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_MainMenu_CrimeNet_ServerBrowser_C", "ExecuteUbergraph_WBP_UI_MainMenu_CrimeNet_ServerBrowser");

	Params::WBP_UI_MainMenu_CrimeNet_ServerBrowser_C_ExecuteUbergraph_WBP_UI_MainMenu_CrimeNet_ServerBrowser Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_MainMenu_CrimeNet_ServerBrowser.WBP_UI_MainMenu_CrimeNet_ServerBrowser_C.OnButtonFocusedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnabled_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_MainMenu_CrimeNet_ServerBrowser_C::OnButtonFocusedChanged(class USBZMenuButton* Button, bool bIsEnabled_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_MainMenu_CrimeNet_ServerBrowser_C", "OnButtonFocusedChanged");

	Params::WBP_UI_MainMenu_CrimeNet_ServerBrowser_C_OnButtonFocusedChanged Parms{};

	Parms.Button = Button;
	Parms.bIsEnabled_0 = bIsEnabled_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_MainMenu_CrimeNet_ServerBrowser.WBP_UI_MainMenu_CrimeNet_ServerBrowser_C.OnControlsReferenceClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InActionInput                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_MainMenu_CrimeNet_ServerBrowser_C::OnControlsReferenceClicked(class FName InActionInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_MainMenu_CrimeNet_ServerBrowser_C", "OnControlsReferenceClicked");

	Params::WBP_UI_MainMenu_CrimeNet_ServerBrowser_C_OnControlsReferenceClicked Parms{};

	Parms.InActionInput = InActionInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_MainMenu_CrimeNet_ServerBrowser.WBP_UI_MainMenu_CrimeNet_ServerBrowser_C.OnInviteFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBZOnlineCode                          ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_MainMenu_CrimeNet_ServerBrowser_C::OnInviteFinished(ESBZOnlineCode ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_MainMenu_CrimeNet_ServerBrowser_C", "OnInviteFinished");

	Params::WBP_UI_MainMenu_CrimeNet_ServerBrowser_C_OnInviteFinished Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_MainMenu_CrimeNet_ServerBrowser.WBP_UI_MainMenu_CrimeNet_ServerBrowser_C.OnJoinStarted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSBZOnlineSearchResult&    RemoteSessionInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_UI_MainMenu_CrimeNet_ServerBrowser_C::OnJoinStarted(const struct FSBZOnlineSearchResult& RemoteSessionInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_MainMenu_CrimeNet_ServerBrowser_C", "OnJoinStarted");

	Params::WBP_UI_MainMenu_CrimeNet_ServerBrowser_C_OnJoinStarted Parms{};

	Parms.RemoteSessionInfo = std::move(RemoteSessionInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_MainMenu_CrimeNet_ServerBrowser.WBP_UI_MainMenu_CrimeNet_ServerBrowser_C.ReloadButtons
// (BlueprintCallable, BlueprintEvent)

void UWBP_UI_MainMenu_CrimeNet_ServerBrowser_C::ReloadButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_MainMenu_CrimeNet_ServerBrowser_C", "ReloadButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_MainMenu_CrimeNet_ServerBrowser.WBP_UI_MainMenu_CrimeNet_ServerBrowser_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_MainMenu_CrimeNet_ServerBrowser_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_MainMenu_CrimeNet_ServerBrowser_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_MainMenu_CrimeNet_ServerBrowser.WBP_UI_MainMenu_CrimeNet_ServerBrowser_C.OnLostStackFocused
// (Event, Protected, BlueprintEvent)

void UWBP_UI_MainMenu_CrimeNet_ServerBrowser_C::OnLostStackFocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_MainMenu_CrimeNet_ServerBrowser_C", "OnLostStackFocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_MainMenu_CrimeNet_ServerBrowser.WBP_UI_MainMenu_CrimeNet_ServerBrowser_C.OnGainedStackFocused
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FName&                      PreviousValue                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_MainMenu_CrimeNet_ServerBrowser_C::OnGainedStackFocused(const class FName& PreviousValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_MainMenu_CrimeNet_ServerBrowser_C", "OnGainedStackFocused");

	Params::WBP_UI_MainMenu_CrimeNet_ServerBrowser_C_OnGainedStackFocused Parms{};

	Parms.PreviousValue = PreviousValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_MainMenu_CrimeNet_ServerBrowser.WBP_UI_MainMenu_CrimeNet_ServerBrowser_C.OnComplete_EB7A1BA74C1C1AA3C504FCA022A4D55A
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBZOnlineCode                          ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const TArray<struct FSBZOnlineSearchResult>&Results                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_UI_MainMenu_CrimeNet_ServerBrowser_C::OnComplete_EB7A1BA74C1C1AA3C504FCA022A4D55A(ESBZOnlineCode ErrorCode, const TArray<struct FSBZOnlineSearchResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_MainMenu_CrimeNet_ServerBrowser_C", "OnComplete_EB7A1BA74C1C1AA3C504FCA022A4D55A");

	Params::WBP_UI_MainMenu_CrimeNet_ServerBrowser_C_OnComplete_EB7A1BA74C1C1AA3C504FCA022A4D55A Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.Results = std::move(Results);

	UObject::ProcessEvent(Func, &Parms);
}

}

