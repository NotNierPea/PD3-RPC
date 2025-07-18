﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_RoomStatus

#include "Basic.hpp"

#include "WBP_UI_Widget_RoomStatus_classes.hpp"
#include "WBP_UI_Widget_RoomStatus_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Widget_RoomStatus.WBP_UI_Widget_RoomStatus_C.ExecuteUbergraph_WBP_UI_Widget_RoomStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_RoomStatus_C::ExecuteUbergraph_WBP_UI_Widget_RoomStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RoomStatus_C", "ExecuteUbergraph_WBP_UI_Widget_RoomStatus");

	Params::WBP_UI_Widget_RoomStatus_C_ExecuteUbergraph_WBP_UI_Widget_RoomStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_RoomStatus.WBP_UI_Widget_RoomStatus_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Widget_RoomStatus_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RoomStatus_C", "PreConstruct");

	Params::WBP_UI_Widget_RoomStatus_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_RoomStatus.WBP_UI_Widget_RoomStatus_C.OnHeistGoneLoud
// (Event, Protected, BlueprintEvent)

void UWBP_UI_Widget_RoomStatus_C::OnHeistGoneLoud()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RoomStatus_C", "OnHeistGoneLoud");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_RoomStatus.WBP_UI_Widget_RoomStatus_C.OnRoomTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESBZRoomType                            InRoomType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_RoomStatus_C::OnRoomTypeChanged(ESBZRoomType InRoomType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RoomStatus_C", "OnRoomTypeChanged");

	Params::WBP_UI_Widget_RoomStatus_C_OnRoomTypeChanged Parms{};

	Parms.InRoomType = InRoomType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_RoomStatus.WBP_UI_Widget_RoomStatus_C.OnNoRoomData
// (Event, Protected, BlueprintEvent)

void UWBP_UI_Widget_RoomStatus_C::OnNoRoomData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RoomStatus_C", "OnNoRoomData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_RoomStatus.WBP_UI_Widget_RoomStatus_C.OnRoomChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASBZRoomVolume*                   RoomVolume                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_RoomStatus_C::OnRoomChanged(class ASBZRoomVolume* RoomVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RoomStatus_C", "OnRoomChanged");

	Params::WBP_UI_Widget_RoomStatus_C_OnRoomChanged Parms{};

	Parms.RoomVolume = RoomVolume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_RoomStatus.WBP_UI_Widget_RoomStatus_C.GetColorForState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBZRoomType                            RoomType_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor*                    RoomTypeColor                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_RoomStatus_C::GetColorForState(ESBZRoomType RoomType_0, struct FLinearColor* RoomTypeColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RoomStatus_C", "GetColorForState");

	Params::WBP_UI_Widget_RoomStatus_C_GetColorForState Parms{};

	Parms.RoomType_0 = RoomType_0;

	UObject::ProcessEvent(Func, &Parms);

	if (RoomTypeColor != nullptr)
		*RoomTypeColor = std::move(Parms.RoomTypeColor);
}


// Function WBP_UI_Widget_RoomStatus.WBP_UI_Widget_RoomStatus_C.SetRoomTypeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBZRoomType                            RoomType_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_RoomStatus_C::SetRoomTypeText(ESBZRoomType RoomType_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RoomStatus_C", "SetRoomTypeText");

	Params::WBP_UI_Widget_RoomStatus_C_SetRoomTypeText Parms{};

	Parms.RoomType_0 = RoomType_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_RoomStatus.WBP_UI_Widget_RoomStatus_C.SetRoomName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      InRoomName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_UI_Widget_RoomStatus_C::SetRoomName(const class FText& InRoomName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RoomStatus_C", "SetRoomName");

	Params::WBP_UI_Widget_RoomStatus_C_SetRoomName Parms{};

	Parms.InRoomName = std::move(InRoomName);

	UObject::ProcessEvent(Func, &Parms);
}

}

