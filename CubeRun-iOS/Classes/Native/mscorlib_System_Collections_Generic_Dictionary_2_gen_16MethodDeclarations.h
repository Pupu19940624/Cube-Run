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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2286;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1795;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2474;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t40;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2475;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t848;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2291;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m17200_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17200(__this, method) (( void (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2__ctor_m17200_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17201_gshared (Dictionary_2_t2286 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17201(__this, ___comparer, method) (( void (*) (Dictionary_2_t2286 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17201_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17203_gshared (Dictionary_2_t2286 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17203(__this, ___capacity, method) (( void (*) (Dictionary_2_t2286 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17203_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17205_gshared (Dictionary_2_t2286 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17205(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2286 *, SerializationInfo_t631 *, StreamingContext_t632 , const MethodInfo*))Dictionary_2__ctor_m17205_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17207_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17207(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2286 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17207_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17209_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17209(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2286 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17209_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17211_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17211(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2286 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17211_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17213_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17213(__this, ___key, method) (( bool (*) (Dictionary_2_t2286 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17213_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17215_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17215(__this, ___key, method) (( void (*) (Dictionary_2_t2286 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17215_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17217_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17217(__this, method) (( bool (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17217_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17219_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17219(__this, method) (( Object_t * (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17219_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17221_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17221(__this, method) (( bool (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17221_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17223_gshared (Dictionary_2_t2286 * __this, KeyValuePair_2_t2288  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17223(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2286 *, KeyValuePair_2_t2288 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17223_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17225_gshared (Dictionary_2_t2286 * __this, KeyValuePair_2_t2288  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17225(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2286 *, KeyValuePair_2_t2288 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17225_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17227_gshared (Dictionary_2_t2286 * __this, KeyValuePair_2U5BU5D_t2474* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17227(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2286 *, KeyValuePair_2U5BU5D_t2474*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17227_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17229_gshared (Dictionary_2_t2286 * __this, KeyValuePair_2_t2288  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17229(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2286 *, KeyValuePair_2_t2288 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17229_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17231_gshared (Dictionary_2_t2286 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17231(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2286 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17231_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17233_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17233(__this, method) (( Object_t * (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17233_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17235_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17235(__this, method) (( Object_t* (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17235_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17237_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17237(__this, method) (( Object_t * (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17237_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17239_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17239(__this, method) (( int32_t (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_get_Count_m17239_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m17241_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17241(__this, ___key, method) (( bool (*) (Dictionary_2_t2286 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17241_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17243_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17243(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2286 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m17243_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17245_gshared (Dictionary_2_t2286 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17245(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2286 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17245_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17247_gshared (Dictionary_2_t2286 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17247(__this, ___size, method) (( void (*) (Dictionary_2_t2286 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17247_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17249_gshared (Dictionary_2_t2286 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17249(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2286 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17249_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2288  Dictionary_2_make_pair_m17251_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17251(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2288  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m17251_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m17253_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17253(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m17253_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17255_gshared (Dictionary_2_t2286 * __this, KeyValuePair_2U5BU5D_t2474* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17255(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2286 *, KeyValuePair_2U5BU5D_t2474*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17255_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m17257_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17257(__this, method) (( void (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_Resize_m17257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17259_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17259(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2286 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m17259_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m17261_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17261(__this, method) (( void (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_Clear_m17261_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17263_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17263(__this, ___key, method) (( bool (*) (Dictionary_2_t2286 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17263_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17265_gshared (Dictionary_2_t2286 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17265(__this, ___value, method) (( bool (*) (Dictionary_2_t2286 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m17265_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17267_gshared (Dictionary_2_t2286 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17267(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2286 *, SerializationInfo_t631 *, StreamingContext_t632 , const MethodInfo*))Dictionary_2_GetObjectData_m17267_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17269_gshared (Dictionary_2_t2286 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17269(__this, ___sender, method) (( void (*) (Dictionary_2_t2286 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17269_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17271_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17271(__this, ___key, method) (( bool (*) (Dictionary_2_t2286 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17271_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17273_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17273(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2286 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m17273_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2291 * Dictionary_2_get_Values_m17275_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17275(__this, method) (( ValueCollection_t2291 * (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_get_Values_m17275_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17277_gshared (Dictionary_2_t2286 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17277(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2286 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17277_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m17279_gshared (Dictionary_2_t2286 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17279(__this, ___value, method) (( bool (*) (Dictionary_2_t2286 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17279_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17281_gshared (Dictionary_2_t2286 * __this, KeyValuePair_2_t2288  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17281(__this, ___pair, method) (( bool (*) (Dictionary_2_t2286 *, KeyValuePair_2_t2288 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17281_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2293  Dictionary_2_GetEnumerator_m17283_gshared (Dictionary_2_t2286 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17283(__this, method) (( Enumerator_t2293  (*) (Dictionary_2_t2286 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17283_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1036  Dictionary_2_U3CCopyToU3Em__0_m17285_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17285(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1036  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17285_gshared)(__this /* static, unused */, ___key, ___value, method)
