﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t495;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t497;

#include "UnityEngine_UnityEngine_Object.h"

// UnityEngine.AudioClip
struct  AudioClip_t498  : public Object_t31
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t495 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t497 * ___m_PCMSetPositionCallback_3;
};
