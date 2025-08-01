﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LocalPlayerInfo

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Starbreeze_structs.hpp"


namespace SDK::Params
{

// Function WBP_LocalPlayerInfo.WBP_LocalPlayerInfo_C.ExecuteUbergraph_WBP_LocalPlayerInfo
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBZPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetAccelBytePlayerName_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0050(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZUIManager*                          CallFunc_GetUIManager_ReturnValue;                 // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBZPlatform                                  CallFunc_GetPlatform_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBZPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue_1;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           CallFunc_GetSpriteForPlatform_ReturnValue;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZPlayerState*                        K2Node_DynamicCast_AsSBZPlayer_State;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBZInfamyManager*                      CallFunc_GetInfamyManager_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput; // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	int32                                         CallFunc_ClientGetCurrentRenownLevel_ReturnValue;  // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo) == 0x000008, "Wrong alignment on WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo");
static_assert(sizeof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo) == 0x0000C0, "Wrong size on WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, EntryPoint) == 0x000000, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, Temp_bool_Variable) == 0x000004, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, Temp_byte_Variable) == 0x000005, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, Temp_byte_Variable_1) == 0x000006, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, Temp_bool_Variable_1) == 0x000007, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, Temp_byte_Variable_2) == 0x000008, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, Temp_byte_Variable_3) == 0x000009, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000010, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_GetAccelBytePlayerName_ReturnValue) == 0x000018, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_GetAccelBytePlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_GetPlayerName_ReturnValue) == 0x000028, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000050, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_TextIsEmpty_ReturnValue) == 0x000068, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, K2Node_Select_Default) == 0x000069, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_GetUIManager_ReturnValue) == 0x000070, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_GetPlatform_ReturnValue) == 0x000078, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_GetPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_GetLocalPlayerState_ReturnValue_1) == 0x000080, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_GetLocalPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_GetSpriteForPlatform_ReturnValue) == 0x000088, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_GetSpriteForPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, K2Node_DynamicCast_AsSBZPlayer_State) == 0x000090, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::K2Node_DynamicCast_AsSBZPlayer_State' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_GetInfamyManager_ReturnValue) == 0x0000A0, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_GetInfamyManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput) == 0x0000A8, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_ClientGetCurrentRenownLevel_ReturnValue) == 0x0000B8, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_ClientGetCurrentRenownLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x0000BC, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo, K2Node_Select_Default_1) == 0x0000BD, "Member 'WBP_LocalPlayerInfo_C_ExecuteUbergraph_WBP_LocalPlayerInfo::K2Node_Select_Default_1' has a wrong offset!");

}

