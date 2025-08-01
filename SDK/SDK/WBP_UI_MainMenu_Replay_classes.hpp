﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_MainMenu_Replay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_MainMenu_Replay.WBP_UI_MainMenu_Replay_C
// 0x0098 (0x03F8 - 0x0360)
class UWBP_UI_MainMenu_Replay_C final : public USBZMenuButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Background;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Highlight;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_DateCreated;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_LevelName;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ReplayText;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_TotalTime;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBZReplayInfo                         ReplayInfo;                                        // 0x0398(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WBP_UI_MainMenu_Replay(int32 EntryPoint);
	void ButtonHoveredChanged(bool bInIsHovered);
	void ButtonFocusedChanged(bool bInHasFocus);
	void ButtonSelected();
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void SetStateHover(bool bInIsHovered);
	void SetStateFocused(bool bIsFocused);
	void InitReplayInfo(const struct FSBZReplayInfo& InReplayInfor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_MainMenu_Replay_C">();
	}
	static class UWBP_UI_MainMenu_Replay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_MainMenu_Replay_C>();
	}
};
static_assert(alignof(UWBP_UI_MainMenu_Replay_C) == 0x000008, "Wrong alignment on UWBP_UI_MainMenu_Replay_C");
static_assert(sizeof(UWBP_UI_MainMenu_Replay_C) == 0x0003F8, "Wrong size on UWBP_UI_MainMenu_Replay_C");
static_assert(offsetof(UWBP_UI_MainMenu_Replay_C, UberGraphFrame) == 0x000360, "Member 'UWBP_UI_MainMenu_Replay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_MainMenu_Replay_C, Image_Background) == 0x000368, "Member 'UWBP_UI_MainMenu_Replay_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_UI_MainMenu_Replay_C, Image_Highlight) == 0x000370, "Member 'UWBP_UI_MainMenu_Replay_C::Image_Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_UI_MainMenu_Replay_C, Text_DateCreated) == 0x000378, "Member 'UWBP_UI_MainMenu_Replay_C::Text_DateCreated' has a wrong offset!");
static_assert(offsetof(UWBP_UI_MainMenu_Replay_C, Text_LevelName) == 0x000380, "Member 'UWBP_UI_MainMenu_Replay_C::Text_LevelName' has a wrong offset!");
static_assert(offsetof(UWBP_UI_MainMenu_Replay_C, Text_ReplayText) == 0x000388, "Member 'UWBP_UI_MainMenu_Replay_C::Text_ReplayText' has a wrong offset!");
static_assert(offsetof(UWBP_UI_MainMenu_Replay_C, Text_TotalTime) == 0x000390, "Member 'UWBP_UI_MainMenu_Replay_C::Text_TotalTime' has a wrong offset!");
static_assert(offsetof(UWBP_UI_MainMenu_Replay_C, ReplayInfo) == 0x000398, "Member 'UWBP_UI_MainMenu_Replay_C::ReplayInfo' has a wrong offset!");

}

