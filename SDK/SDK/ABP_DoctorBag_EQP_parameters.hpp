﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_DoctorBag_EQP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_DoctorBag_EQP.ABP_DoctorBag_EQP_C.ExecuteUbergraph_ABP_DoctorBag_EQP
// 0x0004 (0x0004 - 0x0000)
struct ABP_DoctorBag_EQP_C_ExecuteUbergraph_ABP_DoctorBag_EQP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_DoctorBag_EQP_C_ExecuteUbergraph_ABP_DoctorBag_EQP) == 0x000004, "Wrong alignment on ABP_DoctorBag_EQP_C_ExecuteUbergraph_ABP_DoctorBag_EQP");
static_assert(sizeof(ABP_DoctorBag_EQP_C_ExecuteUbergraph_ABP_DoctorBag_EQP) == 0x000004, "Wrong size on ABP_DoctorBag_EQP_C_ExecuteUbergraph_ABP_DoctorBag_EQP");
static_assert(offsetof(ABP_DoctorBag_EQP_C_ExecuteUbergraph_ABP_DoctorBag_EQP, EntryPoint) == 0x000000, "Member 'ABP_DoctorBag_EQP_C_ExecuteUbergraph_ABP_DoctorBag_EQP::EntryPoint' has a wrong offset!");

// Function ABP_DoctorBag_EQP.ABP_DoctorBag_EQP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_DoctorBag_EQP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_DoctorBag_EQP_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_DoctorBag_EQP_C_AnimGraph");
static_assert(sizeof(ABP_DoctorBag_EQP_C_AnimGraph) == 0x000010, "Wrong size on ABP_DoctorBag_EQP_C_AnimGraph");
static_assert(offsetof(ABP_DoctorBag_EQP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_DoctorBag_EQP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

