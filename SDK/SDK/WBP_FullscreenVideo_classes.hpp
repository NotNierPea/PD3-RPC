﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FullscreenVideo

#include "Basic.hpp"

#include "Starbreeze_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FullscreenVideo.WBP_FullscreenVideo_C
// 0x0000 (0x0368 - 0x0368)
class UWBP_FullscreenVideo_C final : public USBZFullscreenVideoWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FullscreenVideo_C">();
	}
	static class UWBP_FullscreenVideo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FullscreenVideo_C>();
	}
};
static_assert(alignof(UWBP_FullscreenVideo_C) == 0x000008, "Wrong alignment on UWBP_FullscreenVideo_C");
static_assert(sizeof(UWBP_FullscreenVideo_C) == 0x000368, "Wrong size on UWBP_FullscreenVideo_C");

}

