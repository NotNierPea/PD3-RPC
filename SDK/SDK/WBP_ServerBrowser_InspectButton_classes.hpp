﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ServerBrowser_InspectButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ServerBrowser_InspectButton.WBP_ServerBrowser_InspectButton_C
// 0x00F0 (0x0450 - 0x0360)
class UWBP_ServerBrowser_InspectButton_C final : public USBZMenuButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               ActionKey_O;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundGradient_I;                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        Button_Text;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                ButtonSizer;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EdgeBorder_I;                                      // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftEdge_I;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Stripes_I;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        TinyBottom_Text;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        TinyTop_Text;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Widget_ActionInput_Hold_C*      Widget_SelectAction;                               // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   MainText;                                          // 0x03C0(0x0018)(Edit, BlueprintVisible)
	class FText                                   CornerTextTop;                                     // 0x03D8(0x0018)(Edit, BlueprintVisible)
	class FText                                   CornerTextBottom;                                  // 0x03F0(0x0018)(Edit, BlueprintVisible)
	struct FLinearColor                           DefaultColor;                                      // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HoverColor;                                        // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasActionKey;                                     // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_431[0x7];                                      // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          ConfirmSound;                                      // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsConfirmButton;                                   // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          ClickSound;                                        // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ServerBrowser_InspectButton(int32 EntryPoint);
	void ButtonSelected();
	void BndEvt__WBP_ServerBrowser_InspectButton_Widget_TabBackward_K2Node_ComponentBoundEvent_0_SBZOnActionChanged__DelegateSignature();
	void ButtonFocusedChanged(bool bInHasFocus);
	void PreConstruct(bool IsDesignTime);
	void OnFocusChanged(bool NewFocus);
	void SetActionEnabled(bool bIsEnabled_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ServerBrowser_InspectButton_C">();
	}
	static class UWBP_ServerBrowser_InspectButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ServerBrowser_InspectButton_C>();
	}
};
static_assert(alignof(UWBP_ServerBrowser_InspectButton_C) == 0x000008, "Wrong alignment on UWBP_ServerBrowser_InspectButton_C");
static_assert(sizeof(UWBP_ServerBrowser_InspectButton_C) == 0x000450, "Wrong size on UWBP_ServerBrowser_InspectButton_C");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, UberGraphFrame) == 0x000360, "Member 'UWBP_ServerBrowser_InspectButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, Hover) == 0x000368, "Member 'UWBP_ServerBrowser_InspectButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, ActionKey_O) == 0x000370, "Member 'UWBP_ServerBrowser_InspectButton_C::ActionKey_O' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, BackgroundGradient_I) == 0x000378, "Member 'UWBP_ServerBrowser_InspectButton_C::BackgroundGradient_I' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, Button_Text) == 0x000380, "Member 'UWBP_ServerBrowser_InspectButton_C::Button_Text' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, ButtonSizer) == 0x000388, "Member 'UWBP_ServerBrowser_InspectButton_C::ButtonSizer' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, EdgeBorder_I) == 0x000390, "Member 'UWBP_ServerBrowser_InspectButton_C::EdgeBorder_I' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, LeftEdge_I) == 0x000398, "Member 'UWBP_ServerBrowser_InspectButton_C::LeftEdge_I' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, Stripes_I) == 0x0003A0, "Member 'UWBP_ServerBrowser_InspectButton_C::Stripes_I' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, TinyBottom_Text) == 0x0003A8, "Member 'UWBP_ServerBrowser_InspectButton_C::TinyBottom_Text' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, TinyTop_Text) == 0x0003B0, "Member 'UWBP_ServerBrowser_InspectButton_C::TinyTop_Text' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, Widget_SelectAction) == 0x0003B8, "Member 'UWBP_ServerBrowser_InspectButton_C::Widget_SelectAction' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, MainText) == 0x0003C0, "Member 'UWBP_ServerBrowser_InspectButton_C::MainText' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, CornerTextTop) == 0x0003D8, "Member 'UWBP_ServerBrowser_InspectButton_C::CornerTextTop' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, CornerTextBottom) == 0x0003F0, "Member 'UWBP_ServerBrowser_InspectButton_C::CornerTextBottom' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, DefaultColor) == 0x000408, "Member 'UWBP_ServerBrowser_InspectButton_C::DefaultColor' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, HoverColor) == 0x000418, "Member 'UWBP_ServerBrowser_InspectButton_C::HoverColor' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, Size) == 0x000428, "Member 'UWBP_ServerBrowser_InspectButton_C::Size' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, bHasActionKey) == 0x000430, "Member 'UWBP_ServerBrowser_InspectButton_C::bHasActionKey' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, ConfirmSound) == 0x000438, "Member 'UWBP_ServerBrowser_InspectButton_C::ConfirmSound' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, IsConfirmButton) == 0x000440, "Member 'UWBP_ServerBrowser_InspectButton_C::IsConfirmButton' has a wrong offset!");
static_assert(offsetof(UWBP_ServerBrowser_InspectButton_C, ClickSound) == 0x000448, "Member 'UWBP_ServerBrowser_InspectButton_C::ClickSound' has a wrong offset!");

}

