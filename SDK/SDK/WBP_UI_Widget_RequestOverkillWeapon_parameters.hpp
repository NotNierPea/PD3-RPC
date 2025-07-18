﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_RequestOverkillWeapon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Starbreeze_structs.hpp"


namespace SDK::Params
{

// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon
// 0x0090 (0x0090 - 0x0000)
struct WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_NewProgress;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
	int32                                         CallFunc_Play2DSound_ReturnValue;                  // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZStealthBranch                             CallFunc_StealthBranch_OutputPins;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPD3HeistState                                CallFunc_StealthBranch_ReturnValue;                // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67[0x1];                                       // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0078(0x0010)(ConstParm, ReferenceParm)
	ESBZPlayDialogResult                          CallFunc_PlayDialogLocally_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon) == 0x000008, "Wrong alignment on WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon");
static_assert(sizeof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon) == 0x000090, "Wrong size on WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, EntryPoint) == 0x000000, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, K2Node_Event_NewProgress) == 0x000004, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::K2Node_Event_NewProgress' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, CallFunc_Play2DSound_ReturnValue) == 0x000060, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::CallFunc_Play2DSound_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, CallFunc_StealthBranch_OutputPins) == 0x000064, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::CallFunc_StealthBranch_OutputPins' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, CallFunc_StealthBranch_ReturnValue) == 0x000065, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::CallFunc_StealthBranch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, K2Node_SwitchEnum_CmpSuccess) == 0x000066, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x000068, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, Temp_object_Variable) == 0x000078, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon, CallFunc_PlayDialogLocally_ReturnValue) == 0x000088, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_ExecuteUbergraph_WBP_UI_Widget_RequestOverkillWeapon::CallFunc_PlayDialogLocally_ReturnValue' has a wrong offset!");

// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.OnOverkillProgressChanged
// 0x0004 (0x0004 - 0x0000)
struct WBP_UI_Widget_RequestOverkillWeapon_C_OnOverkillProgressChanged final
{
public:
	float                                         NewProgress;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Widget_RequestOverkillWeapon_C_OnOverkillProgressChanged) == 0x000004, "Wrong alignment on WBP_UI_Widget_RequestOverkillWeapon_C_OnOverkillProgressChanged");
static_assert(sizeof(WBP_UI_Widget_RequestOverkillWeapon_C_OnOverkillProgressChanged) == 0x000004, "Wrong size on WBP_UI_Widget_RequestOverkillWeapon_C_OnOverkillProgressChanged");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_OnOverkillProgressChanged, NewProgress) == 0x000000, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_OnOverkillProgressChanged::NewProgress' has a wrong offset!");

// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.StartLoopAnimReady
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_Widget_RequestOverkillWeapon_C_StartLoopAnimReady final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Widget_RequestOverkillWeapon_C_StartLoopAnimReady) == 0x000008, "Wrong alignment on WBP_UI_Widget_RequestOverkillWeapon_C_StartLoopAnimReady");
static_assert(sizeof(WBP_UI_Widget_RequestOverkillWeapon_C_StartLoopAnimReady) == 0x000008, "Wrong size on WBP_UI_Widget_RequestOverkillWeapon_C_StartLoopAnimReady");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_StartLoopAnimReady, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x000000, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_StartLoopAnimReady::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");

// Function WBP_UI_Widget_RequestOverkillWeapon.WBP_UI_Widget_RequestOverkillWeapon_C.SetProgressBarColors
// 0x0028 (0x0028 - 0x0000)
struct WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors final
{
public:
	struct FLinearColor                           StartColor;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EndColor;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors) == 0x000008, "Wrong alignment on WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors");
static_assert(sizeof(WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors) == 0x000028, "Wrong size on WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors, StartColor) == 0x000000, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors::StartColor' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors, EndColor) == 0x000010, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors::EndColor' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000020, "Member 'WBP_UI_Widget_RequestOverkillWeapon_C_SetProgressBarColors::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}

