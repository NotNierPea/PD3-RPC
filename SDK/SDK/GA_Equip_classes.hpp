﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Equip

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Equip.GA_Equip_C
// 0x0000 (0x04E0 - 0x04E0)
class UGA_Equip_C final : public USBZGameplayAbility_Equip
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Equip_C">();
	}
	static class UGA_Equip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Equip_C>();
	}
};
static_assert(alignof(UGA_Equip_C) == 0x000008, "Wrong alignment on UGA_Equip_C");
static_assert(sizeof(UGA_Equip_C) == 0x0004E0, "Wrong size on UGA_Equip_C");

}

