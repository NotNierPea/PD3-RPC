﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_ViewTargetContainer

#include "Basic.hpp"

#include "WBP_UI_ViewTargetContainer_classes.hpp"
#include "WBP_UI_ViewTargetContainer_parameters.hpp"


namespace SDK
{

// Function WBP_UI_ViewTargetContainer.WBP_UI_ViewTargetContainer_C.ExecuteUbergraph_WBP_UI_ViewTargetContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_ViewTargetContainer_C::ExecuteUbergraph_WBP_UI_ViewTargetContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ViewTargetContainer_C", "ExecuteUbergraph_WBP_UI_ViewTargetContainer");

	Params::WBP_UI_ViewTargetContainer_C_ExecuteUbergraph_WBP_UI_ViewTargetContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_ViewTargetContainer.WBP_UI_ViewTargetContainer_C.IsSecurityCamera
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSecurityCamera                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_ViewTargetContainer_C::IsSecurityCamera(bool bIsSecurityCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_ViewTargetContainer_C", "IsSecurityCamera");

	Params::WBP_UI_ViewTargetContainer_C_IsSecurityCamera Parms{};

	Parms.bIsSecurityCamera = bIsSecurityCamera;

	UObject::ProcessEvent(Func, &Parms);
}

}

