﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Inventory_ItemDescription_StatModule

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_UI_Inventory_ItemDescription_StatModule.WBP_UI_Inventory_ItemDescription_StatModule_C.ExecuteUbergraph_WBP_UI_Inventory_ItemDescription_StatModule
// 0x0004 (0x0004 - 0x0000)
struct WBP_UI_Inventory_ItemDescription_StatModule_C_ExecuteUbergraph_WBP_UI_Inventory_ItemDescription_StatModule final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Inventory_ItemDescription_StatModule_C_ExecuteUbergraph_WBP_UI_Inventory_ItemDescription_StatModule) == 0x000004, "Wrong alignment on WBP_UI_Inventory_ItemDescription_StatModule_C_ExecuteUbergraph_WBP_UI_Inventory_ItemDescription_StatModule");
static_assert(sizeof(WBP_UI_Inventory_ItemDescription_StatModule_C_ExecuteUbergraph_WBP_UI_Inventory_ItemDescription_StatModule) == 0x000004, "Wrong size on WBP_UI_Inventory_ItemDescription_StatModule_C_ExecuteUbergraph_WBP_UI_Inventory_ItemDescription_StatModule");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_ExecuteUbergraph_WBP_UI_Inventory_ItemDescription_StatModule, EntryPoint) == 0x000000, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_ExecuteUbergraph_WBP_UI_Inventory_ItemDescription_StatModule::EntryPoint' has a wrong offset!");

// Function WBP_UI_Inventory_ItemDescription_StatModule.WBP_UI_Inventory_ItemDescription_StatModule_C.SetStat
// 0x0070 (0x0070 - 0x0000)
struct WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat final
{
public:
	float                                         BaseValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Addition;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   StatName;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         AddStat;                                           // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseStat;                                          // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x0040(0x0018)()
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat) == 0x000008, "Wrong alignment on WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat");
static_assert(sizeof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat) == 0x000070, "Wrong size on WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, BaseValue) == 0x000000, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::BaseValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, Addition) == 0x000004, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::Addition' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, StatName) == 0x000008, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::StatName' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, AddStat) == 0x000020, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::AddStat' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, BaseStat) == 0x000024, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::BaseStat' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, CallFunc_Conv_FloatToText_ReturnValue) == 0x000028, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x000040, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000058, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00005C, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, CallFunc_EqualEqual_FloatFloat_ReturnValue_1) == 0x000060, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::CallFunc_EqualEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, CallFunc_Add_FloatFloat_ReturnValue) == 0x000064, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000068, "Member 'WBP_UI_Inventory_ItemDescription_StatModule_C_SetStat::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");

}

