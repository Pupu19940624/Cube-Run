﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t404;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1789;
// UnityEngine.EventSystems.PointerEventData[]
struct PointerEventDataU5BU5D_t1907;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1909;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>
struct Transform_1_t1908;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct  Dictionary_2_t123  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::table
	Int32U5BU5D_t404* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::linkSlots
	LinkU5BU5D_t1789* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::keySlots
	Int32U5BU5D_t404* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::valueSlots
	PointerEventDataU5BU5D_t1907* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::serialization_info
	SerializationInfo_t631 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t123_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::<>f__am$cacheB
	Transform_1_t1908 * ___U3CU3Ef__amU24cacheB_15;
};
