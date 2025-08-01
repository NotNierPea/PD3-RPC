﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventoryBaseData_Icon

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryBaseData_Icon.WBP_InventoryBaseData_Icon_C.ExecuteUbergraph_WBP_InventoryBaseData_Icon
// 0x0018 (0x0018 - 0x0000)
struct WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPaperSprite*                           K2Node_Event_OutLoadedSprite;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsLoading;                           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon) == 0x000008, "Wrong alignment on WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon");
static_assert(sizeof(WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon) == 0x000018, "Wrong size on WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon, EntryPoint) == 0x000000, "Member 'WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon, Temp_bool_Variable) == 0x000004, "Member 'WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon, Temp_byte_Variable) == 0x000005, "Member 'WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon, K2Node_Event_IsDesignTime) == 0x000007, "Member 'WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon, K2Node_Event_OutLoadedSprite) == 0x000008, "Member 'WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon::K2Node_Event_OutLoadedSprite' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon, K2Node_Event_bIsLoading) == 0x000010, "Member 'WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon::K2Node_Event_bIsLoading' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon, K2Node_Select_Default) == 0x000011, "Member 'WBP_InventoryBaseData_Icon_C_ExecuteUbergraph_WBP_InventoryBaseData_Icon::K2Node_Select_Default' has a wrong offset!");

// Function WBP_InventoryBaseData_Icon.WBP_InventoryBaseData_Icon_C.OnLoadingChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryBaseData_Icon_C_OnLoadingChanged final
{
public:
	bool                                          bIsLoading;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryBaseData_Icon_C_OnLoadingChanged) == 0x000001, "Wrong alignment on WBP_InventoryBaseData_Icon_C_OnLoadingChanged");
static_assert(sizeof(WBP_InventoryBaseData_Icon_C_OnLoadingChanged) == 0x000001, "Wrong size on WBP_InventoryBaseData_Icon_C_OnLoadingChanged");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_OnLoadingChanged, bIsLoading) == 0x000000, "Member 'WBP_InventoryBaseData_Icon_C_OnLoadingChanged::bIsLoading' has a wrong offset!");

// Function WBP_InventoryBaseData_Icon.WBP_InventoryBaseData_Icon_C.SpriteLoaded
// 0x0008 (0x0008 - 0x0000)
struct WBP_InventoryBaseData_Icon_C_SpriteLoaded final
{
public:
	class UPaperSprite*                           OutLoadedSprite;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryBaseData_Icon_C_SpriteLoaded) == 0x000008, "Wrong alignment on WBP_InventoryBaseData_Icon_C_SpriteLoaded");
static_assert(sizeof(WBP_InventoryBaseData_Icon_C_SpriteLoaded) == 0x000008, "Wrong size on WBP_InventoryBaseData_Icon_C_SpriteLoaded");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_SpriteLoaded, OutLoadedSprite) == 0x000000, "Member 'WBP_InventoryBaseData_Icon_C_SpriteLoaded::OutLoadedSprite' has a wrong offset!");

// Function WBP_InventoryBaseData_Icon.WBP_InventoryBaseData_Icon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryBaseData_Icon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryBaseData_Icon_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_InventoryBaseData_Icon_C_PreConstruct");
static_assert(sizeof(WBP_InventoryBaseData_Icon_C_PreConstruct) == 0x000001, "Wrong size on WBP_InventoryBaseData_Icon_C_PreConstruct");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_InventoryBaseData_Icon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_InventoryBaseData_Icon.WBP_InventoryBaseData_Icon_C.SetIcon
// 0x0070 (0x0070 - 0x0000)
struct WBP_InventoryBaseData_Icon_C_SetIcon final
{
public:
	class UPaperSprite*                           InSprite;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput; // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0048(0x0028)()
};
static_assert(alignof(WBP_InventoryBaseData_Icon_C_SetIcon) == 0x000008, "Wrong alignment on WBP_InventoryBaseData_Icon_C_SetIcon");
static_assert(sizeof(WBP_InventoryBaseData_Icon_C_SetIcon) == 0x000070, "Wrong size on WBP_InventoryBaseData_Icon_C_SetIcon");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_SetIcon, InSprite) == 0x000000, "Member 'WBP_InventoryBaseData_Icon_C_SetIcon::InSprite' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_SetIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_InventoryBaseData_Icon_C_SetIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_SetIcon, CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput) == 0x000010, "Member 'WBP_InventoryBaseData_Icon_C_SetIcon::CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_SetIcon, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'WBP_InventoryBaseData_Icon_C_SetIcon::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_InventoryBaseData_Icon_C_SetIcon, K2Node_MakeStruct_SlateColor_1) == 0x000048, "Member 'WBP_InventoryBaseData_Icon_C_SetIcon::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

