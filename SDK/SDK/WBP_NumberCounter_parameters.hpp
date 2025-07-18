﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NumberCounter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_NumberCounter.WBP_NumberCounter_C.ExecuteUbergraph_WBP_NumberCounter
// 0x0060 (0x0060 - 0x0000)
struct WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_Int64ToInt_ReturnValue_1;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0018(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_FTrunc64_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter) == 0x000008, "Wrong alignment on WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter");
static_assert(sizeof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter) == 0x000060, "Wrong size on WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter");
static_assert(offsetof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter, EntryPoint) == 0x000000, "Member 'WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter, CallFunc_Conv_Int64ToInt_ReturnValue) == 0x000008, "Member 'WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter::CallFunc_Conv_Int64ToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter, CallFunc_Conv_Int64ToInt_ReturnValue_1) == 0x00000C, "Member 'WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter::CallFunc_Conv_Int64ToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000010, "Member 'WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000014, "Member 'WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter, K2Node_Event_MyGeometry) == 0x000018, "Member 'WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter, K2Node_Event_InDeltaTime) == 0x000050, "Member 'WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter, CallFunc_FInterpTo_ReturnValue) == 0x000054, "Member 'WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter, CallFunc_FTrunc64_ReturnValue) == 0x000058, "Member 'WBP_NumberCounter_C_ExecuteUbergraph_WBP_NumberCounter::CallFunc_FTrunc64_ReturnValue' has a wrong offset!");

// Function WBP_NumberCounter.WBP_NumberCounter_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_NumberCounter_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NumberCounter_C_Tick) == 0x000004, "Wrong alignment on WBP_NumberCounter_C_Tick");
static_assert(sizeof(WBP_NumberCounter_C_Tick) == 0x00003C, "Wrong size on WBP_NumberCounter_C_Tick");
static_assert(offsetof(WBP_NumberCounter_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_NumberCounter_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_NumberCounter_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_NumberCounter.WBP_NumberCounter_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_NumberCounter_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_NumberCounter_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_NumberCounter_C_PreConstruct");
static_assert(sizeof(WBP_NumberCounter_C_PreConstruct) == 0x000001, "Wrong size on WBP_NumberCounter_C_PreConstruct");
static_assert(offsetof(WBP_NumberCounter_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_NumberCounter_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_NumberCounter.WBP_NumberCounter_C.RunUpNumber
// 0x0038 (0x0038 - 0x0000)
struct WBP_NumberCounter_C_RunUpNumber final
{
public:
	int64                                         StartingValue_0;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         GoalValue_0;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_Int64Int64_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Play2DSound_ReturnValue;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0014)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NumberCounter_C_RunUpNumber) == 0x000008, "Wrong alignment on WBP_NumberCounter_C_RunUpNumber");
static_assert(sizeof(WBP_NumberCounter_C_RunUpNumber) == 0x000038, "Wrong size on WBP_NumberCounter_C_RunUpNumber");
static_assert(offsetof(WBP_NumberCounter_C_RunUpNumber, StartingValue_0) == 0x000000, "Member 'WBP_NumberCounter_C_RunUpNumber::StartingValue_0' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_RunUpNumber, GoalValue_0) == 0x000008, "Member 'WBP_NumberCounter_C_RunUpNumber::GoalValue_0' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_RunUpNumber, CallFunc_NotEqual_Int64Int64_ReturnValue) == 0x000010, "Member 'WBP_NumberCounter_C_RunUpNumber::CallFunc_NotEqual_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_RunUpNumber, CallFunc_Play2DSound_ReturnValue) == 0x000014, "Member 'WBP_NumberCounter_C_RunUpNumber::CallFunc_Play2DSound_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_RunUpNumber, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'WBP_NumberCounter_C_RunUpNumber::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_RunUpNumber, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'WBP_NumberCounter_C_RunUpNumber::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_RunUpNumber, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'WBP_NumberCounter_C_RunUpNumber::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function WBP_NumberCounter.WBP_NumberCounter_C.OnRunUpEnded
// 0x0018 (0x0018 - 0x0000)
struct WBP_NumberCounter_C_OnRunUpEnded final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Play2DSound_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_NumberCounter_C_OnRunUpEnded) == 0x000008, "Wrong alignment on WBP_NumberCounter_C_OnRunUpEnded");
static_assert(sizeof(WBP_NumberCounter_C_OnRunUpEnded) == 0x000018, "Wrong size on WBP_NumberCounter_C_OnRunUpEnded");
static_assert(offsetof(WBP_NumberCounter_C_OnRunUpEnded, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_NumberCounter_C_OnRunUpEnded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_OnRunUpEnded, CallFunc_Play2DSound_ReturnValue) == 0x000004, "Member 'WBP_NumberCounter_C_OnRunUpEnded::CallFunc_Play2DSound_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_OnRunUpEnded, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WBP_NumberCounter_C_OnRunUpEnded::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_OnRunUpEnded, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'WBP_NumberCounter_C_OnRunUpEnded::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_NumberCounter.WBP_NumberCounter_C.SetDisplayValue
// 0x0108 (0x0108 - 0x0000)
struct WBP_NumberCounter_C_SetDisplayValue final
{
public:
	int64                                         value;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0008(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0060(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
};
static_assert(alignof(WBP_NumberCounter_C_SetDisplayValue) == 0x000008, "Wrong alignment on WBP_NumberCounter_C_SetDisplayValue");
static_assert(sizeof(WBP_NumberCounter_C_SetDisplayValue) == 0x000108, "Wrong size on WBP_NumberCounter_C_SetDisplayValue");
static_assert(offsetof(WBP_NumberCounter_C_SetDisplayValue, value) == 0x000000, "Member 'WBP_NumberCounter_C_SetDisplayValue::value' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_SetDisplayValue, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000008, "Member 'WBP_NumberCounter_C_SetDisplayValue::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_SetDisplayValue, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'WBP_NumberCounter_C_SetDisplayValue::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_SetDisplayValue, K2Node_MakeStruct_FormatArgumentData_1) == 0x000060, "Member 'WBP_NumberCounter_C_SetDisplayValue::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_SetDisplayValue, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000A0, "Member 'WBP_NumberCounter_C_SetDisplayValue::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_SetDisplayValue, K2Node_MakeArray_Array) == 0x0000E0, "Member 'WBP_NumberCounter_C_SetDisplayValue::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_NumberCounter_C_SetDisplayValue, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'WBP_NumberCounter_C_SetDisplayValue::CallFunc_Format_ReturnValue' has a wrong offset!");

}

