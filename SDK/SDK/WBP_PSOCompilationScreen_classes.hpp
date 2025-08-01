﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PSOCompilationScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PSOCompilationScreen.WBP_PSOCompilationScreen_C
// 0x0038 (0x02F0 - 0x02B8)
class UWBP_PSOCompilationScreen_C final : public USBZPSOCompilationScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background_I;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CompilingValue_T;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      LoadingThrobber;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoP3;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PSOTexts_HB;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Video_Background;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PSOCompilationScreen(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdatePSOProgress(int32 CurrentProgress, int32 TotalRemaining);
	void Destruct();
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PSOCompilationScreen_C">();
	}
	static class UWBP_PSOCompilationScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PSOCompilationScreen_C>();
	}
};
static_assert(alignof(UWBP_PSOCompilationScreen_C) == 0x000008, "Wrong alignment on UWBP_PSOCompilationScreen_C");
static_assert(sizeof(UWBP_PSOCompilationScreen_C) == 0x0002F0, "Wrong size on UWBP_PSOCompilationScreen_C");
static_assert(offsetof(UWBP_PSOCompilationScreen_C, UberGraphFrame) == 0x0002B8, "Member 'UWBP_PSOCompilationScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PSOCompilationScreen_C, Background_I) == 0x0002C0, "Member 'UWBP_PSOCompilationScreen_C::Background_I' has a wrong offset!");
static_assert(offsetof(UWBP_PSOCompilationScreen_C, CompilingValue_T) == 0x0002C8, "Member 'UWBP_PSOCompilationScreen_C::CompilingValue_T' has a wrong offset!");
static_assert(offsetof(UWBP_PSOCompilationScreen_C, LoadingThrobber) == 0x0002D0, "Member 'UWBP_PSOCompilationScreen_C::LoadingThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_PSOCompilationScreen_C, LogoP3) == 0x0002D8, "Member 'UWBP_PSOCompilationScreen_C::LogoP3' has a wrong offset!");
static_assert(offsetof(UWBP_PSOCompilationScreen_C, PSOTexts_HB) == 0x0002E0, "Member 'UWBP_PSOCompilationScreen_C::PSOTexts_HB' has a wrong offset!");
static_assert(offsetof(UWBP_PSOCompilationScreen_C, Video_Background) == 0x0002E8, "Member 'UWBP_PSOCompilationScreen_C::Video_Background' has a wrong offset!");

}

