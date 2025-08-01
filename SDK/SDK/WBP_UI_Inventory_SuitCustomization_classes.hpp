﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Inventory_SuitCustomization

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Inventory_SuitCustomization.WBP_UI_Inventory_SuitCustomization_C
// 0x0030 (0x0380 - 0x0350)
class UWBP_UI_Inventory_SuitCustomization_C final : public USBZMainMenuSuitCustomization
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Mask_Customization_Slot_Button_C*  Button_LowerBody_Colour;                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mask_Customization_Slot_Button_C*  Button_LowerBody_Material;                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mask_Customization_Slot_Button_C*  Button_UpperBody_Colour;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Mask_Customization_Slot_Button_C*  Button_UpperBody_Material;                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZMenuButton*                         RT_MenuButton;                                     // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_Inventory_SuitCustomization(int32 EntryPoint);
	void BndEvt__WBP_UI_Inventory_SuitCustomization_Button_UpperBody_Material_K2Node_ComponentBoundEvent_7_OnMenuButtonStateChanged__DelegateSignature(class USBZMenuButton* Button, bool bIsEnabled_0);
	void BndEvt__WBP_UI_Inventory_SuitCustomization_Button_UpperBody_Colour_K2Node_ComponentBoundEvent_6_OnMenuButtonStateChanged__DelegateSignature(class USBZMenuButton* Button, bool bIsEnabled_0);
	void BndEvt__WBP_UI_Inventory_SuitCustomization_Button_LowerBody_Material_K2Node_ComponentBoundEvent_5_OnMenuButtonStateChanged__DelegateSignature(class USBZMenuButton* Button, bool bIsEnabled_0);
	void BndEvt__WBP_UI_Inventory_SuitCustomization_Button_LowerBody_Colour_K2Node_ComponentBoundEvent_4_OnMenuButtonStateChanged__DelegateSignature(class USBZMenuButton* Button, bool bIsEnabled_0);
	void OnControlsReferenceClicked(class FName ActionName);
	void BndEvt__WBP_UI_Inventory_SuitCustomization_Button_LowerBody_Material_K2Node_ComponentBoundEvent_3_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button);
	void BndEvt__WBP_UI_Inventory_SuitCustomization_Button_LowerBody_Colour_K2Node_ComponentBoundEvent_2_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button);
	void BndEvt__WBP_UI_Inventory_SuitCustomization_Button_UpperBody_Colour_K2Node_ComponentBoundEvent_1_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button);
	void BndEvt__WBP_UI_Inventory_SuitCustomization_Button_UpperBody_Material_K2Node_ComponentBoundEvent_0_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button);
	void OnLostStackFocused();
	void OnGainedStackFocused(const class FName& PreviousValue);
	void RefreshVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Inventory_SuitCustomization_C">();
	}
	static class UWBP_UI_Inventory_SuitCustomization_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Inventory_SuitCustomization_C>();
	}
};
static_assert(alignof(UWBP_UI_Inventory_SuitCustomization_C) == 0x000008, "Wrong alignment on UWBP_UI_Inventory_SuitCustomization_C");
static_assert(sizeof(UWBP_UI_Inventory_SuitCustomization_C) == 0x000380, "Wrong size on UWBP_UI_Inventory_SuitCustomization_C");
static_assert(offsetof(UWBP_UI_Inventory_SuitCustomization_C, UberGraphFrame) == 0x000350, "Member 'UWBP_UI_Inventory_SuitCustomization_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_SuitCustomization_C, Button_LowerBody_Colour) == 0x000358, "Member 'UWBP_UI_Inventory_SuitCustomization_C::Button_LowerBody_Colour' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_SuitCustomization_C, Button_LowerBody_Material) == 0x000360, "Member 'UWBP_UI_Inventory_SuitCustomization_C::Button_LowerBody_Material' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_SuitCustomization_C, Button_UpperBody_Colour) == 0x000368, "Member 'UWBP_UI_Inventory_SuitCustomization_C::Button_UpperBody_Colour' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_SuitCustomization_C, Button_UpperBody_Material) == 0x000370, "Member 'UWBP_UI_Inventory_SuitCustomization_C::Button_UpperBody_Material' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_SuitCustomization_C, RT_MenuButton) == 0x000378, "Member 'UWBP_UI_Inventory_SuitCustomization_C::RT_MenuButton' has a wrong offset!");

}

