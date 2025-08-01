﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_WeaponStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Widget_WeaponStatus.WBP_UI_Widget_WeaponStatus_C
// 0x0138 (0x03F8 - 0x02C0)
class UWBP_UI_Widget_WeaponStatus_C final : public UPD3WeaponStatusWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnPickUpAnimation;                                 // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Root;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_AmmoBackground;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Infinite_I;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OverkillIcon_I;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_AmmoBag;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_AmmoClip;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_AmmoBag;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_AmmoBagBackground;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_AmmoClip;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_AmmoClipBackground;                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_WeaponSlot;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            NormalTextColor;                                   // 0x0328(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateColor                            LowTextColor;                                      // 0x0350(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateColor                            CriticalTextColor;                                 // 0x0378(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                         EquippedOpacity;                                   // 0x03A0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UnequippedOpacity;                                 // 0x03A4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            WeaponTypeTextColor_Default;                       // 0x03A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            WeaponTypeTextColor_Overkill;                      // 0x03D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_UI_Widget_WeaponStatus(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void OnAmmoInventoryStateChanged(EPD3AmmoState NewState);
	void OnAmmoInventoryChanged(int32 AmmoInventoryChanged);
	void OnAmmoAdded(int32 AmmoAddedCount);
	void OnInitialized();
	void OnAmmoLoadedStateChanged(EPD3AmmoState NewState);
	void OnEquippedChanged(bool bIsEquippedNewValue);
	void OnAmmoLoadedChanged(int32 AmmoLoadedChanged);
	void SetEquipped(bool IsEquipped);
	void SetAmmoState(EPD3AmmoState Index_0, bool bIsAmmoClip);
	void SetAmmoText(int32 AmmoValue, bool bIsAmmoClip);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Widget_WeaponStatus_C">();
	}
	static class UWBP_UI_Widget_WeaponStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Widget_WeaponStatus_C>();
	}
};
static_assert(alignof(UWBP_UI_Widget_WeaponStatus_C) == 0x000008, "Wrong alignment on UWBP_UI_Widget_WeaponStatus_C");
static_assert(sizeof(UWBP_UI_Widget_WeaponStatus_C) == 0x0003F8, "Wrong size on UWBP_UI_Widget_WeaponStatus_C");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_UI_Widget_WeaponStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, OnPickUpAnimation) == 0x0002C8, "Member 'UWBP_UI_Widget_WeaponStatus_C::OnPickUpAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, Canvas_Root) == 0x0002D0, "Member 'UWBP_UI_Widget_WeaponStatus_C::Canvas_Root' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, Image_AmmoBackground) == 0x0002D8, "Member 'UWBP_UI_Widget_WeaponStatus_C::Image_AmmoBackground' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, Infinite_I) == 0x0002E0, "Member 'UWBP_UI_Widget_WeaponStatus_C::Infinite_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, OverkillIcon_I) == 0x0002E8, "Member 'UWBP_UI_Widget_WeaponStatus_C::OverkillIcon_I' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, Overlay_AmmoBag) == 0x0002F0, "Member 'UWBP_UI_Widget_WeaponStatus_C::Overlay_AmmoBag' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, Overlay_AmmoClip) == 0x0002F8, "Member 'UWBP_UI_Widget_WeaponStatus_C::Overlay_AmmoClip' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, Text_AmmoBag) == 0x000300, "Member 'UWBP_UI_Widget_WeaponStatus_C::Text_AmmoBag' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, Text_AmmoBagBackground) == 0x000308, "Member 'UWBP_UI_Widget_WeaponStatus_C::Text_AmmoBagBackground' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, Text_AmmoClip) == 0x000310, "Member 'UWBP_UI_Widget_WeaponStatus_C::Text_AmmoClip' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, Text_AmmoClipBackground) == 0x000318, "Member 'UWBP_UI_Widget_WeaponStatus_C::Text_AmmoClipBackground' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, Text_WeaponSlot) == 0x000320, "Member 'UWBP_UI_Widget_WeaponStatus_C::Text_WeaponSlot' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, NormalTextColor) == 0x000328, "Member 'UWBP_UI_Widget_WeaponStatus_C::NormalTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, LowTextColor) == 0x000350, "Member 'UWBP_UI_Widget_WeaponStatus_C::LowTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, CriticalTextColor) == 0x000378, "Member 'UWBP_UI_Widget_WeaponStatus_C::CriticalTextColor' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, EquippedOpacity) == 0x0003A0, "Member 'UWBP_UI_Widget_WeaponStatus_C::EquippedOpacity' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, UnequippedOpacity) == 0x0003A4, "Member 'UWBP_UI_Widget_WeaponStatus_C::UnequippedOpacity' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, WeaponTypeTextColor_Default) == 0x0003A8, "Member 'UWBP_UI_Widget_WeaponStatus_C::WeaponTypeTextColor_Default' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_WeaponStatus_C, WeaponTypeTextColor_Overkill) == 0x0003D0, "Member 'UWBP_UI_Widget_WeaponStatus_C::WeaponTypeTextColor_Overkill' has a wrong offset!");

}

