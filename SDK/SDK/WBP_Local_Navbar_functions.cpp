﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Local_Navbar

#include "Basic.hpp"

#include "WBP_Local_Navbar_classes.hpp"
#include "WBP_Local_Navbar_parameters.hpp"


namespace SDK
{

// Function WBP_Local_Navbar.WBP_Local_Navbar_C.ExecuteUbergraph_WBP_Local_Navbar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Local_Navbar_C::ExecuteUbergraph_WBP_Local_Navbar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Local_Navbar_C", "ExecuteUbergraph_WBP_Local_Navbar");

	Params::WBP_Local_Navbar_C_ExecuteUbergraph_WBP_Local_Navbar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Local_Navbar.WBP_Local_Navbar_C.RebuildNavbar
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_Local_Navbar_C::RebuildNavbar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Local_Navbar_C", "RebuildNavbar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Local_Navbar.WBP_Local_Navbar_C.RefreshButtons
// (BlueprintCallable, BlueprintEvent)

void UWBP_Local_Navbar_C::RefreshButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Local_Navbar_C", "RefreshButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Local_Navbar.WBP_Local_Navbar_C.OnTabBackward
// (BlueprintCallable, BlueprintEvent)

void UWBP_Local_Navbar_C::OnTabBackward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Local_Navbar_C", "OnTabBackward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Local_Navbar.WBP_Local_Navbar_C.OnTabForward
// (BlueprintCallable, BlueprintEvent)

void UWBP_Local_Navbar_C::OnTabForward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Local_Navbar_C", "OnTabForward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Local_Navbar.WBP_Local_Navbar_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Local_Navbar_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Local_Navbar_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Local_Navbar.WBP_Local_Navbar_C.NavBarButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutNavBarIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Local_Navbar_C::NavBarButtonClicked(int32 OutNavBarIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Local_Navbar_C", "NavBarButtonClicked");

	Params::WBP_Local_Navbar_C_NavBarButtonClicked Parms{};

	Parms.OutNavBarIndex = OutNavBarIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Local_Navbar.WBP_Local_Navbar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Local_Navbar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Local_Navbar_C", "PreConstruct");

	Params::WBP_Local_Navbar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Local_Navbar.WBP_Local_Navbar_C.UpdateIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewActiveIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInitial                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_Local_Navbar_C::UpdateIndex(int32 NewActiveIndex, bool IsInitial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Local_Navbar_C", "UpdateIndex");

	Params::WBP_Local_Navbar_C_UpdateIndex Parms{};

	Parms.NewActiveIndex = NewActiveIndex;
	Parms.IsInitial = IsInitial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Local_Navbar.WBP_Local_Navbar_C.SetMaxCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InMaxCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Local_Navbar_C::SetMaxCount(int32 InMaxCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Local_Navbar_C", "SetMaxCount");

	Params::WBP_Local_Navbar_C_SetMaxCount Parms{};

	Parms.InMaxCount = InMaxCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

