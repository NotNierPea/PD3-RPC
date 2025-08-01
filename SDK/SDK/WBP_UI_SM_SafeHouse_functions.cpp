﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_SM_SafeHouse

#include "Basic.hpp"

#include "WBP_UI_SM_SafeHouse_classes.hpp"
#include "WBP_UI_SM_SafeHouse_parameters.hpp"


namespace SDK
{

// Function WBP_UI_SM_SafeHouse.WBP_UI_SM_SafeHouse_C.ExecuteUbergraph_WBP_UI_SM_SafeHouse
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_SM_SafeHouse_C::ExecuteUbergraph_WBP_UI_SM_SafeHouse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_SM_SafeHouse_C", "ExecuteUbergraph_WBP_UI_SM_SafeHouse");

	Params::WBP_UI_SM_SafeHouse_C_ExecuteUbergraph_WBP_UI_SM_SafeHouse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_SM_SafeHouse.WBP_UI_SM_SafeHouse_C.OnInGameMenuInput
// (BlueprintCallable, BlueprintEvent)

void UWBP_UI_SM_SafeHouse_C::OnInGameMenuInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_SM_SafeHouse_C", "OnInGameMenuInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_SM_SafeHouse.WBP_UI_SM_SafeHouse_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_SM_SafeHouse_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_SM_SafeHouse_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}

