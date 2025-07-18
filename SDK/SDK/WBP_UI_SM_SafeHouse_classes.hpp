﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_SM_SafeHouse

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_SM_SafeHouse.WBP_UI_SM_SafeHouse_C
// 0x0018 (0x02A8 - 0x0290)
class UWBP_UI_SM_SafeHouse_C final : public USBZSafeHouseBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_UI_SafeHouseHUD_C*                 Widget_SafeHouseHUD;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_SafehouseMainMenu_C*            Widget_SafehouseMainMenu;                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_SM_SafeHouse(int32 EntryPoint);
	void OnInGameMenuInput();
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_SM_SafeHouse_C">();
	}
	static class UWBP_UI_SM_SafeHouse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_SM_SafeHouse_C>();
	}
};
static_assert(alignof(UWBP_UI_SM_SafeHouse_C) == 0x000008, "Wrong alignment on UWBP_UI_SM_SafeHouse_C");
static_assert(sizeof(UWBP_UI_SM_SafeHouse_C) == 0x0002A8, "Wrong size on UWBP_UI_SM_SafeHouse_C");
static_assert(offsetof(UWBP_UI_SM_SafeHouse_C, UberGraphFrame) == 0x000290, "Member 'UWBP_UI_SM_SafeHouse_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_SafeHouse_C, Widget_SafeHouseHUD) == 0x000298, "Member 'UWBP_UI_SM_SafeHouse_C::Widget_SafeHouseHUD' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SM_SafeHouse_C, Widget_SafehouseMainMenu) == 0x0002A0, "Member 'UWBP_UI_SM_SafeHouse_C::Widget_SafehouseMainMenu' has a wrong offset!");

}

