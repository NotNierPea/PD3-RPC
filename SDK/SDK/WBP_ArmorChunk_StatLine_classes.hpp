﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ArmorChunk_StatLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Starbreeze_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ArmorChunk_StatLine.WBP_ArmorChunk_StatLine_C
// 0x0030 (0x02C0 - 0x0290)
class UWBP_ArmorChunk_StatLine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBZUITextBlock*                        StatName_T;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBZUITextBlock*                        StatValue_T;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   StatName;                                          // 0x02A8(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_WBP_ArmorChunk_StatLine(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetValue(int32 Value);
	void SetPlateRegen(float PlateRegen);
	void SetAmmoCapacity(float AmmoCap);
	void SetSpeedPenalty(ESBZArmorSpeedPenalty SpeedPenalty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ArmorChunk_StatLine_C">();
	}
	static class UWBP_ArmorChunk_StatLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ArmorChunk_StatLine_C>();
	}
};
static_assert(alignof(UWBP_ArmorChunk_StatLine_C) == 0x000008, "Wrong alignment on UWBP_ArmorChunk_StatLine_C");
static_assert(sizeof(UWBP_ArmorChunk_StatLine_C) == 0x0002C0, "Wrong size on UWBP_ArmorChunk_StatLine_C");
static_assert(offsetof(UWBP_ArmorChunk_StatLine_C, UberGraphFrame) == 0x000290, "Member 'UWBP_ArmorChunk_StatLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ArmorChunk_StatLine_C, StatName_T) == 0x000298, "Member 'UWBP_ArmorChunk_StatLine_C::StatName_T' has a wrong offset!");
static_assert(offsetof(UWBP_ArmorChunk_StatLine_C, StatValue_T) == 0x0002A0, "Member 'UWBP_ArmorChunk_StatLine_C::StatValue_T' has a wrong offset!");
static_assert(offsetof(UWBP_ArmorChunk_StatLine_C, StatName) == 0x0002A8, "Member 'UWBP_ArmorChunk_StatLine_C::StatName' has a wrong offset!");

}

