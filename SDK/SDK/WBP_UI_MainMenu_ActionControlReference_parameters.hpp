﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_MainMenu_ActionControlReference

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_UI_MainMenu_ActionControlReference.WBP_UI_MainMenu_ActionControlReference_C.ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference
// 0x0130 (0x0130 - 0x0000)
struct WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0040(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B8(0x0078)(ConstParm)
};
static_assert(alignof(WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference) == 0x000008, "Wrong alignment on WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference");
static_assert(sizeof(WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference) == 0x000130, "Wrong size on WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference, EntryPoint) == 0x000000, "Member 'WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference, K2Node_Event_MyGeometry) == 0x000004, "Member 'WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference, K2Node_Event_MouseEvent_1) == 0x000040, "Member 'WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference, K2Node_Event_MouseEvent) == 0x0000B8, "Member 'WBP_UI_MainMenu_ActionControlReference_C_ExecuteUbergraph_WBP_UI_MainMenu_ActionControlReference::K2Node_Event_MouseEvent' has a wrong offset!");

// Function WBP_UI_MainMenu_ActionControlReference.WBP_UI_MainMenu_ActionControlReference_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WBP_UI_MainMenu_ActionControlReference_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_UI_MainMenu_ActionControlReference_C_OnMouseLeave");
static_assert(sizeof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseLeave) == 0x000078, "Wrong size on WBP_UI_MainMenu_ActionControlReference_C_OnMouseLeave");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_UI_MainMenu_ActionControlReference.WBP_UI_MainMenu_ActionControlReference_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_UI_MainMenu_ActionControlReference_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_UI_MainMenu_ActionControlReference_C_OnMouseEnter");
static_assert(sizeof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseEnter) == 0x0000B0, "Wrong size on WBP_UI_MainMenu_ActionControlReference_C_OnMouseEnter");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_UI_MainMenu_ActionControlReference.WBP_UI_MainMenu_ActionControlReference_C.OnHover
// 0x0058 (0x0058 - 0x0000)
struct WBP_UI_MainMenu_ActionControlReference_C_OnHover final
{
public:
	bool                                          bIsHovered;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	int32                                         CallFunc_Play2DSound_ReturnValue;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_UI_MainMenu_ActionControlReference_C_OnHover) == 0x000008, "Wrong alignment on WBP_UI_MainMenu_ActionControlReference_C_OnHover");
static_assert(sizeof(WBP_UI_MainMenu_ActionControlReference_C_OnHover) == 0x000058, "Wrong size on WBP_UI_MainMenu_ActionControlReference_C_OnHover");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnHover, bIsHovered) == 0x000000, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnHover::bIsHovered' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnHover, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnHover::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnHover, CallFunc_SelectColor_ReturnValue_1) == 0x000014, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnHover::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnHover, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnHover::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnHover, CallFunc_Play2DSound_ReturnValue) == 0x000050, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnHover::CallFunc_Play2DSound_ReturnValue' has a wrong offset!");

// Function WBP_UI_MainMenu_ActionControlReference.WBP_UI_MainMenu_ActionControlReference_C.OnMouseButtonDown
// 0x0238 (0x0238 - 0x0000)
struct WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B0(0x00C0)(Parm, OutParm, ReturnParm)
	int32                                         CallFunc_Play2DSound_ReturnValue;                  // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0178(0x00C0)()
};
static_assert(alignof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown");
static_assert(sizeof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown) == 0x000238, "Wrong size on WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown, ReturnValue) == 0x0000B0, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown, CallFunc_Play2DSound_ReturnValue) == 0x000170, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown::CallFunc_Play2DSound_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000178, "Member 'WBP_UI_MainMenu_ActionControlReference_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");

}

