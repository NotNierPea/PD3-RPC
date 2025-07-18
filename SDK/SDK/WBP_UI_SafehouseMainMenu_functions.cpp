﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_SafehouseMainMenu

#include "Basic.hpp"

#include "WBP_UI_SafehouseMainMenu_classes.hpp"
#include "WBP_UI_SafehouseMainMenu_parameters.hpp"


namespace SDK
{

// Function WBP_UI_SafehouseMainMenu.WBP_UI_SafehouseMainMenu_C.ExecuteUbergraph_WBP_UI_SafehouseMainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_SafehouseMainMenu_C::ExecuteUbergraph_WBP_UI_SafehouseMainMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_SafehouseMainMenu_C", "ExecuteUbergraph_WBP_UI_SafehouseMainMenu");

	Params::WBP_UI_SafehouseMainMenu_C_ExecuteUbergraph_WBP_UI_SafehouseMainMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_SafehouseMainMenu.WBP_UI_SafehouseMainMenu_C.OnLobbyEntered
// (BlueprintCallable, BlueprintEvent)

void UWBP_UI_SafehouseMainMenu_C::OnLobbyEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_SafehouseMainMenu_C", "OnLobbyEntered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_SafehouseMainMenu.WBP_UI_SafehouseMainMenu_C.OnRemovedFromStack
// (Event, Protected, BlueprintEvent)

void UWBP_UI_SafehouseMainMenu_C::OnRemovedFromStack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_SafehouseMainMenu_C", "OnRemovedFromStack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_SafehouseMainMenu.WBP_UI_SafehouseMainMenu_C.OnAddedToStack
// (Event, Protected, BlueprintEvent)

void UWBP_UI_SafehouseMainMenu_C::OnAddedToStack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_SafehouseMainMenu_C", "OnAddedToStack");

	UObject::ProcessEvent(Func, nullptr);
}

}

