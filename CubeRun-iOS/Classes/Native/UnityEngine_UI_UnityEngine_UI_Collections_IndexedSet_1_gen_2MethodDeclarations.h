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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1934;
// System.Collections.IEnumerator
struct IEnumerator_t40;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2066;
// System.Object[]
struct ObjectU5BU5D_t336;
// System.Predicate`1<System.Object>
struct Predicate_1_t1824;
// System.Comparison`1<System.Object>
struct Comparison_1_t1829;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12665_gshared (IndexedSet_1_t1934 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12665(__this, method) (( void (*) (IndexedSet_1_t1934 *, const MethodInfo*))IndexedSet_1__ctor_m12665_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12667_gshared (IndexedSet_1_t1934 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12667(__this, method) (( Object_t * (*) (IndexedSet_1_t1934 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12667_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12669_gshared (IndexedSet_1_t1934 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12669(__this, ___item, method) (( void (*) (IndexedSet_1_t1934 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12669_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12671_gshared (IndexedSet_1_t1934 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12671(__this, ___item, method) (( bool (*) (IndexedSet_1_t1934 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12671_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12673_gshared (IndexedSet_1_t1934 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12673(__this, method) (( Object_t* (*) (IndexedSet_1_t1934 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12673_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12675_gshared (IndexedSet_1_t1934 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12675(__this, method) (( void (*) (IndexedSet_1_t1934 *, const MethodInfo*))IndexedSet_1_Clear_m12675_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12677_gshared (IndexedSet_1_t1934 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12677(__this, ___item, method) (( bool (*) (IndexedSet_1_t1934 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12677_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12679_gshared (IndexedSet_1_t1934 * __this, ObjectU5BU5D_t336* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12679(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1934 *, ObjectU5BU5D_t336*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12679_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12681_gshared (IndexedSet_1_t1934 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12681(__this, method) (( int32_t (*) (IndexedSet_1_t1934 *, const MethodInfo*))IndexedSet_1_get_Count_m12681_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12683_gshared (IndexedSet_1_t1934 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12683(__this, method) (( bool (*) (IndexedSet_1_t1934 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12683_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12685_gshared (IndexedSet_1_t1934 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12685(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1934 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12685_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12687_gshared (IndexedSet_1_t1934 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12687(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1934 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12687_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12689_gshared (IndexedSet_1_t1934 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12689(__this, ___index, method) (( void (*) (IndexedSet_1_t1934 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12689_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12691_gshared (IndexedSet_1_t1934 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12691(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1934 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12691_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12693_gshared (IndexedSet_1_t1934 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12693(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1934 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12693_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12695_gshared (IndexedSet_1_t1934 * __this, Predicate_1_t1824 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12695(__this, ___match, method) (( void (*) (IndexedSet_1_t1934 *, Predicate_1_t1824 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12695_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12696_gshared (IndexedSet_1_t1934 * __this, Comparison_1_t1829 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12696(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1934 *, Comparison_1_t1829 *, const MethodInfo*))IndexedSet_1_Sort_m12696_gshared)(__this, ___sortLayoutFunction, method)
