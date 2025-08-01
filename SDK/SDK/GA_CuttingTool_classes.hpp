﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CuttingTool

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_CuttingTool.GA_CuttingTool_C
// 0x0000 (0x0530 - 0x0530)
class UGA_CuttingTool_C final : public USBZCuttingToolAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_CuttingTool_C">();
	}
	static class UGA_CuttingTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_CuttingTool_C>();
	}
};
static_assert(alignof(UGA_CuttingTool_C) == 0x000008, "Wrong alignment on UGA_CuttingTool_C");
static_assert(sizeof(UGA_CuttingTool_C) == 0x000530, "Wrong size on UGA_CuttingTool_C");

}

