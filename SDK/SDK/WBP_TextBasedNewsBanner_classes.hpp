﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TextBasedNewsBanner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TextBasedNewsBanner.WBP_TextBasedNewsBanner_C
// 0x0040 (0x02D0 - 0x0290)
class UWBP_TextBasedNewsBanner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Attention_B;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundEdgeSlant_I;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Content_O;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        Description_T;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        Title_T;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZColorStyle*                         AttentionColorStyle;                               // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              ShowVisibility;                                    // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              HideVisibility;                                    // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_TextBasedNewsBanner(int32 EntryPoint);
	void On_News_Message_Received(const class FString& Title, const class FString& Content);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void SetInformation(const class FText& InTitle, const class FText& InDescription, bool InShouldShow);
	void Show();
	void Hide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TextBasedNewsBanner_C">();
	}
	static class UWBP_TextBasedNewsBanner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TextBasedNewsBanner_C>();
	}
};
static_assert(alignof(UWBP_TextBasedNewsBanner_C) == 0x000008, "Wrong alignment on UWBP_TextBasedNewsBanner_C");
static_assert(sizeof(UWBP_TextBasedNewsBanner_C) == 0x0002D0, "Wrong size on UWBP_TextBasedNewsBanner_C");
static_assert(offsetof(UWBP_TextBasedNewsBanner_C, UberGraphFrame) == 0x000290, "Member 'UWBP_TextBasedNewsBanner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TextBasedNewsBanner_C, Attention_B) == 0x000298, "Member 'UWBP_TextBasedNewsBanner_C::Attention_B' has a wrong offset!");
static_assert(offsetof(UWBP_TextBasedNewsBanner_C, BackgroundEdgeSlant_I) == 0x0002A0, "Member 'UWBP_TextBasedNewsBanner_C::BackgroundEdgeSlant_I' has a wrong offset!");
static_assert(offsetof(UWBP_TextBasedNewsBanner_C, Content_O) == 0x0002A8, "Member 'UWBP_TextBasedNewsBanner_C::Content_O' has a wrong offset!");
static_assert(offsetof(UWBP_TextBasedNewsBanner_C, Description_T) == 0x0002B0, "Member 'UWBP_TextBasedNewsBanner_C::Description_T' has a wrong offset!");
static_assert(offsetof(UWBP_TextBasedNewsBanner_C, Title_T) == 0x0002B8, "Member 'UWBP_TextBasedNewsBanner_C::Title_T' has a wrong offset!");
static_assert(offsetof(UWBP_TextBasedNewsBanner_C, AttentionColorStyle) == 0x0002C0, "Member 'UWBP_TextBasedNewsBanner_C::AttentionColorStyle' has a wrong offset!");
static_assert(offsetof(UWBP_TextBasedNewsBanner_C, ShowVisibility) == 0x0002C8, "Member 'UWBP_TextBasedNewsBanner_C::ShowVisibility' has a wrong offset!");
static_assert(offsetof(UWBP_TextBasedNewsBanner_C, HideVisibility) == 0x0002C9, "Member 'UWBP_TextBasedNewsBanner_C::HideVisibility' has a wrong offset!");

}

