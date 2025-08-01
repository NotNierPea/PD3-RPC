﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Loadout_WeaponCustomizationNew

#include "Basic.hpp"

#include "WBP_MainMenu_Loadout_WeaponCustomizationNew_classes.hpp"
#include "WBP_MainMenu_Loadout_WeaponCustomizationNew_parameters.hpp"


namespace SDK
{

// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew");

	Params::WBP_MainMenu_Loadout_WeaponCustomizationNew_C_ExecuteUbergraph_WBP_MainMenu_Loadout_WeaponCustomizationNew Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnAddedToStack
// (Event, Protected, BlueprintEvent)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::OnAddedToStack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "OnAddedToStack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnRemovedFromStack
// (Event, Protected, BlueprintEvent)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::OnRemovedFromStack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "OnRemovedFromStack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.BndEvt__WBP_MainMenu_Loadout_WeaponCustomizationNew_TutorialPopup_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::BndEvt__WBP_MainMenu_Loadout_WeaponCustomizationNew_TutorialPopup_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "BndEvt__WBP_MainMenu_Loadout_WeaponCustomizationNew_TutorialPopup_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnTutorialHidden
// (Event, Protected, BlueprintEvent)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::OnTutorialHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "OnTutorialHidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnBackPressed
// (Event, Protected, BlueprintEvent)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::OnBackPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "OnBackPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnCategoryButtonFocused
// (Event, Public, BlueprintEvent)
// Parameters:
// class USBZMenuButton*                   InButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsFocused                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::OnCategoryButtonFocused(class USBZMenuButton* InButton, bool bIsFocused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "OnCategoryButtonFocused");

	Params::WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnCategoryButtonFocused Parms{};

	Parms.InButton = InButton;
	Parms.bIsFocused = bIsFocused;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnControlsReferenceClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InActionInput                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::OnControlsReferenceClicked(class FName InActionInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "OnControlsReferenceClicked");

	Params::WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnControlsReferenceClicked Parms{};

	Parms.InActionInput = InActionInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnLostStackFocused
// (Event, Protected, BlueprintEvent)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::OnLostStackFocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "OnLostStackFocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.OnGainedStackFocused
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FName&                      PreviousValue                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::OnGainedStackFocused(const class FName& PreviousValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "OnGainedStackFocused");

	Params::WBP_MainMenu_Loadout_WeaponCustomizationNew_C_OnGainedStackFocused Parms{};

	Parms.PreviousValue = PreviousValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.UpdateControlsReference
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::UpdateControlsReference()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "UpdateControlsReference");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Loadout_WeaponCustomizationNew.WBP_MainMenu_Loadout_WeaponCustomizationNew_C.SetCategoryPadding
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_Loadout_WeaponCustomizationNew_C::SetCategoryPadding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Loadout_WeaponCustomizationNew_C", "SetCategoryPadding");

	UObject::ProcessEvent(Func, nullptr);
}

}

