﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_WeaponSlotDisplayPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_WeaponSlotDisplayPanel.WBP_UI_WeaponSlotDisplayPanel_C
// 0x00A0 (0x0400 - 0x0360)
class UWBP_UI_WeaponSlotDisplayPanel_C final : public USBZMainMenuWeaponProgressionDisplayWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ArmorChunk_EquippedDisplay_C*      ArmorStats;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Modifier_Header;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ModsBg_I;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ModsLine_I;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MoreMods_Header;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_WeaponProgression;                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PresetMods_O;                                      // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_LevelProgression;                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        Text_WeaponExperience;                             // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        Text_WeaponLevel;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        Text_WeaponPresetMods;                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Inventory_ItemDescription_C*    WBP_UI_Inventory_ItemDescription;                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Widget_WeaponStats_C*           WBP_UI_Widget_WeaponStats;                         // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_Mods;                                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 string;                                            // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                   PresetModListText;                                 // 0x03E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_UI_WeaponSlotDisplayPanel(int32 EntryPoint);
	void Construct();
	void OnBaseData();
	void OnDataEmpty();
	void OnNewWeaponData();

	void OnPaint(struct FPaintContext& Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_WeaponSlotDisplayPanel_C">();
	}
	static class UWBP_UI_WeaponSlotDisplayPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_WeaponSlotDisplayPanel_C>();
	}
};
static_assert(alignof(UWBP_UI_WeaponSlotDisplayPanel_C) == 0x000008, "Wrong alignment on UWBP_UI_WeaponSlotDisplayPanel_C");
static_assert(sizeof(UWBP_UI_WeaponSlotDisplayPanel_C) == 0x000400, "Wrong size on UWBP_UI_WeaponSlotDisplayPanel_C");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, UberGraphFrame) == 0x000360, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, ArmorStats) == 0x000368, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::ArmorStats' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, Modifier_Header) == 0x000370, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::Modifier_Header' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, ModsBg_I) == 0x000378, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::ModsBg_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, ModsLine_I) == 0x000380, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::ModsLine_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, MoreMods_Header) == 0x000388, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::MoreMods_Header' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, Overlay_WeaponProgression) == 0x000390, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::Overlay_WeaponProgression' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, PresetMods_O) == 0x000398, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::PresetMods_O' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, ProgressBar_LevelProgression) == 0x0003A0, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::ProgressBar_LevelProgression' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, Text_WeaponExperience) == 0x0003A8, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::Text_WeaponExperience' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, Text_WeaponLevel) == 0x0003B0, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::Text_WeaponLevel' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, Text_WeaponPresetMods) == 0x0003B8, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::Text_WeaponPresetMods' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, WBP_UI_Inventory_ItemDescription) == 0x0003C0, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::WBP_UI_Inventory_ItemDescription' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, WBP_UI_Widget_WeaponStats) == 0x0003C8, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::WBP_UI_Widget_WeaponStats' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, WrapBox_Mods) == 0x0003D0, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::WrapBox_Mods' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, string) == 0x0003D8, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::string' has a wrong offset!");
static_assert(offsetof(UWBP_UI_WeaponSlotDisplayPanel_C, PresetModListText) == 0x0003E8, "Member 'UWBP_UI_WeaponSlotDisplayPanel_C::PresetModListText' has a wrong offset!");

}

