﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_PartyMemberCarryStatus

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_UI_Widget_PartyMemberCarryStatus.WBP_UI_Widget_PartyMemberCarryStatus_C.ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus
// 0x0078 (0x0078 - 0x0000)
struct WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBZCarryType*                    K2Node_Event_DroppedCarryType;                     // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBZCarryType*                    K2Node_Event_PickedUpCarryType;                    // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_UI_Widget_CrewCarryStatusItem_C*   K2Node_DynamicCast_AsWBP_UI_Widget_Crew_Carry_Status_Item; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_UI_Widget_CrewCarryStatusItem_C*   CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_UI_Widget_CrewCarryStatusItem_C*   K2Node_DynamicCast_AsWBP_UI_Widget_Crew_Carry_Status_Item_1; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus) == 0x000008, "Wrong alignment on WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus");
static_assert(sizeof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus) == 0x000078, "Wrong size on WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, EntryPoint) == 0x000000, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, Temp_int_Variable) == 0x000004, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, K2Node_Event_DroppedCarryType) == 0x000008, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::K2Node_Event_DroppedCarryType' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, K2Node_Event_PickedUpCarryType) == 0x000010, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::K2Node_Event_PickedUpCarryType' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, CallFunc_GetChildrenCount_ReturnValue) == 0x00001C, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, Temp_int_Variable_1) == 0x000024, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, K2Node_DynamicCast_AsWBP_UI_Widget_Crew_Carry_Status_Item) == 0x000038, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::K2Node_DynamicCast_AsWBP_UI_Widget_Crew_Carry_Status_Item' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, CallFunc_Create_ReturnValue) == 0x000048, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, CallFunc_AddChild_ReturnValue) == 0x000050, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000058, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, CallFunc_GetChildAt_ReturnValue_1) == 0x000060, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, K2Node_DynamicCast_AsWBP_UI_Widget_Crew_Carry_Status_Item_1) == 0x000068, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::K2Node_DynamicCast_AsWBP_UI_Widget_Crew_Carry_Status_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_ExecuteUbergraph_WBP_UI_Widget_PartyMemberCarryStatus::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function WBP_UI_Widget_PartyMemberCarryStatus.WBP_UI_Widget_PartyMemberCarryStatus_C.OnCarryTypePickedUp
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypePickedUp final
{
public:
	const class USBZCarryType*                    PickedUpCarryType;                                 // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypePickedUp) == 0x000008, "Wrong alignment on WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypePickedUp");
static_assert(sizeof(WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypePickedUp) == 0x000008, "Wrong size on WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypePickedUp");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypePickedUp, PickedUpCarryType) == 0x000000, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypePickedUp::PickedUpCarryType' has a wrong offset!");

// Function WBP_UI_Widget_PartyMemberCarryStatus.WBP_UI_Widget_PartyMemberCarryStatus_C.OnCarryTypeDropped
// 0x0008 (0x0008 - 0x0000)
struct WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypeDropped final
{
public:
	const class USBZCarryType*                    DroppedCarryType;                                  // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypeDropped) == 0x000008, "Wrong alignment on WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypeDropped");
static_assert(sizeof(WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypeDropped) == 0x000008, "Wrong size on WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypeDropped");
static_assert(offsetof(WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypeDropped, DroppedCarryType) == 0x000000, "Member 'WBP_UI_Widget_PartyMemberCarryStatus_C_OnCarryTypeDropped::DroppedCarryType' has a wrong offset!");

}

