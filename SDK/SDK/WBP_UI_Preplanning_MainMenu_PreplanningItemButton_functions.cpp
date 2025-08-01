﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Preplanning_MainMenu_PreplanningItemButton

#include "Basic.hpp"

#include "WBP_UI_Preplanning_MainMenu_PreplanningItemButton_classes.hpp"
#include "WBP_UI_Preplanning_MainMenu_PreplanningItemButton_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.ExecuteUbergraph_WBP_UI_Preplanning_MainMenu_PreplanningItemButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::ExecuteUbergraph_WBP_UI_Preplanning_MainMenu_PreplanningItemButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "ExecuteUbergraph_WBP_UI_Preplanning_MainMenu_PreplanningItemButton");

	Params::WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C_ExecuteUbergraph_WBP_UI_Preplanning_MainMenu_PreplanningItemButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.ButtonDisabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInIsDisabled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::ButtonDisabledChanged(bool bInIsDisabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "ButtonDisabledChanged");

	Params::WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C_ButtonDisabledChanged Parms{};

	Parms.bInIsDisabled = bInIsDisabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.SetRemoveAssetButton
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsRemoveAssetButton                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::SetRemoveAssetButton(bool bIsRemoveAssetButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "SetRemoveAssetButton");

	Params::WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C_SetRemoveAssetButton Parms{};

	Parms.bIsRemoveAssetButton = bIsRemoveAssetButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.ButtonHoveredChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInIsHovered                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::ButtonHoveredChanged(bool bInIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "ButtonHoveredChanged");

	Params::WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C_ButtonHoveredChanged Parms{};

	Parms.bInIsHovered = bInIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.ButtonFocusedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInHasFocus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::ButtonFocusedChanged(bool bInHasFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "ButtonFocusedChanged");

	Params::WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C_ButtonFocusedChanged Parms{};

	Parms.bInHasFocus = bInHasFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.OnPrePlanningItemInitialized
// (Event, Protected, BlueprintEvent)
// Parameters:
// const class USBZPreplanningAssetData*   InPreplanningData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::OnPrePlanningItemInitialized(const class USBZPreplanningAssetData* InPreplanningData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "OnPrePlanningItemInitialized");

	Params::WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C_OnPrePlanningItemInitialized Parms{};

	Parms.InPreplanningData = InPreplanningData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "PreConstruct");

	Params::WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.RefreshVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::RefreshVisuals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "RefreshVisuals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.OnFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsFocused                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::OnFocused(bool bIsFocused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "OnFocused");

	Params::WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C_OnFocused Parms{};

	Parms.bIsFocused = bIsFocused;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Preplanning_MainMenu_PreplanningItemButton.WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C.OnHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsHovered                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Preplanning_MainMenu_PreplanningItemButton_C::OnHovered(bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C", "OnHovered");

	Params::WBP_UI_Preplanning_MainMenu_PreplanningItemButton_C_OnHovered Parms{};

	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}

}

