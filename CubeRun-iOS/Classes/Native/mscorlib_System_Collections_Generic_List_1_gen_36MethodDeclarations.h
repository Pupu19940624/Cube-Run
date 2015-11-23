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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t381;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2066;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t40;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2409;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t406;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1786;
// System.Object[]
struct ObjectU5BU5D_t336;
// System.Predicate`1<System.Object>
struct Predicate_1_t1824;
// System.Comparison`1<System.Object>
struct Comparison_1_t1829;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m11127_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1__ctor_m11127(__this, method) (( void (*) (List_1_t381 *, const MethodInfo*))List_1__ctor_m11127_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11129_gshared (List_1_t381 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11129(__this, ___capacity, method) (( void (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1__ctor_m11129_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11131_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11131(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11131_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11133_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11133(__this, method) (( Object_t* (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11133_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11135_gshared (List_1_t381 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11135(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t381 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11135_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11137_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11137(__this, method) (( Object_t * (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11137_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11139_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11139(__this, ___item, method) (( int32_t (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11139_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11141_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11141(__this, ___item, method) (( bool (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11141_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11143_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11143(__this, ___item, method) (( int32_t (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11143_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11145_gshared (List_1_t381 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11145(__this, ___index, ___item, method) (( void (*) (List_1_t381 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11145_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11147_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11147(__this, ___item, method) (( void (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11147_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11149_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11149(__this, method) (( bool (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11149_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11151_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11151(__this, method) (( bool (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11151_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11153_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11153(__this, method) (( Object_t * (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11155_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11155(__this, method) (( bool (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11155_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11157_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11157(__this, method) (( bool (*) (List_1_t381 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11157_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11159_gshared (List_1_t381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11159(__this, ___index, method) (( Object_t * (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11159_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11161_gshared (List_1_t381 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11161(__this, ___index, ___value, method) (( void (*) (List_1_t381 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11161_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11163_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11163(__this, ___item, method) (( void (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_Add_m11163_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11165_gshared (List_1_t381 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11165(__this, ___newCount, method) (( void (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11165_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11167_gshared (List_1_t381 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11167(__this, ___collection, method) (( void (*) (List_1_t381 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11167_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11169_gshared (List_1_t381 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11169(__this, ___enumerable, method) (( void (*) (List_1_t381 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11169_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11171_gshared (List_1_t381 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11171(__this, ___collection, method) (( void (*) (List_1_t381 *, Object_t*, const MethodInfo*))List_1_AddRange_m11171_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1786 * List_1_AsReadOnly_m11173_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11173(__this, method) (( ReadOnlyCollection_1_t1786 * (*) (List_1_t381 *, const MethodInfo*))List_1_AsReadOnly_m11173_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11175_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_Clear_m11175(__this, method) (( void (*) (List_1_t381 *, const MethodInfo*))List_1_Clear_m11175_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11177_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11177(__this, ___item, method) (( bool (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_Contains_m11177_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11179_gshared (List_1_t381 * __this, ObjectU5BU5D_t336* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11179(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t381 *, ObjectU5BU5D_t336*, int32_t, const MethodInfo*))List_1_CopyTo_m11179_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11181_gshared (List_1_t381 * __this, Predicate_1_t1824 * ___match, const MethodInfo* method);
#define List_1_Find_m11181(__this, ___match, method) (( Object_t * (*) (List_1_t381 *, Predicate_1_t1824 *, const MethodInfo*))List_1_Find_m11181_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11183_gshared (Object_t * __this /* static, unused */, Predicate_1_t1824 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11183(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1824 *, const MethodInfo*))List_1_CheckMatch_m11183_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11185_gshared (List_1_t381 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1824 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11185(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t381 *, int32_t, int32_t, Predicate_1_t1824 *, const MethodInfo*))List_1_GetIndex_m11185_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1821  List_1_GetEnumerator_m11187_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11187(__this, method) (( Enumerator_t1821  (*) (List_1_t381 *, const MethodInfo*))List_1_GetEnumerator_m11187_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11189_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11189(__this, ___item, method) (( int32_t (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11189_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11191_gshared (List_1_t381 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11191(__this, ___start, ___delta, method) (( void (*) (List_1_t381 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11191_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11193_gshared (List_1_t381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11193(__this, ___index, method) (( void (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11193_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11195_gshared (List_1_t381 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11195(__this, ___index, ___item, method) (( void (*) (List_1_t381 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11195_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11197_gshared (List_1_t381 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11197(__this, ___collection, method) (( void (*) (List_1_t381 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11197_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11199_gshared (List_1_t381 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11199(__this, ___item, method) (( bool (*) (List_1_t381 *, Object_t *, const MethodInfo*))List_1_Remove_m11199_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11201_gshared (List_1_t381 * __this, Predicate_1_t1824 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11201(__this, ___match, method) (( int32_t (*) (List_1_t381 *, Predicate_1_t1824 *, const MethodInfo*))List_1_RemoveAll_m11201_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11203_gshared (List_1_t381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11203(__this, ___index, method) (( void (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11203_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11205_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_Reverse_m11205(__this, method) (( void (*) (List_1_t381 *, const MethodInfo*))List_1_Reverse_m11205_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11207_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_Sort_m11207(__this, method) (( void (*) (List_1_t381 *, const MethodInfo*))List_1_Sort_m11207_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11209_gshared (List_1_t381 * __this, Comparison_1_t1829 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11209(__this, ___comparison, method) (( void (*) (List_1_t381 *, Comparison_1_t1829 *, const MethodInfo*))List_1_Sort_m11209_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t336* List_1_ToArray_m11210_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_ToArray_m11210(__this, method) (( ObjectU5BU5D_t336* (*) (List_1_t381 *, const MethodInfo*))List_1_ToArray_m11210_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11212_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11212(__this, method) (( void (*) (List_1_t381 *, const MethodInfo*))List_1_TrimExcess_m11212_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11214_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11214(__this, method) (( int32_t (*) (List_1_t381 *, const MethodInfo*))List_1_get_Capacity_m11214_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11216_gshared (List_1_t381 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11216(__this, ___value, method) (( void (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11216_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11218_gshared (List_1_t381 * __this, const MethodInfo* method);
#define List_1_get_Count_m11218(__this, method) (( int32_t (*) (List_1_t381 *, const MethodInfo*))List_1_get_Count_m11218_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11220_gshared (List_1_t381 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11220(__this, ___index, method) (( Object_t * (*) (List_1_t381 *, int32_t, const MethodInfo*))List_1_get_Item_m11220_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11222_gshared (List_1_t381 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11222(__this, ___index, ___value, method) (( void (*) (List_1_t381 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11222_gshared)(__this, ___index, ___value, method)
