﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Loadout_WeaponCustomizationNew

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Starbreeze_structs.hpp"


namespace SDK::Params
{

// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew
// 0x0200 (0x0200 - 0x0000)
struct WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBZCustomizationManager*               CallFunc_GetCustomizationManager_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZEquippableLoadoutSlot                     Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0030(0x0018)()
	ESBZEquippableLoadoutSlot                     Temp_byte_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_PreviousValue;                        // 0x004C(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InActionInput;                  // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZUIManager*                          CallFunc_GetUIManager_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_PopStack_ReturnValue;                     // 0x0070(0x000C)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBZCustomizationManager*               CallFunc_GetCustomizationManager_ReturnValue_1;    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZCustomizationManager*               CallFunc_GetCustomizationManager_ReturnValue_2;    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBZCustomizationManager*               CallFunc_GetCustomizationManager_ReturnValue_3;    // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZMainMenuCameraManager*              CallFunc_GetMainMenuCameraManager_ReturnValue;     // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZGameModeMainMenu*                   K2Node_DynamicCast_AsSBZGame_Mode_Main_Menu;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZMenuButton*                         K2Node_Event_InButton;                             // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsFocused;                           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBZInventoryEquipmentType                    Temp_byte_Variable_2;                              // 0x00D9(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZWeaponInventorySlot                CallFunc_GetWeaponConfigSlot_ReturnValue;          // 0x00E0(0x00D8)(ConstParm)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x01C8(0x0018)()
	class UWidget*                                K2Node_Select_Default_1;                           // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZCustomizationManager*               CallFunc_GetCustomizationManager_ReturnValue_4;    // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZInventoryEquipmentType                    Temp_byte_Variable_3;                              // 0x01F8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZInventoryEquipmentType                    K2Node_Select_Default_2;                           // 0x01F9(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew) == 0x000008, "Wrong alignment on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew");
static_assert(sizeof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew) == 0x000200, "Wrong size on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, EntryPoint) == 0x000000, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_GetCustomizationManager_ReturnValue) == 0x000008, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_GetCustomizationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, Temp_byte_Variable) == 0x000010, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, Temp_text_Variable) == 0x000018, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, Temp_text_Variable_1) == 0x000030, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, Temp_byte_Variable_1) == 0x000048, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, K2Node_Event_PreviousValue) == 0x00004C, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::K2Node_Event_PreviousValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, K2Node_CustomEvent_InActionInput) == 0x000058, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::K2Node_CustomEvent_InActionInput' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, K2Node_SwitchName_CmpSuccess) == 0x000064, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_GetUIManager_ReturnValue) == 0x000068, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_PopStack_ReturnValue) == 0x000070, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_PopStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_GetCustomizationManager_ReturnValue_1) == 0x000080, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_GetCustomizationManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_GetCustomizationManager_ReturnValue_2) == 0x000088, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_GetCustomizationManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, Temp_bool_Variable) == 0x000090, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_GetCustomizationManager_ReturnValue_3) == 0x000098, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_GetCustomizationManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_GetMainMenuCameraManager_ReturnValue) == 0x0000A0, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_GetMainMenuCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_MakeLiteralName_ReturnValue) == 0x0000A8, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_GetGameMode_ReturnValue) == 0x0000B8, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, K2Node_DynamicCast_AsSBZGame_Mode_Main_Menu) == 0x0000C0, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::K2Node_DynamicCast_AsSBZGame_Mode_Main_Menu' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, K2Node_Event_InButton) == 0x0000D0, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::K2Node_Event_InButton' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, K2Node_Event_bIsFocused) == 0x0000D8, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::K2Node_Event_bIsFocused' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, Temp_byte_Variable_2) == 0x0000D9, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_IsValid_ReturnValue) == 0x0000DA, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_IsValid_ReturnValue_1) == 0x0000DB, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_GetWeaponConfigSlot_ReturnValue) == 0x0000E0, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_GetWeaponConfigSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_GetChildAt_ReturnValue) == 0x0001B8, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_IsValid_ReturnValue_2) == 0x0001C0, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, K2Node_Select_Default) == 0x0001C8, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, K2Node_Select_Default_1) == 0x0001E0, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_GetCustomizationManager_ReturnValue_4) == 0x0001E8, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_GetCustomizationManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x0001F0, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, Temp_byte_Variable_3) == 0x0001F8, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew, K2Node_Select_Default_2) == 0x0001F9, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnCategoryButtonFocused
// 0x0010 (0x0010 - 0x0000)
struct WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnCategoryButtonFocused final
{
public:
	class USBZMenuButton*                         InButton;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFocused;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnCategoryButtonFocused) == 0x000008, "Wrong alignment on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnCategoryButtonFocused");
static_assert(sizeof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnCategoryButtonFocused) == 0x000010, "Wrong size on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnCategoryButtonFocused");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnCategoryButtonFocused, InButton) == 0x000000, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnCategoryButtonFocused::InButton' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnCategoryButtonFocused, bIsFocused) == 0x000008, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnCategoryButtonFocused::bIsFocused' has a wrong offset!");

// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnControlsReferenceClicked
// 0x000C (0x000C - 0x0000)
struct WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnControlsReferenceClicked final
{
public:
	class FName                                   InActionInput;                                     // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnControlsReferenceClicked) == 0x000004, "Wrong alignment on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnControlsReferenceClicked");
static_assert(sizeof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnControlsReferenceClicked) == 0x00000C, "Wrong size on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnControlsReferenceClicked");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnControlsReferenceClicked, InActionInput) == 0x000000, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnControlsReferenceClicked::InActionInput' has a wrong offset!");

// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnGainedStackFocused
// 0x000C (0x000C - 0x0000)
struct WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnGainedStackFocused final
{
public:
	class FName                                   PreviousValue;                                     // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnGainedStackFocused) == 0x000004, "Wrong alignment on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnGainedStackFocused");
static_assert(sizeof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnGainedStackFocused) == 0x00000C, "Wrong size on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnGainedStackFocused");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnGainedStackFocused, PreviousValue) == 0x000000, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnGainedStackFocused::PreviousValue' has a wrong offset!");

// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.UpdateControlsReference
// 0x0138 (0x0138 - 0x0000)
struct WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName ActionName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0014)(ZeroConstructor, NoDestructor)
	struct FSBZButtonControlReference             K2Node_MakeStruct_SBZButtonControlReference;       // 0x0018(0x0030)()
	struct FSBZButtonControlReference             K2Node_MakeStruct_SBZButtonControlReference_1;     // 0x0048(0x0030)()
	bool                                          CallFunc_IsInputTypeController_ReturnValue;        // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBZButtonControlReference             K2Node_MakeStruct_SBZButtonControlReference_2;     // 0x0080(0x0030)()
	struct FSBZButtonControlReference             K2Node_MakeStruct_SBZButtonControlReference_3;     // 0x00B0(0x0030)()
	TArray<struct FSBZButtonControlReference>     K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	TArray<struct FSBZButtonControlReference>     K2Node_MakeArray_Array_1;                          // 0x00F0(0x0010)(ReferenceParm)
	TArray<struct FSBZButtonControlReference>     K2Node_Select_Default;                             // 0x0100(0x0010)(ReferenceParm)
	struct FSBZButtonControlsReference            K2Node_MakeStruct_SBZButtonControlsReference;      // 0x0110(0x0028)()
};
static_assert(alignof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference) == 0x000008, "Wrong alignment on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference");
static_assert(sizeof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference) == 0x000138, "Wrong size on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, Temp_bool_Variable) == 0x000000, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, K2Node_MakeStruct_SBZButtonControlReference) == 0x000018, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::K2Node_MakeStruct_SBZButtonControlReference' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, K2Node_MakeStruct_SBZButtonControlReference_1) == 0x000048, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::K2Node_MakeStruct_SBZButtonControlReference_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, CallFunc_IsInputTypeController_ReturnValue) == 0x000078, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::CallFunc_IsInputTypeController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, K2Node_MakeStruct_SBZButtonControlReference_2) == 0x000080, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::K2Node_MakeStruct_SBZButtonControlReference_2' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, K2Node_MakeStruct_SBZButtonControlReference_3) == 0x0000B0, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::K2Node_MakeStruct_SBZButtonControlReference_3' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, K2Node_MakeArray_Array) == 0x0000E0, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, K2Node_MakeArray_Array_1) == 0x0000F0, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, K2Node_Select_Default) == 0x000100, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference, K2Node_MakeStruct_SBZButtonControlsReference) == 0x000110, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_UpdateControlsReference::K2Node_MakeStruct_SBZButtonControlsReference' has a wrong offset!");

// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.SetCategoryPadding
// 0x0038 (0x0038 - 0x0000)
struct WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding) == 0x000008, "Wrong alignment on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding");
static_assert(sizeof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding) == 0x000038, "Wrong size on WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding, Temp_int_Variable) == 0x000000, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding, K2Node_MakeStruct_Margin) == 0x000004, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding, CallFunc_GetChildrenCount_ReturnValue) == 0x000020, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000028, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'WBP_MainMenu_Loadout_WeaponCustomizationNew_C_SetCategoryPadding::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

