﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSceneTracks

#include "Basic.hpp"

#include "MovieScene_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MovieSceneTracks_structs.hpp"


namespace SDK::Params
{

// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// 0x0030 (0x0030 - 0x0000)
struct MovieSceneTransformOrigin_BP_GetTransformOrigin final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneTransformOrigin_BP_GetTransformOrigin) == 0x000010, "Wrong alignment on MovieSceneTransformOrigin_BP_GetTransformOrigin");
static_assert(sizeof(MovieSceneTransformOrigin_BP_GetTransformOrigin) == 0x000030, "Wrong size on MovieSceneTransformOrigin_BP_GetTransformOrigin");
static_assert(offsetof(MovieSceneTransformOrigin_BP_GetTransformOrigin, ReturnValue) == 0x000000, "Member 'MovieSceneTransformOrigin_BP_GetTransformOrigin::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// 0x0018 (0x0018 - 0x0000)
struct MovieScene3DConstraintSection_SetConstraintBindingID final
{
public:
	struct FMovieSceneObjectBindingID             InConstraintBindingID;                             // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieScene3DConstraintSection_SetConstraintBindingID) == 0x000004, "Wrong alignment on MovieScene3DConstraintSection_SetConstraintBindingID");
static_assert(sizeof(MovieScene3DConstraintSection_SetConstraintBindingID) == 0x000018, "Wrong size on MovieScene3DConstraintSection_SetConstraintBindingID");
static_assert(offsetof(MovieScene3DConstraintSection_SetConstraintBindingID, InConstraintBindingID) == 0x000000, "Member 'MovieScene3DConstraintSection_SetConstraintBindingID::InConstraintBindingID' has a wrong offset!");

// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// 0x0018 (0x0018 - 0x0000)
struct MovieScene3DConstraintSection_GetConstraintBindingID final
{
public:
	struct FMovieSceneObjectBindingID             ReturnValue;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieScene3DConstraintSection_GetConstraintBindingID) == 0x000004, "Wrong alignment on MovieScene3DConstraintSection_GetConstraintBindingID");
static_assert(sizeof(MovieScene3DConstraintSection_GetConstraintBindingID) == 0x000018, "Wrong size on MovieScene3DConstraintSection_GetConstraintBindingID");
static_assert(offsetof(MovieScene3DConstraintSection_GetConstraintBindingID, ReturnValue) == 0x000000, "Member 'MovieScene3DConstraintSection_GetConstraintBindingID::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
// 0x0014 (0x0014 - 0x0000)
struct MovieSceneParameterSection_AddBoolParameterKey final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           InTime;                                            // 0x000C(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InValue;                                           // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MovieSceneParameterSection_AddBoolParameterKey) == 0x000004, "Wrong alignment on MovieSceneParameterSection_AddBoolParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddBoolParameterKey) == 0x000014, "Wrong size on MovieSceneParameterSection_AddBoolParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddBoolParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddBoolParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddBoolParameterKey, InTime) == 0x00000C, "Member 'MovieSceneParameterSection_AddBoolParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddBoolParameterKey, InValue) == 0x000010, "Member 'MovieSceneParameterSection_AddBoolParameterKey::InValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
// 0x0020 (0x0020 - 0x0000)
struct MovieSceneParameterSection_AddColorParameterKey final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           InTime;                                            // 0x000C(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           InValue;                                           // 0x0010(0x0010)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneParameterSection_AddColorParameterKey) == 0x000004, "Wrong alignment on MovieSceneParameterSection_AddColorParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddColorParameterKey) == 0x000020, "Wrong size on MovieSceneParameterSection_AddColorParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddColorParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddColorParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddColorParameterKey, InTime) == 0x00000C, "Member 'MovieSceneParameterSection_AddColorParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddColorParameterKey, InValue) == 0x000010, "Member 'MovieSceneParameterSection_AddColorParameterKey::InValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
// 0x0014 (0x0014 - 0x0000)
struct MovieSceneParameterSection_AddScalarParameterKey final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           InTime;                                            // 0x000C(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InValue;                                           // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneParameterSection_AddScalarParameterKey) == 0x000004, "Wrong alignment on MovieSceneParameterSection_AddScalarParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddScalarParameterKey) == 0x000014, "Wrong size on MovieSceneParameterSection_AddScalarParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddScalarParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddScalarParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddScalarParameterKey, InTime) == 0x00000C, "Member 'MovieSceneParameterSection_AddScalarParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddScalarParameterKey, InValue) == 0x000010, "Member 'MovieSceneParameterSection_AddScalarParameterKey::InValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
// 0x0040 (0x0040 - 0x0000)
struct MovieSceneParameterSection_AddTransformParameterKey final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           InTime;                                            // 0x000C(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                             InValue;                                           // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneParameterSection_AddTransformParameterKey) == 0x000010, "Wrong alignment on MovieSceneParameterSection_AddTransformParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddTransformParameterKey) == 0x000040, "Wrong size on MovieSceneParameterSection_AddTransformParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddTransformParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddTransformParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddTransformParameterKey, InTime) == 0x00000C, "Member 'MovieSceneParameterSection_AddTransformParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddTransformParameterKey, InValue) == 0x000010, "Member 'MovieSceneParameterSection_AddTransformParameterKey::InValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneParameterSection_AddVector2DParameterKey final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           InTime;                                            // 0x000C(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              InValue;                                           // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneParameterSection_AddVector2DParameterKey) == 0x000004, "Wrong alignment on MovieSceneParameterSection_AddVector2DParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddVector2DParameterKey) == 0x000018, "Wrong size on MovieSceneParameterSection_AddVector2DParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddVector2DParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddVector2DParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddVector2DParameterKey, InTime) == 0x00000C, "Member 'MovieSceneParameterSection_AddVector2DParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddVector2DParameterKey, InValue) == 0x000010, "Member 'MovieSceneParameterSection_AddVector2DParameterKey::InValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
// 0x001C (0x001C - 0x0000)
struct MovieSceneParameterSection_AddVectorParameterKey final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           InTime;                                            // 0x000C(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InValue;                                           // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneParameterSection_AddVectorParameterKey) == 0x000004, "Wrong alignment on MovieSceneParameterSection_AddVectorParameterKey");
static_assert(sizeof(MovieSceneParameterSection_AddVectorParameterKey) == 0x00001C, "Wrong size on MovieSceneParameterSection_AddVectorParameterKey");
static_assert(offsetof(MovieSceneParameterSection_AddVectorParameterKey, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_AddVectorParameterKey::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddVectorParameterKey, InTime) == 0x00000C, "Member 'MovieSceneParameterSection_AddVectorParameterKey::InTime' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_AddVectorParameterKey, InValue) == 0x000010, "Member 'MovieSceneParameterSection_AddVectorParameterKey::InValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneParameterSection_RemoveBoolParameter final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MovieSceneParameterSection_RemoveBoolParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveBoolParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveBoolParameter) == 0x000010, "Wrong size on MovieSceneParameterSection_RemoveBoolParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveBoolParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveBoolParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveBoolParameter, ReturnValue) == 0x00000C, "Member 'MovieSceneParameterSection_RemoveBoolParameter::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneParameterSection_RemoveColorParameter final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MovieSceneParameterSection_RemoveColorParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveColorParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveColorParameter) == 0x000010, "Wrong size on MovieSceneParameterSection_RemoveColorParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveColorParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveColorParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveColorParameter, ReturnValue) == 0x00000C, "Member 'MovieSceneParameterSection_RemoveColorParameter::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneParameterSection_RemoveScalarParameter final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MovieSceneParameterSection_RemoveScalarParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveScalarParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveScalarParameter) == 0x000010, "Wrong size on MovieSceneParameterSection_RemoveScalarParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveScalarParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveScalarParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveScalarParameter, ReturnValue) == 0x00000C, "Member 'MovieSceneParameterSection_RemoveScalarParameter::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneParameterSection_RemoveTransformParameter final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MovieSceneParameterSection_RemoveTransformParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveTransformParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveTransformParameter) == 0x000010, "Wrong size on MovieSceneParameterSection_RemoveTransformParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveTransformParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveTransformParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveTransformParameter, ReturnValue) == 0x00000C, "Member 'MovieSceneParameterSection_RemoveTransformParameter::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneParameterSection_RemoveVector2DParameter final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MovieSceneParameterSection_RemoveVector2DParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveVector2DParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveVector2DParameter) == 0x000010, "Wrong size on MovieSceneParameterSection_RemoveVector2DParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveVector2DParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveVector2DParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveVector2DParameter, ReturnValue) == 0x00000C, "Member 'MovieSceneParameterSection_RemoveVector2DParameter::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneParameterSection_RemoveVectorParameter final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(MovieSceneParameterSection_RemoveVectorParameter) == 0x000004, "Wrong alignment on MovieSceneParameterSection_RemoveVectorParameter");
static_assert(sizeof(MovieSceneParameterSection_RemoveVectorParameter) == 0x000010, "Wrong size on MovieSceneParameterSection_RemoveVectorParameter");
static_assert(offsetof(MovieSceneParameterSection_RemoveVectorParameter, InParameterName) == 0x000000, "Member 'MovieSceneParameterSection_RemoveVectorParameter::InParameterName' has a wrong offset!");
static_assert(offsetof(MovieSceneParameterSection_RemoveVectorParameter, ReturnValue) == 0x00000C, "Member 'MovieSceneParameterSection_RemoveVectorParameter::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
// 0x0050 (0x0050 - 0x0000)
struct MovieSceneParameterSection_GetParameterNames final
{
public:
	TSet<class FName>                             ParameterNames;                                    // 0x0000(0x0050)(Parm, OutParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneParameterSection_GetParameterNames) == 0x000008, "Wrong alignment on MovieSceneParameterSection_GetParameterNames");
static_assert(sizeof(MovieSceneParameterSection_GetParameterNames) == 0x000050, "Wrong size on MovieSceneParameterSection_GetParameterNames");
static_assert(offsetof(MovieSceneParameterSection_GetParameterNames, ParameterNames) == 0x000000, "Member 'MovieSceneParameterSection_GetParameterNames::ParameterNames' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneAudioSection_SetSound final
{
public:
	class USoundBase*                             InSound;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneAudioSection_SetSound) == 0x000008, "Wrong alignment on MovieSceneAudioSection_SetSound");
static_assert(sizeof(MovieSceneAudioSection_SetSound) == 0x000008, "Wrong size on MovieSceneAudioSection_SetSound");
static_assert(offsetof(MovieSceneAudioSection_SetSound, InSound) == 0x000000, "Member 'MovieSceneAudioSection_SetSound::InSound' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneAudioSection_SetStartOffset final
{
public:
	struct FFrameNumber                           InStartOffset;                                     // 0x0000(0x0004)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneAudioSection_SetStartOffset) == 0x000004, "Wrong alignment on MovieSceneAudioSection_SetStartOffset");
static_assert(sizeof(MovieSceneAudioSection_SetStartOffset) == 0x000004, "Wrong size on MovieSceneAudioSection_SetStartOffset");
static_assert(offsetof(MovieSceneAudioSection_SetStartOffset, InStartOffset) == 0x000000, "Member 'MovieSceneAudioSection_SetStartOffset::InStartOffset' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// 0x0008 (0x0008 - 0x0000)
struct MovieSceneAudioSection_GetSound final
{
public:
	class USoundBase*                             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneAudioSection_GetSound) == 0x000008, "Wrong alignment on MovieSceneAudioSection_GetSound");
static_assert(sizeof(MovieSceneAudioSection_GetSound) == 0x000008, "Wrong size on MovieSceneAudioSection_GetSound");
static_assert(offsetof(MovieSceneAudioSection_GetSound, ReturnValue) == 0x000000, "Member 'MovieSceneAudioSection_GetSound::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// 0x0004 (0x0004 - 0x0000)
struct MovieSceneAudioSection_GetStartOffset final
{
public:
	struct FFrameNumber                           ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneAudioSection_GetStartOffset) == 0x000004, "Wrong alignment on MovieSceneAudioSection_GetStartOffset");
static_assert(sizeof(MovieSceneAudioSection_GetStartOffset) == 0x000004, "Wrong size on MovieSceneAudioSection_GetStartOffset");
static_assert(offsetof(MovieSceneAudioSection_GetStartOffset, ReturnValue) == 0x000000, "Member 'MovieSceneAudioSection_GetStartOffset::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneCameraCutSection_SetCameraBindingID final
{
public:
	struct FMovieSceneObjectBindingID             InCameraBindingID;                                 // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCameraCutSection_SetCameraBindingID) == 0x000004, "Wrong alignment on MovieSceneCameraCutSection_SetCameraBindingID");
static_assert(sizeof(MovieSceneCameraCutSection_SetCameraBindingID) == 0x000018, "Wrong size on MovieSceneCameraCutSection_SetCameraBindingID");
static_assert(offsetof(MovieSceneCameraCutSection_SetCameraBindingID, InCameraBindingID) == 0x000000, "Member 'MovieSceneCameraCutSection_SetCameraBindingID::InCameraBindingID' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// 0x0018 (0x0018 - 0x0000)
struct MovieSceneCameraCutSection_GetCameraBindingID final
{
public:
	struct FMovieSceneObjectBindingID             ReturnValue;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCameraCutSection_GetCameraBindingID) == 0x000004, "Wrong alignment on MovieSceneCameraCutSection_GetCameraBindingID");
static_assert(sizeof(MovieSceneCameraCutSection_GetCameraBindingID) == 0x000018, "Wrong size on MovieSceneCameraCutSection_GetCameraBindingID");
static_assert(offsetof(MovieSceneCameraCutSection_GetCameraBindingID, ReturnValue) == 0x000000, "Member 'MovieSceneCameraCutSection_GetCameraBindingID::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneCinematicShotSection_SetShotDisplayName final
{
public:
	class FString                                 InShotDisplayName;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCinematicShotSection_SetShotDisplayName) == 0x000008, "Wrong alignment on MovieSceneCinematicShotSection_SetShotDisplayName");
static_assert(sizeof(MovieSceneCinematicShotSection_SetShotDisplayName) == 0x000010, "Wrong size on MovieSceneCinematicShotSection_SetShotDisplayName");
static_assert(offsetof(MovieSceneCinematicShotSection_SetShotDisplayName, InShotDisplayName) == 0x000000, "Member 'MovieSceneCinematicShotSection_SetShotDisplayName::InShotDisplayName' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneCinematicShotSection_GetShotDisplayName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneCinematicShotSection_GetShotDisplayName) == 0x000008, "Wrong alignment on MovieSceneCinematicShotSection_GetShotDisplayName");
static_assert(sizeof(MovieSceneCinematicShotSection_GetShotDisplayName) == 0x000010, "Wrong size on MovieSceneCinematicShotSection_GetShotDisplayName");
static_assert(offsetof(MovieSceneCinematicShotSection_GetShotDisplayName, ReturnValue) == 0x000000, "Member 'MovieSceneCinematicShotSection_GetShotDisplayName::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneLevelVisibilitySection_SetLevelNames final
{
public:
	TArray<class FName>                           InLevelNames;                                      // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneLevelVisibilitySection_SetLevelNames) == 0x000008, "Wrong alignment on MovieSceneLevelVisibilitySection_SetLevelNames");
static_assert(sizeof(MovieSceneLevelVisibilitySection_SetLevelNames) == 0x000010, "Wrong size on MovieSceneLevelVisibilitySection_SetLevelNames");
static_assert(offsetof(MovieSceneLevelVisibilitySection_SetLevelNames, InLevelNames) == 0x000000, "Member 'MovieSceneLevelVisibilitySection_SetLevelNames::InLevelNames' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneLevelVisibilitySection_SetVisibility final
{
public:
	ELevelVisibility                              InVisibility;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneLevelVisibilitySection_SetVisibility) == 0x000001, "Wrong alignment on MovieSceneLevelVisibilitySection_SetVisibility");
static_assert(sizeof(MovieSceneLevelVisibilitySection_SetVisibility) == 0x000001, "Wrong size on MovieSceneLevelVisibilitySection_SetVisibility");
static_assert(offsetof(MovieSceneLevelVisibilitySection_SetVisibility, InVisibility) == 0x000000, "Member 'MovieSceneLevelVisibilitySection_SetVisibility::InVisibility' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// 0x0010 (0x0010 - 0x0000)
struct MovieSceneLevelVisibilitySection_GetLevelNames final
{
public:
	TArray<class FName>                           ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneLevelVisibilitySection_GetLevelNames) == 0x000008, "Wrong alignment on MovieSceneLevelVisibilitySection_GetLevelNames");
static_assert(sizeof(MovieSceneLevelVisibilitySection_GetLevelNames) == 0x000010, "Wrong size on MovieSceneLevelVisibilitySection_GetLevelNames");
static_assert(offsetof(MovieSceneLevelVisibilitySection_GetLevelNames, ReturnValue) == 0x000000, "Member 'MovieSceneLevelVisibilitySection_GetLevelNames::ReturnValue' has a wrong offset!");

// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// 0x0001 (0x0001 - 0x0000)
struct MovieSceneLevelVisibilitySection_GetVisibility final
{
public:
	ELevelVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(MovieSceneLevelVisibilitySection_GetVisibility) == 0x000001, "Wrong alignment on MovieSceneLevelVisibilitySection_GetVisibility");
static_assert(sizeof(MovieSceneLevelVisibilitySection_GetVisibility) == 0x000001, "Wrong size on MovieSceneLevelVisibilitySection_GetVisibility");
static_assert(offsetof(MovieSceneLevelVisibilitySection_GetVisibility, ReturnValue) == 0x000000, "Member 'MovieSceneLevelVisibilitySection_GetVisibility::ReturnValue' has a wrong offset!");

}

