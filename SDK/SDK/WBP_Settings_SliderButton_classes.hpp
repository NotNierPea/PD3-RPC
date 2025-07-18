﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Settings_SliderButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Settings_SliderButton.WBP_Settings_SliderButton_C
// 0x0040 (0x0450 - 0x0410)
class UWBP_Settings_SliderButton_C final : public USBZSettingsButtonSlider
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Border_Image;                                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider_Value;                                      // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SettingName;                                  // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SettingTextValue;                             // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FColor                                 ColorSlider;                                       // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Settings_SliderButton(int32 EntryPoint);
	void SettingChanged();
	void SelectionNameChanged();
	void IncrementSliderValueChanged();
	void MinSliderValueChanged();
	void MaxSliderValueChanged();
	void BndEvt__WBP_Settings_SliderButton_Slider_Value_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ButtonHoveredChanged(bool bInIsHovered);
	void ButtonFocusedChanged(bool bInHasFocus);
	void ButtonDisabledChanged(bool bInIsDisabled);
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void RefreshVisuals();
	void OnHoverVisuals(bool bIsHovered);
	void OnFocusedVisuals(bool bIsFocused);
	void OnDisabledVisuals(bool bIsDisabled_0);
	void InitializeVisuals();
	void UpdateMinSliderValue();
	void UpdateMaxSliderValue();
	void UpdateSliderStepSize();
	void UpdateSettingNameText();
	void UpdateSliderValue();
	void GetFractionCount(int32* Num);
	void GetValueFractionCount(float Value, int32* Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Settings_SliderButton_C">();
	}
	static class UWBP_Settings_SliderButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Settings_SliderButton_C>();
	}
};
static_assert(alignof(UWBP_Settings_SliderButton_C) == 0x000008, "Wrong alignment on UWBP_Settings_SliderButton_C");
static_assert(sizeof(UWBP_Settings_SliderButton_C) == 0x000450, "Wrong size on UWBP_Settings_SliderButton_C");
static_assert(offsetof(UWBP_Settings_SliderButton_C, UberGraphFrame) == 0x000410, "Member 'UWBP_Settings_SliderButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SliderButton_C, Border_Image) == 0x000418, "Member 'UWBP_Settings_SliderButton_C::Border_Image' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SliderButton_C, Image_Background) == 0x000420, "Member 'UWBP_Settings_SliderButton_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SliderButton_C, Image_BG) == 0x000428, "Member 'UWBP_Settings_SliderButton_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SliderButton_C, Slider_Value) == 0x000430, "Member 'UWBP_Settings_SliderButton_C::Slider_Value' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SliderButton_C, Text_SettingName) == 0x000438, "Member 'UWBP_Settings_SliderButton_C::Text_SettingName' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SliderButton_C, Text_SettingTextValue) == 0x000440, "Member 'UWBP_Settings_SliderButton_C::Text_SettingTextValue' has a wrong offset!");
static_assert(offsetof(UWBP_Settings_SliderButton_C, ColorSlider) == 0x000448, "Member 'UWBP_Settings_SliderButton_C::ColorSlider' has a wrong offset!");

}

