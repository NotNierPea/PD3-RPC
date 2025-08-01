﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_RequestOverkillWeapon

#include "Basic.hpp"

#include "WBP_UI_Widget_RequestOverkillWeapon_classes.hpp"
#include "WBP_UI_Widget_RequestOverkillWeapon_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_RequestOverkillWeapon_C::ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon");

	Params::WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_Widget_RequestOverkillWeapon_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.OnOverkillDataChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UWBP_UI_Widget_RequestOverkillWeapon_C::OnOverkillDataChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "OnOverkillDataChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.OnOverkillRequested
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UWBP_UI_Widget_RequestOverkillWeapon_C::OnOverkillRequested()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "OnOverkillRequested");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.OnOverkillDisabled
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UWBP_UI_Widget_RequestOverkillWeapon_C::OnOverkillDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "OnOverkillDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.OnOverkillProgressChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// float                                   NewProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_RequestOverkillWeapon_C::OnOverkillProgressChanged(float NewProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "OnOverkillProgressChanged");

	Params::WBP_UI_Widget_RequestOverkillWeapon_C_OnOverkillProgressChanged Parms{};

	Parms.NewProgress = NewProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.OnOverkillWeaponRequestNotReady
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UWBP_UI_Widget_RequestOverkillWeapon_C::OnOverkillWeaponRequestNotReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "OnOverkillWeaponRequestNotReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.OnOverkillWeaponRequestReady
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void UWBP_UI_Widget_RequestOverkillWeapon_C::OnOverkillWeaponRequestReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "OnOverkillWeaponRequestReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.StartLoopAnimReady
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Widget_RequestOverkillWeapon_C::StartLoopAnimReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "StartLoopAnimReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.SetProgressBarColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              StartColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              EndColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_RequestOverkillWeapon_C::SetProgressBarColors(const struct FLinearColor& StartColor, const struct FLinearColor& EndColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "SetProgressBarColors");

	Params::WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors Parms{};

	Parms.StartColor = std::move(StartColor);
	Parms.EndColor = std::move(EndColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.SetNotReady
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Widget_RequestOverkillWeapon_C::SetNotReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "SetNotReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.SequenceEvent__ENTRYPOINTWBP_UI_Widget_RequestOverkillWeapon_0
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Widget_RequestOverkillWeapon_C::SequenceEvent__ENTRYPOINTWBP_UI_Widget_RequestOverkillWeapon_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_RequestOverkillWeapon_C", "SequenceEvent__ENTRYPOINTWBP_UI_Widget_RequestOverkillWeapon_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

