﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_HelperPanel_ColorBlindPreview

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings_HelperPanel_ColorBlindPreview.WBP_Settings_HelperPanel_ColorBlindPreview_C
// 0x0048 (0x02F0 - 0x02A8)
class UWBP_Settings_HelperPanel_ColorBlindPreview_C final : public USBZSettingHelperPanel
{
public:
	class UImage*                                 Background_I;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ColorBlindContent_O;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ishihara_0;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ishihara_1;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ishihara_2;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ishihara_3;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ishihara_4;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ishihara_5;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsActionPhase;                                     // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x3];                                      // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ActionPhaseY;                                      // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_HelperPanel_ColorBlindPreview_C">();
	}
	static class UWBP_Settings_HelperPanel_ColorBlindPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_HelperPanel_ColorBlindPreview_C>();
	}
};
static_assert(alignof(UWBP_Settings_HelperPanel_ColorBlindPreview_C) == 0x000008, "Wrong alignment on UWBP_Settings_HelperPanel_ColorBlindPreview_C");
static_assert(sizeof(UWBP_Settings_HelperPanel_ColorBlindPreview_C) == 0x0002F0, "Wrong size on UWBP_Settings_HelperPanel_ColorBlindPreview_C");
static_assert(offsetof(UWBP_Settings_HelperPanel_ColorBlindPreview_C, Background_I) == 0x0002A8, "Member 'UWBP_Settings_HelperPanel_ColorBlindPreview_C::Background_I' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ColorBlindPreview_C, ColorBlindContent_O) == 0x0002B0, "Member 'UWBP_Settings_HelperPanel_ColorBlindPreview_C::ColorBlindContent_O' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ColorBlindPreview_C, Ishihara_0) == 0x0002B8, "Member 'UWBP_Settings_HelperPanel_ColorBlindPreview_C::Ishihara_0' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ColorBlindPreview_C, Ishihara_1) == 0x0002C0, "Member 'UWBP_Settings_HelperPanel_ColorBlindPreview_C::Ishihara_1' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ColorBlindPreview_C, Ishihara_2) == 0x0002C8, "Member 'UWBP_Settings_HelperPanel_ColorBlindPreview_C::Ishihara_2' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ColorBlindPreview_C, Ishihara_3) == 0x0002D0, "Member 'UWBP_Settings_HelperPanel_ColorBlindPreview_C::Ishihara_3' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ColorBlindPreview_C, Ishihara_4) == 0x0002D8, "Member 'UWBP_Settings_HelperPanel_ColorBlindPreview_C::Ishihara_4' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ColorBlindPreview_C, Ishihara_5) == 0x0002E0, "Member 'UWBP_Settings_HelperPanel_ColorBlindPreview_C::Ishihara_5' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ColorBlindPreview_C, IsActionPhase) == 0x0002E8, "Member 'UWBP_Settings_HelperPanel_ColorBlindPreview_C::IsActionPhase' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ColorBlindPreview_C, ActionPhaseY) == 0x0002EC, "Member 'UWBP_Settings_HelperPanel_ColorBlindPreview_C::ActionPhaseY' has a wrong offset!");

}

