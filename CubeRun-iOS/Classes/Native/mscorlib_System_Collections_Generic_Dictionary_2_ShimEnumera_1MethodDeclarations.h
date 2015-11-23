#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1944;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1935;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12799_gshared (ShimEnumerator_t1944 * __this, Dictionary_2_t1935 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12799(__this, ___host, method) (( void (*) (ShimEnumerator_t1944 *, Dictionary_2_t1935 *, const MethodInfo*))ShimEnumerator__ctor_m12799_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12800_gshared (ShimEnumerator_t1944 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12800(__this, method) (( bool (*) (ShimEnumerator_t1944 *, const MethodInfo*))ShimEnumerator_MoveNext_m12800_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1036  ShimEnumerator_get_Entry_m12801_gshared (ShimEnumerator_t1944 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12801(__this, method) (( DictionaryEntry_t1036  (*) (ShimEnumerator_t1944 *, const MethodInfo*))ShimEnumerator_get_Entry_m12801_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12802_gshared (ShimEnumerator_t1944 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12802(__this, method) (( Object_t * (*) (ShimEnumerator_t1944 *, const MethodInfo*))ShimEnumerator_get_Key_m12802_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12803_gshared (ShimEnumerator_t1944 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12803(__this, method) (( Object_t * (*) (ShimEnumerator_t1944 *, const MethodInfo*))ShimEnumerator_get_Value_m12803_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12804_gshared (ShimEnumerator_t1944 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12804(__this, method) (( Object_t * (*) (ShimEnumerator_t1944 *, const MethodInfo*))ShimEnumerator_get_Current_m12804_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m12805_gshared (ShimEnumerator_t1944 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12805(__this, method) (( void (*) (ShimEnumerator_t1944 *, const MethodInfo*))ShimEnumerator_Reset_m12805_gshared)(__this, method)
