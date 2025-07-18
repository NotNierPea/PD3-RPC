﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_ChallengeCategory_PanelButton

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_UI_ChallengeCategory_PanelButton.WBP_UI_ChallengeCategory_PanelButton_C.ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZChallengeCategoryData*              K2Node_Event_InCategoryData;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput; // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FLinearColor                           CallFunc_GetGlobalColor_ReturnValue;               // 0x0028(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInHasFocus;                          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInIsHovered;                         // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_TotalCount;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_CompletedCount;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0088(0x0040)(HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
};
static_assert(alignof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton) == 0x000008, "Wrong alignment on WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton");
static_assert(sizeof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton) == 0x0000F8, "Wrong size on WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, EntryPoint) == 0x000000, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, Temp_byte_Variable) == 0x000004, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, Temp_byte_Variable_1) == 0x000005, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, K2Node_Event_InCategoryData) == 0x000008, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::K2Node_Event_InCategoryData' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, Temp_bool_Variable) == 0x000010, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, K2Node_Event_IsDesignTime) == 0x000011, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput) == 0x000018, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, CallFunc_GetGlobalColor_ReturnValue) == 0x000028, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::CallFunc_GetGlobalColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, K2Node_Event_bInHasFocus) == 0x000038, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::K2Node_Event_bInHasFocus' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, K2Node_Event_bInIsHovered) == 0x000039, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::K2Node_Event_bInIsHovered' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, K2Node_Event_TotalCount) == 0x00003C, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::K2Node_Event_TotalCount' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, K2Node_Event_CompletedCount) == 0x000040, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::K2Node_Event_CompletedCount' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000044, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, K2Node_MakeStruct_FormatArgumentData_1) == 0x000088, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, K2Node_Select_Default) == 0x0000C8, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, K2Node_MakeArray_Array) == 0x0000D0, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ExecuteUbergraph_WBP_UI_ChallengeCategory_PanelButton::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_UI_ChallengeCategory_PanelButton.WBP_UI_ChallengeCategory_PanelButton_C.OnChallengeCategoryCountRefreshed
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryCountRefreshed final
{
public:
	int32                                         TotalCount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CompletedCount;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryCountRefreshed) == 0x000004, "Wrong alignment on WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryCountRefreshed");
static_assert(sizeof(WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryCountRefreshed) == 0x000008, "Wrong size on WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryCountRefreshed");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryCountRefreshed, TotalCount) == 0x000000, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryCountRefreshed::TotalCount' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryCountRefreshed, CompletedCount) == 0x000004, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryCountRefreshed::CompletedCount' has a wrong offset!");

// Function WBP_UI_ChallengeCategory_PanelButton.WBP_UI_ChallengeCategory_PanelButton_C.ButtonHoveredChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_UI_ChallengeCategory_PanelButton_C_ButtonHoveredChanged final
{
public:
	bool                                          bInIsHovered;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_ChallengeCategory_PanelButton_C_ButtonHoveredChanged) == 0x000001, "Wrong alignment on WBP_UI_ChallengeCategory_PanelButton_C_ButtonHoveredChanged");
static_assert(sizeof(WBP_UI_ChallengeCategory_PanelButton_C_ButtonHoveredChanged) == 0x000001, "Wrong size on WBP_UI_ChallengeCategory_PanelButton_C_ButtonHoveredChanged");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ButtonHoveredChanged, bInIsHovered) == 0x000000, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ButtonHoveredChanged::bInIsHovered' has a wrong offset!");

// Function WBP_UI_ChallengeCategory_PanelButton.WBP_UI_ChallengeCategory_PanelButton_C.ButtonFocusedChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_UI_ChallengeCategory_PanelButton_C_ButtonFocusedChanged final
{
public:
	bool                                          bInHasFocus;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_ChallengeCategory_PanelButton_C_ButtonFocusedChanged) == 0x000001, "Wrong alignment on WBP_UI_ChallengeCategory_PanelButton_C_ButtonFocusedChanged");
static_assert(sizeof(WBP_UI_ChallengeCategory_PanelButton_C_ButtonFocusedChanged) == 0x000001, "Wrong size on WBP_UI_ChallengeCategory_PanelButton_C_ButtonFocusedChanged");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_ButtonFocusedChanged, bInHasFocus) == 0x000000, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_ButtonFocusedChanged::bInHasFocus' has a wrong offset!");

// Function WBP_UI_ChallengeCategory_PanelButton.WBP_UI_ChallengeCategory_PanelButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_UI_ChallengeCategory_PanelButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_ChallengeCategory_PanelButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UI_ChallengeCategory_PanelButton_C_PreConstruct");
static_assert(sizeof(WBP_UI_ChallengeCategory_PanelButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_UI_ChallengeCategory_PanelButton_C_PreConstruct");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_UI_ChallengeCategory_PanelButton.WBP_UI_ChallengeCategory_PanelButton_C.OnChallengeCategoryDataInititalized
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryDataInititalized final
{
public:
	class USBZChallengeCategoryData*              InCategoryData;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryDataInititalized) == 0x000008, "Wrong alignment on WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryDataInititalized");
static_assert(sizeof(WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryDataInititalized) == 0x000008, "Wrong size on WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryDataInititalized");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryDataInititalized, InCategoryData) == 0x000000, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnChallengeCategoryDataInititalized::InCategoryData' has a wrong offset!");

// Function WBP_UI_ChallengeCategory_PanelButton.WBP_UI_ChallengeCategory_PanelButton_C.OnFocusedVisual
// 0x0028 (0x0028 - 0x0000)
struct WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual final
{
public:
	bool                                          bIsFocused;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual) == 0x000008, "Wrong alignment on WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual");
static_assert(sizeof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual) == 0x000028, "Wrong size on WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual, bIsFocused) == 0x000000, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual::bIsFocused' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual, Temp_bool_Variable) == 0x000001, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual, Temp_byte_Variable) == 0x000002, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual, K2Node_Select_Default) == 0x000004, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000010, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual, CallFunc_PlayAnimationForward_ReturnValue) == 0x000018, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000020, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnFocusedVisual::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

// Function WBP_UI_ChallengeCategory_PanelButton.WBP_UI_ChallengeCategory_PanelButton_C.OnHoveredVisuals
// 0x0001 (0x0001 - 0x0000)
struct WBP_UI_ChallengeCategory_PanelButton_C_OnHoveredVisuals final
{
public:
	bool                                          bIsHovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_ChallengeCategory_PanelButton_C_OnHoveredVisuals) == 0x000001, "Wrong alignment on WBP_UI_ChallengeCategory_PanelButton_C_OnHoveredVisuals");
static_assert(sizeof(WBP_UI_ChallengeCategory_PanelButton_C_OnHoveredVisuals) == 0x000001, "Wrong size on WBP_UI_ChallengeCategory_PanelButton_C_OnHoveredVisuals");
static_assert(offsetof(WBP_UI_ChallengeCategory_PanelButton_C_OnHoveredVisuals, bIsHovered) == 0x000000, "Member 'WBP_UI_ChallengeCategory_PanelButton_C_OnHoveredVisuals::bIsHovered' has a wrong offset!");

}

