﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_DEBUG_RoomStatus

#include "Basic.hpp"

#include "WBP_UI_DEBUG_RoomStatus_classes.hpp"
#include "WBP_UI_DEBUG_RoomStatus_parameters.hpp"


namespace SDK
{

// Function WBP_UI_DEBUG_RoomStatus.WBP_UI_DEBUG_RoomStatus_C.ExecuteUbergraph_WBP_UI_DEBUG_RoomStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_DEBUG_RoomStatus_C::ExecuteUbergraph_WBP_UI_DEBUG_RoomStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_DEBUG_RoomStatus_C", "ExecuteUbergraph_WBP_UI_DEBUG_RoomStatus");

	Params::WBP_UI_DEBUG_RoomStatus_C_ExecuteUbergraph_WBP_UI_DEBUG_RoomStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_DEBUG_RoomStatus.WBP_UI_DEBUG_RoomStatus_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_DEBUG_RoomStatus_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_DEBUG_RoomStatus_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_DEBUG_RoomStatus.WBP_UI_DEBUG_RoomStatus_C.OnRoomChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASBZRoomVolume*                   RoomVolume                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_DEBUG_RoomStatus_C::OnRoomChanged(class ASBZRoomVolume* RoomVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_DEBUG_RoomStatus_C", "OnRoomChanged");

	Params::WBP_UI_DEBUG_RoomStatus_C_OnRoomChanged Parms{};

	Parms.RoomVolume = RoomVolume;

	UObject::ProcessEvent(Func, &Parms);
}

}

