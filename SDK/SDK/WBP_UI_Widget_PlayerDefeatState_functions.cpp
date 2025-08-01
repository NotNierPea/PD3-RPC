﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_PlayerDefeatState

#include "Basic.hpp"

#include "WBP_UI_Widget_PlayerDefeatState_classes.hpp"
#include "WBP_UI_Widget_PlayerDefeatState_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Widget_PlayerDefeatState.WBP_UI_Widget_PlayerDefeatState_C.ExecuteUbergraph_WBP_UI_Widget_PlayerDefeatState
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_PlayerDefeatState_C::ExecuteUbergraph_WBP_UI_Widget_PlayerDefeatState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_PlayerDefeatState_C", "ExecuteUbergraph_WBP_UI_Widget_PlayerDefeatState");

	Params::WBP_UI_Widget_PlayerDefeatState_C_ExecuteUbergraph_WBP_UI_Widget_PlayerDefeatState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_PlayerDefeatState.WBP_UI_Widget_PlayerDefeatState_C.OnDefeatStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPD3DefeatState                         OldState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPD3DefeatState                         NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_PlayerDefeatState_C::OnDefeatStateChanged(EPD3DefeatState OldState, EPD3DefeatState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_PlayerDefeatState_C", "OnDefeatStateChanged");

	Params::WBP_UI_Widget_PlayerDefeatState_C_OnDefeatStateChanged Parms{};

	Parms.OldState = OldState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_PlayerDefeatState.WBP_UI_Widget_PlayerDefeatState_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Widget_PlayerDefeatState_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_PlayerDefeatState_C", "PreConstruct");

	Params::WBP_UI_Widget_PlayerDefeatState_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

