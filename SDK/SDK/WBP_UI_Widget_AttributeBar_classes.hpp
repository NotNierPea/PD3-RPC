﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_AttributeBar

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Widget_AttributeBar.WBP_UI_Widget_AttributeBar_C
// 0x0268 (0x0580 - 0x0318)
class UWBP_UI_Widget_AttributeBar_C final : public UPD3AttributePercentWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                           Attribute_ProgressBar;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ShaderBar;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FProgressBarStyle                      ProgressBarStyle;                                  // 0x0330(0x01B8)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                         MaxAttribute;                                      // 0x04E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                BorderMargin;                                      // 0x04EC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FC[0x4];                                      // 0x04FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            BorderTint;                                        // 0x0500(0x0028)(Edit, BlueprintVisible)
	float                                         Progress;                                          // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TickAmount;                                        // 0x052C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MainColor;                                         // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BackgroundColor;                                   // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LaggingColor;                                      // 0x0550(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TickThickness;                                     // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TickUpLimit;                                       // 0x0564(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TickDownLimit;                                     // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C[0x4];                                      // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MatInst;                                           // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsVisibilityUpdated;                              // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_UI_Widget_AttributeBar(int32 EntryPoint);
	void OnMaxAttributeUpdate(float NewValue, float OldPercentage, float NewPercentage);
	void OnCurrentAttributeUpdate(float NewValue, float OldPercentage, float NewPercentage);
	void OnSetup(float CurrentValueSetup, float MaxValueSetup, float PercentageSetup);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetShaderProgress(float Progress_0);
	void SetShaderParams();
	void GetMaterialInstance(class UMaterialInstanceDynamic** MatInst_0);
	void UpdateVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Widget_AttributeBar_C">();
	}
	static class UWBP_UI_Widget_AttributeBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Widget_AttributeBar_C>();
	}
};
static_assert(alignof(UWBP_UI_Widget_AttributeBar_C) == 0x000008, "Wrong alignment on UWBP_UI_Widget_AttributeBar_C");
static_assert(sizeof(UWBP_UI_Widget_AttributeBar_C) == 0x000580, "Wrong size on UWBP_UI_Widget_AttributeBar_C");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, UberGraphFrame) == 0x000318, "Member 'UWBP_UI_Widget_AttributeBar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, Attribute_ProgressBar) == 0x000320, "Member 'UWBP_UI_Widget_AttributeBar_C::Attribute_ProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, ShaderBar) == 0x000328, "Member 'UWBP_UI_Widget_AttributeBar_C::ShaderBar' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, ProgressBarStyle) == 0x000330, "Member 'UWBP_UI_Widget_AttributeBar_C::ProgressBarStyle' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, MaxAttribute) == 0x0004E8, "Member 'UWBP_UI_Widget_AttributeBar_C::MaxAttribute' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, BorderMargin) == 0x0004EC, "Member 'UWBP_UI_Widget_AttributeBar_C::BorderMargin' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, BorderTint) == 0x000500, "Member 'UWBP_UI_Widget_AttributeBar_C::BorderTint' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, Progress) == 0x000528, "Member 'UWBP_UI_Widget_AttributeBar_C::Progress' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, TickAmount) == 0x00052C, "Member 'UWBP_UI_Widget_AttributeBar_C::TickAmount' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, MainColor) == 0x000530, "Member 'UWBP_UI_Widget_AttributeBar_C::MainColor' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, BackgroundColor) == 0x000540, "Member 'UWBP_UI_Widget_AttributeBar_C::BackgroundColor' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, LaggingColor) == 0x000550, "Member 'UWBP_UI_Widget_AttributeBar_C::LaggingColor' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, TickThickness) == 0x000560, "Member 'UWBP_UI_Widget_AttributeBar_C::TickThickness' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, TickUpLimit) == 0x000564, "Member 'UWBP_UI_Widget_AttributeBar_C::TickUpLimit' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, TickDownLimit) == 0x000568, "Member 'UWBP_UI_Widget_AttributeBar_C::TickDownLimit' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, MatInst) == 0x000570, "Member 'UWBP_UI_Widget_AttributeBar_C::MatInst' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_AttributeBar_C, bIsVisibilityUpdated) == 0x000578, "Member 'UWBP_UI_Widget_AttributeBar_C::bIsVisibilityUpdated' has a wrong offset!");

}

