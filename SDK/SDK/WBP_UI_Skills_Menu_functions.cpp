﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Skills_Menu

#include "Basic.hpp"

#include "WBP_UI_Skills_Menu_classes.hpp"
#include "WBP_UI_Skills_Menu_parameters.hpp"


namespace SDK
{

// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.ExecuteUbergraph_WBP_UI_Skills_Menu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Skills_Menu_C::ExecuteUbergraph_WBP_UI_Skills_Menu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "ExecuteUbergraph_WBP_UI_Skills_Menu");

	Params::WBP_UI_Skills_Menu_C_ExecuteUbergraph_WBP_UI_Skills_Menu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.OnInstallStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsGameInstallPending                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Skills_Menu_C::OnInstallStateChanged(bool bIsGameInstallPending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "OnInstallStateChanged");

	Params::WBP_UI_Skills_Menu_C_OnInstallStateChanged Parms{};

	Parms.bIsGameInstallPending = bIsGameInstallPending;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Skills_Menu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "PreConstruct");

	Params::WBP_UI_Skills_Menu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.OnControlsReferenceClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Skills_Menu_C::OnControlsReferenceClicked(class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "OnControlsReferenceClicked");

	Params::WBP_UI_Skills_Menu_C_OnControlsReferenceClicked Parms{};

	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_UI_Skills_Menu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_UI_Loadout_SkillsCustomization_C*parent_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Skills_Menu_C::Init(class UWBP_UI_Loadout_SkillsCustomization_C* parent_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "Init");

	Params::WBP_UI_Skills_Menu_C_Init Parms{};

	Parms.parent_0 = parent_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.ShowScreen
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class USBZSkillData*>&     PlayerSkills_0                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_UI_Skills_Menu_C::ShowScreen(const TArray<class USBZSkillData*>& PlayerSkills_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "ShowScreen");

	Params::WBP_UI_Skills_Menu_C_ShowScreen Parms{};

	Parms.PlayerSkills_0 = std::move(PlayerSkills_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.SetEquipSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBZSkill*                        Skill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBZSkillState                          SkillState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Skills_Menu_C::SetEquipSkill(class USBZSkill* Skill, ESBZSkillState SkillState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "SetEquipSkill");

	Params::WBP_UI_Skills_Menu_C_SetEquipSkill Parms{};

	Parms.Skill = Skill;
	Parms.SkillState = SkillState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.DebugSetResearch
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Skills_Menu_C::DebugSetResearch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "DebugSetResearch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.SetSkillLineResearchMarker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_UI_Skills_Line_C*            SkillLineWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Skills_Menu_C::SetSkillLineResearchMarker(class UWBP_UI_Skills_Line_C* SkillLineWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "SetSkillLineResearchMarker");

	Params::WBP_UI_Skills_Menu_C_SetSkillLineResearchMarker Parms{};

	Parms.SkillLineWidget = SkillLineWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.SetButtonFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Skills_Menu_C::SetButtonFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "SetButtonFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.SetAcedSkills
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Skills_Menu_C::SetAcedSkills()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "SetAcedSkills");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.CanSelectSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_UI_Skills_Button_C*          Skill                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBZSkillEquipResult*                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Skills_Menu_C::CanSelectSkill(class UWBP_UI_Skills_Button_C* Skill, ESBZSkillEquipResult* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "CanSelectSkill");

	Params::WBP_UI_Skills_Menu_C_CanSelectSkill Parms{};

	Parms.Skill = Skill;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.UpdateSkillPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Skills_Menu_C::UpdateSkillPoints()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "UpdateSkillPoints");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.SetActiveSkills
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Skills_Menu_C::SetActiveSkills()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "SetActiveSkills");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.SetFocusedSkillLine
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_UI_Skills_Line_C*            FocusedSkillLine                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_UI_Skills_Button_C*          OldFocusedButton                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_UI_Skills_Button_C*          CurrentFocusedButton                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_UI_Skills_Button_C**         NewFocusedButton                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Skills_Menu_C::SetFocusedSkillLine(class UWBP_UI_Skills_Line_C* FocusedSkillLine, class UWBP_UI_Skills_Button_C* OldFocusedButton, class UWBP_UI_Skills_Button_C* CurrentFocusedButton, class UWBP_UI_Skills_Button_C** NewFocusedButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "SetFocusedSkillLine");

	Params::WBP_UI_Skills_Menu_C_SetFocusedSkillLine Parms{};

	Parms.FocusedSkillLine = FocusedSkillLine;
	Parms.OldFocusedButton = OldFocusedButton;
	Parms.CurrentFocusedButton = CurrentFocusedButton;

	UObject::ProcessEvent(Func, &Parms);

	if (NewFocusedButton != nullptr)
		*NewFocusedButton = Parms.NewFocusedButton;
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.SetFocusedButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_UI_Skills_Button_C*          InButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWasHoveredFocus                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_UI_Skills_Menu_C::SetFocusedButton(class UWBP_UI_Skills_Button_C* InButton, bool bWasHoveredFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "SetFocusedButton");

	Params::WBP_UI_Skills_Menu_C_SetFocusedButton Parms{};

	Parms.InButton = InButton;
	Parms.bWasHoveredFocus = bWasHoveredFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.ResetSkills
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Skills_Menu_C::ResetSkills()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "ResetSkills");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.DescriptionScrollAxisChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Skills_Menu_C::DescriptionScrollAxisChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "DescriptionScrollAxisChanged");

	Params::WBP_UI_Skills_Menu_C_DescriptionScrollAxisChanged Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.UpdateControlsReference
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Skills_Menu_C::UpdateControlsReference()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "UpdateControlsReference");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.TryToResetSkills
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_UI_Skills_Menu_C::TryToResetSkills()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "TryToResetSkills");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_UI_Skills_Menu.WBP_UI_Skills_Menu_C.OnResetSkillsPopupClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ClosingActionName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UI_Skills_Menu_C::OnResetSkillsPopupClosed(class FName ClosingActionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_UI_Skills_Menu_C", "OnResetSkillsPopupClosed");

	Params::WBP_UI_Skills_Menu_C_OnResetSkillsPopupClosed Parms{};

	Parms.ClosingActionName = ClosingActionName;

	UObject::ProcessEvent(Func, &Parms);
}

}

