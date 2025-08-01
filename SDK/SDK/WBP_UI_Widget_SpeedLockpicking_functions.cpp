﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_SpeedLockpicking

#include "Basic.hpp"

#include "WBP_UI_Widget_SpeedLockpicking_classes.hpp"
#include "WBP_UI_Widget_SpeedLockpicking_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.ExecuteUbergraph_WBP_UI_Widget_SpeedLockpicking
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_SpeedLockpicking_C::ExecuteUbergraph_WBP_UI_Widget_SpeedLockpicking(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "ExecuteUbergraph_WBP_UI_Widget_SpeedLockpicking");

	Params::WBP_UI_Widget_SpeedLockpicking_C_ExecuteUbergraph_WBP_UI_Widget_SpeedLockpicking Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.OnMiniGameDifficulty
// (Event, Public, BlueprintEvent)
// Parameters:
// ESBZDifficulty                          HeistDifficulty                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   MiniGameDifficulty                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_SpeedLockpicking_C::OnMiniGameDifficulty(ESBZDifficulty HeistDifficulty, uint8 MiniGameDifficulty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "OnMiniGameDifficulty");

	Params::WBP_UI_Widget_SpeedLockpicking_C_OnMiniGameDifficulty Parms{};

	Parms.HeistDifficulty = HeistDifficulty;
	Parms.MiniGameDifficulty = MiniGameDifficulty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.OnOwningMiniGameComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class USBZMiniGameComponent*            MiniGameComponet                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_SpeedLockpicking_C::OnOwningMiniGameComponent(class USBZMiniGameComponent* MiniGameComponet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "OnOwningMiniGameComponent");

	Params::WBP_UI_Widget_SpeedLockpicking_C_OnOwningMiniGameComponent Parms{};

	Parms.MiniGameComponet = MiniGameComponet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.MiniGameStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EPD3MiniGameState                       NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_SpeedLockpicking_C::MiniGameStateChanged(EPD3MiniGameState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "MiniGameStateChanged");

	Params::WBP_UI_Widget_SpeedLockpicking_C_MiniGameStateChanged Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_Widget_SpeedLockpicking_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UWBP_UI_Widget_SpeedLockpicking_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Widget_SpeedLockpicking_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "PreConstruct");

	Params::WBP_UI_Widget_SpeedLockpicking_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_SpeedLockpicking_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "Tick");

	Params::WBP_UI_Widget_SpeedLockpicking_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.Finished_3FB5A0874C08917CE134F293DFF3047A
// (BlueprintCallable, BlueprintEvent)

void UWBP_UI_Widget_SpeedLockpicking_C::Finished_3FB5A0874C08917CE134F293DFF3047A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "Finished_3FB5A0874C08917CE134F293DFF3047A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.Finished_F4D5F5584BD701400053088D4049418B
// (BlueprintCallable, BlueprintEvent)

void UWBP_UI_Widget_SpeedLockpicking_C::Finished_F4D5F5584BD701400053088D4049418B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "Finished_F4D5F5584BD701400053088D4049418B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.Get_Image_InteractionGauge_1_Brush_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_UI_Widget_SpeedLockpicking_C::Get_Image_InteractionGauge_1_Brush_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "Get_Image_InteractionGauge_1_Brush_0");

	Params::WBP_UI_Widget_SpeedLockpicking_C_Get_Image_InteractionGauge_1_Brush_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.Get_Image_InteractionGauge_Brush_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_UI_Widget_SpeedLockpicking_C::Get_Image_InteractionGauge_Brush_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "Get_Image_InteractionGauge_Brush_0");

	Params::WBP_UI_Widget_SpeedLockpicking_C_Get_Image_InteractionGauge_Brush_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Widget_SpeedLockpicking_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "NewFunction_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_SpeedLockpicking.WBP_UI_Widget_SpeedLockpicking_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Widget_SpeedLockpicking_C::NewFunction_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_SpeedLockpicking_C", "NewFunction_1");

	UObject::ProcessEvent(Func, nullptr);
}

}

