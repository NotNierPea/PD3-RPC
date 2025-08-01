﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Inventory_CharacterPreferenceScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Inventory_CharacterPreferenceScreen.WBP_UI_Inventory_CharacterPreferenceScreen_C
// 0x0028 (0x0370 - 0x0348)
class UWBP_UI_Inventory_CharacterPreferenceScreen_C final : public USBZMainMenuInventoryCharacterPreferenceScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_ScreenTitle_C*                     ScreenTitle;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_ContentBackground_C*            WBP_UI_ContentBackground;                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZMenuButton*                         RT_FocusedButton;                                  // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_Inventory_CharacterPreferenceScreen(int32 EntryPoint);
	void UpdateCharacterSlotButtonControlsReference(ESBZCharacterPreferenceButtonSelectionAction SelectionAction);
	void OnControlsReferenceClicked(class FName InActionInput);
	void DecrementCharacterPreferenceSlot();
	void IncrementCharacterPreferenceSlot();
	void OnInitialized();
	void OnLostStackFocused();
	void OnGainedStackFocused(const class FName& PreviousValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Inventory_CharacterPreferenceScreen_C">();
	}
	static class UWBP_UI_Inventory_CharacterPreferenceScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Inventory_CharacterPreferenceScreen_C>();
	}
};
static_assert(alignof(UWBP_UI_Inventory_CharacterPreferenceScreen_C) == 0x000008, "Wrong alignment on UWBP_UI_Inventory_CharacterPreferenceScreen_C");
static_assert(sizeof(UWBP_UI_Inventory_CharacterPreferenceScreen_C) == 0x000370, "Wrong size on UWBP_UI_Inventory_CharacterPreferenceScreen_C");
static_assert(offsetof(UWBP_UI_Inventory_CharacterPreferenceScreen_C, UberGraphFrame) == 0x000348, "Member 'UWBP_UI_Inventory_CharacterPreferenceScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_CharacterPreferenceScreen_C, Intro) == 0x000350, "Member 'UWBP_UI_Inventory_CharacterPreferenceScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_CharacterPreferenceScreen_C, ScreenTitle) == 0x000358, "Member 'UWBP_UI_Inventory_CharacterPreferenceScreen_C::ScreenTitle' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_CharacterPreferenceScreen_C, WBP_UI_ContentBackground) == 0x000360, "Member 'UWBP_UI_Inventory_CharacterPreferenceScreen_C::WBP_UI_ContentBackground' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_CharacterPreferenceScreen_C, RT_FocusedButton) == 0x000368, "Member 'UWBP_UI_Inventory_CharacterPreferenceScreen_C::RT_FocusedButton' has a wrong offset!");

}

