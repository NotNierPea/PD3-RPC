﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_DetectionWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_UI_DetectionWidget.WBP_UI_DetectionWidget_C.ExecuteUbergraph_WBP_UI_DetectionWidget
// 0x0040 (0x0040 - 0x0000)
struct WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationLength_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDetectionValue_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_InDetectingActor;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDetectionValue;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget) == 0x000008, "Wrong alignment on WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget");
static_assert(sizeof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget) == 0x000040, "Wrong size on WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget");
static_assert(offsetof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget, EntryPoint) == 0x000000, "Member 'WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget, CallFunc_GetAnimationLength_ReturnValue) == 0x000004, "Member 'WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget::CallFunc_GetAnimationLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget, K2Node_Event_IsDesignTime) == 0x000008, "Member 'WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget, K2Node_Event_InDetectionValue_1) == 0x000018, "Member 'WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget::K2Node_Event_InDetectionValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget, K2Node_Event_InDetectingActor) == 0x000020, "Member 'WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget::K2Node_Event_InDetectingActor' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget, K2Node_Event_InDetectionValue) == 0x000028, "Member 'WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget::K2Node_Event_InDetectionValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget, CallFunc_Play2DSound_ReturnValue) == 0x00002C, "Member 'WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget::CallFunc_Play2DSound_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000038, "Member 'WBP_UI_DetectionWidget_C_ExecuteUbergraph_WBP_UI_DetectionWidget::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function WBP_UI_DetectionWidget.WBP_UI_DetectionWidget_C.OnNewDetector
// 0x0010 (0x0010 - 0x0000)
struct WBP_UI_DetectionWidget_C_OnNewDetector final
{
public:
	class AActor*                                 InDetectingActor;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InDetectionValue;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_DetectionWidget_C_OnNewDetector) == 0x000008, "Wrong alignment on WBP_UI_DetectionWidget_C_OnNewDetector");
static_assert(sizeof(WBP_UI_DetectionWidget_C_OnNewDetector) == 0x000010, "Wrong size on WBP_UI_DetectionWidget_C_OnNewDetector");
static_assert(offsetof(WBP_UI_DetectionWidget_C_OnNewDetector, InDetectingActor) == 0x000000, "Member 'WBP_UI_DetectionWidget_C_OnNewDetector::InDetectingActor' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_OnNewDetector, InDetectionValue) == 0x000008, "Member 'WBP_UI_DetectionWidget_C_OnNewDetector::InDetectionValue' has a wrong offset!");

// Function WBP_UI_DetectionWidget.WBP_UI_DetectionWidget_C.OnDetectionValueUpdated
// 0x0004 (0x0004 - 0x0000)
struct WBP_UI_DetectionWidget_C_OnDetectionValueUpdated final
{
public:
	float                                         InDetectionValue;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_DetectionWidget_C_OnDetectionValueUpdated) == 0x000004, "Wrong alignment on WBP_UI_DetectionWidget_C_OnDetectionValueUpdated");
static_assert(sizeof(WBP_UI_DetectionWidget_C_OnDetectionValueUpdated) == 0x000004, "Wrong size on WBP_UI_DetectionWidget_C_OnDetectionValueUpdated");
static_assert(offsetof(WBP_UI_DetectionWidget_C_OnDetectionValueUpdated, InDetectionValue) == 0x000000, "Member 'WBP_UI_DetectionWidget_C_OnDetectionValueUpdated::InDetectionValue' has a wrong offset!");

// Function WBP_UI_DetectionWidget.WBP_UI_DetectionWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_UI_DetectionWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_DetectionWidget_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UI_DetectionWidget_C_PreConstruct");
static_assert(sizeof(WBP_UI_DetectionWidget_C_PreConstruct) == 0x000001, "Wrong size on WBP_UI_DetectionWidget_C_PreConstruct");
static_assert(offsetof(WBP_UI_DetectionWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UI_DetectionWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_UI_DetectionWidget.WBP_UI_DetectionWidget_C.UpdateBarVisuals
// 0x001C (0x001C - 0x0000)
struct WBP_UI_DetectionWidget_C_UpdateBarVisuals final
{
public:
	float                                         InPercent;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewLocalVar_0;                                     // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_DetectionWidget_C_UpdateBarVisuals) == 0x000004, "Wrong alignment on WBP_UI_DetectionWidget_C_UpdateBarVisuals");
static_assert(sizeof(WBP_UI_DetectionWidget_C_UpdateBarVisuals) == 0x00001C, "Wrong size on WBP_UI_DetectionWidget_C_UpdateBarVisuals");
static_assert(offsetof(WBP_UI_DetectionWidget_C_UpdateBarVisuals, InPercent) == 0x000000, "Member 'WBP_UI_DetectionWidget_C_UpdateBarVisuals::InPercent' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_UpdateBarVisuals, NewLocalVar_0) == 0x000004, "Member 'WBP_UI_DetectionWidget_C_UpdateBarVisuals::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_UpdateBarVisuals, CallFunc_LinearColorLerp_ReturnValue) == 0x000008, "Member 'WBP_UI_DetectionWidget_C_UpdateBarVisuals::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_DetectionWidget_C_UpdateBarVisuals, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_UI_DetectionWidget_C_UpdateBarVisuals::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

