﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_SM_ActionPhaseMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_SM_ActionPhaseMenu.WBP_UI_SM_ActionPhaseMenu_C
// 0x0088 (0x0340 - 0x02B8)
class UWBP_UI_SM_ActionPhaseMenu_C final : public USBZActionPhaseMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background_I;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ControlReferencesBackgroundGraphics_O;             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DarkBackground_I;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        PausedTextSwitcher;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_SocialScreen_C*                 SocialScreen;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_ActionPhaseMenu_More_C*         Widget_More;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Screen_Category_C*        Widget_Settings_Audio;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Screen_CategoryGamepad_C* Widget_Settings_Gamepad;                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Screen_Category_C*        Widget_Settings_Gameplay;                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_HelperPanel_ButtonDescription_C* Widget_Settings_HelperPanel_ButtonDescription; // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_HelperPanel_ColorBlindPreview_C* Widget_Settings_HelperPanel_ColorBlindPreview; // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_HelperPanel_ReticlePreview_C* Widget_Settings_HelperPanel_ReticlePreview;    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Screen_Category_C*        Widget_Settings_Keyboard;                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_NavBar_C*                       Widget_Settings_NavBar;                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Screen_Category_C*        Widget_Settings_UserInterface;                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Screen_Category_C*        Widget_Settings_Video;                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_SM_ActionPhaseMenu(int32 EntryPoint);
	void OnSocialsMenuActionPressed();
	void BP_OnPausedChanged(bool bInIsPaused);
	void OnMenuShown(bool bIsShown);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_SM_ActionPhaseMenu_C">();
	}
	static class UWBP_UI_SM_ActionPhaseMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_SM_ActionPhaseMenu_C>();
	}
};
static_assert(alignof(UWBP_UI_SM_ActionPhaseMenu_C) == 0x000008, "Wrong alignment on UWBP_UI_SM_ActionPhaseMenu_C");
static_assert(sizeof(UWBP_UI_SM_ActionPhaseMenu_C) == 0x000340, "Wrong size on UWBP_UI_SM_ActionPhaseMenu_C");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, UberGraphFrame) == 0x0002B8, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Background_I) == 0x0002C0, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Background_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, ControlReferencesBackgroundGraphics_O) == 0x0002C8, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::ControlReferencesBackgroundGraphics_O' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, DarkBackground_I) == 0x0002D0, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::DarkBackground_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, PausedTextSwitcher) == 0x0002D8, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::PausedTextSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, SocialScreen) == 0x0002E0, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::SocialScreen' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_More) == 0x0002E8, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_More' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_Settings_Audio) == 0x0002F0, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_Settings_Audio' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_Settings_Gamepad) == 0x0002F8, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_Settings_Gamepad' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_Settings_Gameplay) == 0x000300, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_Settings_Gameplay' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_Settings_HelperPanel_ButtonDescription) == 0x000308, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_Settings_HelperPanel_ButtonDescription' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_Settings_HelperPanel_ColorBlindPreview) == 0x000310, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_Settings_HelperPanel_ColorBlindPreview' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_Settings_HelperPanel_ReticlePreview) == 0x000318, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_Settings_HelperPanel_ReticlePreview' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_Settings_Keyboard) == 0x000320, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_Settings_Keyboard' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_Settings_NavBar) == 0x000328, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_Settings_NavBar' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_Settings_UserInterface) == 0x000330, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_Settings_UserInterface' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_ActionPhaseMenu_C, Widget_Settings_Video) == 0x000338, "Member 'UWBP_UI_SM_ActionPhaseMenu_C::Widget_Settings_Video' has a wrong offset!");

}

