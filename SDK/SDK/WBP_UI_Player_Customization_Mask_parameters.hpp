﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Player_Customization_Mask

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Starbreeze_structs.hpp"


namespace SDK::Params
{

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.ExecuteUbergraph_WBP_UI_Player_Customization_Mask
// 0x0128 (0x0128 - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_PreviousValue;                        // 0x0004(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBZButtonControlReference             K2Node_MakeStruct_SBZButtonControlReference;       // 0x0010(0x0030)()
	struct FSBZButtonControlReference             K2Node_MakeStruct_SBZButtonControlReference_1;     // 0x0040(0x0030)()
	TDelegate<void(class FName ActionName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0070(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBZButtonControlReference>     K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	class FName                                   K2Node_CustomEvent_ActionName;                     // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZButtonControlsReference            K2Node_MakeStruct_SBZButtonControlsReference;      // 0x00A8(0x0028)()
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZUIManager*                          CallFunc_GetUIManager_ReturnValue;                 // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_PopStack_ReturnValue;                     // 0x00E0(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZMenuButton*                         K2Node_ComponentBoundEvent_Button_3;               // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZUIManager*                          CallFunc_GetUIManager_ReturnValue_1;               // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZMenuButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZMenuButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZMenuButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask) == 0x000008, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask) == 0x000128, "Wrong size on WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, EntryPoint) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_Event_PreviousValue) == 0x000004, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_Event_PreviousValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_MakeStruct_SBZButtonControlReference) == 0x000010, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_MakeStruct_SBZButtonControlReference' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_MakeStruct_SBZButtonControlReference_1) == 0x000040, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_MakeStruct_SBZButtonControlReference_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_CreateDelegate_OutputDelegate) == 0x000070, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_MakeArray_Array) == 0x000088, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_CustomEvent_ActionName) == 0x000098, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_CustomEvent_ActionName' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_MakeStruct_SBZButtonControlsReference) == 0x0000A8, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_MakeStruct_SBZButtonControlsReference' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_SwitchName_CmpSuccess) == 0x0000D0, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, CallFunc_GetUIManager_ReturnValue) == 0x0000D8, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, CallFunc_PopStack_ReturnValue) == 0x0000E0, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::CallFunc_PopStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_ComponentBoundEvent_Button_3) == 0x0000F0, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_ComponentBoundEvent_Button_3' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, CallFunc_GetUIManager_ReturnValue_1) == 0x0000F8, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, CallFunc_MakeLiteralName_ReturnValue) == 0x000100, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_ComponentBoundEvent_Button_2) == 0x000110, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_ComponentBoundEvent_Button_1) == 0x000118, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask, K2Node_ComponentBoundEvent_Button) == 0x000120, "Member 'WBP_UI_Player_Customization_Mask_C_ExecuteUbergraph_WBP_UI_Player_Customization_Mask::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.BndEvt__WBP_UI_Player_Customization_Mask_GlobalColorButton_K2Node_ComponentBoundEvent_2_OnMenuButtonSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_GlobalColorButton_K2Node_ComponentBoundEvent_2_OnMenuButtonSelected__DelegateSignature final
{
public:
	class USBZMenuButton*                         Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_GlobalColorButton_K2Node_ComponentBoundEvent_2_OnMenuButtonSelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_GlobalColorButton_K2Node_ComponentBoundEvent_2_OnMenuButtonSelected__DelegateSignature");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_GlobalColorButton_K2Node_ComponentBoundEvent_2_OnMenuButtonSelected__DelegateSignature) == 0x000008, "Wrong size on WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_GlobalColorButton_K2Node_ComponentBoundEvent_2_OnMenuButtonSelected__DelegateSignature");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_GlobalColorButton_K2Node_ComponentBoundEvent_2_OnMenuButtonSelected__DelegateSignature, Button) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_GlobalColorButton_K2Node_ComponentBoundEvent_2_OnMenuButtonSelected__DelegateSignature::Button' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.BndEvt__WBP_UI_Player_Customization_Mask_VFXButton_K2Node_ComponentBoundEvent_3_OnMenuButtonSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_VFXButton_K2Node_ComponentBoundEvent_3_OnMenuButtonSelected__DelegateSignature final
{
public:
	class USBZMenuButton*                         Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_VFXButton_K2Node_ComponentBoundEvent_3_OnMenuButtonSelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_VFXButton_K2Node_ComponentBoundEvent_3_OnMenuButtonSelected__DelegateSignature");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_VFXButton_K2Node_ComponentBoundEvent_3_OnMenuButtonSelected__DelegateSignature) == 0x000008, "Wrong size on WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_VFXButton_K2Node_ComponentBoundEvent_3_OnMenuButtonSelected__DelegateSignature");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_VFXButton_K2Node_ComponentBoundEvent_3_OnMenuButtonSelected__DelegateSignature, Button) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_VFXButton_K2Node_ComponentBoundEvent_3_OnMenuButtonSelected__DelegateSignature::Button' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.BndEvt__WBP_UI_Player_Customization_Mask_WBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_WBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature final
{
public:
	class USBZMenuButton*                         Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_WBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_WBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_WBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature) == 0x000008, "Wrong size on WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_WBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_WBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature, Button) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_WBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature::Button' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.BndEvt__WBP_UI_Player_Customization_Mask_PatternButton_K2Node_ComponentBoundEvent_0_OnMenuButtonSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_PatternButton_K2Node_ComponentBoundEvent_0_OnMenuButtonSelected__DelegateSignature final
{
public:
	class USBZMenuButton*                         Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_PatternButton_K2Node_ComponentBoundEvent_0_OnMenuButtonSelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_PatternButton_K2Node_ComponentBoundEvent_0_OnMenuButtonSelected__DelegateSignature");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_PatternButton_K2Node_ComponentBoundEvent_0_OnMenuButtonSelected__DelegateSignature) == 0x000008, "Wrong size on WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_PatternButton_K2Node_ComponentBoundEvent_0_OnMenuButtonSelected__DelegateSignature");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_PatternButton_K2Node_ComponentBoundEvent_0_OnMenuButtonSelected__DelegateSignature, Button) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_BndEvt__WBP_UI_Player_Customization_Mask_PatternButton_K2Node_ComponentBoundEvent_0_OnMenuButtonSelected__DelegateSignature::Button' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.OnControlsReferenceClicked
// 0x000C (0x000C - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_OnControlsReferenceClicked final
{
public:
	class FName                                   ActionName;                                        // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_OnControlsReferenceClicked) == 0x000004, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_OnControlsReferenceClicked");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_OnControlsReferenceClicked) == 0x00000C, "Wrong size on WBP_UI_Player_Customization_Mask_C_OnControlsReferenceClicked");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_OnControlsReferenceClicked, ActionName) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_OnControlsReferenceClicked::ActionName' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.OnGainedStackFocused
// 0x000C (0x000C - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_OnGainedStackFocused final
{
public:
	class FName                                   PreviousValue;                                     // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_OnGainedStackFocused) == 0x000004, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_OnGainedStackFocused");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_OnGainedStackFocused) == 0x00000C, "Wrong size on WBP_UI_Player_Customization_Mask_C_OnGainedStackFocused");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_OnGainedStackFocused, PreviousValue) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_OnGainedStackFocused::PreviousValue' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.ShowMaskOnly
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_ShowMaskOnly final
{
public:
	class ASBZCustomizationManager*               CallFunc_GetCustomizationManager_ReturnValue;      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_ShowMaskOnly) == 0x000008, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_ShowMaskOnly");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_ShowMaskOnly) == 0x000008, "Wrong size on WBP_UI_Player_Customization_Mask_C_ShowMaskOnly");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ShowMaskOnly, CallFunc_GetCustomizationManager_ReturnValue) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_ShowMaskOnly::CallFunc_GetCustomizationManager_ReturnValue' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.RevertBodyAndEquipped
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_RevertBodyAndEquipped final
{
public:
	class ASBZCustomizationManager*               CallFunc_GetCustomizationManager_ReturnValue;      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_RevertBodyAndEquipped) == 0x000008, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_RevertBodyAndEquipped");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_RevertBodyAndEquipped) == 0x000008, "Wrong size on WBP_UI_Player_Customization_Mask_C_RevertBodyAndEquipped");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_RevertBodyAndEquipped, CallFunc_GetCustomizationManager_ReturnValue) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_RevertBodyAndEquipped::CallFunc_GetCustomizationManager_ReturnValue' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.NonPatternButtonPressed
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed final
{
public:
	class USBZMenuButton*                         Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZCosmeticsPartSlot*                  CosmeticPartSlot;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZMainMenuCosmeticSlotButton*         K2Node_DynamicCast_AsSBZMain_Menu_Cosmetic_Slot_Button; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0040(0x0018)()
	class USBZUIManager*                          CallFunc_GetUIManager_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZBaseMenuWidget*                     CallFunc_GetMenuWidget_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZMainMenuWidget*                     K2Node_DynamicCast_AsSBZMain_Menu_Widget;          // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0080(0x0018)()
	bool                                          CallFunc_DisplayMaskGenericSlotScreen_ReturnValue; // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed) == 0x000008, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed) == 0x0000A0, "Wrong size on WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, Button) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::Button' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, CosmeticPartSlot) == 0x000008, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::CosmeticPartSlot' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, Temp_bool_Variable) == 0x000010, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, K2Node_DynamicCast_AsSBZMain_Menu_Cosmetic_Slot_Button) == 0x000018, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::K2Node_DynamicCast_AsSBZMain_Menu_Cosmetic_Slot_Button' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, Temp_text_Variable) == 0x000028, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, Temp_text_Variable_1) == 0x000040, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, CallFunc_GetUIManager_ReturnValue) == 0x000058, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000060, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, CallFunc_GetMenuWidget_ReturnValue) == 0x000068, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::CallFunc_GetMenuWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, K2Node_DynamicCast_AsSBZMain_Menu_Widget) == 0x000070, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::K2Node_DynamicCast_AsSBZMain_Menu_Widget' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, K2Node_Select_Default) == 0x000080, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed, CallFunc_DisplayMaskGenericSlotScreen_ReturnValue) == 0x000098, "Member 'WBP_UI_Player_Customization_Mask_C_NonPatternButtonPressed::CallFunc_DisplayMaskGenericSlotScreen_ReturnValue' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.ExitVerticalListNavigation
// 0x0010 (0x0010 - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_ExitVerticalListNavigation final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_ExitVerticalListNavigation) == 0x000008, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_ExitVerticalListNavigation");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_ExitVerticalListNavigation) == 0x000010, "Wrong size on WBP_UI_Player_Customization_Mask_C_ExitVerticalListNavigation");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExitVerticalListNavigation, Navigation_0) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_ExitVerticalListNavigation::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExitVerticalListNavigation, ReturnValue) == 0x000008, "Member 'WBP_UI_Player_Customization_Mask_C_ExitVerticalListNavigation::ReturnValue' has a wrong offset!");

// Function WBP_UI_Player_Customization_Mask.WBP_UI_Player_Customization_Mask_C.ExitApplyButtonNavigation
// 0x0010 (0x0010 - 0x0000)
struct WBP_UI_Player_Customization_Mask_C_ExitApplyButtonNavigation final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Player_Customization_Mask_C_ExitApplyButtonNavigation) == 0x000008, "Wrong alignment on WBP_UI_Player_Customization_Mask_C_ExitApplyButtonNavigation");
static_assert(sizeof(WBP_UI_Player_Customization_Mask_C_ExitApplyButtonNavigation) == 0x000010, "Wrong size on WBP_UI_Player_Customization_Mask_C_ExitApplyButtonNavigation");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExitApplyButtonNavigation, Navigation_0) == 0x000000, "Member 'WBP_UI_Player_Customization_Mask_C_ExitApplyButtonNavigation::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_UI_Player_Customization_Mask_C_ExitApplyButtonNavigation, ReturnValue) == 0x000008, "Member 'WBP_UI_Player_Customization_Mask_C_ExitApplyButtonNavigation::ReturnValue' has a wrong offset!");

}

