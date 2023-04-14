//------------------------------------------------------------------------
// Copyright(c) 2023 Bobbo Studios.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace MyCompanyName {
//------------------------------------------------------------------------
static const Steinberg::FUID kAutoVolumerProcessorUID (0x8BCF8705, 0xB0255C8F, 0xABCE498A, 0x16FB39B9);
static const Steinberg::FUID kAutoVolumerControllerUID (0x70819C77, 0xA8BB5B49, 0xA7976404, 0xAA0286A2);

#define AutoVolumerVST3Category "Fx"

//------------------------------------------------------------------------
} // namespace MyCompanyName
