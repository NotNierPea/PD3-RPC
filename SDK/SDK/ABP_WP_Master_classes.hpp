﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_WP_Master

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_WP_Master.ABP_WP_Master_C
// 0x1210 (0x15A0 - 0x0390)
class UABP_WP_Master_C final : public USBZWeaponAnimation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0398(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x03E0(0x0060)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0440(0x0060)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x04A0(0x00D0)()
	struct FSBZAnimNode_BoneKeepRefPose           SBZAnimGraphNode_BoneKeepRefPose;                  // 0x0570(0x0108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0678(0x0030)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x06A8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x06D8(0x00D0)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x07A8(0x00E8)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0890(0x08B0)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x1140(0x00D8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x1218(0x0168)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x1380(0x0040)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x13C0(0x0040)()
	struct FAnimNode_Inertialization              AnimGraphNode_Inertialization;                     // 0x1400(0x0080)()
	struct FSBZAnimNode_CopyBoneDeltaMultiTargets SBZAnimGraphNode_CopyBoneDeltaMultiTargets;        // 0x1480(0x0120)()

public:
	void ExecuteUbergraph_ABP_WP_Master(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_WP_Master_AnimGraphNode_ApplyAdditive_85D4F45E4F8F7BDA666392AE5DD6049F();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_WP_Master_C">();
	}
	static class UABP_WP_Master_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_WP_Master_C>();
	}
};
static_assert(alignof(UABP_WP_Master_C) == 0x000010, "Wrong alignment on UABP_WP_Master_C");
static_assert(sizeof(UABP_WP_Master_C) == 0x0015A0, "Wrong size on UABP_WP_Master_C");
static_assert(offsetof(UABP_WP_Master_C, UberGraphFrame) == 0x000390, "Member 'UABP_WP_Master_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_Root) == 0x000398, "Member 'UABP_WP_Master_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_Slot_1) == 0x0003E0, "Member 'UABP_WP_Master_C::AnimGraphNode_Slot_1' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_Slot) == 0x000440, "Member 'UABP_WP_Master_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_SequencePlayer_1) == 0x0004A0, "Member 'UABP_WP_Master_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, SBZAnimGraphNode_BoneKeepRefPose) == 0x000570, "Member 'UABP_WP_Master_C::SBZAnimGraphNode_BoneKeepRefPose' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_LocalToComponentSpace) == 0x000678, "Member 'UABP_WP_Master_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_ComponentToLocalSpace) == 0x0006A8, "Member 'UABP_WP_Master_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_SequencePlayer) == 0x0006D8, "Member 'UABP_WP_Master_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_ApplyAdditive) == 0x0007A8, "Member 'UABP_WP_Master_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_RigidBody) == 0x000890, "Member 'UABP_WP_Master_C::AnimGraphNode_RigidBody' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_TwoWayBlend) == 0x001140, "Member 'UABP_WP_Master_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_SaveCachedPose) == 0x001218, "Member 'UABP_WP_Master_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_UseCachedPose_1) == 0x001380, "Member 'UABP_WP_Master_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_UseCachedPose) == 0x0013C0, "Member 'UABP_WP_Master_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, AnimGraphNode_Inertialization) == 0x001400, "Member 'UABP_WP_Master_C::AnimGraphNode_Inertialization' has a wrong offset!");
static_assert(offsetof(UABP_WP_Master_C, SBZAnimGraphNode_CopyBoneDeltaMultiTargets) == 0x001480, "Member 'UABP_WP_Master_C::SBZAnimGraphNode_CopyBoneDeltaMultiTargets' has a wrong offset!");

}

