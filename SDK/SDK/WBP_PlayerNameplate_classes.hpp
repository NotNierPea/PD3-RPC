﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerNameplate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerNameplate.WBP_PlayerNameplate_C
// 0x0068 (0x0308 - 0x02A0)
class UWBP_PlayerNameplate_C final : public USBZMainMenuPlayerNameplateWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Show;                                              // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBZUITextBlock*                        InfamyLevel_T;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeaderIcon_I;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Nebula_HB;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NebulaIcon_I;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              NebulaName_ScaleBox;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NebulaName_t;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlatformIcon_I;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               PlatformName_O;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlatformName_T;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RenownLevel_C*                     RenownLevel;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Root_SB;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_PlayerNameplate(int32 EntryPoint);
	void BP_SetRenownLevel(int32 RenownLevel_0);
	void BP_SetInfamyLevel(int32 InfamyLevel);
	void BP_SetUserData(const struct FSBZUser& InUserData);
	void BP_SetLobbyInfo(const struct FSBZLobbyCharacterInfoUi& InLobbyInfo);
	void InitPlayer(const class FText& InDisplayName, const class FText& InPlatformName, ESBZPlatform InPlatform, int32 InInfamyLevel, int32 InRenownLevel, bool InIsPlatformName, bool InIsPartyLeader);
	void UpdatePlayer(const class FText& InDisplayName, const class FText& InPlatformName, int32 InInfamyLevel, int32 InRenownLevel);
	void SetDisplayName(const class FText& InDisplayName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerNameplate_C">();
	}
	static class UWBP_PlayerNameplate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerNameplate_C>();
	}
};
static_assert(alignof(UWBP_PlayerNameplate_C) == 0x000008, "Wrong alignment on UWBP_PlayerNameplate_C");
static_assert(sizeof(UWBP_PlayerNameplate_C) == 0x000308, "Wrong size on UWBP_PlayerNameplate_C");
static_assert(offsetof(UWBP_PlayerNameplate_C, UberGraphFrame) == 0x0002A0, "Member 'UWBP_PlayerNameplate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, Show) == 0x0002A8, "Member 'UWBP_PlayerNameplate_C::Show' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, InfamyLevel_T) == 0x0002B0, "Member 'UWBP_PlayerNameplate_C::InfamyLevel_T' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, LeaderIcon_I) == 0x0002B8, "Member 'UWBP_PlayerNameplate_C::LeaderIcon_I' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, Nebula_HB) == 0x0002C0, "Member 'UWBP_PlayerNameplate_C::Nebula_HB' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, NebulaIcon_I) == 0x0002C8, "Member 'UWBP_PlayerNameplate_C::NebulaIcon_I' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, NebulaName_ScaleBox) == 0x0002D0, "Member 'UWBP_PlayerNameplate_C::NebulaName_ScaleBox' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, NebulaName_t) == 0x0002D8, "Member 'UWBP_PlayerNameplate_C::NebulaName_t' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, PlatformIcon_I) == 0x0002E0, "Member 'UWBP_PlayerNameplate_C::PlatformIcon_I' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, PlatformName_O) == 0x0002E8, "Member 'UWBP_PlayerNameplate_C::PlatformName_O' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, PlatformName_T) == 0x0002F0, "Member 'UWBP_PlayerNameplate_C::PlatformName_T' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, RenownLevel) == 0x0002F8, "Member 'UWBP_PlayerNameplate_C::RenownLevel' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerNameplate_C, Root_SB) == 0x000300, "Member 'UWBP_PlayerNameplate_C::Root_SB' has a wrong offset!");

}

