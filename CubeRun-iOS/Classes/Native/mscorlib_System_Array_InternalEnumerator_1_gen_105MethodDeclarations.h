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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_105.h"
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m18035_gshared (InternalEnumerator_1_t2377 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m18035(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2377 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m18035_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18036_gshared (InternalEnumerator_1_t2377 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18036(__this, method) (( void (*) (InternalEnumerator_1_t2377 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m18036_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18037_gshared (InternalEnumerator_1_t2377 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18037(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2377 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18037_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m18038_gshared (InternalEnumerator_1_t2377 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m18038(__this, method) (( void (*) (InternalEnumerator_1_t2377 *, const MethodInfo*))InternalEnumerator_1_Dispose_m18038_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m18039_gshared (InternalEnumerator_1_t2377 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m18039(__this, method) (( bool (*) (InternalEnumerator_1_t2377 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m18039_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t1058  InternalEnumerator_1_get_Current_m18040_gshared (InternalEnumerator_1_t2377 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m18040(__this, method) (( Decimal_t1058  (*) (InternalEnumerator_1_t2377 *, const MethodInfo*))InternalEnumerator_1_get_Current_m18040_gshared)(__this, method)
