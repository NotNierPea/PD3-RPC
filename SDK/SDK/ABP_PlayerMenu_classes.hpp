﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PlayerMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_PlayerMenu.ABP_PlayerMenu_C
// 0x0C50 (0x0FA0 - 0x0350)
class UABP_PlayerMenu_C final : public USBZMainMenuPlayerAnimation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0358(0x00D0)()
	uint8                                         Pad_428[0x8];                                      // 0x0428(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK_1;                         // 0x0430(0x0240)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x0670(0x0240)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x08B0(0x0138)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x09E8(0x0138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0B20(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0B50(0x0048)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_1;                  // 0x0B98(0x00E8)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0C80(0x00E8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x0D68(0x00D0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0E38(0x00D0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0F08(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0F38(0x0060)()

public:
	void ExecuteUbergraph_ABP_PlayerMenu(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerMenu_AnimGraphNode_ModifyBone_12E0E52C405F26D8B89282A7D21078DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerMenu_AnimGraphNode_ModifyBone_A8FE88E84CB3CF3C381924947064EBB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerMenu_AnimGraphNode_LayeredBoneBlend_C668051B40192EEEAA35C0BB7E7E8B0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerMenu_AnimGraphNode_LayeredBoneBlend_021DE2D8451C526E96F55F86C9099E9F();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_PlayerMenu_C">();
	}
	static class UABP_PlayerMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_PlayerMenu_C>();
	}
};
static_assert(alignof(UABP_PlayerMenu_C) == 0x000010, "Wrong alignment on UABP_PlayerMenu_C");
static_assert(sizeof(UABP_PlayerMenu_C) == 0x000FA0, "Wrong size on UABP_PlayerMenu_C");
static_assert(offsetof(UABP_PlayerMenu_C, UberGraphFrame) == 0x000350, "Member 'UABP_PlayerMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_SequencePlayer_2) == 0x000358, "Member 'UABP_PlayerMenu_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_TwoBoneIK_1) == 0x000430, "Member 'UABP_PlayerMenu_C::AnimGraphNode_TwoBoneIK_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_TwoBoneIK) == 0x000670, "Member 'UABP_PlayerMenu_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_ModifyBone_1) == 0x0008B0, "Member 'UABP_PlayerMenu_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_ModifyBone) == 0x0009E8, "Member 'UABP_PlayerMenu_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_LocalToComponentSpace) == 0x000B20, "Member 'UABP_PlayerMenu_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_Root) == 0x000B50, "Member 'UABP_PlayerMenu_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_LayeredBoneBlend_1) == 0x000B98, "Member 'UABP_PlayerMenu_C::AnimGraphNode_LayeredBoneBlend_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_LayeredBoneBlend) == 0x000C80, "Member 'UABP_PlayerMenu_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_SequencePlayer_1) == 0x000D68, "Member 'UABP_PlayerMenu_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_SequencePlayer) == 0x000E38, "Member 'UABP_PlayerMenu_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_ComponentToLocalSpace) == 0x000F08, "Member 'UABP_PlayerMenu_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_PlayerMenu_C, AnimGraphNode_Slot) == 0x000F38, "Member 'UABP_PlayerMenu_C::AnimGraphNode_Slot' has a wrong offset!");

}

