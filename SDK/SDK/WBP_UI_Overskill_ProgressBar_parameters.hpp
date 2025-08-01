﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Overskill_ProgressBar

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_UI_Overskill_ProgressBar.WBP_UI_Overskill_ProgressBar_C.ExecuteUbergraph_WBP_UI_Overskill_ProgressBar
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_Overskill_ProgressBar_C_ExecuteUbergraph_WBP_UI_Overskill_ProgressBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_Overskill_ProgressBar_C_ExecuteUbergraph_WBP_UI_Overskill_ProgressBar) == 0x000004, "Wrong alignment on WBP_UI_Overskill_ProgressBar_C_ExecuteUbergraph_WBP_UI_Overskill_ProgressBar");
static_assert(sizeof(WBP_UI_Overskill_ProgressBar_C_ExecuteUbergraph_WBP_UI_Overskill_ProgressBar) == 0x000008, "Wrong size on WBP_UI_Overskill_ProgressBar_C_ExecuteUbergraph_WBP_UI_Overskill_ProgressBar");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_ExecuteUbergraph_WBP_UI_Overskill_ProgressBar, EntryPoint) == 0x000000, "Member 'WBP_UI_Overskill_ProgressBar_C_ExecuteUbergraph_WBP_UI_Overskill_ProgressBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_ExecuteUbergraph_WBP_UI_Overskill_ProgressBar, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_UI_Overskill_ProgressBar_C_ExecuteUbergraph_WBP_UI_Overskill_ProgressBar::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_UI_Overskill_ProgressBar.WBP_UI_Overskill_ProgressBar_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_UI_Overskill_ProgressBar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_Overskill_ProgressBar_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UI_Overskill_ProgressBar_C_PreConstruct");
static_assert(sizeof(WBP_UI_Overskill_ProgressBar_C_PreConstruct) == 0x000001, "Wrong size on WBP_UI_Overskill_ProgressBar_C_PreConstruct");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UI_Overskill_ProgressBar_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_UI_Overskill_ProgressBar.WBP_UI_Overskill_ProgressBar_C.Set Progress
// 0x0070 (0x0070 - 0x0000)
struct WBP_UI_Overskill_ProgressBar_C_Set_Progress final
{
public:
	float                                         InXp;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InProgressPercent;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize;                  // 0x0024(0x0008)(NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize_1;                // 0x0030(0x0008)(NoDestructor)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize_2;                // 0x0038(0x0008)(NoDestructor)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                        K2Node_MakeStruct_SlateChildSize_3;                // 0x0044(0x0008)(NoDestructor)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;    // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2;    // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3;    // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Overskill_ProgressBar_C_Set_Progress) == 0x000008, "Wrong alignment on WBP_UI_Overskill_ProgressBar_C_Set_Progress");
static_assert(sizeof(WBP_UI_Overskill_ProgressBar_C_Set_Progress) == 0x000070, "Wrong size on WBP_UI_Overskill_ProgressBar_C_Set_Progress");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, InXp) == 0x000000, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::InXp' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, InProgressPercent) == 0x000004, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::InProgressPercent' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, K2Node_MakeStruct_SlateChildSize) == 0x000024, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::K2Node_MakeStruct_SlateChildSize' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00002C, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, K2Node_MakeStruct_SlateChildSize_1) == 0x000030, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::K2Node_MakeStruct_SlateChildSize_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, K2Node_MakeStruct_SlateChildSize_2) == 0x000038, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::K2Node_MakeStruct_SlateChildSize_2' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000040, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, K2Node_MakeStruct_SlateChildSize_3) == 0x000044, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::K2Node_MakeStruct_SlateChildSize_3' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000050, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1) == 0x000058, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2) == 0x000060, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UI_Overskill_ProgressBar_C_Set_Progress, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3) == 0x000068, "Member 'WBP_UI_Overskill_ProgressBar_C_Set_Progress::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3' has a wrong offset!");

}

