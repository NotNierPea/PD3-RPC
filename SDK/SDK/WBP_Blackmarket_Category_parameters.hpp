﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Blackmarket_Category

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Blackmarket_Category.WBP_Blackmarket_Category_C.ExecuteUbergraph_WBP_Blackmarket_Category
// 0x0040 (0x0040 - 0x0000)
struct WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_UI_MainMenu_StoreItemButton_C*     CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_InCategoryName;                       // 0x0028(0x0018)(ConstParm)
};
static_assert(alignof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category) == 0x000008, "Wrong alignment on WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category");
static_assert(sizeof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category) == 0x000040, "Wrong size on WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category");
static_assert(offsetof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category, EntryPoint) == 0x000000, "Member 'WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category, Temp_int_Variable) == 0x000008, "Member 'WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category, CallFunc_Create_ReturnValue) == 0x000010, "Member 'WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000018, "Member 'WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category, CallFunc_AddChild_ReturnValue) == 0x000020, "Member 'WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category, K2Node_Event_InCategoryName) == 0x000028, "Member 'WBP_Blackmarket_Category_C_ExecuteUbergraph_WBP_Blackmarket_Category::K2Node_Event_InCategoryName' has a wrong offset!");

// Function WBP_Blackmarket_Category.WBP_Blackmarket_Category_C.SetStoreCategoryName
// 0x0018 (0x0018 - 0x0000)
struct WBP_Blackmarket_Category_C_SetStoreCategoryName final
{
public:
	class FText                                   InCategoryName;                                    // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Blackmarket_Category_C_SetStoreCategoryName) == 0x000008, "Wrong alignment on WBP_Blackmarket_Category_C_SetStoreCategoryName");
static_assert(sizeof(WBP_Blackmarket_Category_C_SetStoreCategoryName) == 0x000018, "Wrong size on WBP_Blackmarket_Category_C_SetStoreCategoryName");
static_assert(offsetof(WBP_Blackmarket_Category_C_SetStoreCategoryName, InCategoryName) == 0x000000, "Member 'WBP_Blackmarket_Category_C_SetStoreCategoryName::InCategoryName' has a wrong offset!");

// Function WBP_Blackmarket_Category.WBP_Blackmarket_Category_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Blackmarket_Category_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Blackmarket_Category_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Blackmarket_Category_C_PreConstruct");
static_assert(sizeof(WBP_Blackmarket_Category_C_PreConstruct) == 0x000001, "Wrong size on WBP_Blackmarket_Category_C_PreConstruct");
static_assert(offsetof(WBP_Blackmarket_Category_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Blackmarket_Category_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

