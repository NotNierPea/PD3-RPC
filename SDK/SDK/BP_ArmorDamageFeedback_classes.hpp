﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ArmorDamageFeedback

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ArmorDamageFeedback.BP_ArmorDamageFeedback_C
// 0x0000 (0x0308 - 0x0308)
class UBP_ArmorDamageFeedback_C final : public USBZLocalPlayerFeedback
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ArmorDamageFeedback_C">();
	}
	static class UBP_ArmorDamageFeedback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ArmorDamageFeedback_C>();
	}
};
static_assert(alignof(UBP_ArmorDamageFeedback_C) == 0x000008, "Wrong alignment on UBP_ArmorDamageFeedback_C");
static_assert(sizeof(UBP_ArmorDamageFeedback_C) == 0x000308, "Wrong size on UBP_ArmorDamageFeedback_C");

}

