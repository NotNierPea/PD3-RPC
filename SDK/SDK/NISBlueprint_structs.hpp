﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NISBlueprint

#include "Basic.hpp"


namespace SDK
{

// Enum NISBlueprint.UNISMode
// NumValues: 0x0007
enum class EUNISMode : uint8
{
	Off                                      = 0,
	UltraQuality                             = 1,
	Quality                                  = 2,
	Balanced                                 = 3,
	Performance                              = 4,
	Custom                                   = 5,
	UNISMode_MAX                             = 6,
};

// Enum NISBlueprint.UNISSupport
// NumValues: 0x0003
enum class EUNISSupport : uint8
{
	Supported                                = 0,
	NotSupported                             = 1,
	UNISSupport_MAX                          = 2,
};

}

