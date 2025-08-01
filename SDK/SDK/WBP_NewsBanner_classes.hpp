﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NewsBanner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NewsBanner.WBP_NewsBanner_C
// 0x0050 (0x02E0 - 0x0290)
class UWBP_NewsBanner_C final : public USBZWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnFocused;                                         // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_PageCycler_C*                      PageCycler;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NewsBannerButton_C*                WBP_NewsBannerButton;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPaperSprite*                           EditorSprite;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnCarouselPressed;                                 // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrentIndex;                                      // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBZNewsDataUIEntry>            NewsEntries;                                       // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_NewsBanner(int32 EntryPoint);
	void OnGameInstalled(bool bIsGameInstallPending);
	void CarouselIndexChanged(int32 NewIndex);
	void SetNewsBannerEnabled(bool bInEnabled);
	void Destruct();
	void OnInitialized();
	void NavigateToPage(int32 InNavigateIndex);
	void IncrementPage();
	void OnDecrementPage();
	void PreConstruct(bool IsDesignTime);
	void OnComplete_20FB66EC40031DB9F52C91B5F92076D7(ESBZOnlineCode ErrorCode, const TArray<struct FSBZNewsDataUIEntry>& NewsFeedList);
	void RemoveItem(int32 InItemIndexToRemove);
	void OnFocusedChanged(bool InFocused);
	void OnHoveredChanged(bool InHovered);
	void UpdateAccessBasedOnPrivilege(bool InstallPending);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NewsBanner_C">();
	}
	static class UWBP_NewsBanner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NewsBanner_C>();
	}
};
static_assert(alignof(UWBP_NewsBanner_C) == 0x000008, "Wrong alignment on UWBP_NewsBanner_C");
static_assert(sizeof(UWBP_NewsBanner_C) == 0x0002E0, "Wrong size on UWBP_NewsBanner_C");
static_assert(offsetof(UWBP_NewsBanner_C, UberGraphFrame) == 0x000290, "Member 'UWBP_NewsBanner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_NewsBanner_C, OnFocused) == 0x000298, "Member 'UWBP_NewsBanner_C::OnFocused' has a wrong offset!");
static_assert(offsetof(UWBP_NewsBanner_C, PageCycler) == 0x0002A0, "Member 'UWBP_NewsBanner_C::PageCycler' has a wrong offset!");
static_assert(offsetof(UWBP_NewsBanner_C, WBP_NewsBannerButton) == 0x0002A8, "Member 'UWBP_NewsBanner_C::WBP_NewsBannerButton' has a wrong offset!");
static_assert(offsetof(UWBP_NewsBanner_C, EditorSprite) == 0x0002B0, "Member 'UWBP_NewsBanner_C::EditorSprite' has a wrong offset!");
static_assert(offsetof(UWBP_NewsBanner_C, OnCarouselPressed) == 0x0002B8, "Member 'UWBP_NewsBanner_C::OnCarouselPressed' has a wrong offset!");
static_assert(offsetof(UWBP_NewsBanner_C, CurrentIndex) == 0x0002C8, "Member 'UWBP_NewsBanner_C::CurrentIndex' has a wrong offset!");
static_assert(offsetof(UWBP_NewsBanner_C, NewsEntries) == 0x0002D0, "Member 'UWBP_NewsBanner_C::NewsEntries' has a wrong offset!");

}

