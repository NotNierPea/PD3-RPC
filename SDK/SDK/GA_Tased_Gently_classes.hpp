﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Tased_Gently

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Tased_Gently.GA_Tased_Gently_C
// 0x0000 (0x0508 - 0x0508)
class UGA_Tased_Gently_C final : public USBZPlayerTasedGentlyAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Tased_Gently_C">();
	}
	static class UGA_Tased_Gently_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Tased_Gently_C>();
	}
};
static_assert(alignof(UGA_Tased_Gently_C) == 0x000008, "Wrong alignment on UGA_Tased_Gently_C");
static_assert(sizeof(UGA_Tased_Gently_C) == 0x000508, "Wrong size on UGA_Tased_Gently_C");

}

