﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_PlayerThrowBagAnimation

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_PlayerThrowBagAnimation.GA_PlayerThrowBagAnimation_C
// 0x0000 (0x04D8 - 0x04D8)
class UGA_PlayerThrowBagAnimation_C final : public USBZThrowBagAnimationAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_PlayerThrowBagAnimation_C">();
	}
	static class UGA_PlayerThrowBagAnimation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_PlayerThrowBagAnimation_C>();
	}
};
static_assert(alignof(UGA_PlayerThrowBagAnimation_C) == 0x000008, "Wrong alignment on UGA_PlayerThrowBagAnimation_C");
static_assert(sizeof(UGA_PlayerThrowBagAnimation_C) == 0x0004D8, "Wrong size on UGA_PlayerThrowBagAnimation_C");

}

