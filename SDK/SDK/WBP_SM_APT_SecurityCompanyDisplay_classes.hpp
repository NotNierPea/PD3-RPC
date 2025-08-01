﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_SM_APT_SecurityCompanyDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SM_APT_SecurityCompanyDisplay.WBP_SM_APT_SecurityCompanyDisplay_C
// 0x0018 (0x02C8 - 0x02B0)
class UWBP_SM_APT_SecurityCompanyDisplay_C final : public USBZSecurityCompanyVisualsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_SecurityCompanyLogo;                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SecurityCompanyName;                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_SM_APT_SecurityCompanyDisplay(int32 EntryPoint);
	void OnSecurityCompanyAssetLoaded();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SM_APT_SecurityCompanyDisplay_C">();
	}
	static class UWBP_SM_APT_SecurityCompanyDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SM_APT_SecurityCompanyDisplay_C>();
	}
};
static_assert(alignof(UWBP_SM_APT_SecurityCompanyDisplay_C) == 0x000008, "Wrong alignment on UWBP_SM_APT_SecurityCompanyDisplay_C");
static_assert(sizeof(UWBP_SM_APT_SecurityCompanyDisplay_C) == 0x0002C8, "Wrong size on UWBP_SM_APT_SecurityCompanyDisplay_C");
static_assert(offsetof(UWBP_SM_APT_SecurityCompanyDisplay_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_SM_APT_SecurityCompanyDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SM_APT_SecurityCompanyDisplay_C, Image_SecurityCompanyLogo) == 0x0002B8, "Member 'UWBP_SM_APT_SecurityCompanyDisplay_C::Image_SecurityCompanyLogo' has a wrong offset!");
static_assert(offsetof(UWBP_SM_APT_SecurityCompanyDisplay_C, Text_SecurityCompanyName) == 0x0002C0, "Member 'UWBP_SM_APT_SecurityCompanyDisplay_C::Text_SecurityCompanyName' has a wrong offset!");

}

