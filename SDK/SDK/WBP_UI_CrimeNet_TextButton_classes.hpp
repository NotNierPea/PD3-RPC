﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_CrimeNet_TextButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_CrimeNet_TextButton.WBP_UI_CrimeNet_TextButton_C
// 0x0118 (0x0478 - 0x0360)
class UWBP_UI_CrimeNet_TextButton_C final : public USBZMenuButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       SelectedAnim;                                      // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DeselectedAnimation;                               // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SelectedAnimation;                                 // 0x0378(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Frame_Button;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gradient_Button;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Button;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Bar;                                       // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Button;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_TextBar;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Description;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_DisplayText;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextBar_Shader;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DefaultTextValue;                                  // 0x03D0(0x0018)(Edit, BlueprintVisible)
	struct FVector2D                              InititalSize;                                      // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	class FText                                   DescriptionText;                                   // 0x03F0(0x0018)(Edit, BlueprintVisible)
	class UPaperSprite*                           PaperSprite_Image_Buttons;                         // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ColorVariable;                                     // 0x0410(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Color_Tex_Desc;                                    // 0x041C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Desaturate_Variable;                               // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           In_Out_Color;                                      // 0x042C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43C[0x4];                                      // 0x043C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPaperSprite*                           PaperSprite_Image_Buttons_WB;                      // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           In_Out_Color_Desc;                                 // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                         Scale_X;                                           // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scale_Y;                                           // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                In_Slot_Padding;                                   // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               DynamicMaterials;                                  // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_CrimeNet_TextButton(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void DisabledButtonSelected();
	void ButtonFocusedChanged(bool bInHasFocus);
	void OnInitialized();
	void OnFocusedVisuals(bool bIsFocused);
	void OnDisabledVisuals(bool bIsDisabled_0);
	void RefreshVisual();
	void SetButtonText(const class FText& InButtonText);
	void ResetToDefaultButtonText();
	void GetText(class FText* OutText);
	void SetTextDescription(const class FText& InDescription);
	void OnHoverVisuals(bool IsHovered_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_CrimeNet_TextButton_C">();
	}
	static class UWBP_UI_CrimeNet_TextButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_CrimeNet_TextButton_C>();
	}
};
static_assert(alignof(UWBP_UI_CrimeNet_TextButton_C) == 0x000008, "Wrong alignment on UWBP_UI_CrimeNet_TextButton_C");
static_assert(sizeof(UWBP_UI_CrimeNet_TextButton_C) == 0x000478, "Wrong size on UWBP_UI_CrimeNet_TextButton_C");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, UberGraphFrame) == 0x000360, "Member 'UWBP_UI_CrimeNet_TextButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, SelectedAnim) == 0x000368, "Member 'UWBP_UI_CrimeNet_TextButton_C::SelectedAnim' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, DeselectedAnimation) == 0x000370, "Member 'UWBP_UI_CrimeNet_TextButton_C::DeselectedAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, SelectedAnimation) == 0x000378, "Member 'UWBP_UI_CrimeNet_TextButton_C::SelectedAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Border_Frame_Button) == 0x000380, "Member 'UWBP_UI_CrimeNet_TextButton_C::Border_Frame_Button' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Gradient_Button) == 0x000388, "Member 'UWBP_UI_CrimeNet_TextButton_C::Gradient_Button' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Image_Button) == 0x000390, "Member 'UWBP_UI_CrimeNet_TextButton_C::Image_Button' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Overlay_Bar) == 0x000398, "Member 'UWBP_UI_CrimeNet_TextButton_C::Overlay_Bar' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Overlay_Button) == 0x0003A0, "Member 'UWBP_UI_CrimeNet_TextButton_C::Overlay_Button' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Overlay_TextBar) == 0x0003A8, "Member 'UWBP_UI_CrimeNet_TextButton_C::Overlay_TextBar' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, RetainerBox_0) == 0x0003B0, "Member 'UWBP_UI_CrimeNet_TextButton_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Text_Description) == 0x0003B8, "Member 'UWBP_UI_CrimeNet_TextButton_C::Text_Description' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Text_DisplayText) == 0x0003C0, "Member 'UWBP_UI_CrimeNet_TextButton_C::Text_DisplayText' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, TextBar_Shader) == 0x0003C8, "Member 'UWBP_UI_CrimeNet_TextButton_C::TextBar_Shader' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, DefaultTextValue) == 0x0003D0, "Member 'UWBP_UI_CrimeNet_TextButton_C::DefaultTextValue' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, InititalSize) == 0x0003E8, "Member 'UWBP_UI_CrimeNet_TextButton_C::InititalSize' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, DescriptionText) == 0x0003F0, "Member 'UWBP_UI_CrimeNet_TextButton_C::DescriptionText' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, PaperSprite_Image_Buttons) == 0x000408, "Member 'UWBP_UI_CrimeNet_TextButton_C::PaperSprite_Image_Buttons' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, ColorVariable) == 0x000410, "Member 'UWBP_UI_CrimeNet_TextButton_C::ColorVariable' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Color_Tex_Desc) == 0x00041C, "Member 'UWBP_UI_CrimeNet_TextButton_C::Color_Tex_Desc' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Desaturate_Variable) == 0x000428, "Member 'UWBP_UI_CrimeNet_TextButton_C::Desaturate_Variable' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, In_Out_Color) == 0x00042C, "Member 'UWBP_UI_CrimeNet_TextButton_C::In_Out_Color' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, PaperSprite_Image_Buttons_WB) == 0x000440, "Member 'UWBP_UI_CrimeNet_TextButton_C::PaperSprite_Image_Buttons_WB' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, In_Out_Color_Desc) == 0x000448, "Member 'UWBP_UI_CrimeNet_TextButton_C::In_Out_Color_Desc' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Scale_X) == 0x000458, "Member 'UWBP_UI_CrimeNet_TextButton_C::Scale_X' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, Scale_Y) == 0x00045C, "Member 'UWBP_UI_CrimeNet_TextButton_C::Scale_Y' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, In_Slot_Padding) == 0x000460, "Member 'UWBP_UI_CrimeNet_TextButton_C::In_Slot_Padding' has a wrong offset!");
static_assert(offsetof(UWBP_UI_CrimeNet_TextButton_C, DynamicMaterials) == 0x000470, "Member 'UWBP_UI_CrimeNet_TextButton_C::DynamicMaterials' has a wrong offset!");

}

