﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Results_StayAsParty

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Results_StayAsParty.WBP_UI_Results_StayAsParty_C
// 0x0070 (0x0300 - 0x0290)
class UWBP_UI_Results_StayAsParty_C final : public USBZStayAsPartyWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_UI_Widget_ActionInput_C*           ActionInput;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        FormAPartyText;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        PlayerStayCount_T;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           StayAsPartyCountdownProgressBar;                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_YesNoToggleButton_C*            YesNoToggleButton;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         StayAsPartyInitialCountdown;                       // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StayAsPartyCurrentCountdown;                       // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           StayInPartyCountdownTimerHandle;                   // 0x02D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          HasAcceptedParty;                                  // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasMadeADecision;                                  // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2DA[0x2];                                      // 0x02DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentAcceptCount;                                // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayersCount;                                      // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E4[0x4];                                      // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CountString;                                       // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         NumberOfPartyLeaders;                              // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_Results_StayAsParty(int32 EntryPoint);
	void BndEvt__WBP_UI_Results_StayAsParty_WBP_UI_YesNoToggleButton_K2Node_ComponentBoundEvent_4_OnMenuButtonSelected__DelegateSignature(class USBZMenuButton* Button);
	void BndEvt__WBP_UI_Results_StayAsParty_WBP_UI_Widget_ActionInput_K2Node_ComponentBoundEvent_3_SBZOnActionChanged__DelegateSignature();
	void PartyPlayerLeaveEvent_Event_0(const class FString& PlayerId);
	void OnMergePartyUpdated(const class FString& PlayerDisplayName, const bool bIsMergePartySelected);
	void OnRestartStarted(float InNewTime);
	void OnRestartAcceptTimerStarted(float InNewTime);
	void OnInitialTimerStarted(float InNewTime);
	void OnSetup(const TArray<class ASBZPlayerState*>& PlayerStateArray);
	void Construct();
	void TickPartyCountdown();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Results_StayAsParty_C">();
	}
	static class UWBP_UI_Results_StayAsParty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Results_StayAsParty_C>();
	}
};
static_assert(alignof(UWBP_UI_Results_StayAsParty_C) == 0x000008, "Wrong alignment on UWBP_UI_Results_StayAsParty_C");
static_assert(sizeof(UWBP_UI_Results_StayAsParty_C) == 0x000300, "Wrong size on UWBP_UI_Results_StayAsParty_C");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, UberGraphFrame) == 0x000290, "Member 'UWBP_UI_Results_StayAsParty_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, ActionInput) == 0x000298, "Member 'UWBP_UI_Results_StayAsParty_C::ActionInput' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, Background) == 0x0002A0, "Member 'UWBP_UI_Results_StayAsParty_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, FormAPartyText) == 0x0002A8, "Member 'UWBP_UI_Results_StayAsParty_C::FormAPartyText' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, PlayerStayCount_T) == 0x0002B0, "Member 'UWBP_UI_Results_StayAsParty_C::PlayerStayCount_T' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, StayAsPartyCountdownProgressBar) == 0x0002B8, "Member 'UWBP_UI_Results_StayAsParty_C::StayAsPartyCountdownProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, YesNoToggleButton) == 0x0002C0, "Member 'UWBP_UI_Results_StayAsParty_C::YesNoToggleButton' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, StayAsPartyInitialCountdown) == 0x0002C8, "Member 'UWBP_UI_Results_StayAsParty_C::StayAsPartyInitialCountdown' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, StayAsPartyCurrentCountdown) == 0x0002CC, "Member 'UWBP_UI_Results_StayAsParty_C::StayAsPartyCurrentCountdown' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, StayInPartyCountdownTimerHandle) == 0x0002D0, "Member 'UWBP_UI_Results_StayAsParty_C::StayInPartyCountdownTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, HasAcceptedParty) == 0x0002D8, "Member 'UWBP_UI_Results_StayAsParty_C::HasAcceptedParty' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, HasMadeADecision) == 0x0002D9, "Member 'UWBP_UI_Results_StayAsParty_C::HasMadeADecision' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, CurrentAcceptCount) == 0x0002DC, "Member 'UWBP_UI_Results_StayAsParty_C::CurrentAcceptCount' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, PlayersCount) == 0x0002E0, "Member 'UWBP_UI_Results_StayAsParty_C::PlayersCount' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, CountString) == 0x0002E8, "Member 'UWBP_UI_Results_StayAsParty_C::CountString' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Results_StayAsParty_C, NumberOfPartyLeaders) == 0x0002F8, "Member 'UWBP_UI_Results_StayAsParty_C::NumberOfPartyLeaders' has a wrong offset!");

}

