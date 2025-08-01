﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PhoneToolClickable

#include "Basic.hpp"

#include "BP_PhoneToolClickable_classes.hpp"
#include "BP_PhoneToolClickable_parameters.hpp"


namespace SDK
{

// Function BP_PhoneToolClickable.BP_PhoneToolClickable_C.ExecuteUbergraph_BP_PhoneToolClickable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PhoneToolClickable_C::ExecuteUbergraph_BP_PhoneToolClickable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhoneToolClickable_C", "ExecuteUbergraph_BP_PhoneToolClickable");

	Params::BP_PhoneToolClickable_C_ExecuteUbergraph_BP_PhoneToolClickable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PhoneToolClickable.BP_PhoneToolClickable_C.OnActivated
// (Event, Protected, BlueprintEvent)

void ABP_PhoneToolClickable_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhoneToolClickable_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PhoneToolClickable.BP_PhoneToolClickable_C.OnCanceled
// (Event, Protected, BlueprintEvent)

void ABP_PhoneToolClickable_C::OnCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhoneToolClickable_C", "OnCanceled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PhoneToolClickable.BP_PhoneToolClickable_C.OnReady
// (Event, Protected, BlueprintEvent)

void ABP_PhoneToolClickable_C::OnReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PhoneToolClickable_C", "OnReady");

	UObject::ProcessEvent(Func, nullptr);
}

}

