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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2238;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16844_gshared (Enumerator_t2245 * __this, Dictionary_2_t2238 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16844(__this, ___dictionary, method) (( void (*) (Enumerator_t2245 *, Dictionary_2_t2238 *, const MethodInfo*))Enumerator__ctor_m16844_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16845_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16845(__this, method) (( Object_t * (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16845_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m16846_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m16846(__this, method) (( void (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m16846_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1036  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16847_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16847(__this, method) (( DictionaryEntry_t1036  (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16847_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16848_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16848(__this, method) (( Object_t * (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16848_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16849_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16849(__this, method) (( Object_t * (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16849_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16850_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16850(__this, method) (( bool (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_MoveNext_m16850_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2240  Enumerator_get_Current_m16851_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16851(__this, method) (( KeyValuePair_2_t2240  (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_get_Current_m16851_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16852_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16852(__this, method) (( Object_t * (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_get_CurrentKey_m16852_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m16853_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16853(__this, method) (( int32_t (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_get_CurrentValue_m16853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m16854_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_Reset_m16854(__this, method) (( void (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_Reset_m16854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m16855_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16855(__this, method) (( void (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_VerifyState_m16855_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16856_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16856(__this, method) (( void (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_VerifyCurrent_m16856_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m16857_gshared (Enumerator_t2245 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16857(__this, method) (( void (*) (Enumerator_t2245 *, const MethodInfo*))Enumerator_Dispose_m16857_gshared)(__this, method)
