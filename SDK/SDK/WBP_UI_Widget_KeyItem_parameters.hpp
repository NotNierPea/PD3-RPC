﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_KeyItem

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_UI_Widget_KeyItem.WBP_UI_Widget_KeyItem_C.ExecuteUbergraph_WBP_UI_Widget_KeyItem
// 0x0028 (0x0028 - 0x0000)
struct WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InKeyItemCount;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZKeyItemData*                        K2Node_Event_InKeyItemData;                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_InitialCount;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput; // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
};
static_assert(alignof(WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem) == 0x000008, "Wrong alignment on WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem");
static_assert(sizeof(WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem) == 0x000028, "Wrong size on WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem, EntryPoint) == 0x000000, "Member 'WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem, K2Node_Event_InKeyItemCount) == 0x000004, "Member 'WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem::K2Node_Event_InKeyItemCount' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem, K2Node_Event_InKeyItemData) == 0x000008, "Member 'WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem::K2Node_Event_InKeyItemData' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem, K2Node_Event_InitialCount) == 0x000010, "Member 'WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem::K2Node_Event_InitialCount' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem, CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput) == 0x000018, "Member 'WBP_UI_Widget_KeyItem_C_ExecuteUbergraph_WBP_UI_Widget_KeyItem::CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput' has a wrong offset!");

// Function WBP_UI_Widget_KeyItem.WBP_UI_Widget_KeyItem_C.OnKeyItemCountChanged
// 0x0004 (0x0004 - 0x0000)
struct WBP_UI_Widget_KeyItem_C_OnKeyItemCountChanged final
{
public:
	int32                                         InKeyItemCount;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Widget_KeyItem_C_OnKeyItemCountChanged) == 0x000004, "Wrong alignment on WBP_UI_Widget_KeyItem_C_OnKeyItemCountChanged");
static_assert(sizeof(WBP_UI_Widget_KeyItem_C_OnKeyItemCountChanged) == 0x000004, "Wrong size on WBP_UI_Widget_KeyItem_C_OnKeyItemCountChanged");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_OnKeyItemCountChanged, InKeyItemCount) == 0x000000, "Member 'WBP_UI_Widget_KeyItem_C_OnKeyItemCountChanged::InKeyItemCount' has a wrong offset!");

// Function WBP_UI_Widget_KeyItem.WBP_UI_Widget_KeyItem_C.OnKeyItemPickedUp
// 0x0010 (0x0010 - 0x0000)
struct WBP_UI_Widget_KeyItem_C_OnKeyItemPickedUp final
{
public:
	class USBZKeyItemData*                        InKeyItemData;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InitialCount;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Widget_KeyItem_C_OnKeyItemPickedUp) == 0x000008, "Wrong alignment on WBP_UI_Widget_KeyItem_C_OnKeyItemPickedUp");
static_assert(sizeof(WBP_UI_Widget_KeyItem_C_OnKeyItemPickedUp) == 0x000010, "Wrong size on WBP_UI_Widget_KeyItem_C_OnKeyItemPickedUp");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_OnKeyItemPickedUp, InKeyItemData) == 0x000000, "Member 'WBP_UI_Widget_KeyItem_C_OnKeyItemPickedUp::InKeyItemData' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_OnKeyItemPickedUp, InitialCount) == 0x000008, "Member 'WBP_UI_Widget_KeyItem_C_OnKeyItemPickedUp::InitialCount' has a wrong offset!");

// Function WBP_UI_Widget_KeyItem.WBP_UI_Widget_KeyItem_C.UpdateStackCount
// 0x0038 (0x0038 - 0x0000)
struct WBP_UI_Widget_KeyItem_C_UpdateStackCount final
{
public:
	int32                                         InStackCount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Widget_KeyItem_C_UpdateStackCount) == 0x000008, "Wrong alignment on WBP_UI_Widget_KeyItem_C_UpdateStackCount");
static_assert(sizeof(WBP_UI_Widget_KeyItem_C_UpdateStackCount) == 0x000038, "Wrong size on WBP_UI_Widget_KeyItem_C_UpdateStackCount");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_UpdateStackCount, InStackCount) == 0x000000, "Member 'WBP_UI_Widget_KeyItem_C_UpdateStackCount::InStackCount' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_UpdateStackCount, Temp_byte_Variable) == 0x000004, "Member 'WBP_UI_Widget_KeyItem_C_UpdateStackCount::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_UpdateStackCount, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_UI_Widget_KeyItem_C_UpdateStackCount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_UpdateStackCount, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'WBP_UI_Widget_KeyItem_C_UpdateStackCount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_UpdateStackCount, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000021, "Member 'WBP_UI_Widget_KeyItem_C_UpdateStackCount::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_UpdateStackCount, Temp_byte_Variable_1) == 0x000022, "Member 'WBP_UI_Widget_KeyItem_C_UpdateStackCount::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_UpdateStackCount, Temp_bool_Variable) == 0x000023, "Member 'WBP_UI_Widget_KeyItem_C_UpdateStackCount::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_UpdateStackCount, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'WBP_UI_Widget_KeyItem_C_UpdateStackCount::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_KeyItem_C_UpdateStackCount, K2Node_Select_Default) == 0x000030, "Member 'WBP_UI_Widget_KeyItem_C_UpdateStackCount::K2Node_Select_Default' has a wrong offset!");

}

