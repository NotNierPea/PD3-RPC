﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLinkComponents

#include "Basic.hpp"

#include "LiveLinkInterface_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "LiveLinkComponents_structs.hpp"


namespace SDK
{

// Class LiveLinkComponents.LiveLinkComponentController
// 0x00B8 (0x0178 - 0x00C0)
class ULiveLinkComponentController final : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation         SubjectRepresentation;                             // 0x00C0(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class ULiveLinkRole>, class ULiveLinkControllerBase*> ControllerMap;            // 0x00D8(0x0050)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, NoClear, Interp, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          bUpdateInEditor;                                   // 0x0128(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(float DeltaTime)> OnLiveLinkUpdated;                               // 0x0130(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FComponentReference                    ComponentToControl;                                // 0x0140(0x0030)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                          bDisableEvaluateLiveLinkWhenSpawnable;             // 0x0170(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEvaluateLiveLink;                                 // 0x0171(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_172[0x6];                                      // 0x0172(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkComponentController">();
	}
	static class ULiveLinkComponentController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkComponentController>();
	}
};
static_assert(alignof(ULiveLinkComponentController) == 0x000008, "Wrong alignment on ULiveLinkComponentController");
static_assert(sizeof(ULiveLinkComponentController) == 0x000178, "Wrong size on ULiveLinkComponentController");
static_assert(offsetof(ULiveLinkComponentController, SubjectRepresentation) == 0x0000C0, "Member 'ULiveLinkComponentController::SubjectRepresentation' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, ControllerMap) == 0x0000D8, "Member 'ULiveLinkComponentController::ControllerMap' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, bUpdateInEditor) == 0x000128, "Member 'ULiveLinkComponentController::bUpdateInEditor' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, OnLiveLinkUpdated) == 0x000130, "Member 'ULiveLinkComponentController::OnLiveLinkUpdated' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, ComponentToControl) == 0x000140, "Member 'ULiveLinkComponentController::ComponentToControl' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, bDisableEvaluateLiveLinkWhenSpawnable) == 0x000170, "Member 'ULiveLinkComponentController::bDisableEvaluateLiveLinkWhenSpawnable' has a wrong offset!");
static_assert(offsetof(ULiveLinkComponentController, bEvaluateLiveLink) == 0x000171, "Member 'ULiveLinkComponentController::bEvaluateLiveLink' has a wrong offset!");

// Class LiveLinkComponents.LiveLinkComponentSettings
// 0x0050 (0x0080 - 0x0030)
class ULiveLinkComponentSettings final : public UObject
{
public:
	TMap<TSubclassOf<class ULiveLinkRole>, TSubclassOf<class ULiveLinkControllerBase>> DefaultControllerForRole; // 0x0030(0x0050)(Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkComponentSettings">();
	}
	static class ULiveLinkComponentSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkComponentSettings>();
	}
};
static_assert(alignof(ULiveLinkComponentSettings) == 0x000008, "Wrong alignment on ULiveLinkComponentSettings");
static_assert(sizeof(ULiveLinkComponentSettings) == 0x000080, "Wrong size on ULiveLinkComponentSettings");
static_assert(offsetof(ULiveLinkComponentSettings, DefaultControllerForRole) == 0x000030, "Member 'ULiveLinkComponentSettings::DefaultControllerForRole' has a wrong offset!");

// Class LiveLinkComponents.LiveLinkControllerBase
// 0x0020 (0x0050 - 0x0030)
class ULiveLinkControllerBase : public UObject
{
public:
	uint8                                         Pad_30[0x20];                                      // 0x0030(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkControllerBase">();
	}
	static class ULiveLinkControllerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkControllerBase>();
	}
};
static_assert(alignof(ULiveLinkControllerBase) == 0x000008, "Wrong alignment on ULiveLinkControllerBase");
static_assert(sizeof(ULiveLinkControllerBase) == 0x000050, "Wrong size on ULiveLinkControllerBase");

// Class LiveLinkComponents.LiveLinkLightController
// 0x0000 (0x0050 - 0x0050)
class ULiveLinkLightController final : public ULiveLinkControllerBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkLightController">();
	}
	static class ULiveLinkLightController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkLightController>();
	}
};
static_assert(alignof(ULiveLinkLightController) == 0x000008, "Wrong alignment on ULiveLinkLightController");
static_assert(sizeof(ULiveLinkLightController) == 0x000050, "Wrong size on ULiveLinkLightController");

// Class LiveLinkComponents.LiveLinkTransformController
// 0x0008 (0x0058 - 0x0050)
class ULiveLinkTransformController final : public ULiveLinkControllerBase
{
public:
	struct FLiveLinkTransformControllerData       TransformData;                                     // 0x0050(0x0006)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTransformController">();
	}
	static class ULiveLinkTransformController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTransformController>();
	}
};
static_assert(alignof(ULiveLinkTransformController) == 0x000008, "Wrong alignment on ULiveLinkTransformController");
static_assert(sizeof(ULiveLinkTransformController) == 0x000058, "Wrong size on ULiveLinkTransformController");
static_assert(offsetof(ULiveLinkTransformController, TransformData) == 0x000050, "Member 'ULiveLinkTransformController::TransformData' has a wrong offset!");

}

