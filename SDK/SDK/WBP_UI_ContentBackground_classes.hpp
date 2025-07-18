﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_ContentBackground

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_ContentBackground.WBP_UI_ContentBackground_C
// 0x0010 (0x02A0 - 0x0290)
class UWBP_UI_ContentBackground_C final : public UUserWidget
{
public:
	class UNamedSlot*                             Content;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_250;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_ContentBackground_C">();
	}
	static class UWBP_UI_ContentBackground_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_ContentBackground_C>();
	}
};
static_assert(alignof(UWBP_UI_ContentBackground_C) == 0x000008, "Wrong alignment on UWBP_UI_ContentBackground_C");
static_assert(sizeof(UWBP_UI_ContentBackground_C) == 0x0002A0, "Wrong size on UWBP_UI_ContentBackground_C");
static_assert(offsetof(UWBP_UI_ContentBackground_C, Content) == 0x000290, "Member 'UWBP_UI_ContentBackground_C::Content' has a wrong offset!");
static_assert(offsetof(UWBP_UI_ContentBackground_C, Image_250) == 0x000298, "Member 'UWBP_UI_ContentBackground_C::Image_250' has a wrong offset!");

}

