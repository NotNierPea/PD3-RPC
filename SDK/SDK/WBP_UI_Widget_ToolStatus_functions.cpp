﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_ToolStatus

#include "Basic.hpp"

#include "WBP_UI_Widget_ToolStatus_classes.hpp"
#include "WBP_UI_Widget_ToolStatus_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Widget_ToolStatus.WBP_UI_Widget_ToolStatus_C.ExecuteUbergraph_WBP_UI_Widget_ToolStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_ToolStatus_C::ExecuteUbergraph_WBP_UI_Widget_ToolStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ToolStatus_C", "ExecuteUbergraph_WBP_UI_Widget_ToolStatus");

	Params::WBP_UI_Widget_ToolStatus_C_ExecuteUbergraph_WBP_UI_Widget_ToolStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_ToolStatus.WBP_UI_Widget_ToolStatus_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Widget_ToolStatus_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ToolStatus_C", "PreConstruct");

	Params::WBP_UI_Widget_ToolStatus_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_ToolStatus.WBP_UI_Widget_ToolStatus_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_Widget_ToolStatus_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ToolStatus_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Widget_ToolStatus.WBP_UI_Widget_ToolStatus_C.OnAmmoInventoryChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   InAmmoInventory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_ToolStatus_C::OnAmmoInventoryChanged(int32 InAmmoInventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ToolStatus_C", "OnAmmoInventoryChanged");

	Params::WBP_UI_Widget_ToolStatus_C_OnAmmoInventoryChanged Parms{};

	Parms.InAmmoInventory = InAmmoInventory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_ToolStatus.WBP_UI_Widget_ToolStatus_C.OnIconChanged
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const TSoftObjectPtr<class UPaperSprite>&InIcon                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UWBP_UI_Widget_ToolStatus_C::OnIconChanged(const TSoftObjectPtr<class UPaperSprite>& InIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ToolStatus_C", "OnIconChanged");

	Params::WBP_UI_Widget_ToolStatus_C_OnIconChanged Parms{};

	Parms.InIcon = InIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Widget_ToolStatus.WBP_UI_Widget_ToolStatus_C.OnLoaded_A0844DD742EC9339633A2895004DB1BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Widget_ToolStatus_C::OnLoaded_A0844DD742EC9339633A2895004DB1BB(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Widget_ToolStatus_C", "OnLoaded_A0844DD742EC9339633A2895004DB1BB");

	Params::WBP_UI_Widget_ToolStatus_C_OnLoaded_A0844DD742EC9339633A2895004DB1BB Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}

