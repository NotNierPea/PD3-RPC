﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CosmeticBag

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_CosmeticBag.BP_CosmeticBag_C.ExecuteUbergraph_BP_CosmeticBag
// 0x0058 (0x0058 - 0x0000)
struct BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZPlayerController*                   K2Node_DynamicCast_AsSBZPlayer_Controller;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBZPlayerCharacter*                    K2Node_DynamicCast_AsSBZPlayer_Character;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_GetCurrentActiveMontage_ReturnValue;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          CallFunc_GetAnimation_Animation;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag) == 0x000008, "Wrong alignment on BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag");
static_assert(sizeof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag) == 0x000058, "Wrong size on BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, EntryPoint) == 0x000000, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, K2Node_DynamicCast_AsSBZPlayer_Controller) == 0x000010, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::K2Node_DynamicCast_AsSBZPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, CallFunc_K2_GetPawn_ReturnValue) == 0x000020, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, K2Node_DynamicCast_AsSBZPlayer_Character) == 0x000028, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::K2Node_DynamicCast_AsSBZPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, CallFunc_GetAnimInstance_ReturnValue) == 0x000038, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, CallFunc_IsValid_ReturnValue_2) == 0x000041, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, CallFunc_GetCurrentActiveMontage_ReturnValue) == 0x000048, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::CallFunc_GetCurrentActiveMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag, CallFunc_GetAnimation_Animation) == 0x000050, "Member 'BP_CosmeticBag_C_ExecuteUbergraph_BP_CosmeticBag::CallFunc_GetAnimation_Animation' has a wrong offset!");

// Function BP_CosmeticBag.BP_CosmeticBag_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CosmeticBag_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CosmeticBag_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CosmeticBag_C_ReceiveTick");
static_assert(sizeof(BP_CosmeticBag_C_ReceiveTick) == 0x000004, "Wrong size on BP_CosmeticBag_C_ReceiveTick");
static_assert(offsetof(BP_CosmeticBag_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CosmeticBag_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_CosmeticBag.BP_CosmeticBag_C.GetAnimation
// 0x0030 (0x0030 - 0x0000)
struct BP_CosmeticBag_C_GetAnimation final
{
public:
	float                                         Duration;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          Animation;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CosmeticBag_C_GetAnimation) == 0x000008, "Wrong alignment on BP_CosmeticBag_C_GetAnimation");
static_assert(sizeof(BP_CosmeticBag_C_GetAnimation) == 0x000030, "Wrong size on BP_CosmeticBag_C_GetAnimation");
static_assert(offsetof(BP_CosmeticBag_C_GetAnimation, Duration) == 0x000000, "Member 'BP_CosmeticBag_C_GetAnimation::Duration' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_GetAnimation, Animation) == 0x000008, "Member 'BP_CosmeticBag_C_GetAnimation::Animation' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_GetAnimation, Temp_int_Array_Index_Variable) == 0x000010, "Member 'BP_CosmeticBag_C_GetAnimation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_GetAnimation, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'BP_CosmeticBag_C_GetAnimation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_GetAnimation, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_CosmeticBag_C_GetAnimation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_GetAnimation, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'BP_CosmeticBag_C_GetAnimation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_GetAnimation, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_CosmeticBag_C_GetAnimation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_GetAnimation, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'BP_CosmeticBag_C_GetAnimation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_GetAnimation, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000029, "Member 'BP_CosmeticBag_C_GetAnimation::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_CosmeticBag.BP_CosmeticBag_C.PlayAnimation
// 0x0018 (0x0018 - 0x0000)
struct BP_CosmeticBag_C_PlayAnimation final
{
public:
	class UAnimSequence*                          Animation;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Montage_GetPlayRate_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Montage_GetPosition_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CosmeticBag_C_PlayAnimation) == 0x000008, "Wrong alignment on BP_CosmeticBag_C_PlayAnimation");
static_assert(sizeof(BP_CosmeticBag_C_PlayAnimation) == 0x000018, "Wrong size on BP_CosmeticBag_C_PlayAnimation");
static_assert(offsetof(BP_CosmeticBag_C_PlayAnimation, Animation) == 0x000000, "Member 'BP_CosmeticBag_C_PlayAnimation::Animation' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_PlayAnimation, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_CosmeticBag_C_PlayAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_PlayAnimation, CallFunc_Montage_GetPlayRate_ReturnValue) == 0x00000C, "Member 'BP_CosmeticBag_C_PlayAnimation::CallFunc_Montage_GetPlayRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CosmeticBag_C_PlayAnimation, CallFunc_Montage_GetPosition_ReturnValue) == 0x000010, "Member 'BP_CosmeticBag_C_PlayAnimation::CallFunc_Montage_GetPosition_ReturnValue' has a wrong offset!");

}

