﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_LoadoutCustomization_ArmorSlotButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_LoadoutCustomization_ArmorSlotButton.WBP_UI_LoadoutCustomization_ArmorSlotButton_C
// 0x0068 (0x0438 - 0x03D0)
class UWBP_UI_LoadoutCustomization_ArmorSlotButton_C final : public USBZMainMenuLoadoutArmorSlotButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Highlight;                                  // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_511;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_InvalidArmorButton;                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        TextBlock_ItemType;                                // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        TextBlock_Name;                                    // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_ArmorChunkPreview_C*            WBP_UI_ArmorChunkPreview;                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryBaseData_Icon_C*          Widget_Icon;                                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_LoadoutCustomization_ArmorSlotButton(int32 EntryPoint);
	void OnArmorSlotInitialized();
	void OnInitialized();
	void ButtonSelected();
	void ButtonFocusedChanged(bool bInHasFocus);
	void ButtonHoveredChanged(bool bInIsHovered);
	void PreConstruct(bool IsDesignTime);
	void OnHover(bool bIsHovered);
	void OnFocused(bool bIsFocused);
	void Initialize_Armor_Visuals(class USBZInventoryBaseData* InInventoryData);
	void Set_Armor_Name_Colour(const struct FLinearColor& DesiredColour);
	void RefreshVisuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_LoadoutCustomization_ArmorSlotButton_C">();
	}
	static class UWBP_UI_LoadoutCustomization_ArmorSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_LoadoutCustomization_ArmorSlotButton_C>();
	}
};
static_assert(alignof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C) == 0x000008, "Wrong alignment on UWBP_UI_LoadoutCustomization_ArmorSlotButton_C");
static_assert(sizeof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C) == 0x000438, "Wrong size on UWBP_UI_LoadoutCustomization_ArmorSlotButton_C");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, UberGraphFrame) == 0x0003D0, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, HoverAnim) == 0x0003D8, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, Border_Highlight) == 0x0003E0, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::Border_Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, Image) == 0x0003E8, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, Image_1) == 0x0003F0, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, Image_2) == 0x0003F8, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, Image_511) == 0x000400, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::Image_511' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, Image_Background) == 0x000408, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, Image_InvalidArmorButton) == 0x000410, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::Image_InvalidArmorButton' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, TextBlock_ItemType) == 0x000418, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::TextBlock_ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, TextBlock_Name) == 0x000420, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::TextBlock_Name' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, WBP_UI_ArmorChunkPreview) == 0x000428, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::WBP_UI_ArmorChunkPreview' has a wrong offset!");
static_assert(offsetof(UWBP_UI_LoadoutCustomization_ArmorSlotButton_C, Widget_Icon) == 0x000430, "Member 'UWBP_UI_LoadoutCustomization_ArmorSlotButton_C::Widget_Icon' has a wrong offset!");

}

