﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SBZWeaponCustomiaztionPartButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SBZWeaponCustomiaztionPartButton.SBZWeaponCustomiaztionPartButton_C
// 0x0068 (0x03C8 - 0x0360)
class USBZWeaponCustomiaztionPartButton_C final : public USBZMenuButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             EquippedText;                                      // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Active;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Border;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Selected;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Category;                                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Name;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnClickedEvent;                                    // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBZModularPartSlot*                    WeaponSlot;                                        // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBZModularPartDataAsset*               Weapon_Part;                                       // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SBZWeaponCustomiaztionPartButton(int32 EntryPoint);
	void ButtonFocusedChanged(bool bInHasFocus);
	void Setup(const class USBZModularPartSlot* WeaponSlot_0, const class USBZModularPartDataAsset* Equippable_Part);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBZWeaponCustomiaztionPartButton_C">();
	}
	static class USBZWeaponCustomiaztionPartButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBZWeaponCustomiaztionPartButton_C>();
	}
};
static_assert(alignof(USBZWeaponCustomiaztionPartButton_C) == 0x000008, "Wrong alignment on USBZWeaponCustomiaztionPartButton_C");
static_assert(sizeof(USBZWeaponCustomiaztionPartButton_C) == 0x0003C8, "Wrong size on USBZWeaponCustomiaztionPartButton_C");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, UberGraphFrame) == 0x000360, "Member 'USBZWeaponCustomiaztionPartButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, EquippedText) == 0x000368, "Member 'USBZWeaponCustomiaztionPartButton_C::EquippedText' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, Image_Background) == 0x000370, "Member 'USBZWeaponCustomiaztionPartButton_C::Image_Background' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, ItemIcon) == 0x000378, "Member 'USBZWeaponCustomiaztionPartButton_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, Overlay_Active) == 0x000380, "Member 'USBZWeaponCustomiaztionPartButton_C::Overlay_Active' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, Overlay_Border) == 0x000388, "Member 'USBZWeaponCustomiaztionPartButton_C::Overlay_Border' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, Overlay_Selected) == 0x000390, "Member 'USBZWeaponCustomiaztionPartButton_C::Overlay_Selected' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, Text_Category) == 0x000398, "Member 'USBZWeaponCustomiaztionPartButton_C::Text_Category' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, Text_Name) == 0x0003A0, "Member 'USBZWeaponCustomiaztionPartButton_C::Text_Name' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, OnClickedEvent) == 0x0003A8, "Member 'USBZWeaponCustomiaztionPartButton_C::OnClickedEvent' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, WeaponSlot) == 0x0003B8, "Member 'USBZWeaponCustomiaztionPartButton_C::WeaponSlot' has a wrong offset!");
static_assert(offsetof(USBZWeaponCustomiaztionPartButton_C, Weapon_Part) == 0x0003C0, "Member 'USBZWeaponCustomiaztionPartButton_C::Weapon_Part' has a wrong offset!");

}

