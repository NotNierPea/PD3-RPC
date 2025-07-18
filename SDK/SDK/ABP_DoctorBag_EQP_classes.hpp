﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DoctorBag_EQP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_DoctorBag_EQP.ABP_DoctorBag_EQP_C
// 0x0180 (0x0450 - 0x02D0)
class UABP_DoctorBag_EQP_C final : public USBZEquippableAnimation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0320(0x00D0)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x03F0(0x0060)()

public:
	void ExecuteUbergraph_ABP_DoctorBag_EQP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_DoctorBag_EQP_C">();
	}
	static class UABP_DoctorBag_EQP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_DoctorBag_EQP_C>();
	}
};
static_assert(alignof(UABP_DoctorBag_EQP_C) == 0x000010, "Wrong alignment on UABP_DoctorBag_EQP_C");
static_assert(sizeof(UABP_DoctorBag_EQP_C) == 0x000450, "Wrong size on UABP_DoctorBag_EQP_C");
static_assert(offsetof(UABP_DoctorBag_EQP_C, UberGraphFrame) == 0x0002D0, "Member 'UABP_DoctorBag_EQP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_DoctorBag_EQP_C, AnimGraphNode_Root) == 0x0002D8, "Member 'UABP_DoctorBag_EQP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_DoctorBag_EQP_C, AnimGraphNode_SequencePlayer) == 0x000320, "Member 'UABP_DoctorBag_EQP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_DoctorBag_EQP_C, AnimGraphNode_Slot) == 0x0003F0, "Member 'UABP_DoctorBag_EQP_C::AnimGraphNode_Slot' has a wrong offset!");

}

