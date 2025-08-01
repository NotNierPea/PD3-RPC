﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CosmeticPaperStack

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CosmeticPaperStack.BP_CosmeticPaperStack_C
// 0x0020 (0x02E8 - 0x02C8)
class ABP_CosmeticPaperStack_C final : public ASBZCosmeticProp
{
public:
	class UStaticMeshComponent*                   Paper3;                                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Paper2;                                            // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   paper;                                             // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CosmeticPaperStack_C">();
	}
	static class ABP_CosmeticPaperStack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CosmeticPaperStack_C>();
	}
};
static_assert(alignof(ABP_CosmeticPaperStack_C) == 0x000008, "Wrong alignment on ABP_CosmeticPaperStack_C");
static_assert(sizeof(ABP_CosmeticPaperStack_C) == 0x0002E8, "Wrong size on ABP_CosmeticPaperStack_C");
static_assert(offsetof(ABP_CosmeticPaperStack_C, Paper3) == 0x0002C8, "Member 'ABP_CosmeticPaperStack_C::Paper3' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticPaperStack_C, Paper2) == 0x0002D0, "Member 'ABP_CosmeticPaperStack_C::Paper2' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticPaperStack_C, paper) == 0x0002D8, "Member 'ABP_CosmeticPaperStack_C::paper' has a wrong offset!");
static_assert(offsetof(ABP_CosmeticPaperStack_C, StaticMesh) == 0x0002E0, "Member 'ABP_CosmeticPaperStack_C::StaticMesh' has a wrong offset!");

}

