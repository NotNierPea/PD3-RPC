﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_InteractionMode

#include "Basic.hpp"

#include "Starbreeze_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_UI_InteractionMode.WBP_UI_InteractionMode_C.ExecuteUbergraph_WBP_UI_InteractionMode
// 0x0018 (0x0018 - 0x0000)
struct WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetGlobalColor_ReturnValue;               // 0x0008(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode) == 0x000004, "Wrong alignment on WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode");
static_assert(sizeof(WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode) == 0x000018, "Wrong size on WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode");
static_assert(offsetof(WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode, EntryPoint) == 0x000000, "Member 'WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode, CallFunc_GetGlobalColor_ReturnValue) == 0x000008, "Member 'WBP_UI_InteractionMode_C_ExecuteUbergraph_WBP_UI_InteractionMode::CallFunc_GetGlobalColor_ReturnValue' has a wrong offset!");

// Function WBP_UI_InteractionMode.WBP_UI_InteractionMode_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_UI_InteractionMode_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_InteractionMode_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UI_InteractionMode_C_PreConstruct");
static_assert(sizeof(WBP_UI_InteractionMode_C_PreConstruct) == 0x000001, "Wrong size on WBP_UI_InteractionMode_C_PreConstruct");
static_assert(offsetof(WBP_UI_InteractionMode_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UI_InteractionMode_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_UI_InteractionMode.WBP_UI_InteractionMode_C.SetNewInteractionModeData
// 0x0038 (0x0038 - 0x0000)
struct WBP_UI_InteractionMode_C_SetNewInteractionModeData final
{
public:
	struct FSBZInteractModeDisplayData            InInteractionModeData;                             // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bIsCasing;                                         // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBZStealthBranch                             CallFunc_StealthBranch_OutputPins;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPD3HeistState                                CallFunc_StealthBranch_ReturnValue;                // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27[0x1];                                       // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetGlobalColor_ReturnValue;               // 0x0028(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_InteractionMode_C_SetNewInteractionModeData) == 0x000008, "Wrong alignment on WBP_UI_InteractionMode_C_SetNewInteractionModeData");
static_assert(sizeof(WBP_UI_InteractionMode_C_SetNewInteractionModeData) == 0x000038, "Wrong size on WBP_UI_InteractionMode_C_SetNewInteractionModeData");
static_assert(offsetof(WBP_UI_InteractionMode_C_SetNewInteractionModeData, InInteractionModeData) == 0x000000, "Member 'WBP_UI_InteractionMode_C_SetNewInteractionModeData::InInteractionModeData' has a wrong offset!");
static_assert(offsetof(WBP_UI_InteractionMode_C_SetNewInteractionModeData, bIsCasing) == 0x000020, "Member 'WBP_UI_InteractionMode_C_SetNewInteractionModeData::bIsCasing' has a wrong offset!");
static_assert(offsetof(WBP_UI_InteractionMode_C_SetNewInteractionModeData, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'WBP_UI_InteractionMode_C_SetNewInteractionModeData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_InteractionMode_C_SetNewInteractionModeData, CallFunc_BooleanOR_ReturnValue) == 0x000022, "Member 'WBP_UI_InteractionMode_C_SetNewInteractionModeData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_InteractionMode_C_SetNewInteractionModeData, CallFunc_Not_PreBool_ReturnValue) == 0x000023, "Member 'WBP_UI_InteractionMode_C_SetNewInteractionModeData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_InteractionMode_C_SetNewInteractionModeData, CallFunc_StealthBranch_OutputPins) == 0x000024, "Member 'WBP_UI_InteractionMode_C_SetNewInteractionModeData::CallFunc_StealthBranch_OutputPins' has a wrong offset!");
static_assert(offsetof(WBP_UI_InteractionMode_C_SetNewInteractionModeData, CallFunc_StealthBranch_ReturnValue) == 0x000025, "Member 'WBP_UI_InteractionMode_C_SetNewInteractionModeData::CallFunc_StealthBranch_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_InteractionMode_C_SetNewInteractionModeData, K2Node_SwitchEnum_CmpSuccess) == 0x000026, "Member 'WBP_UI_InteractionMode_C_SetNewInteractionModeData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_UI_InteractionMode_C_SetNewInteractionModeData, CallFunc_GetGlobalColor_ReturnValue) == 0x000028, "Member 'WBP_UI_InteractionMode_C_SetNewInteractionModeData::CallFunc_GetGlobalColor_ReturnValue' has a wrong offset!");

// Function WBP_UI_InteractionMode.WBP_UI_InteractionMode_C.UpdateProgress
// 0x0004 (0x0004 - 0x0000)
struct WBP_UI_InteractionMode_C_UpdateProgress final
{
public:
	float                                         InNewProgress;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_InteractionMode_C_UpdateProgress) == 0x000004, "Wrong alignment on WBP_UI_InteractionMode_C_UpdateProgress");
static_assert(sizeof(WBP_UI_InteractionMode_C_UpdateProgress) == 0x000004, "Wrong size on WBP_UI_InteractionMode_C_UpdateProgress");
static_assert(offsetof(WBP_UI_InteractionMode_C_UpdateProgress, InNewProgress) == 0x000000, "Member 'WBP_UI_InteractionMode_C_UpdateProgress::InNewProgress' has a wrong offset!");

}

