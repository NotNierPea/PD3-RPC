﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MaskOfTheWeek

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MaskOfTheWeek.WBP_MaskOfTheWeek_C
// 0x0128 (0x05A8 - 0x0480)
class UWBP_MaskOfTheWeek_C final : public USBZMaskOfTheWeekWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0480(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ScaleBannerImage;                                  // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnFocused;                                         // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_UI_Widget_ActionInput_C*           ActionKey;                                         // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        ActionName_T;                                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background_I;                                      // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Widget_CurrencyWidget_C*           DiscountedPrice_Currency;                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        FeatureNameDefault_T;                              // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        FeatureNameSelected_T;                             // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_188;                                         // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_511;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoBackground_I;                                  // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemCostBackground_I;                              // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon_I;                                        // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MaskIcon_WS;                                       // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MaskInfo_O;                                        // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MaskInfoBackground_I;                              // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        MaskNameDefault_T;                                 // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        MaskNameSelected_T;                                // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MaskRow_BK;                                        // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Outline_I;                                         // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             StandardPrice_T;                                   // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeRemainingBackground_I;                         // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        TimeRemainValue_T;                                 // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        TimeRemainValueSelected_T;                         // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   BlackMarketStackName;                              // 0x0588(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DesignerPercentage;                                // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              DesignerTimeRemaining;                             // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFocused;                                         // 0x05A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_MaskOfTheWeek(int32 EntryPoint);
	void ButtonAlternativeSelected();
	void ButtonSelected();
	void ButtonFocusChanging(bool bInHasFocus);
	void OnInstallStateChanged(bool bIsGameInstallPending);
	void OnDataUpdated(const struct FSBZStoreItemUIData& InUpdatedStoreItemUIData);
	void OnInitialized();
	void OnActionPressed();
	void OnUpdateTimerText(const bool bInPreviewDays, const struct FTimespan& InTimeRemaining);
	void ShowFeatureInfo();
	void OnPopupClosed(class FName ClosingActionName);
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_C2B341B64CB761D2A9E42692DDD092FE(class UObject* Loaded);
	void OnFocusChanged(bool bIsFocused);
	void SetDefault();
	void SetFocused();
	void UpdateAccessBasedOnPrivilege(bool InstallPending);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MaskOfTheWeek_C">();
	}
	static class UWBP_MaskOfTheWeek_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MaskOfTheWeek_C>();
	}
};
static_assert(alignof(UWBP_MaskOfTheWeek_C) == 0x000008, "Wrong alignment on UWBP_MaskOfTheWeek_C");
static_assert(sizeof(UWBP_MaskOfTheWeek_C) == 0x0005A8, "Wrong size on UWBP_MaskOfTheWeek_C");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, UberGraphFrame) == 0x000480, "Member 'UWBP_MaskOfTheWeek_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, ScaleBannerImage) == 0x000488, "Member 'UWBP_MaskOfTheWeek_C::ScaleBannerImage' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, OnFocused) == 0x000490, "Member 'UWBP_MaskOfTheWeek_C::OnFocused' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, ActionKey) == 0x000498, "Member 'UWBP_MaskOfTheWeek_C::ActionKey' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, ActionName_T) == 0x0004A0, "Member 'UWBP_MaskOfTheWeek_C::ActionName_T' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Background_I) == 0x0004A8, "Member 'UWBP_MaskOfTheWeek_C::Background_I' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, DiscountedPrice_Currency) == 0x0004B0, "Member 'UWBP_MaskOfTheWeek_C::DiscountedPrice_Currency' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, FeatureNameDefault_T) == 0x0004B8, "Member 'UWBP_MaskOfTheWeek_C::FeatureNameDefault_T' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, FeatureNameSelected_T) == 0x0004C0, "Member 'UWBP_MaskOfTheWeek_C::FeatureNameSelected_T' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Image) == 0x0004C8, "Member 'UWBP_MaskOfTheWeek_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Image_1) == 0x0004D0, "Member 'UWBP_MaskOfTheWeek_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Image_2) == 0x0004D8, "Member 'UWBP_MaskOfTheWeek_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Image_3) == 0x0004E0, "Member 'UWBP_MaskOfTheWeek_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Image_4) == 0x0004E8, "Member 'UWBP_MaskOfTheWeek_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Image_5) == 0x0004F0, "Member 'UWBP_MaskOfTheWeek_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Image_6) == 0x0004F8, "Member 'UWBP_MaskOfTheWeek_C::Image_6' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Image_7) == 0x000500, "Member 'UWBP_MaskOfTheWeek_C::Image_7' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Image_188) == 0x000508, "Member 'UWBP_MaskOfTheWeek_C::Image_188' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Image_511) == 0x000510, "Member 'UWBP_MaskOfTheWeek_C::Image_511' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, InfoBackground_I) == 0x000518, "Member 'UWBP_MaskOfTheWeek_C::InfoBackground_I' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, ItemCostBackground_I) == 0x000520, "Member 'UWBP_MaskOfTheWeek_C::ItemCostBackground_I' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, ItemIcon_I) == 0x000528, "Member 'UWBP_MaskOfTheWeek_C::ItemIcon_I' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, MaskIcon_WS) == 0x000530, "Member 'UWBP_MaskOfTheWeek_C::MaskIcon_WS' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, MaskInfo_O) == 0x000538, "Member 'UWBP_MaskOfTheWeek_C::MaskInfo_O' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, MaskInfoBackground_I) == 0x000540, "Member 'UWBP_MaskOfTheWeek_C::MaskInfoBackground_I' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, MaskNameDefault_T) == 0x000548, "Member 'UWBP_MaskOfTheWeek_C::MaskNameDefault_T' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, MaskNameSelected_T) == 0x000550, "Member 'UWBP_MaskOfTheWeek_C::MaskNameSelected_T' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, MaskRow_BK) == 0x000558, "Member 'UWBP_MaskOfTheWeek_C::MaskRow_BK' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, Outline_I) == 0x000560, "Member 'UWBP_MaskOfTheWeek_C::Outline_I' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, StandardPrice_T) == 0x000568, "Member 'UWBP_MaskOfTheWeek_C::StandardPrice_T' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, TimeRemainingBackground_I) == 0x000570, "Member 'UWBP_MaskOfTheWeek_C::TimeRemainingBackground_I' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, TimeRemainValue_T) == 0x000578, "Member 'UWBP_MaskOfTheWeek_C::TimeRemainValue_T' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, TimeRemainValueSelected_T) == 0x000580, "Member 'UWBP_MaskOfTheWeek_C::TimeRemainValueSelected_T' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, BlackMarketStackName) == 0x000588, "Member 'UWBP_MaskOfTheWeek_C::BlackMarketStackName' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, DesignerPercentage) == 0x000594, "Member 'UWBP_MaskOfTheWeek_C::DesignerPercentage' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, DesignerTimeRemaining) == 0x000598, "Member 'UWBP_MaskOfTheWeek_C::DesignerTimeRemaining' has a wrong offset!");
static_assert(offsetof(UWBP_MaskOfTheWeek_C, IsFocused) == 0x0005A0, "Member 'UWBP_MaskOfTheWeek_C::IsFocused' has a wrong offset!");

}

