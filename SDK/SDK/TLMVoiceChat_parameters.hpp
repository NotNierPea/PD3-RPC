﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TLMVoiceChat

#include "Basic.hpp"


namespace SDK::Params
{

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetAudioInputMute
// 0x0001 (0x0001 - 0x0000)
struct TLMVoiceChatSubsystem_GetAudioInputMute final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_GetAudioInputMute) == 0x000001, "Wrong alignment on TLMVoiceChatSubsystem_GetAudioInputMute");
static_assert(sizeof(TLMVoiceChatSubsystem_GetAudioInputMute) == 0x000001, "Wrong size on TLMVoiceChatSubsystem_GetAudioInputMute");
static_assert(offsetof(TLMVoiceChatSubsystem_GetAudioInputMute, ReturnValue) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetAudioInputMute::ReturnValue' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetAudioInputVolume
// 0x0004 (0x0004 - 0x0000)
struct TLMVoiceChatSubsystem_GetAudioInputVolume final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_GetAudioInputVolume) == 0x000004, "Wrong alignment on TLMVoiceChatSubsystem_GetAudioInputVolume");
static_assert(sizeof(TLMVoiceChatSubsystem_GetAudioInputVolume) == 0x000004, "Wrong size on TLMVoiceChatSubsystem_GetAudioInputVolume");
static_assert(offsetof(TLMVoiceChatSubsystem_GetAudioInputVolume, ReturnValue) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetAudioInputVolume::ReturnValue' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetAudioOutputMute
// 0x0001 (0x0001 - 0x0000)
struct TLMVoiceChatSubsystem_GetAudioOutputMute final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_GetAudioOutputMute) == 0x000001, "Wrong alignment on TLMVoiceChatSubsystem_GetAudioOutputMute");
static_assert(sizeof(TLMVoiceChatSubsystem_GetAudioOutputMute) == 0x000001, "Wrong size on TLMVoiceChatSubsystem_GetAudioOutputMute");
static_assert(offsetof(TLMVoiceChatSubsystem_GetAudioOutputMute, ReturnValue) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetAudioOutputMute::ReturnValue' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetAudioOutputVolume
// 0x0004 (0x0004 - 0x0000)
struct TLMVoiceChatSubsystem_GetAudioOutputVolume final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_GetAudioOutputVolume) == 0x000004, "Wrong alignment on TLMVoiceChatSubsystem_GetAudioOutputVolume");
static_assert(sizeof(TLMVoiceChatSubsystem_GetAudioOutputVolume) == 0x000004, "Wrong size on TLMVoiceChatSubsystem_GetAudioOutputVolume");
static_assert(offsetof(TLMVoiceChatSubsystem_GetAudioOutputVolume, ReturnValue) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetAudioOutputVolume::ReturnValue' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetPlayerBlocked
// 0x0018 (0x0018 - 0x0000)
struct TLMVoiceChatSubsystem_GetPlayerBlocked final
{
public:
	class FString                                 EOSUserId;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TLMVoiceChatSubsystem_GetPlayerBlocked) == 0x000008, "Wrong alignment on TLMVoiceChatSubsystem_GetPlayerBlocked");
static_assert(sizeof(TLMVoiceChatSubsystem_GetPlayerBlocked) == 0x000018, "Wrong size on TLMVoiceChatSubsystem_GetPlayerBlocked");
static_assert(offsetof(TLMVoiceChatSubsystem_GetPlayerBlocked, EOSUserId) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetPlayerBlocked::EOSUserId' has a wrong offset!");
static_assert(offsetof(TLMVoiceChatSubsystem_GetPlayerBlocked, ReturnValue) == 0x000010, "Member 'TLMVoiceChatSubsystem_GetPlayerBlocked::ReturnValue' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetPlayerMuted
// 0x0018 (0x0018 - 0x0000)
struct TLMVoiceChatSubsystem_GetPlayerMuted final
{
public:
	class FString                                 PlayerName;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsMuted;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TLMVoiceChatSubsystem_GetPlayerMuted) == 0x000008, "Wrong alignment on TLMVoiceChatSubsystem_GetPlayerMuted");
static_assert(sizeof(TLMVoiceChatSubsystem_GetPlayerMuted) == 0x000018, "Wrong size on TLMVoiceChatSubsystem_GetPlayerMuted");
static_assert(offsetof(TLMVoiceChatSubsystem_GetPlayerMuted, PlayerName) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetPlayerMuted::PlayerName' has a wrong offset!");
static_assert(offsetof(TLMVoiceChatSubsystem_GetPlayerMuted, bIsMuted) == 0x000010, "Member 'TLMVoiceChatSubsystem_GetPlayerMuted::bIsMuted' has a wrong offset!");
static_assert(offsetof(TLMVoiceChatSubsystem_GetPlayerMuted, ReturnValue) == 0x000011, "Member 'TLMVoiceChatSubsystem_GetPlayerMuted::ReturnValue' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetPlayersInChannel
// 0x0018 (0x0018 - 0x0000)
struct TLMVoiceChatSubsystem_GetPlayersInChannel final
{
public:
	TArray<class FString>                         PlayersInChannel;                                  // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TLMVoiceChatSubsystem_GetPlayersInChannel) == 0x000008, "Wrong alignment on TLMVoiceChatSubsystem_GetPlayersInChannel");
static_assert(sizeof(TLMVoiceChatSubsystem_GetPlayersInChannel) == 0x000018, "Wrong size on TLMVoiceChatSubsystem_GetPlayersInChannel");
static_assert(offsetof(TLMVoiceChatSubsystem_GetPlayersInChannel, PlayersInChannel) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetPlayersInChannel::PlayersInChannel' has a wrong offset!");
static_assert(offsetof(TLMVoiceChatSubsystem_GetPlayersInChannel, ReturnValue) == 0x000010, "Member 'TLMVoiceChatSubsystem_GetPlayersInChannel::ReturnValue' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.IsPlayerInChannel
// 0x0001 (0x0001 - 0x0000)
struct TLMVoiceChatSubsystem_IsPlayerInChannel final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_IsPlayerInChannel) == 0x000001, "Wrong alignment on TLMVoiceChatSubsystem_IsPlayerInChannel");
static_assert(sizeof(TLMVoiceChatSubsystem_IsPlayerInChannel) == 0x000001, "Wrong size on TLMVoiceChatSubsystem_IsPlayerInChannel");
static_assert(offsetof(TLMVoiceChatSubsystem_IsPlayerInChannel, ReturnValue) == 0x000000, "Member 'TLMVoiceChatSubsystem_IsPlayerInChannel::ReturnValue' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.SetAudioInputMute
// 0x0001 (0x0001 - 0x0000)
struct TLMVoiceChatSubsystem_SetAudioInputMute final
{
public:
	bool                                          bMute;                                             // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_SetAudioInputMute) == 0x000001, "Wrong alignment on TLMVoiceChatSubsystem_SetAudioInputMute");
static_assert(sizeof(TLMVoiceChatSubsystem_SetAudioInputMute) == 0x000001, "Wrong size on TLMVoiceChatSubsystem_SetAudioInputMute");
static_assert(offsetof(TLMVoiceChatSubsystem_SetAudioInputMute, bMute) == 0x000000, "Member 'TLMVoiceChatSubsystem_SetAudioInputMute::bMute' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.SetAudioInputVolume
// 0x0004 (0x0004 - 0x0000)
struct TLMVoiceChatSubsystem_SetAudioInputVolume final
{
public:
	float                                         Volume;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_SetAudioInputVolume) == 0x000004, "Wrong alignment on TLMVoiceChatSubsystem_SetAudioInputVolume");
static_assert(sizeof(TLMVoiceChatSubsystem_SetAudioInputVolume) == 0x000004, "Wrong size on TLMVoiceChatSubsystem_SetAudioInputVolume");
static_assert(offsetof(TLMVoiceChatSubsystem_SetAudioInputVolume, Volume) == 0x000000, "Member 'TLMVoiceChatSubsystem_SetAudioInputVolume::Volume' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.SetAudioOutputMute
// 0x0001 (0x0001 - 0x0000)
struct TLMVoiceChatSubsystem_SetAudioOutputMute final
{
public:
	bool                                          bMute;                                             // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_SetAudioOutputMute) == 0x000001, "Wrong alignment on TLMVoiceChatSubsystem_SetAudioOutputMute");
static_assert(sizeof(TLMVoiceChatSubsystem_SetAudioOutputMute) == 0x000001, "Wrong size on TLMVoiceChatSubsystem_SetAudioOutputMute");
static_assert(offsetof(TLMVoiceChatSubsystem_SetAudioOutputMute, bMute) == 0x000000, "Member 'TLMVoiceChatSubsystem_SetAudioOutputMute::bMute' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.SetAudioOutputVolume
// 0x0004 (0x0004 - 0x0000)
struct TLMVoiceChatSubsystem_SetAudioOutputVolume final
{
public:
	float                                         Volume;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_SetAudioOutputVolume) == 0x000004, "Wrong alignment on TLMVoiceChatSubsystem_SetAudioOutputVolume");
static_assert(sizeof(TLMVoiceChatSubsystem_SetAudioOutputVolume) == 0x000004, "Wrong size on TLMVoiceChatSubsystem_SetAudioOutputVolume");
static_assert(offsetof(TLMVoiceChatSubsystem_SetAudioOutputVolume, Volume) == 0x000000, "Member 'TLMVoiceChatSubsystem_SetAudioOutputVolume::Volume' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.SetPlayerBlocked
// 0x0018 (0x0018 - 0x0000)
struct TLMVoiceChatSubsystem_SetPlayerBlocked final
{
public:
	class FString                                 EOSUserId;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBlocked;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TLMVoiceChatSubsystem_SetPlayerBlocked) == 0x000008, "Wrong alignment on TLMVoiceChatSubsystem_SetPlayerBlocked");
static_assert(sizeof(TLMVoiceChatSubsystem_SetPlayerBlocked) == 0x000018, "Wrong size on TLMVoiceChatSubsystem_SetPlayerBlocked");
static_assert(offsetof(TLMVoiceChatSubsystem_SetPlayerBlocked, EOSUserId) == 0x000000, "Member 'TLMVoiceChatSubsystem_SetPlayerBlocked::EOSUserId' has a wrong offset!");
static_assert(offsetof(TLMVoiceChatSubsystem_SetPlayerBlocked, bBlocked) == 0x000010, "Member 'TLMVoiceChatSubsystem_SetPlayerBlocked::bBlocked' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.SetPlayerMuted
// 0x0018 (0x0018 - 0x0000)
struct TLMVoiceChatSubsystem_SetPlayerMuted final
{
public:
	class FString                                 PlayerName;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMuted;                                            // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TLMVoiceChatSubsystem_SetPlayerMuted) == 0x000008, "Wrong alignment on TLMVoiceChatSubsystem_SetPlayerMuted");
static_assert(sizeof(TLMVoiceChatSubsystem_SetPlayerMuted) == 0x000018, "Wrong size on TLMVoiceChatSubsystem_SetPlayerMuted");
static_assert(offsetof(TLMVoiceChatSubsystem_SetPlayerMuted, PlayerName) == 0x000000, "Member 'TLMVoiceChatSubsystem_SetPlayerMuted::PlayerName' has a wrong offset!");
static_assert(offsetof(TLMVoiceChatSubsystem_SetPlayerMuted, bMuted) == 0x000010, "Member 'TLMVoiceChatSubsystem_SetPlayerMuted::bMuted' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.SetPushToTalkEnabled
// 0x0001 (0x0001 - 0x0000)
struct TLMVoiceChatSubsystem_SetPushToTalkEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_SetPushToTalkEnabled) == 0x000001, "Wrong alignment on TLMVoiceChatSubsystem_SetPushToTalkEnabled");
static_assert(sizeof(TLMVoiceChatSubsystem_SetPushToTalkEnabled) == 0x000001, "Wrong size on TLMVoiceChatSubsystem_SetPushToTalkEnabled");
static_assert(offsetof(TLMVoiceChatSubsystem_SetPushToTalkEnabled, bEnabled) == 0x000000, "Member 'TLMVoiceChatSubsystem_SetPushToTalkEnabled::bEnabled' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.SetVoiceChatEnabled
// 0x0001 (0x0001 - 0x0000)
struct TLMVoiceChatSubsystem_SetVoiceChatEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_SetVoiceChatEnabled) == 0x000001, "Wrong alignment on TLMVoiceChatSubsystem_SetVoiceChatEnabled");
static_assert(sizeof(TLMVoiceChatSubsystem_SetVoiceChatEnabled) == 0x000001, "Wrong size on TLMVoiceChatSubsystem_SetVoiceChatEnabled");
static_assert(offsetof(TLMVoiceChatSubsystem_SetVoiceChatEnabled, bEnabled) == 0x000000, "Member 'TLMVoiceChatSubsystem_SetVoiceChatEnabled::bEnabled' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetCurrentUserId
// 0x0010 (0x0010 - 0x0000)
struct TLMVoiceChatSubsystem_GetCurrentUserId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_GetCurrentUserId) == 0x000008, "Wrong alignment on TLMVoiceChatSubsystem_GetCurrentUserId");
static_assert(sizeof(TLMVoiceChatSubsystem_GetCurrentUserId) == 0x000010, "Wrong size on TLMVoiceChatSubsystem_GetCurrentUserId");
static_assert(offsetof(TLMVoiceChatSubsystem_GetCurrentUserId, ReturnValue) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetCurrentUserId::ReturnValue' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetPlayerIds
// 0x0020 (0x0020 - 0x0000)
struct TLMVoiceChatSubsystem_GetPlayerIds final
{
public:
	class FString                                 PlatformUserId;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 EOSUserId;                                         // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_GetPlayerIds) == 0x000008, "Wrong alignment on TLMVoiceChatSubsystem_GetPlayerIds");
static_assert(sizeof(TLMVoiceChatSubsystem_GetPlayerIds) == 0x000020, "Wrong size on TLMVoiceChatSubsystem_GetPlayerIds");
static_assert(offsetof(TLMVoiceChatSubsystem_GetPlayerIds, PlatformUserId) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetPlayerIds::PlatformUserId' has a wrong offset!");
static_assert(offsetof(TLMVoiceChatSubsystem_GetPlayerIds, EOSUserId) == 0x000010, "Member 'TLMVoiceChatSubsystem_GetPlayerIds::EOSUserId' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetPushToTalkEnabled
// 0x0001 (0x0001 - 0x0000)
struct TLMVoiceChatSubsystem_GetPushToTalkEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_GetPushToTalkEnabled) == 0x000001, "Wrong alignment on TLMVoiceChatSubsystem_GetPushToTalkEnabled");
static_assert(sizeof(TLMVoiceChatSubsystem_GetPushToTalkEnabled) == 0x000001, "Wrong size on TLMVoiceChatSubsystem_GetPushToTalkEnabled");
static_assert(offsetof(TLMVoiceChatSubsystem_GetPushToTalkEnabled, ReturnValue) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetPushToTalkEnabled::ReturnValue' has a wrong offset!");

// Function TLMVoiceChat.TLMVoiceChatSubsystem.GetVoiceChatEnabled
// 0x0001 (0x0001 - 0x0000)
struct TLMVoiceChatSubsystem_GetVoiceChatEnabled final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TLMVoiceChatSubsystem_GetVoiceChatEnabled) == 0x000001, "Wrong alignment on TLMVoiceChatSubsystem_GetVoiceChatEnabled");
static_assert(sizeof(TLMVoiceChatSubsystem_GetVoiceChatEnabled) == 0x000001, "Wrong size on TLMVoiceChatSubsystem_GetVoiceChatEnabled");
static_assert(offsetof(TLMVoiceChatSubsystem_GetVoiceChatEnabled, ReturnValue) == 0x000000, "Member 'TLMVoiceChatSubsystem_GetVoiceChatEnabled::ReturnValue' has a wrong offset!");

}

