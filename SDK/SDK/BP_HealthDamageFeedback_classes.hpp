﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HealthDamageFeedback

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HealthDamageFeedback.BP_HealthDamageFeedback_C
// 0x0000 (0x0308 - 0x0308)
class UBP_HealthDamageFeedback_C final : public USBZLocalPlayerFeedback
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HealthDamageFeedback_C">();
	}
	static class UBP_HealthDamageFeedback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HealthDamageFeedback_C>();
	}
};
static_assert(alignof(UBP_HealthDamageFeedback_C) == 0x000008, "Wrong alignment on UBP_HealthDamageFeedback_C");
static_assert(sizeof(UBP_HealthDamageFeedback_C) == 0x000308, "Wrong size on UBP_HealthDamageFeedback_C");

}

