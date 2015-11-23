﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUISkin
struct GUISkin_t523;
// UnityEngineInternal.GenericStack
struct GenericStack_t524;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_DateTime.h"

// UnityEngine.GUI
struct  GUI_t67  : public Object_t
{
};
struct GUI_t67_StaticFields{
	// System.Single UnityEngine.GUI::s_ScrollStepSize
	float ___s_ScrollStepSize_0;
	// System.Int32 UnityEngine.GUI::s_ScrollControlId
	int32_t ___s_ScrollControlId_1;
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_2;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_3;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_4;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_5;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_6;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_7;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_8;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_9;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t523 * ___s_Skin_10;
	// UnityEngine.Rect UnityEngine.GUI::s_ToolTipRect
	Rect_t66  ___s_ToolTipRect_11;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_t524 * ___s_ScrollViewStates_12;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t525  ___U3CnextScrollStepTimeU3Ek__BackingField_13;
	// System.Int32 UnityEngine.GUI::<scrollTroughSide>k__BackingField
	int32_t ___U3CscrollTroughSideU3Ek__BackingField_14;
};
