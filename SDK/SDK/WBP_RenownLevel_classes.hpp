﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RenownLevel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RenownLevel.WBP_RenownLevel_C
// 0x0028 (0x02B8 - 0x0290)
class UWBP_RenownLevel_C final : public USBZWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Icon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        SBZText_LevelCounter;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZRenownData*                         RenownData;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EditorRenownLevel;                                 // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLocalClient;                                    // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_WBP_RenownLevel(int32 EntryPoint);
	void Destruct();
	void Construct();
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void SetIconAndLevel(int32 InLevel);
	void GetIcon(int32 InRenownLevel, class UPaperSprite** OutSprite);
	void GetTierColor(int32 InRenownLevel, struct FSlateColor* OutColor);
	void UpdateVisuals(int32 InLevel);
	void UpdateRenown();
	void SetRenown(int32 InRenown);
	void OnRenownChanged(int32 NewLevel, int32 PreviousLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RenownLevel_C">();
	}
	static class UWBP_RenownLevel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RenownLevel_C>();
	}
};
static_assert(alignof(UWBP_RenownLevel_C) == 0x000008, "Wrong alignment on UWBP_RenownLevel_C");
static_assert(sizeof(UWBP_RenownLevel_C) == 0x0002B8, "Wrong size on UWBP_RenownLevel_C");
static_assert(offsetof(UWBP_RenownLevel_C, UberGraphFrame) == 0x000290, "Member 'UWBP_RenownLevel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RenownLevel_C, Image_Icon) == 0x000298, "Member 'UWBP_RenownLevel_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_RenownLevel_C, SBZText_LevelCounter) == 0x0002A0, "Member 'UWBP_RenownLevel_C::SBZText_LevelCounter' has a wrong offset!");
static_assert(offsetof(UWBP_RenownLevel_C, RenownData) == 0x0002A8, "Member 'UWBP_RenownLevel_C::RenownData' has a wrong offset!");
static_assert(offsetof(UWBP_RenownLevel_C, EditorRenownLevel) == 0x0002B0, "Member 'UWBP_RenownLevel_C::EditorRenownLevel' has a wrong offset!");
static_assert(offsetof(UWBP_RenownLevel_C, bIsLocalClient) == 0x0002B4, "Member 'UWBP_RenownLevel_C::bIsLocalClient' has a wrong offset!");

}

