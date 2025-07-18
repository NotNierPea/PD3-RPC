﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_DetectionWidgetContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_DetectionWidgetContainer.WBP_UI_DetectionWidgetContainer_C
// 0x0010 (0x02F0 - 0x02E0)
class UWBP_UI_DetectionWidgetContainer_C final : public UPD3DetectionMeterContainer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         CollapseDelay;                                     // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_DetectionWidgetContainer(int32 EntryPoint);
	void OnObservedChanged(bool bObserved);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_DetectionWidgetContainer_C">();
	}
	static class UWBP_UI_DetectionWidgetContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_DetectionWidgetContainer_C>();
	}
};
static_assert(alignof(UWBP_UI_DetectionWidgetContainer_C) == 0x000008, "Wrong alignment on UWBP_UI_DetectionWidgetContainer_C");
static_assert(sizeof(UWBP_UI_DetectionWidgetContainer_C) == 0x0002F0, "Wrong size on UWBP_UI_DetectionWidgetContainer_C");
static_assert(offsetof(UWBP_UI_DetectionWidgetContainer_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_UI_DetectionWidgetContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_DetectionWidgetContainer_C, CollapseDelay) == 0x0002E8, "Member 'UWBP_UI_DetectionWidgetContainer_C::CollapseDelay' has a wrong offset!");

}

