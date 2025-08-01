﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Inventory_Item_Button

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Inventory_Item_Button.WBP_Inventory_Item_Button_C.ExecuteUbergraph_WBP_Inventory_Item_Button
// 0x0060 (0x0060 - 0x0000)
struct WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInHasFocus;                          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBZEquippablePartDataAsset*      K2Node_CustomEvent_NewParam;                       // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_OutDisplayName;            // 0x0018(0x0018)()
	bool                                          CallFunc_GetDisplayName_OutHasText;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           K2Node_DynamicCast_AsPaper_Sprite;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput; // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
};
static_assert(alignof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button) == 0x000008, "Wrong alignment on WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button");
static_assert(sizeof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button) == 0x000060, "Wrong size on WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, EntryPoint) == 0x000000, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, Temp_byte_Variable) == 0x000004, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, Temp_byte_Variable_1) == 0x000005, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, K2Node_Event_bInHasFocus) == 0x000006, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::K2Node_Event_bInHasFocus' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, K2Node_CustomEvent_NewParam) == 0x000008, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::K2Node_CustomEvent_NewParam' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, CallFunc_GetDisplayName_OutDisplayName) == 0x000018, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::CallFunc_GetDisplayName_OutDisplayName' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, CallFunc_GetDisplayName_OutHasText) == 0x000030, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::CallFunc_GetDisplayName_OutHasText' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000038, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, K2Node_DynamicCast_AsPaper_Sprite) == 0x000040, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::K2Node_DynamicCast_AsPaper_Sprite' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000049, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, Temp_bool_Variable) == 0x00004A, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, K2Node_Select_Default) == 0x00004B, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button, CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput) == 0x000050, "Member 'WBP_Inventory_Item_Button_C_ExecuteUbergraph_WBP_Inventory_Item_Button::CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput' has a wrong offset!");

// Function WBP_Inventory_Item_Button.WBP_Inventory_Item_Button_C.SetupData
// 0x0008 (0x0008 - 0x0000)
struct WBP_Inventory_Item_Button_C_SetupData final
{
public:
	const class USBZEquippablePartDataAsset*      NewParam;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Inventory_Item_Button_C_SetupData) == 0x000008, "Wrong alignment on WBP_Inventory_Item_Button_C_SetupData");
static_assert(sizeof(WBP_Inventory_Item_Button_C_SetupData) == 0x000008, "Wrong size on WBP_Inventory_Item_Button_C_SetupData");
static_assert(offsetof(WBP_Inventory_Item_Button_C_SetupData, NewParam) == 0x000000, "Member 'WBP_Inventory_Item_Button_C_SetupData::NewParam' has a wrong offset!");

// Function WBP_Inventory_Item_Button.WBP_Inventory_Item_Button_C.ButtonFocusedChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_Inventory_Item_Button_C_ButtonFocusedChanged final
{
public:
	bool                                          bInHasFocus;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Inventory_Item_Button_C_ButtonFocusedChanged) == 0x000001, "Wrong alignment on WBP_Inventory_Item_Button_C_ButtonFocusedChanged");
static_assert(sizeof(WBP_Inventory_Item_Button_C_ButtonFocusedChanged) == 0x000001, "Wrong size on WBP_Inventory_Item_Button_C_ButtonFocusedChanged");
static_assert(offsetof(WBP_Inventory_Item_Button_C_ButtonFocusedChanged, bInHasFocus) == 0x000000, "Member 'WBP_Inventory_Item_Button_C_ButtonFocusedChanged::bInHasFocus' has a wrong offset!");

}

