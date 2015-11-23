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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1910;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12456_gshared (Enumerator_t1916 * __this, Dictionary_2_t1910 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12456(__this, ___dictionary, method) (( void (*) (Enumerator_t1916 *, Dictionary_2_t1910 *, const MethodInfo*))Enumerator__ctor_m12456_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12457_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12457(__this, method) (( Object_t * (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12457_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12458_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12458(__this, method) (( void (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12458_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1036  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12459_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12459(__this, method) (( DictionaryEntry_t1036  (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12460_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12460(__this, method) (( Object_t * (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12460_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12461_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12461(__this, method) (( Object_t * (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12461_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12462_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12462(__this, method) (( bool (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_MoveNext_m12462_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1912  Enumerator_get_Current_m12463_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12463(__this, method) (( KeyValuePair_2_t1912  (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_get_Current_m12463_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12464_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12464(__this, method) (( int32_t (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_get_CurrentKey_m12464_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12465_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12465(__this, method) (( Object_t * (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_get_CurrentValue_m12465_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m12466_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12466(__this, method) (( void (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_Reset_m12466_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12467_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12467(__this, method) (( void (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_VerifyState_m12467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12468_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12468(__this, method) (( void (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_VerifyCurrent_m12468_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12469_gshared (Enumerator_t1916 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12469(__this, method) (( void (*) (Enumerator_t1916 *, const MethodInfo*))Enumerator_Dispose_m12469_gshared)(__this, method)
