﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_SliderButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.ExecuteUbergraph_WBP_Settings_SliderButton
// 0x04E8 (0x04E8 - 0x0000)
struct WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInIsDisabled;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInHasFocus;                          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInIsHovered;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetGlobalColor_ReturnValue;               // 0x0010(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0048(0x0090)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00D8(0x0090)()
	struct FSliderStyle                           K2Node_MakeStruct_SliderStyle;                     // 0x0168(0x0370)()
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton) == 0x000008, "Wrong alignment on WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton");
static_assert(sizeof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton) == 0x0004E8, "Wrong size on WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, EntryPoint) == 0x000000, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, K2Node_Event_bInIsDisabled) == 0x000004, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::K2Node_Event_bInIsDisabled' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, K2Node_Event_bInHasFocus) == 0x000005, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::K2Node_Event_bInHasFocus' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, K2Node_Event_bInIsHovered) == 0x000006, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::K2Node_Event_bInIsHovered' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, K2Node_ComponentBoundEvent_Value) == 0x000008, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, CallFunc_HasKeyboardFocus_ReturnValue) == 0x00000C, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::CallFunc_HasKeyboardFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, CallFunc_GetGlobalColor_ReturnValue) == 0x000010, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::CallFunc_GetGlobalColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, K2Node_MakeStruct_SlateBrush) == 0x000048, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, K2Node_MakeStruct_SlateBrush_1) == 0x0000D8, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, K2Node_MakeStruct_SliderStyle) == 0x000168, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::K2Node_MakeStruct_SliderStyle' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0004D8, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton, K2Node_Event_IsDesignTime) == 0x0004E0, "Member 'WBP_Settings_SliderButton_C_ExecuteUbergraph_WBP_Settings_SliderButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.BndEvt__WBP_Settings_SliderButton_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_Settings_SliderButton_C_BndEvt__WBP_Settings_SliderButton_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_SliderButton_C_BndEvt__WBP_Settings_SliderButton_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_Settings_SliderButton_C_BndEvt__WBP_Settings_SliderButton_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_Settings_SliderButton_C_BndEvt__WBP_Settings_SliderButton_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_Settings_SliderButton_C_BndEvt__WBP_Settings_SliderButton_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_Settings_SliderButton_C_BndEvt__WBP_Settings_SliderButton_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'WBP_Settings_SliderButton_C_BndEvt__WBP_Settings_SliderButton_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.ButtonHoveredChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_SliderButton_C_ButtonHoveredChanged final
{
public:
	bool                                          bInIsHovered;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Settings_SliderButton_C_ButtonHoveredChanged) == 0x000001, "Wrong alignment on WBP_Settings_SliderButton_C_ButtonHoveredChanged");
static_assert(sizeof(WBP_Settings_SliderButton_C_ButtonHoveredChanged) == 0x000001, "Wrong size on WBP_Settings_SliderButton_C_ButtonHoveredChanged");
static_assert(offsetof(WBP_Settings_SliderButton_C_ButtonHoveredChanged, bInIsHovered) == 0x000000, "Member 'WBP_Settings_SliderButton_C_ButtonHoveredChanged::bInIsHovered' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.ButtonFocusedChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_SliderButton_C_ButtonFocusedChanged final
{
public:
	bool                                          bInHasFocus;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Settings_SliderButton_C_ButtonFocusedChanged) == 0x000001, "Wrong alignment on WBP_Settings_SliderButton_C_ButtonFocusedChanged");
static_assert(sizeof(WBP_Settings_SliderButton_C_ButtonFocusedChanged) == 0x000001, "Wrong size on WBP_Settings_SliderButton_C_ButtonFocusedChanged");
static_assert(offsetof(WBP_Settings_SliderButton_C_ButtonFocusedChanged, bInHasFocus) == 0x000000, "Member 'WBP_Settings_SliderButton_C_ButtonFocusedChanged::bInHasFocus' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.ButtonDisabledChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_SliderButton_C_ButtonDisabledChanged final
{
public:
	bool                                          bInIsDisabled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Settings_SliderButton_C_ButtonDisabledChanged) == 0x000001, "Wrong alignment on WBP_Settings_SliderButton_C_ButtonDisabledChanged");
static_assert(sizeof(WBP_Settings_SliderButton_C_ButtonDisabledChanged) == 0x000001, "Wrong size on WBP_Settings_SliderButton_C_ButtonDisabledChanged");
static_assert(offsetof(WBP_Settings_SliderButton_C_ButtonDisabledChanged, bInIsDisabled) == 0x000000, "Member 'WBP_Settings_SliderButton_C_ButtonDisabledChanged::bInIsDisabled' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_SliderButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Settings_SliderButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Settings_SliderButton_C_PreConstruct");
static_assert(sizeof(WBP_Settings_SliderButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_Settings_SliderButton_C_PreConstruct");
static_assert(offsetof(WBP_Settings_SliderButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Settings_SliderButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.RefreshVisuals
// 0x0002 (0x0002 - 0x0000)
struct WBP_Settings_SliderButton_C_RefreshVisuals final
{
public:
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Settings_SliderButton_C_RefreshVisuals) == 0x000001, "Wrong alignment on WBP_Settings_SliderButton_C_RefreshVisuals");
static_assert(sizeof(WBP_Settings_SliderButton_C_RefreshVisuals) == 0x000002, "Wrong size on WBP_Settings_SliderButton_C_RefreshVisuals");
static_assert(offsetof(WBP_Settings_SliderButton_C_RefreshVisuals, CallFunc_HasKeyboardFocus_ReturnValue) == 0x000000, "Member 'WBP_Settings_SliderButton_C_RefreshVisuals::CallFunc_HasKeyboardFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_RefreshVisuals, CallFunc_IsHovered_ReturnValue) == 0x000001, "Member 'WBP_Settings_SliderButton_C_RefreshVisuals::CallFunc_IsHovered_ReturnValue' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.OnHoverVisuals
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_SliderButton_C_OnHoverVisuals final
{
public:
	bool                                          bIsHovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Settings_SliderButton_C_OnHoverVisuals) == 0x000001, "Wrong alignment on WBP_Settings_SliderButton_C_OnHoverVisuals");
static_assert(sizeof(WBP_Settings_SliderButton_C_OnHoverVisuals) == 0x000001, "Wrong size on WBP_Settings_SliderButton_C_OnHoverVisuals");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnHoverVisuals, bIsHovered) == 0x000000, "Member 'WBP_Settings_SliderButton_C_OnHoverVisuals::bIsHovered' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.OnFocusedVisuals
// 0x0088 (0x0088 - 0x0000)
struct WBP_Settings_SliderButton_C_OnFocusedVisuals final
{
public:
	bool                                          bIsFocused;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColor_ReturnValue;               // 0x0028(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetGlobalColor_ReturnValue_1;             // 0x0038(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SettingIsDirty_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0060(0x0028)()
};
static_assert(alignof(WBP_Settings_SliderButton_C_OnFocusedVisuals) == 0x000008, "Wrong alignment on WBP_Settings_SliderButton_C_OnFocusedVisuals");
static_assert(sizeof(WBP_Settings_SliderButton_C_OnFocusedVisuals) == 0x000088, "Wrong size on WBP_Settings_SliderButton_C_OnFocusedVisuals");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnFocusedVisuals, bIsFocused) == 0x000000, "Member 'WBP_Settings_SliderButton_C_OnFocusedVisuals::bIsFocused' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnFocusedVisuals, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_Settings_SliderButton_C_OnFocusedVisuals::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnFocusedVisuals, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'WBP_Settings_SliderButton_C_OnFocusedVisuals::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnFocusedVisuals, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000018, "Member 'WBP_Settings_SliderButton_C_OnFocusedVisuals::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnFocusedVisuals, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000020, "Member 'WBP_Settings_SliderButton_C_OnFocusedVisuals::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnFocusedVisuals, CallFunc_GetGlobalColor_ReturnValue) == 0x000028, "Member 'WBP_Settings_SliderButton_C_OnFocusedVisuals::CallFunc_GetGlobalColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnFocusedVisuals, CallFunc_GetGlobalColor_ReturnValue_1) == 0x000038, "Member 'WBP_Settings_SliderButton_C_OnFocusedVisuals::CallFunc_GetGlobalColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnFocusedVisuals, CallFunc_SettingIsDirty_ReturnValue) == 0x000048, "Member 'WBP_Settings_SliderButton_C_OnFocusedVisuals::CallFunc_SettingIsDirty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnFocusedVisuals, CallFunc_SelectColor_ReturnValue) == 0x00004C, "Member 'WBP_Settings_SliderButton_C_OnFocusedVisuals::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnFocusedVisuals, K2Node_MakeStruct_SlateColor) == 0x000060, "Member 'WBP_Settings_SliderButton_C_OnFocusedVisuals::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.OnDisabledVisuals
// 0x0001 (0x0001 - 0x0000)
struct WBP_Settings_SliderButton_C_OnDisabledVisuals final
{
public:
	bool                                          bIsDisabled_0;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_Settings_SliderButton_C_OnDisabledVisuals) == 0x000001, "Wrong alignment on WBP_Settings_SliderButton_C_OnDisabledVisuals");
static_assert(sizeof(WBP_Settings_SliderButton_C_OnDisabledVisuals) == 0x000001, "Wrong size on WBP_Settings_SliderButton_C_OnDisabledVisuals");
static_assert(offsetof(WBP_Settings_SliderButton_C_OnDisabledVisuals, bIsDisabled_0) == 0x000000, "Member 'WBP_Settings_SliderButton_C_OnDisabledVisuals::bIsDisabled_0' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.UpdateSliderStepSize
// 0x0004 (0x0004 - 0x0000)
struct WBP_Settings_SliderButton_C_UpdateSliderStepSize final
{
public:
	float                                         ModifiedSliderIncrementValue;                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_SliderButton_C_UpdateSliderStepSize) == 0x000004, "Wrong alignment on WBP_Settings_SliderButton_C_UpdateSliderStepSize");
static_assert(sizeof(WBP_Settings_SliderButton_C_UpdateSliderStepSize) == 0x000004, "Wrong size on WBP_Settings_SliderButton_C_UpdateSliderStepSize");
static_assert(offsetof(WBP_Settings_SliderButton_C_UpdateSliderStepSize, ModifiedSliderIncrementValue) == 0x000000, "Member 'WBP_Settings_SliderButton_C_UpdateSliderStepSize::ModifiedSliderIncrementValue' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.UpdateSliderValue
// 0x0020 (0x0020 - 0x0000)
struct WBP_Settings_SliderButton_C_UpdateSliderValue final
{
public:
	int32                                         CallFunc_GetFractionCount_Num;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
};
static_assert(alignof(WBP_Settings_SliderButton_C_UpdateSliderValue) == 0x000008, "Wrong alignment on WBP_Settings_SliderButton_C_UpdateSliderValue");
static_assert(sizeof(WBP_Settings_SliderButton_C_UpdateSliderValue) == 0x000020, "Wrong size on WBP_Settings_SliderButton_C_UpdateSliderValue");
static_assert(offsetof(WBP_Settings_SliderButton_C_UpdateSliderValue, CallFunc_GetFractionCount_Num) == 0x000000, "Member 'WBP_Settings_SliderButton_C_UpdateSliderValue::CallFunc_GetFractionCount_Num' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_UpdateSliderValue, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'WBP_Settings_SliderButton_C_UpdateSliderValue::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.GetFractionCount
// 0x001C (0x001C - 0x0000)
struct WBP_Settings_SliderButton_C_GetFractionCount final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fraction;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueFractionCount_Count;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueFractionCount_Count_1;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetValueFractionCount_Count_2;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue_1;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_SliderButton_C_GetFractionCount) == 0x000004, "Wrong alignment on WBP_Settings_SliderButton_C_GetFractionCount");
static_assert(sizeof(WBP_Settings_SliderButton_C_GetFractionCount) == 0x00001C, "Wrong size on WBP_Settings_SliderButton_C_GetFractionCount");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetFractionCount, Num) == 0x000000, "Member 'WBP_Settings_SliderButton_C_GetFractionCount::Num' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetFractionCount, Fraction) == 0x000004, "Member 'WBP_Settings_SliderButton_C_GetFractionCount::Fraction' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetFractionCount, CallFunc_GetValueFractionCount_Count) == 0x000008, "Member 'WBP_Settings_SliderButton_C_GetFractionCount::CallFunc_GetValueFractionCount_Count' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetFractionCount, CallFunc_GetValueFractionCount_Count_1) == 0x00000C, "Member 'WBP_Settings_SliderButton_C_GetFractionCount::CallFunc_GetValueFractionCount_Count_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetFractionCount, CallFunc_GetValueFractionCount_Count_2) == 0x000010, "Member 'WBP_Settings_SliderButton_C_GetFractionCount::CallFunc_GetValueFractionCount_Count_2' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetFractionCount, CallFunc_Max_ReturnValue) == 0x000014, "Member 'WBP_Settings_SliderButton_C_GetFractionCount::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetFractionCount, CallFunc_Max_ReturnValue_1) == 0x000018, "Member 'WBP_Settings_SliderButton_C_GetFractionCount::CallFunc_Max_ReturnValue_1' has a wrong offset!");

// Function WBP_Settings_SliderButton.WBP_Settings_SliderButton_C.GetValueFractionCount
// 0x0030 (0x0030 - 0x0000)
struct WBP_Settings_SliderButton_C_GetValueFractionCount final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentFraction;                                   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fraction;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FractionCount;                                     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Fraction_ReturnValue;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Settings_SliderButton_C_GetValueFractionCount) == 0x000004, "Wrong alignment on WBP_Settings_SliderButton_C_GetValueFractionCount");
static_assert(sizeof(WBP_Settings_SliderButton_C_GetValueFractionCount) == 0x000030, "Wrong size on WBP_Settings_SliderButton_C_GetValueFractionCount");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, Value) == 0x000000, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::Value' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, Count) == 0x000004, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::Count' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, CurrentFraction) == 0x000008, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::CurrentFraction' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, Fraction) == 0x00000C, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::Fraction' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, FractionCount) == 0x000010, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::FractionCount' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, CallFunc_Abs_ReturnValue) == 0x000014, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000018, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, CallFunc_Fraction_ReturnValue) == 0x00001C, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::CallFunc_Fraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, Temp_int_Variable) == 0x000020, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, CallFunc_Less_FloatFloat_ReturnValue) == 0x000028, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, CallFunc_Less_IntInt_ReturnValue) == 0x00002A, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, CallFunc_BooleanAND_ReturnValue_1) == 0x00002B, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Settings_SliderButton_C_GetValueFractionCount, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_Settings_SliderButton_C_GetValueFractionCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

