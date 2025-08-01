﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_AxisInput

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Widget_AxisInput.WBP_UI_Widget_AxisInput_C
// 0x0008 (0x02C0 - 0x02B8)
class UWBP_UI_Widget_AxisInput_C final : public USBZAxisInputWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_WBP_UI_Widget_AxisInput(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Widget_AxisInput_C">();
	}
	static class UWBP_UI_Widget_AxisInput_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Widget_AxisInput_C>();
	}
};
static_assert(alignof(UWBP_UI_Widget_AxisInput_C) == 0x000008, "Wrong alignment on UWBP_UI_Widget_AxisInput_C");
static_assert(sizeof(UWBP_UI_Widget_AxisInput_C) == 0x0002C0, "Wrong size on UWBP_UI_Widget_AxisInput_C");
static_assert(offsetof(UWBP_UI_Widget_AxisInput_C, UberGraphFrame) == 0x0002B8, "Member 'UWBP_UI_Widget_AxisInput_C::UberGraphFrame' has a wrong offset!");

}

