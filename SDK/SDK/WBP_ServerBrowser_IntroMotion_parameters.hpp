﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerBrowser_IntroMotion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_ServerBrowser_IntroMotion.WBP_ServerBrowser_IntroMotion_C.ExecuteUbergraph_WBP_ServerBrowser_IntroMotion
// 0x0138 (0x0138 - 0x0000)
struct WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Play2DSound_ReturnValue;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_1;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_2;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_3;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_4;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_5;                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_6;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_7;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_8;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_9;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_10;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Play2DSound_ReturnValue_11;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_GetTimeOfDay_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USBZGameUserSettings*                   CallFunc_Get_ReturnValue;                          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Days;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Hours;                      // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Minutes;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Seconds;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan_Milliseconds;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00B0(0x0040)(HasGetValueTypeHash)
	class USBZGameUserSettings*                   CallFunc_Get_ReturnValue_1;                        // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F8(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsPopupShown_ReturnValue;                 // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion) == 0x000008, "Wrong alignment on WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion");
static_assert(sizeof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion) == 0x000138, "Wrong size on WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, EntryPoint) == 0x000000, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue) == 0x000018, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_1) == 0x00001C, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_2) == 0x000020, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_3) == 0x000024, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_4) == 0x000028, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_5) == 0x00002C, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_6) == 0x000030, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_7) == 0x000034, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_8) == 0x000038, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_9) == 0x00003C, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_10) == 0x000040, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Play2DSound_ReturnValue_11) == 0x000044, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Play2DSound_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_GetTimeOfDay_ReturnValue) == 0x000048, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_GetTimeOfDay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Get_ReturnValue) == 0x000050, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_BreakTimespan_Days) == 0x000058, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_BreakTimespan_Days' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_BreakTimespan_Hours) == 0x00005C, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_BreakTimespan_Hours' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_BreakTimespan_Minutes) == 0x000060, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_BreakTimespan_Minutes' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_BreakTimespan_Seconds) == 0x000064, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_BreakTimespan_Seconds' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_BreakTimespan_Milliseconds) == 0x000068, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_BreakTimespan_Milliseconds' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B0, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Get_ReturnValue_1) == 0x0000F0, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, K2Node_MakeArray_Array) == 0x0000F8, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_IsPopupShown_ReturnValue) == 0x000108, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_IsPopupShown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_Format_ReturnValue) == 0x000110, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_SelectFloat_ReturnValue) == 0x000128, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion, CallFunc_PlayAnimation_ReturnValue) == 0x000130, "Member 'WBP_ServerBrowser_IntroMotion_C_ExecuteUbergraph_WBP_ServerBrowser_IntroMotion::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

