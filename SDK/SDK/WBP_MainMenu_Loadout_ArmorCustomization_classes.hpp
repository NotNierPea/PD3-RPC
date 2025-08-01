﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Loadout_ArmorCustomization

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_Loadout_ArmorCustomization.WBP_MainMenu_Loadout_ArmorCustomization_C
// 0x0038 (0x0368 - 0x0330)
class UWBP_MainMenu_Loadout_ArmorCustomization_C final : public USBZMainMenuLoadoutArmorModCategoryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBZUITextBlock*                        ArmorHeader_T;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ScreenTitle_C*                     ScreenTitle;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Menu_ActionInputButton_C*       TutorialPopup_Button;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Inventory_ItemDescriptionBox_C* WBP_UI_Inventory_ItemDescriptionBox;               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZMenuButton*                         FocusedButton;                                     // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_MainMenu_Loadout_ArmorCustomization(int32 EntryPoint);
	void OnCategoryButtonFocused(class USBZMenuButton* InButton, bool bIsFocused);
	void OnRemovedFromStack();
	void BndEvt__WBP_MainMenu_Loadout_WeaponCustomizationNew_TutorialPopup_Button_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void OnTutorialHidden();
	void OnBackPressed();
	void OnControlsReferenceClicked(class FName InActionInput);
	void OnLostStackFocused();
	void OnGainedStackFocused(const class FName& PreviousValue);
	void UpdateControlsReference();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_Loadout_ArmorCustomization_C">();
	}
	static class UWBP_MainMenu_Loadout_ArmorCustomization_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_Loadout_ArmorCustomization_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_Loadout_ArmorCustomization_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_Loadout_ArmorCustomization_C");
static_assert(sizeof(UWBP_MainMenu_Loadout_ArmorCustomization_C) == 0x000368, "Wrong size on UWBP_MainMenu_Loadout_ArmorCustomization_C");
static_assert(offsetof(UWBP_MainMenu_Loadout_ArmorCustomization_C, UberGraphFrame) == 0x000330, "Member 'UWBP_MainMenu_Loadout_ArmorCustomization_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Loadout_ArmorCustomization_C, Intro) == 0x000338, "Member 'UWBP_MainMenu_Loadout_ArmorCustomization_C::Intro' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Loadout_ArmorCustomization_C, ArmorHeader_T) == 0x000340, "Member 'UWBP_MainMenu_Loadout_ArmorCustomization_C::ArmorHeader_T' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Loadout_ArmorCustomization_C, ScreenTitle) == 0x000348, "Member 'UWBP_MainMenu_Loadout_ArmorCustomization_C::ScreenTitle' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Loadout_ArmorCustomization_C, TutorialPopup_Button) == 0x000350, "Member 'UWBP_MainMenu_Loadout_ArmorCustomization_C::TutorialPopup_Button' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Loadout_ArmorCustomization_C, WBP_UI_Inventory_ItemDescriptionBox) == 0x000358, "Member 'UWBP_MainMenu_Loadout_ArmorCustomization_C::WBP_UI_Inventory_ItemDescriptionBox' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Loadout_ArmorCustomization_C, FocusedButton) == 0x000360, "Member 'UWBP_MainMenu_Loadout_ArmorCustomization_C::FocusedButton' has a wrong offset!");

}

