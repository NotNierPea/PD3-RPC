﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_Widget_ActionNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Starbreeze_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_Widget_ActionNotification.WBP_UI_Widget_ActionNotification_C
// 0x0020 (0x0368 - 0x0348)
class UWBP_UI_Widget_ActionNotification_C final : public UPD3ActionNotificationWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0348(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Background;                                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         NotificationQueue_HB;                              // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynamic_Material_Background;                       // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_UI_Widget_ActionNotification(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void OnNotificationAdded(const struct FSBZHUDNotificationData& InNotificationAdded);
	void DisplayNotification(const struct FSBZHUDNotificationData& InNotification);
	void UpdateQueue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_Widget_ActionNotification_C">();
	}
	static class UWBP_UI_Widget_ActionNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_Widget_ActionNotification_C>();
	}
};
static_assert(alignof(UWBP_UI_Widget_ActionNotification_C) == 0x000008, "Wrong alignment on UWBP_UI_Widget_ActionNotification_C");
static_assert(sizeof(UWBP_UI_Widget_ActionNotification_C) == 0x000368, "Wrong size on UWBP_UI_Widget_ActionNotification_C");
static_assert(offsetof(UWBP_UI_Widget_ActionNotification_C, UberGraphFrame) == 0x000348, "Member 'UWBP_UI_Widget_ActionNotification_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_ActionNotification_C, Image_Background) == 0x000350, "Member 'UWBP_UI_Widget_ActionNotification_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_ActionNotification_C, NotificationQueue_HB) == 0x000358, "Member 'UWBP_UI_Widget_ActionNotification_C::NotificationQueue_HB' has a wrong offset!");
static_assert(offsetof(UWBP_UI_Widget_ActionNotification_C, Dynamic_Material_Background) == 0x000360, "Member 'UWBP_UI_Widget_ActionNotification_C::Dynamic_Material_Background' has a wrong offset!");

}

