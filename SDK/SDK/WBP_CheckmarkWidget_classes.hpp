﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CheckmarkWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CheckmarkWidget.WBP_CheckmarkWidget_C
// 0x0030 (0x02C0 - 0x0290)
class UWBP_CheckmarkWidget_C final : public USBZWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Highlight;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsChecked;                                        // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(bool NewState)> OnCheckChanged;                                    // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_WBP_CheckmarkWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetChecked(bool InIsChecked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CheckmarkWidget_C">();
	}
	static class UWBP_CheckmarkWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CheckmarkWidget_C>();
	}
};
static_assert(alignof(UWBP_CheckmarkWidget_C) == 0x000008, "Wrong alignment on UWBP_CheckmarkWidget_C");
static_assert(sizeof(UWBP_CheckmarkWidget_C) == 0x0002C0, "Wrong size on UWBP_CheckmarkWidget_C");
static_assert(offsetof(UWBP_CheckmarkWidget_C, UberGraphFrame) == 0x000290, "Member 'UWBP_CheckmarkWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkWidget_C, Background) == 0x000298, "Member 'UWBP_CheckmarkWidget_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkWidget_C, Border_Highlight) == 0x0002A0, "Member 'UWBP_CheckmarkWidget_C::Border_Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkWidget_C, bIsChecked) == 0x0002A8, "Member 'UWBP_CheckmarkWidget_C::bIsChecked' has a wrong offset!");
static_assert(offsetof(UWBP_CheckmarkWidget_C, OnCheckChanged) == 0x0002B0, "Member 'UWBP_CheckmarkWidget_C::OnCheckChanged' has a wrong offset!");

}

