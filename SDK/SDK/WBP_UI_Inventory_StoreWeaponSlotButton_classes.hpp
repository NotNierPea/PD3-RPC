﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Inventory_StoreWeaponSlotButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Inventory_StoreWeaponSlotButton.WBP_UI_Inventory_StoreWeaponSlotButton_C
// 0x0080 (0x04F8 - 0x0478)
class UWBP_UI_Inventory_StoreWeaponSlotButton_C final : public USBZBlackMarketStoreItemButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoverAnim;                                         // 0x0480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Purchasing;                                        // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Highlight;                                  // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Widget_CurrencyWidget_C*           CostWidget;                                        // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_511;                                         // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BorderButton;                                // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Lock;                                        // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Highlight_AnimationLayer;                  // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_DisplayTransaction;                           // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        TextBlock_Name;                                    // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          HasText;                                           // 0x04F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_UI_Inventory_StoreWeaponSlotButton(int32 EntryPoint);
	void ButtonFocusedChanged(bool bInHasFocus);
	void OnInitialized();
	void OnTransactionProgressChanged(bool bInIsTransactionInProgress);
	void OnPlayerStoreItemDataIntialized();
	void PreConstruct(bool IsDesignTime);
	void OnTransactionInProgress(bool bIsTransactionInProgress);
	void OnHover(bool bIsHovered);
	void SetPrice(int64 Price, ESBZCurrencyCode Currency);
	void InitializeItemData(class USBZInventoryBaseData* InItemData);
	void UpdateHighlights(bool IsFocused);
	void GetColorByCurrency(ESBZCurrencyCode Currency, struct FLinearColor* CurrencyColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Inventory_StoreWeaponSlotButton_C">();
	}
	static class UWBP_UI_Inventory_StoreWeaponSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Inventory_StoreWeaponSlotButton_C>();
	}
};
static_assert(alignof(UWBP_UI_Inventory_StoreWeaponSlotButton_C) == 0x000008, "Wrong alignment on UWBP_UI_Inventory_StoreWeaponSlotButton_C");
static_assert(sizeof(UWBP_UI_Inventory_StoreWeaponSlotButton_C) == 0x0004F8, "Wrong size on UWBP_UI_Inventory_StoreWeaponSlotButton_C");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, UberGraphFrame) == 0x000478, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, HoverAnim) == 0x000480, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Purchasing) == 0x000488, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Purchasing' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Border_Highlight) == 0x000490, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Border_Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, CostWidget) == 0x000498, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::CostWidget' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Image) == 0x0004A0, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Image_1) == 0x0004A8, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Image_2) == 0x0004B0, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Image_511) == 0x0004B8, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Image_511' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Image_Background) == 0x0004C0, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Image_BorderButton) == 0x0004C8, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Image_BorderButton' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Image_Lock) == 0x0004D0, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Image_Lock' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Overlay_Highlight_AnimationLayer) == 0x0004D8, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Overlay_Highlight_AnimationLayer' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, Text_DisplayTransaction) == 0x0004E0, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::Text_DisplayTransaction' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, TextBlock_Name) == 0x0004E8, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::TextBlock_Name' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Inventory_StoreWeaponSlotButton_C, HasText) == 0x0004F0, "Member 'UWBP_UI_Inventory_StoreWeaponSlotButton_C::HasText' has a wrong offset!");

}

