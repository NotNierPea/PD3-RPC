﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_ObjectiveContainer

#include "Basic.hpp"

#include "WBP_UI_Widget_ObjectiveContainer_classes.hpp"
#include "WBP_UI_Widget_ObjectiveContainer_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Widget_ObjectiveContainer.WBP_UI_Widget_ObjectiveContainer_C.ExecuteUbergraph_WBP_UI_Widget_ObjectiveContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_ObjectiveContainer_C::ExecuteUbergraph_WBP_UI_Widget_ObjectiveContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ObjectiveContainer_C", "ExecuteUbergraph_WBP_UI_Widget_ObjectiveContainer");

	Params::WBP_UI_Widget_ObjectiveContainer_C_ExecuteUbergraph_WBP_UI_Widget_ObjectiveContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_ObjectiveContainer.WBP_UI_Widget_ObjectiveContainer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Widget_ObjectiveContainer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ObjectiveContainer_C", "PreConstruct");

	Params::WBP_UI_Widget_ObjectiveContainer_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_ObjectiveContainer.WBP_UI_Widget_ObjectiveContainer_C.WidgetAnimationEvt_CloseAnimation_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UWBP_UI_Widget_ObjectiveContainer_C::WidgetAnimationEvt_CloseAnimation_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ObjectiveContainer_C", "WidgetAnimationEvt_CloseAnimation_K2Node_WidgetAnimationEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_ObjectiveContainer.WBP_UI_Widget_ObjectiveContainer_C.ObjectiveAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASBZObjective*                    Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_ObjectiveContainer_C::ObjectiveAdded(class ASBZObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ObjectiveContainer_C", "ObjectiveAdded");

	Params::WBP_UI_Widget_ObjectiveContainer_C_ObjectiveAdded Parms{};

	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_ObjectiveContainer.WBP_UI_Widget_ObjectiveContainer_C.ObjectiveRemove
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASBZObjective*                    Objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_ObjectiveContainer_C::ObjectiveRemove(class ASBZObjective* Objective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ObjectiveContainer_C", "ObjectiveRemove");

	Params::WBP_UI_Widget_ObjectiveContainer_C_ObjectiveRemove Parms{};

	Parms.Objective = Objective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_ObjectiveContainer.WBP_UI_Widget_ObjectiveContainer_C.WidgetAnimationEvt_OpenAnimation_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWBP_UI_Widget_ObjectiveContainer_C::WidgetAnimationEvt_OpenAnimation_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ObjectiveContainer_C", "WidgetAnimationEvt_OpenAnimation_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_ObjectiveContainer.WBP_UI_Widget_ObjectiveContainer_C.TryPlayAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Widget_ObjectiveContainer_C::TryPlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ObjectiveContainer_C", "TryPlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

