﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WeaponStatsBlueprint

#include "Basic.hpp"

#include "UI_WeaponStatsBlueprint_classes.hpp"
#include "UI_WeaponStatsBlueprint_parameters.hpp"


namespace SDK
{

// Function UI_WeaponStatsBlueprint.UI_WeaponStatsBlueprint_C.GetAccuracyValueArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class USBZRangedWeaponData*       RangedWeaponData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>*                          OutValueArray                                          (Parm, OutParm)

void UUI_WeaponStatsBlueprint_C::GetAccuracyValueArray(const class USBZRangedWeaponData* RangedWeaponData, TArray<float>* OutValueArray) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponStatsBlueprint_C", "GetAccuracyValueArray");

	Params::UI_WeaponStatsBlueprint_C_GetAccuracyValueArray Parms{};

	Parms.RangedWeaponData = RangedWeaponData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValueArray != nullptr)
		*OutValueArray = std::move(Parms.OutValueArray);
}


// Function UI_WeaponStatsBlueprint.UI_WeaponStatsBlueprint_C.GetDamageValueArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class USBZRangedWeaponData*       RangedWeaponData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>*                          OutValueArray                                          (Parm, OutParm)

void UUI_WeaponStatsBlueprint_C::GetDamageValueArray(const class USBZRangedWeaponData* RangedWeaponData, TArray<float>* OutValueArray) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponStatsBlueprint_C", "GetDamageValueArray");

	Params::UI_WeaponStatsBlueprint_C_GetDamageValueArray Parms{};

	Parms.RangedWeaponData = RangedWeaponData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValueArray != nullptr)
		*OutValueArray = std::move(Parms.OutValueArray);
}


// Function UI_WeaponStatsBlueprint.UI_WeaponStatsBlueprint_C.GetFireRateValueArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class USBZRangedWeaponData*       RangedWeaponData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>*                          OutValueArray                                          (Parm, OutParm)

void UUI_WeaponStatsBlueprint_C::GetFireRateValueArray(const class USBZRangedWeaponData* RangedWeaponData, TArray<float>* OutValueArray) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponStatsBlueprint_C", "GetFireRateValueArray");

	Params::UI_WeaponStatsBlueprint_C_GetFireRateValueArray Parms{};

	Parms.RangedWeaponData = RangedWeaponData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValueArray != nullptr)
		*OutValueArray = std::move(Parms.OutValueArray);
}


// Function UI_WeaponStatsBlueprint.UI_WeaponStatsBlueprint_C.GetHandlingValueArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class USBZRangedWeaponData*       RangedWeaponData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>*                          OutValueArray                                          (Parm, OutParm)

void UUI_WeaponStatsBlueprint_C::GetHandlingValueArray(const class USBZRangedWeaponData* RangedWeaponData, TArray<float>* OutValueArray) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponStatsBlueprint_C", "GetHandlingValueArray");

	Params::UI_WeaponStatsBlueprint_C_GetHandlingValueArray Parms{};

	Parms.RangedWeaponData = RangedWeaponData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValueArray != nullptr)
		*OutValueArray = std::move(Parms.OutValueArray);
}


// Function UI_WeaponStatsBlueprint.UI_WeaponStatsBlueprint_C.GetRecoilValueArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class USBZRangedWeaponData*       RangedWeaponData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>*                          OutValueArray                                          (Parm, OutParm)

void UUI_WeaponStatsBlueprint_C::GetRecoilValueArray(const class USBZRangedWeaponData* RangedWeaponData, TArray<float>* OutValueArray) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponStatsBlueprint_C", "GetRecoilValueArray");

	Params::UI_WeaponStatsBlueprint_C_GetRecoilValueArray Parms{};

	Parms.RangedWeaponData = RangedWeaponData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValueArray != nullptr)
		*OutValueArray = std::move(Parms.OutValueArray);
}


// Function UI_WeaponStatsBlueprint.UI_WeaponStatsBlueprint_C.GetStabilityValueArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const class USBZRangedWeaponData*       RangedWeaponData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>*                          OutValueArray                                          (Parm, OutParm)

void UUI_WeaponStatsBlueprint_C::GetStabilityValueArray(const class USBZRangedWeaponData* RangedWeaponData, TArray<float>* OutValueArray) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponStatsBlueprint_C", "GetStabilityValueArray");

	Params::UI_WeaponStatsBlueprint_C_GetStabilityValueArray Parms{};

	Parms.RangedWeaponData = RangedWeaponData;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValueArray != nullptr)
		*OutValueArray = std::move(Parms.OutValueArray);
}

}

