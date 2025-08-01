﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Placeable_ArmorBag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Placeable_ArmorBag.BP_Placeable_ArmorBag_C
// 0x0070 (0x05C0 - 0x0550)
class ABP_Placeable_ArmorBag_C final : public ASBZArmorBag
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Charge7;                                           // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Charge6;                                           // 0x0560(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Charge5;                                           // 0x0568(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Charge4;                                           // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Charge3;                                           // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Charge2;                                           // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Charge1;                                           // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Charge0;                                           // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBZShoutTargetComponent*               SBZShoutTarget;                                    // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_DDA650F645DC8EE33D3990BCFDD5C3E4; // 0x05A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A9[0x7];                                      // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x05B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReplicatedMarkerID;                                // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasBeenMarked;                                     // 0x05BC(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Placeable_ArmorBag(int32 EntryPoint);
	void BndEvt__BP_Placeable_ArmorBag_ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
	void OnChargesChanged(float ChargesChangeTo, bool bDoCosmetics);
	void BndEvt__SBZShoutTarget_K2Node_ComponentBoundEvent_2_SBZShoutedAtDelegate__DelegateSignature(class USBZShoutTargetComponent* ShoutTarget, class APawn* Shouter);
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void UpdateCharges(float NewChargeCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Placeable_ArmorBag_C">();
	}
	static class ABP_Placeable_ArmorBag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Placeable_ArmorBag_C>();
	}
};
static_assert(alignof(ABP_Placeable_ArmorBag_C) == 0x000010, "Wrong alignment on ABP_Placeable_ArmorBag_C");
static_assert(sizeof(ABP_Placeable_ArmorBag_C) == 0x0005C0, "Wrong size on ABP_Placeable_ArmorBag_C");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, UberGraphFrame) == 0x000550, "Member 'ABP_Placeable_ArmorBag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Charge7) == 0x000558, "Member 'ABP_Placeable_ArmorBag_C::Charge7' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Charge6) == 0x000560, "Member 'ABP_Placeable_ArmorBag_C::Charge6' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Charge5) == 0x000568, "Member 'ABP_Placeable_ArmorBag_C::Charge5' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Charge4) == 0x000570, "Member 'ABP_Placeable_ArmorBag_C::Charge4' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Charge3) == 0x000578, "Member 'ABP_Placeable_ArmorBag_C::Charge3' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Charge2) == 0x000580, "Member 'ABP_Placeable_ArmorBag_C::Charge2' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Charge1) == 0x000588, "Member 'ABP_Placeable_ArmorBag_C::Charge1' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Charge0) == 0x000590, "Member 'ABP_Placeable_ArmorBag_C::Charge0' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, SBZShoutTarget) == 0x000598, "Member 'ABP_Placeable_ArmorBag_C::SBZShoutTarget' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Scene) == 0x0005A0, "Member 'ABP_Placeable_ArmorBag_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Timeline_0__Direction_DDA650F645DC8EE33D3990BCFDD5C3E4) == 0x0005A8, "Member 'ABP_Placeable_ArmorBag_C::Timeline_0__Direction_DDA650F645DC8EE33D3990BCFDD5C3E4' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, Timeline_0) == 0x0005B0, "Member 'ABP_Placeable_ArmorBag_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, ReplicatedMarkerID) == 0x0005B8, "Member 'ABP_Placeable_ArmorBag_C::ReplicatedMarkerID' has a wrong offset!");
static_assert(offsetof(ABP_Placeable_ArmorBag_C, HasBeenMarked) == 0x0005BC, "Member 'ABP_Placeable_ArmorBag_C::HasBeenMarked' has a wrong offset!");

}

