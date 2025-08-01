﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_ArmorModifierScreen

#include "Basic.hpp"

#include "Starbreeze_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_UI_ArmorModifierScreen.WBP_UI_ArmorModifierScreen_C.ExecuteUbergraph_WBP_UI_ArmorModifierScreen
// 0x01D8 (0x01D8 - 0x0000)
struct WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Step_Size_Variable;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Index_Variable;                           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_UI_ArmorChunkButton_C*             CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_PreviousValue;                        // 0x0038(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBZMainMenuArmorChunkButton*     K2Node_Event_NewFocusedButton;                     // 0x0058(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBZMainMenuArmorChunkButton*     K2Node_Event_SelectedButton;                       // 0x0060(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZUIManager*                          CallFunc_GetUIManager_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_PopStack_ReturnValue;                     // 0x0070(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InActionInput;                  // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZUIManager*                          CallFunc_GetUIManager_ReturnValue_1;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPopupShowing_ReturnValue;               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class USBZMainMenuArmorChunkButton*     K2Node_Event_EquippedButton;                       // 0x00A0(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetArmorInfo_OutArmorLoadoutIndex;        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetArmorInfo_OutArmorChunkIndex;          // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetArmorInfo_OutArmorLoadoutIndex_1;      // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetArmorInfo_OutArmorChunkIndex_1;        // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0120(0x0018)()
	struct FSBZArmorInventorySlot                 CallFunc_GetArmorInventorySlot_ReturnValue;        // 0x0138(0x0068)(ConstParm)
	class ASBZCustomizationManager*               CallFunc_GetCustomizationManager_ReturnValue;      // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_1;                           // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_UI_ArmorChunkButton_C*             K2Node_DynamicCast_AsWBP_UI_Armor_Chunk_Button;    // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBZArmorChunkType                            CallFunc_GetArmorChunkType_ReturnValue;            // 0x01C9(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CA[0x6];                                      // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBZCustomizationManager*               CallFunc_GetCustomizationManager_ReturnValue_1;    // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen) == 0x000008, "Wrong alignment on WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen");
static_assert(sizeof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen) == 0x0001D8, "Wrong size on WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, EntryPoint) == 0x000000, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, Temp_int_Step_Size_Variable) == 0x000004, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::Temp_int_Step_Size_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, Temp_int_Index_Variable) == 0x000008, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::Temp_int_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_Less_IntInt_ReturnValue) == 0x000019, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_Event_IsDesignTime) == 0x00001A, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_Abs_Int_ReturnValue) == 0x000028, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_Max_ReturnValue) == 0x00002C, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_Event_PreviousValue) == 0x000038, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_Event_PreviousValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetChildAt_ReturnValue) == 0x000048, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_Event_NewFocusedButton) == 0x000058, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_Event_NewFocusedButton' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_Event_SelectedButton) == 0x000060, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_Event_SelectedButton' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetUIManager_ReturnValue) == 0x000068, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_PopStack_ReturnValue) == 0x000070, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_PopStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_CustomEvent_InActionInput) == 0x00007C, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_CustomEvent_InActionInput' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_SwitchName_CmpSuccess) == 0x000088, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_IsValid_ReturnValue_2) == 0x000089, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetUIManager_ReturnValue_1) == 0x000090, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_IsPopupShowing_ReturnValue) == 0x000098, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_IsPopupShowing_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_Event_EquippedButton) == 0x0000A0, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_Event_EquippedButton' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetArmorInfo_OutArmorLoadoutIndex) == 0x0000A8, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetArmorInfo_OutArmorLoadoutIndex' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetArmorInfo_OutArmorChunkIndex) == 0x0000AC, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetArmorInfo_OutArmorChunkIndex' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, Temp_bool_Variable) == 0x0000B0, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B4, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000B8, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_Select_Default) == 0x0000C0, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_MakeArray_Array) == 0x000108, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetArmorInfo_OutArmorLoadoutIndex_1) == 0x000118, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetArmorInfo_OutArmorLoadoutIndex_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetArmorInfo_OutArmorChunkIndex_1) == 0x00011C, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetArmorInfo_OutArmorChunkIndex_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_Format_ReturnValue) == 0x000120, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetArmorInventorySlot_ReturnValue) == 0x000138, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetArmorInventorySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetCustomizationManager_ReturnValue) == 0x0001A0, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetCustomizationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x0001A8, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, Temp_bool_Variable_1) == 0x0001B0, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_Select_Default_1) == 0x0001B8, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_DynamicCast_AsWBP_UI_Armor_Chunk_Button) == 0x0001C0, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_DynamicCast_AsWBP_UI_Armor_Chunk_Button' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, K2Node_DynamicCast_bSuccess) == 0x0001C8, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetArmorChunkType_ReturnValue) == 0x0001C9, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetArmorChunkType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen, CallFunc_GetCustomizationManager_ReturnValue_1) == 0x0001D0, "Member 'WBP_UI_ArmorModifierScreen_C_ExecuteUbergraph_WBP_UI_ArmorModifierScreen::CallFunc_GetCustomizationManager_ReturnValue_1' has a wrong offset!");

// Function WBP_UI_ArmorModifierScreen.WBP_UI_ArmorModifierScreen_C.OnArmorChunkSlotButtonEquipped
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonEquipped final
{
public:
	const class USBZMainMenuArmorChunkButton*     EquippedButton;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonEquipped) == 0x000008, "Wrong alignment on WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonEquipped");
static_assert(sizeof(WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonEquipped) == 0x000008, "Wrong size on WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonEquipped");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonEquipped, EquippedButton) == 0x000000, "Member 'WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonEquipped::EquippedButton' has a wrong offset!");

// Function WBP_UI_ArmorModifierScreen.WBP_UI_ArmorModifierScreen_C.OnControlsReferenceClicked
// 0x000C (0x000C - 0x0000)
struct WBP_UI_ArmorModifierScreen_C_OnControlsReferenceClicked final
{
public:
	class FName                                   InActionInput;                                     // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_ArmorModifierScreen_C_OnControlsReferenceClicked) == 0x000004, "Wrong alignment on WBP_UI_ArmorModifierScreen_C_OnControlsReferenceClicked");
static_assert(sizeof(WBP_UI_ArmorModifierScreen_C_OnControlsReferenceClicked) == 0x00000C, "Wrong size on WBP_UI_ArmorModifierScreen_C_OnControlsReferenceClicked");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_OnControlsReferenceClicked, InActionInput) == 0x000000, "Member 'WBP_UI_ArmorModifierScreen_C_OnControlsReferenceClicked::InActionInput' has a wrong offset!");

// Function WBP_UI_ArmorModifierScreen.WBP_UI_ArmorModifierScreen_C.OnArmorChunkSlotButtonSelected
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonSelected final
{
public:
	const class USBZMainMenuArmorChunkButton*     SelectedButton;                                    // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonSelected) == 0x000008, "Wrong alignment on WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonSelected");
static_assert(sizeof(WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonSelected) == 0x000008, "Wrong size on WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonSelected");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonSelected, SelectedButton) == 0x000000, "Member 'WBP_UI_ArmorModifierScreen_C_OnArmorChunkSlotButtonSelected::SelectedButton' has a wrong offset!");

// Function WBP_UI_ArmorModifierScreen.WBP_UI_ArmorModifierScreen_C.NewArmorChunkSlotFocused
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_ArmorModifierScreen_C_NewArmorChunkSlotFocused final
{
public:
	const class USBZMainMenuArmorChunkButton*     NewFocusedButton;                                  // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_ArmorModifierScreen_C_NewArmorChunkSlotFocused) == 0x000008, "Wrong alignment on WBP_UI_ArmorModifierScreen_C_NewArmorChunkSlotFocused");
static_assert(sizeof(WBP_UI_ArmorModifierScreen_C_NewArmorChunkSlotFocused) == 0x000008, "Wrong size on WBP_UI_ArmorModifierScreen_C_NewArmorChunkSlotFocused");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_NewArmorChunkSlotFocused, NewFocusedButton) == 0x000000, "Member 'WBP_UI_ArmorModifierScreen_C_NewArmorChunkSlotFocused::NewFocusedButton' has a wrong offset!");

// Function WBP_UI_ArmorModifierScreen.WBP_UI_ArmorModifierScreen_C.OnGainedStackFocused
// 0x000C (0x000C - 0x0000)
struct WBP_UI_ArmorModifierScreen_C_OnGainedStackFocused final
{
public:
	class FName                                   PreviousValue;                                     // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_ArmorModifierScreen_C_OnGainedStackFocused) == 0x000004, "Wrong alignment on WBP_UI_ArmorModifierScreen_C_OnGainedStackFocused");
static_assert(sizeof(WBP_UI_ArmorModifierScreen_C_OnGainedStackFocused) == 0x00000C, "Wrong size on WBP_UI_ArmorModifierScreen_C_OnGainedStackFocused");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_OnGainedStackFocused, PreviousValue) == 0x000000, "Member 'WBP_UI_ArmorModifierScreen_C_OnGainedStackFocused::PreviousValue' has a wrong offset!");

// Function WBP_UI_ArmorModifierScreen.WBP_UI_ArmorModifierScreen_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_UI_ArmorModifierScreen_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_ArmorModifierScreen_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UI_ArmorModifierScreen_C_PreConstruct");
static_assert(sizeof(WBP_UI_ArmorModifierScreen_C_PreConstruct) == 0x000001, "Wrong size on WBP_UI_ArmorModifierScreen_C_PreConstruct");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UI_ArmorModifierScreen_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_UI_ArmorModifierScreen.WBP_UI_ArmorModifierScreen_C.UpdateActiveButtonControlsReference
// 0x0140 (0x0140 - 0x0000)
struct WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZButtonControlReference             K2Node_MakeStruct_SBZButtonControlReference;       // 0x0008(0x0030)()
	struct FSBZButtonControlReference             K2Node_MakeStruct_SBZButtonControlReference_1;     // 0x0038(0x0030)()
	bool                                          CallFunc_IsInputTypeController_ReturnValue;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZButtonControlReference             K2Node_MakeStruct_SBZButtonControlReference_2;     // 0x0070(0x0030)()
	struct FSBZButtonControlReference             K2Node_MakeStruct_SBZButtonControlReference_3;     // 0x00A0(0x0030)()
	TDelegate<void(class FName ActionName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x00D0(0x0014)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBZButtonControlReference>     K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	TArray<struct FSBZButtonControlReference>     K2Node_MakeArray_Array_1;                          // 0x00F8(0x0010)(ReferenceParm)
	TArray<struct FSBZButtonControlReference>     K2Node_Select_Default;                             // 0x0108(0x0010)(ReferenceParm)
	struct FSBZButtonControlsReference            K2Node_MakeStruct_SBZButtonControlsReference;      // 0x0118(0x0028)()
};
static_assert(alignof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference) == 0x000008, "Wrong alignment on WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference");
static_assert(sizeof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference) == 0x000140, "Wrong size on WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, Temp_bool_Variable) == 0x000000, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, K2Node_MakeStruct_SBZButtonControlReference) == 0x000008, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::K2Node_MakeStruct_SBZButtonControlReference' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, K2Node_MakeStruct_SBZButtonControlReference_1) == 0x000038, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::K2Node_MakeStruct_SBZButtonControlReference_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, CallFunc_IsInputTypeController_ReturnValue) == 0x000068, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::CallFunc_IsInputTypeController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, K2Node_MakeStruct_SBZButtonControlReference_2) == 0x000070, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::K2Node_MakeStruct_SBZButtonControlReference_2' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, K2Node_MakeStruct_SBZButtonControlReference_3) == 0x0000A0, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::K2Node_MakeStruct_SBZButtonControlReference_3' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, K2Node_CreateDelegate_OutputDelegate) == 0x0000D0, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, K2Node_MakeArray_Array) == 0x0000E8, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, K2Node_MakeArray_Array_1) == 0x0000F8, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, K2Node_Select_Default) == 0x000108, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference, K2Node_MakeStruct_SBZButtonControlsReference) == 0x000118, "Member 'WBP_UI_ArmorModifierScreen_C_UpdateActiveButtonControlsReference::K2Node_MakeStruct_SBZButtonControlsReference' has a wrong offset!");

}

