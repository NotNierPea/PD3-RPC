﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NQF_Crew_Combat

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NQF_Crew_Combat.NQF_Crew_Combat_C
// 0x0000 (0x0050 - 0x0050)
class UNQF_Crew_Combat_C final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NQF_Crew_Combat_C">();
	}
	static class UNQF_Crew_Combat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNQF_Crew_Combat_C>();
	}
};
static_assert(alignof(UNQF_Crew_Combat_C) == 0x000008, "Wrong alignment on UNQF_Crew_Combat_C");
static_assert(sizeof(UNQF_Crew_Combat_C) == 0x000050, "Wrong size on UNQF_Crew_Combat_C");

}

