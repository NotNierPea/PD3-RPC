﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_DetectionWidgetContainer

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_UI_DetectionWidgetContainer.WBP_UI_DetectionWidgetContainer_C.ExecuteUbergraph_WBP_UI_DetectionWidgetContainer
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_DetectionWidgetContainer_C_ExecuteUbergraph_WBP_UI_DetectionWidgetContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bObserved;                            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_DetectionWidgetContainer_C_ExecuteUbergraph_WBP_UI_DetectionWidgetContainer) == 0x000004, "Wrong alignment on WBP_UI_DetectionWidgetContainer_C_ExecuteUbergraph_WBP_UI_DetectionWidgetContainer");
static_assert(sizeof(WBP_UI_DetectionWidgetContainer_C_ExecuteUbergraph_WBP_UI_DetectionWidgetContainer) == 0x000008, "Wrong size on WBP_UI_DetectionWidgetContainer_C_ExecuteUbergraph_WBP_UI_DetectionWidgetContainer");
static_assert(offsetof(WBP_UI_DetectionWidgetContainer_C_ExecuteUbergraph_WBP_UI_DetectionWidgetContainer, EntryPoint) == 0x000000, "Member 'WBP_UI_DetectionWidgetContainer_C_ExecuteUbergraph_WBP_UI_DetectionWidgetContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidgetContainer_C_ExecuteUbergraph_WBP_UI_DetectionWidgetContainer, K2Node_Event_bObserved) == 0x000004, "Member 'WBP_UI_DetectionWidgetContainer_C_ExecuteUbergraph_WBP_UI_DetectionWidgetContainer::K2Node_Event_bObserved' has a wrong offset!");

// Function WBP_UI_DetectionWidgetContainer.WBP_UI_DetectionWidgetContainer_C.OnObservedChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_UI_DetectionWidgetContainer_C_OnObservedChanged final
{
public:
	bool                                          bObserved;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_DetectionWidgetContainer_C_OnObservedChanged) == 0x000001, "Wrong alignment on WBP_UI_DetectionWidgetContainer_C_OnObservedChanged");
static_assert(sizeof(WBP_UI_DetectionWidgetContainer_C_OnObservedChanged) == 0x000001, "Wrong size on WBP_UI_DetectionWidgetContainer_C_OnObservedChanged");
static_assert(offsetof(WBP_UI_DetectionWidgetContainer_C_OnObservedChanged, bObserved) == 0x000000, "Member 'WBP_UI_DetectionWidgetContainer_C_OnObservedChanged::bObserved' has a wrong offset!");

}

