﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SecondaryButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.ExecuteUbergraph_WBP_SecondaryButton
// 0x0048 (0x0048 - 0x0000)
struct WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInHasFocus;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInIsHovered;                         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInIsDisabled;                        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton) == 0x000008, "Wrong alignment on WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton");
static_assert(sizeof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton) == 0x000048, "Wrong size on WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, EntryPoint) == 0x000000, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, Temp_object_Variable) == 0x000008, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, K2Node_Event_bInHasFocus) == 0x000010, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::K2Node_Event_bInHasFocus' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, K2Node_Event_bInIsHovered) == 0x000011, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::K2Node_Event_bInIsHovered' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, K2Node_Event_IsDesignTime) == 0x000012, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, K2Node_Event_bInIsDisabled) == 0x000013, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::K2Node_Event_bInIsDisabled' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, Temp_object_Variable_1) == 0x000018, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, Temp_bool_Variable) == 0x000020, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, K2Node_Select_Default) == 0x000028, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, CallFunc_BreakVector2D_X) == 0x000030, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, CallFunc_BreakVector2D_Y) == 0x000034, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton, CallFunc_SelectColor_ReturnValue) == 0x000038, "Member 'WBP_SecondaryButton_C_ExecuteUbergraph_WBP_SecondaryButton::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.ButtonDisabledChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_SecondaryButton_C_ButtonDisabledChanged final
{
public:
	bool                                          bInIsDisabled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SecondaryButton_C_ButtonDisabledChanged) == 0x000001, "Wrong alignment on WBP_SecondaryButton_C_ButtonDisabledChanged");
static_assert(sizeof(WBP_SecondaryButton_C_ButtonDisabledChanged) == 0x000001, "Wrong size on WBP_SecondaryButton_C_ButtonDisabledChanged");
static_assert(offsetof(WBP_SecondaryButton_C_ButtonDisabledChanged, bInIsDisabled) == 0x000000, "Member 'WBP_SecondaryButton_C_ButtonDisabledChanged::bInIsDisabled' has a wrong offset!");

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SecondaryButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SecondaryButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SecondaryButton_C_PreConstruct");
static_assert(sizeof(WBP_SecondaryButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_SecondaryButton_C_PreConstruct");
static_assert(offsetof(WBP_SecondaryButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SecondaryButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.ButtonHoveredChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_SecondaryButton_C_ButtonHoveredChanged final
{
public:
	bool                                          bInIsHovered;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SecondaryButton_C_ButtonHoveredChanged) == 0x000001, "Wrong alignment on WBP_SecondaryButton_C_ButtonHoveredChanged");
static_assert(sizeof(WBP_SecondaryButton_C_ButtonHoveredChanged) == 0x000001, "Wrong size on WBP_SecondaryButton_C_ButtonHoveredChanged");
static_assert(offsetof(WBP_SecondaryButton_C_ButtonHoveredChanged, bInIsHovered) == 0x000000, "Member 'WBP_SecondaryButton_C_ButtonHoveredChanged::bInIsHovered' has a wrong offset!");

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.ButtonFocusedChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_SecondaryButton_C_ButtonFocusedChanged final
{
public:
	bool                                          bInHasFocus;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SecondaryButton_C_ButtonFocusedChanged) == 0x000001, "Wrong alignment on WBP_SecondaryButton_C_ButtonFocusedChanged");
static_assert(sizeof(WBP_SecondaryButton_C_ButtonFocusedChanged) == 0x000001, "Wrong size on WBP_SecondaryButton_C_ButtonFocusedChanged");
static_assert(offsetof(WBP_SecondaryButton_C_ButtonFocusedChanged, bInHasFocus) == 0x000000, "Member 'WBP_SecondaryButton_C_ButtonFocusedChanged::bInHasFocus' has a wrong offset!");

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.OnHoverVisuals
// 0x0001 (0x0001 - 0x0000)
struct WBP_SecondaryButton_C_OnHoverVisuals final
{
public:
	bool                                          bIsHovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SecondaryButton_C_OnHoverVisuals) == 0x000001, "Wrong alignment on WBP_SecondaryButton_C_OnHoverVisuals");
static_assert(sizeof(WBP_SecondaryButton_C_OnHoverVisuals) == 0x000001, "Wrong size on WBP_SecondaryButton_C_OnHoverVisuals");
static_assert(offsetof(WBP_SecondaryButton_C_OnHoverVisuals, bIsHovered) == 0x000000, "Member 'WBP_SecondaryButton_C_OnHoverVisuals::bIsHovered' has a wrong offset!");

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.OnFocusedVisuals
// 0x0078 (0x0078 - 0x0000)
struct WBP_SecondaryButton_C_OnFocusedVisuals final
{
public:
	bool                                          bIsFocused;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZColorStyle*                         Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZColorStyle*                         Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable_2;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_3;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZColorStyle*                         K2Node_Select_Default_1;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SecondaryButton_C_OnFocusedVisuals) == 0x000008, "Wrong alignment on WBP_SecondaryButton_C_OnFocusedVisuals");
static_assert(sizeof(WBP_SecondaryButton_C_OnFocusedVisuals) == 0x000078, "Wrong size on WBP_SecondaryButton_C_OnFocusedVisuals");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, bIsFocused) == 0x000000, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::bIsFocused' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, Temp_object_Variable) == 0x000008, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, Temp_object_Variable_1) == 0x000010, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, Temp_bool_Variable) == 0x000018, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, Temp_object_Variable_2) == 0x000020, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, Temp_object_Variable_3) == 0x000028, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, CallFunc_SelectColor_ReturnValue) == 0x000030, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, K2Node_Select_Default) == 0x000040, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, CallFunc_SelectColor_ReturnValue_1) == 0x000048, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, CallFunc_PlayAnimation_ReturnValue) == 0x000058, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, Temp_bool_Variable_1) == 0x000060, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, CallFunc_PlayAnimation_ReturnValue_1) == 0x000068, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnFocusedVisuals, K2Node_Select_Default_1) == 0x000070, "Member 'WBP_SecondaryButton_C_OnFocusedVisuals::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.OnDisabledVisuals
// 0x0008 (0x0008 - 0x0000)
struct WBP_SecondaryButton_C_OnDisabledVisuals final
{
public:
	bool                                          bIsDisabled_0;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SecondaryButton_C_OnDisabledVisuals) == 0x000004, "Wrong alignment on WBP_SecondaryButton_C_OnDisabledVisuals");
static_assert(sizeof(WBP_SecondaryButton_C_OnDisabledVisuals) == 0x000008, "Wrong size on WBP_SecondaryButton_C_OnDisabledVisuals");
static_assert(offsetof(WBP_SecondaryButton_C_OnDisabledVisuals, bIsDisabled_0) == 0x000000, "Member 'WBP_SecondaryButton_C_OnDisabledVisuals::bIsDisabled_0' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_OnDisabledVisuals, CallFunc_SelectFloat_ReturnValue) == 0x000004, "Member 'WBP_SecondaryButton_C_OnDisabledVisuals::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.RefreshVisual
// 0x0002 (0x0002 - 0x0000)
struct WBP_SecondaryButton_C_RefreshVisual final
{
public:
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SecondaryButton_C_RefreshVisual) == 0x000001, "Wrong alignment on WBP_SecondaryButton_C_RefreshVisual");
static_assert(sizeof(WBP_SecondaryButton_C_RefreshVisual) == 0x000002, "Wrong size on WBP_SecondaryButton_C_RefreshVisual");
static_assert(offsetof(WBP_SecondaryButton_C_RefreshVisual, CallFunc_HasKeyboardFocus_ReturnValue) == 0x000000, "Member 'WBP_SecondaryButton_C_RefreshVisual::CallFunc_HasKeyboardFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_RefreshVisual, CallFunc_IsHovered_ReturnValue) == 0x000001, "Member 'WBP_SecondaryButton_C_RefreshVisual::CallFunc_IsHovered_ReturnValue' has a wrong offset!");

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.SetButtonText
// 0x0018 (0x0018 - 0x0000)
struct WBP_SecondaryButton_C_SetButtonText final
{
public:
	class FText                                   InButtonText;                                      // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_SecondaryButton_C_SetButtonText) == 0x000008, "Wrong alignment on WBP_SecondaryButton_C_SetButtonText");
static_assert(sizeof(WBP_SecondaryButton_C_SetButtonText) == 0x000018, "Wrong size on WBP_SecondaryButton_C_SetButtonText");
static_assert(offsetof(WBP_SecondaryButton_C_SetButtonText, InButtonText) == 0x000000, "Member 'WBP_SecondaryButton_C_SetButtonText::InButtonText' has a wrong offset!");

// Function WBP_SecondaryButton.WBP_SecondaryButton_C.GetText
// 0x0030 (0x0030 - 0x0000)
struct WBP_SecondaryButton_C_GetText final
{
public:
	class FText                                   OutText;                                           // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};
static_assert(alignof(WBP_SecondaryButton_C_GetText) == 0x000008, "Wrong alignment on WBP_SecondaryButton_C_GetText");
static_assert(sizeof(WBP_SecondaryButton_C_GetText) == 0x000030, "Wrong size on WBP_SecondaryButton_C_GetText");
static_assert(offsetof(WBP_SecondaryButton_C_GetText, OutText) == 0x000000, "Member 'WBP_SecondaryButton_C_GetText::OutText' has a wrong offset!");
static_assert(offsetof(WBP_SecondaryButton_C_GetText, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'WBP_SecondaryButton_C_GetText::CallFunc_GetText_ReturnValue' has a wrong offset!");

}

