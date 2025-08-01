﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_HelperPanel_ReticlePreview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings_HelperPanel_ReticlePreview.WBP_Settings_HelperPanel_ReticlePreview_C
// 0x0038 (0x02E0 - 0x02A8)
class UWBP_Settings_HelperPanel_ReticlePreview_C final : public USBZSettingHelperPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background_I;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Content_O;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Widget_CrosshairVisuals_C*      CrosshairVisuals;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Widget_HitIndicators_C*         HitIndicators;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Reticle_I;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsMaxSpreadEnabled;                                // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsActionPhase;                                     // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DA[0x2];                                      // 0x02DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ActionPhaseY;                                      // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Settings_HelperPanel_ReticlePreview(int32 EntryPoint);
	void RefreshPanelState();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_HelperPanel_ReticlePreview_C">();
	}
	static class UWBP_Settings_HelperPanel_ReticlePreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_HelperPanel_ReticlePreview_C>();
	}
};
static_assert(alignof(UWBP_Settings_HelperPanel_ReticlePreview_C) == 0x000008, "Wrong alignment on UWBP_Settings_HelperPanel_ReticlePreview_C");
static_assert(sizeof(UWBP_Settings_HelperPanel_ReticlePreview_C) == 0x0002E0, "Wrong size on UWBP_Settings_HelperPanel_ReticlePreview_C");
static_assert(offsetof(UWBP_Settings_HelperPanel_ReticlePreview_C, UberGraphFrame) == 0x0002A8, "Member 'UWBP_Settings_HelperPanel_ReticlePreview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ReticlePreview_C, Background_I) == 0x0002B0, "Member 'UWBP_Settings_HelperPanel_ReticlePreview_C::Background_I' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ReticlePreview_C, Content_O) == 0x0002B8, "Member 'UWBP_Settings_HelperPanel_ReticlePreview_C::Content_O' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ReticlePreview_C, CrosshairVisuals) == 0x0002C0, "Member 'UWBP_Settings_HelperPanel_ReticlePreview_C::CrosshairVisuals' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ReticlePreview_C, HitIndicators) == 0x0002C8, "Member 'UWBP_Settings_HelperPanel_ReticlePreview_C::HitIndicators' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ReticlePreview_C, Reticle_I) == 0x0002D0, "Member 'UWBP_Settings_HelperPanel_ReticlePreview_C::Reticle_I' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ReticlePreview_C, IsMaxSpreadEnabled) == 0x0002D8, "Member 'UWBP_Settings_HelperPanel_ReticlePreview_C::IsMaxSpreadEnabled' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ReticlePreview_C, IsActionPhase) == 0x0002D9, "Member 'UWBP_Settings_HelperPanel_ReticlePreview_C::IsActionPhase' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_HelperPanel_ReticlePreview_C, ActionPhaseY) == 0x0002DC, "Member 'UWBP_Settings_HelperPanel_ReticlePreview_C::ActionPhaseY' has a wrong offset!");

}

