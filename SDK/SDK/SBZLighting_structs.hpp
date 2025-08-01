﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SBZLighting

#include "Basic.hpp"


namespace SDK
{

// Enum SBZLighting.ESBZLightVisibilityAreaAction
// NumValues: 0x0005
enum class ESBZLightVisibilityAreaAction : uint8
{
	Enable                                   = 0,
	EnableShadows                            = 1,
	Disable                                  = 2,
	Max                                      = 3,
	ESBZLightVisibilityAreaAction_MAX        = 4,
};

// Enum SBZLighting.ESBZSparseIrradianceHintVolumeAction
// NumValues: 0x0008
enum class ESBZSparseIrradianceHintVolumeAction : uint8
{
	ExcludeTriangles                         = 0,
	VoxelizeEmptySpace                       = 1,
	DiscardEmptySpaceProbes                  = 2,
	DiscardAllProbes                         = 3,
	RepulseProbes                            = 4,
	DisableCompression                       = 5,
	Max                                      = 6,
	ESBZSparseIrradianceHintVolumeAction_MAX = 7,
};

}

