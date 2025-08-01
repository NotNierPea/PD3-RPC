﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_YesNo_LineItem_MenuButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_YesNo_LineItem_MenuButton.WBP_YesNo_LineItem_MenuButton_C
// 0x01A0 (0x0500 - 0x0360)
class UWBP_YesNo_LineItem_MenuButton_C final : public USBZMenuButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundGradient_I;                              // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Background;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_NO;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_YES;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EdgeBorder_I;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_NOBorder;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_YESBorder;                                   // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftEdge_I;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainBorder_I;                                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        SBZUITextBlock_NO;                                 // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        SBZUITextBlock_YES;                                // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Selected_Overlay;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        Text_HeistTitle;                                   // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MenuButton_C*                      WBP_MenuButton;                                    // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsHeistActive;                                     // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HasFocus;                                          // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DA[0x2];                                      // 0x03DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ActiveYesColor;                                    // 0x03DC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ActiveNoColor;                                     // 0x03EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InactiveColor;                                     // 0x03FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40C[0x4];                                      // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class FText HeistTitle, bool IsHeistActive)> OnHeistSettingUpdated; // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   HeistTitle;                                        // 0x0420(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UAkAudioEvent*                          ButtonHoveredSound;                                // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          ClickedSound;                                      // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBZServerBrowserHeistLevel            HeistData;                                         // 0x0448(0x00B8)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_YesNo_LineItem_MenuButton(int32 EntryPoint);
	void UpdateButtonWithoutCallback(bool IsHeistActive_0);
	void UpdateButtonExternal(bool IsHeistActive_0);
	void ButtonSelected();
	void ButtonFocusedChanged(bool bInHasFocus);
	void PreConstruct(bool IsDesignTime);
	void UpdateButtonVisual();
	void UpdateFocusVisual();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_YesNo_LineItem_MenuButton_C">();
	}
	static class UWBP_YesNo_LineItem_MenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_YesNo_LineItem_MenuButton_C>();
	}
};
static_assert(alignof(UWBP_YesNo_LineItem_MenuButton_C) == 0x000008, "Wrong alignment on UWBP_YesNo_LineItem_MenuButton_C");
static_assert(sizeof(UWBP_YesNo_LineItem_MenuButton_C) == 0x000500, "Wrong size on UWBP_YesNo_LineItem_MenuButton_C");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, UberGraphFrame) == 0x000360, "Member 'UWBP_YesNo_LineItem_MenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, BackgroundGradient_I) == 0x000368, "Member 'UWBP_YesNo_LineItem_MenuButton_C::BackgroundGradient_I' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, Border_Background) == 0x000370, "Member 'UWBP_YesNo_LineItem_MenuButton_C::Border_Background' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, Border_NO) == 0x000378, "Member 'UWBP_YesNo_LineItem_MenuButton_C::Border_NO' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, Border_YES) == 0x000380, "Member 'UWBP_YesNo_LineItem_MenuButton_C::Border_YES' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, EdgeBorder_I) == 0x000388, "Member 'UWBP_YesNo_LineItem_MenuButton_C::EdgeBorder_I' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, Image_NOBorder) == 0x000390, "Member 'UWBP_YesNo_LineItem_MenuButton_C::Image_NOBorder' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, Image_YESBorder) == 0x000398, "Member 'UWBP_YesNo_LineItem_MenuButton_C::Image_YESBorder' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, LeftEdge_I) == 0x0003A0, "Member 'UWBP_YesNo_LineItem_MenuButton_C::LeftEdge_I' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, MainBorder_I) == 0x0003A8, "Member 'UWBP_YesNo_LineItem_MenuButton_C::MainBorder_I' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, SBZUITextBlock_NO) == 0x0003B0, "Member 'UWBP_YesNo_LineItem_MenuButton_C::SBZUITextBlock_NO' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, SBZUITextBlock_YES) == 0x0003B8, "Member 'UWBP_YesNo_LineItem_MenuButton_C::SBZUITextBlock_YES' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, Selected_Overlay) == 0x0003C0, "Member 'UWBP_YesNo_LineItem_MenuButton_C::Selected_Overlay' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, Text_HeistTitle) == 0x0003C8, "Member 'UWBP_YesNo_LineItem_MenuButton_C::Text_HeistTitle' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, WBP_MenuButton) == 0x0003D0, "Member 'UWBP_YesNo_LineItem_MenuButton_C::WBP_MenuButton' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, IsHeistActive) == 0x0003D8, "Member 'UWBP_YesNo_LineItem_MenuButton_C::IsHeistActive' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, HasFocus) == 0x0003D9, "Member 'UWBP_YesNo_LineItem_MenuButton_C::HasFocus' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, ActiveYesColor) == 0x0003DC, "Member 'UWBP_YesNo_LineItem_MenuButton_C::ActiveYesColor' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, ActiveNoColor) == 0x0003EC, "Member 'UWBP_YesNo_LineItem_MenuButton_C::ActiveNoColor' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, InactiveColor) == 0x0003FC, "Member 'UWBP_YesNo_LineItem_MenuButton_C::InactiveColor' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, OnHeistSettingUpdated) == 0x000410, "Member 'UWBP_YesNo_LineItem_MenuButton_C::OnHeistSettingUpdated' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, HeistTitle) == 0x000420, "Member 'UWBP_YesNo_LineItem_MenuButton_C::HeistTitle' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, ButtonHoveredSound) == 0x000438, "Member 'UWBP_YesNo_LineItem_MenuButton_C::ButtonHoveredSound' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, ClickedSound) == 0x000440, "Member 'UWBP_YesNo_LineItem_MenuButton_C::ClickedSound' has a wrong offset!");
static_assert(offsetof(UWBP_YesNo_LineItem_MenuButton_C, HeistData) == 0x000448, "Member 'UWBP_YesNo_LineItem_MenuButton_C::HeistData' has a wrong offset!");

}

