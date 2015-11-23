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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1795;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2469;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t40;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2470;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t848;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m16719_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16719(__this, method) (( void (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2__ctor_m16719_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16721_gshared (Dictionary_2_t2238 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16721(__this, ___comparer, method) (( void (*) (Dictionary_2_t2238 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16721_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16723_gshared (Dictionary_2_t2238 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16723(__this, ___capacity, method) (( void (*) (Dictionary_2_t2238 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16723_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16725_gshared (Dictionary_2_t2238 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16725(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2238 *, SerializationInfo_t631 *, StreamingContext_t632 , const MethodInfo*))Dictionary_2__ctor_m16725_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16727_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16727(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2238 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16727_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16729_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16729(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2238 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16729_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16731_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16731(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2238 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16731_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16733_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16733(__this, ___key, method) (( bool (*) (Dictionary_2_t2238 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16733_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16735_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16735(__this, ___key, method) (( void (*) (Dictionary_2_t2238 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16735_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16737_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16737(__this, method) (( bool (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16737_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16739_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16739(__this, method) (( Object_t * (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16739_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16741_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16741(__this, method) (( bool (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16741_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16743_gshared (Dictionary_2_t2238 * __this, KeyValuePair_2_t2240  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16743(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2238 *, KeyValuePair_2_t2240 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16743_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16745_gshared (Dictionary_2_t2238 * __this, KeyValuePair_2_t2240  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16745(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2238 *, KeyValuePair_2_t2240 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16745_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16747_gshared (Dictionary_2_t2238 * __this, KeyValuePair_2U5BU5D_t2469* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16747(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2238 *, KeyValuePair_2U5BU5D_t2469*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16747_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16749_gshared (Dictionary_2_t2238 * __this, KeyValuePair_2_t2240  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16749(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2238 *, KeyValuePair_2_t2240 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16749_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16751_gshared (Dictionary_2_t2238 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16751(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2238 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16751_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16753_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16753(__this, method) (( Object_t * (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16753_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16755_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16755(__this, method) (( Object_t* (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16755_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16757_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16757(__this, method) (( Object_t * (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16757_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16759_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16759(__this, method) (( int32_t (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_get_Count_m16759_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m16761_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16761(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2238 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16761_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16763_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16763(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2238 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m16763_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16765_gshared (Dictionary_2_t2238 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16765(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2238 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16765_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16767_gshared (Dictionary_2_t2238 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16767(__this, ___size, method) (( void (*) (Dictionary_2_t2238 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16767_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16769_gshared (Dictionary_2_t2238 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16769(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2238 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16769_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2240  Dictionary_2_make_pair_m16771_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16771(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2240  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m16771_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m16773_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16773(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m16773_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16775_gshared (Dictionary_2_t2238 * __this, KeyValuePair_2U5BU5D_t2469* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16775(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2238 *, KeyValuePair_2U5BU5D_t2469*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16775_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m16777_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16777(__this, method) (( void (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_Resize_m16777_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16779_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16779(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2238 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m16779_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m16781_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16781(__this, method) (( void (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_Clear_m16781_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16783_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16783(__this, ___key, method) (( bool (*) (Dictionary_2_t2238 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16783_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16785_gshared (Dictionary_2_t2238 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16785(__this, ___value, method) (( bool (*) (Dictionary_2_t2238 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m16785_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16787_gshared (Dictionary_2_t2238 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16787(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2238 *, SerializationInfo_t631 *, StreamingContext_t632 , const MethodInfo*))Dictionary_2_GetObjectData_m16787_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16789_gshared (Dictionary_2_t2238 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16789(__this, ___sender, method) (( void (*) (Dictionary_2_t2238 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16789_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16791_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16791(__this, ___key, method) (( bool (*) (Dictionary_2_t2238 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16791_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16793_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16793(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2238 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m16793_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2243 * Dictionary_2_get_Values_m16795_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16795(__this, method) (( ValueCollection_t2243 * (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_get_Values_m16795_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16797_gshared (Dictionary_2_t2238 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16797(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2238 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16797_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m16799_gshared (Dictionary_2_t2238 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16799(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2238 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16799_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16801_gshared (Dictionary_2_t2238 * __this, KeyValuePair_2_t2240  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16801(__this, ___pair, method) (( bool (*) (Dictionary_2_t2238 *, KeyValuePair_2_t2240 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16801_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2245  Dictionary_2_GetEnumerator_m16803_gshared (Dictionary_2_t2238 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16803(__this, method) (( Enumerator_t2245  (*) (Dictionary_2_t2238 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16803_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1036  Dictionary_2_U3CCopyToU3Em__0_m16805_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16805(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1036  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16805_gshared)(__this /* static, unused */, ___key, ___value, method)
