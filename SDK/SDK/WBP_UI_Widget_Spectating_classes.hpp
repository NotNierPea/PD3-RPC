﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_Spectating

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Widget_Spectating.WBP_UI_Widget_Spectating_C
// 0x0010 (0x02A0 - 0x0290)
class UWBP_UI_Widget_Spectating_C final : public USBZWidgetBase
{
public:
	class UImage*                                 Image_164;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Widget_CustodyTimer_C*          Widget_CustodyTimer;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Widget_Spectating_C">();
	}
	static class UWBP_UI_Widget_Spectating_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Widget_Spectating_C>();
	}
};
static_assert(alignof(UWBP_UI_Widget_Spectating_C) == 0x000008, "Wrong alignment on UWBP_UI_Widget_Spectating_C");
static_assert(sizeof(UWBP_UI_Widget_Spectating_C) == 0x0002A0, "Wrong size on UWBP_UI_Widget_Spectating_C");
static_assert(offsetof(UWBP_UI_Widget_Spectating_C, Image_164) == 0x000290, "Member 'UWBP_UI_Widget_Spectating_C::Image_164' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_Spectating_C, Widget_CustodyTimer) == 0x000298, "Member 'UWBP_UI_Widget_Spectating_C::Widget_CustodyTimer' has a wrong offset!");

}

