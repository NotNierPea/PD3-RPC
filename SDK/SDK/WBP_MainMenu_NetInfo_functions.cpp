﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_NetInfo

#include "Basic.hpp"

#include "WBP_MainMenu_NetInfo_classes.hpp"
#include "WBP_MainMenu_NetInfo_parameters.hpp"


namespace SDK
{

// Function WBP_MainMenu_NetInfo.WBP_MainMenu_NetInfo_C.ExecuteUbergraph_WBP_MainMenu_NetInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_NetInfo_C::ExecuteUbergraph_WBP_MainMenu_NetInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NetInfo_C", "ExecuteUbergraph_WBP_MainMenu_NetInfo");

	Params::WBP_MainMenu_NetInfo_C_ExecuteUbergraph_WBP_MainMenu_NetInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_NetInfo.WBP_MainMenu_NetInfo_C.BP_OnServerRegionChanged
// (Event, Protected, BlueprintEvent)

void UWBP_MainMenu_NetInfo_C::BP_OnServerRegionChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_NetInfo_C", "BP_OnServerRegionChanged");

	UObject::ProcessEvent(Func, nullptr);
}

}

