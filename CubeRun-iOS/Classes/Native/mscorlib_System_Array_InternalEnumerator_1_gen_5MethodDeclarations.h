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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10971_gshared (InternalEnumerator_1_t1805 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10971(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1805 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10971_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10972_gshared (InternalEnumerator_1_t1805 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10972(__this, method) (( void (*) (InternalEnumerator_1_t1805 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10972_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10973_gshared (InternalEnumerator_1_t1805 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10973(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1805 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10973_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10974_gshared (InternalEnumerator_1_t1805 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10974(__this, method) (( void (*) (InternalEnumerator_1_t1805 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10974_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10975_gshared (InternalEnumerator_1_t1805 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10975(__this, method) (( bool (*) (InternalEnumerator_1_t1805 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10975_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t1036  InternalEnumerator_1_get_Current_m10976_gshared (InternalEnumerator_1_t1805 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10976(__this, method) (( DictionaryEntry_t1036  (*) (InternalEnumerator_1_t1805 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10976_gshared)(__this, method)
