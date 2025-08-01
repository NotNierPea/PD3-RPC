﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_ModeSelect_ModeButton

#include "Basic.hpp"

#include "WBP_UI_ModeSelect_ModeButton_classes.hpp"
#include "WBP_UI_ModeSelect_ModeButton_parameters.hpp"


namespace SDK
{

// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.ExecuteUbergraph_WBP_UI_ModeSelect_ModeButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_ModeSelect_ModeButton_C::ExecuteUbergraph_WBP_UI_ModeSelect_ModeButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "ExecuteUbergraph_WBP_UI_ModeSelect_ModeButton");

	Params::WBP_UI_ModeSelect_ModeButton_C_ExecuteUbergraph_WBP_UI_ModeSelect_ModeButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.SetSpecialFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Focused                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_ModeSelect_ModeButton_C::SetSpecialFocus(bool Focused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "SetSpecialFocus");

	Params::WBP_UI_ModeSelect_ModeButton_C_SetSpecialFocus Parms{};

	Parms.Focused = Focused;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.ButtonFocusChanging
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInHasFocus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_ModeSelect_ModeButton_C::ButtonFocusChanging(bool bInHasFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "ButtonFocusChanging");

	Params::WBP_UI_ModeSelect_ModeButton_C_ButtonFocusChanging Parms{};

	Parms.bInHasFocus = bInHasFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.ButtonDisabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInIsDisabled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_ModeSelect_ModeButton_C::ButtonDisabledChanged(bool bInIsDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "ButtonDisabledChanged");

	Params::WBP_UI_ModeSelect_ModeButton_C_ButtonDisabledChanged Parms{};

	Parms.bInIsDisabled = bInIsDisabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_ModeSelect_ModeButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "PreConstruct");

	Params::WBP_UI_ModeSelect_ModeButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.ButtonAlternativeSelected
// (Event, Protected, BlueprintEvent)

void UWBP_UI_ModeSelect_ModeButton_C::ButtonAlternativeSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "ButtonAlternativeSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.ShowAdditionalInfo
// (BlueprintCallable, BlueprintEvent)

void UWBP_UI_ModeSelect_ModeButton_C::ShowAdditionalInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "ShowAdditionalInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_ModeSelect_ModeButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.ShowBlackAndWhite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_ModeSelect_ModeButton_C::ShowBlackAndWhite(bool InShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "ShowBlackAndWhite");

	Params::WBP_UI_ModeSelect_ModeButton_C_ShowBlackAndWhite Parms{};

	Parms.InShow = InShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.SetBetaMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_ModeSelect_ModeButton_C::SetBetaMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "SetBetaMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_ModeSelect_ModeButton.WBP_UI_ModeSelect_ModeButton_C.UpdateLockStateBasedOnAccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ButtonLockedState                     InLockedState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_ModeSelect_ModeButton_C::UpdateLockStateBasedOnAccess(E_ButtonLockedState InLockedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ModeSelect_ModeButton_C", "UpdateLockStateBasedOnAccess");

	Params::WBP_UI_ModeSelect_ModeButton_C_UpdateLockStateBasedOnAccess Parms{};

	Parms.InLockedState = InLockedState;

	UObject::ProcessEvent(Func, &Parms);
}

}

