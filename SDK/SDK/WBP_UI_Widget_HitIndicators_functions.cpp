﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_HitIndicators

#include "Basic.hpp"

#include "WBP_UI_Widget_HitIndicators_classes.hpp"
#include "WBP_UI_Widget_HitIndicators_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Widget_HitIndicators.WBP_UI_Widget_HitIndicators_C.UpdateVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           ImageWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   deltatime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                                  NewOpacity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_HitIndicators_C::UpdateVisibility(class UImage* ImageWidget, float deltatime, float* NewOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_HitIndicators_C", "UpdateVisibility");

	Params::WBP_UI_Widget_HitIndicators_C_UpdateVisibility Parms{};

	Parms.ImageWidget = ImageWidget;
	Parms.deltatime = deltatime;

	UObject::ProcessEvent(Func, &Parms);

	if (NewOpacity != nullptr)
		*NewOpacity = Parms.NewOpacity;
}


// Function WBP_UI_Widget_HitIndicators.WBP_UI_Widget_HitIndicators_C.RotateToActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_HitIndicators_C::RotateToActor(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_HitIndicators_C", "RotateToActor");

	Params::WBP_UI_Widget_HitIndicators_C_RotateToActor Parms{};

	Parms.InActor = InActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_HitIndicators.WBP_UI_Widget_HitIndicators_C.SetIndicatorScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_HitIndicators_C::SetIndicatorScale(float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_HitIndicators_C", "SetIndicatorScale");

	Params::WBP_UI_Widget_HitIndicators_C_SetIndicatorScale Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}

}

