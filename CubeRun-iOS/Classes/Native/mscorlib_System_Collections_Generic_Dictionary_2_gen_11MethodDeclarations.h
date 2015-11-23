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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1793;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1795;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t631;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2404;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t40;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2405;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t848;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1801;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10812_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10812(__this, method) (( void (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2__ctor_m10812_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10814_gshared (Dictionary_2_t1793 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10814(__this, ___comparer, method) (( void (*) (Dictionary_2_t1793 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10814_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10816_gshared (Dictionary_2_t1793 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10816(__this, ___capacity, method) (( void (*) (Dictionary_2_t1793 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10816_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10818_gshared (Dictionary_2_t1793 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10818(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1793 *, SerializationInfo_t631 *, StreamingContext_t632 , const MethodInfo*))Dictionary_2__ctor_m10818_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10820_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10820(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1793 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10820_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10822_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10822(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1793 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10822_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10824_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10824(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1793 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10824_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10826_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10826(__this, ___key, method) (( bool (*) (Dictionary_2_t1793 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10826_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10828_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10828(__this, ___key, method) (( void (*) (Dictionary_2_t1793 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10828_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10830_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10830(__this, method) (( bool (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10830_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10832_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10832(__this, method) (( Object_t * (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10832_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10834_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10834(__this, method) (( bool (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10836_gshared (Dictionary_2_t1793 * __this, KeyValuePair_2_t1796  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10836(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1793 *, KeyValuePair_2_t1796 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10836_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10838_gshared (Dictionary_2_t1793 * __this, KeyValuePair_2_t1796  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10838(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1793 *, KeyValuePair_2_t1796 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10838_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10840_gshared (Dictionary_2_t1793 * __this, KeyValuePair_2U5BU5D_t2404* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10840(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1793 *, KeyValuePair_2U5BU5D_t2404*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10840_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10842_gshared (Dictionary_2_t1793 * __this, KeyValuePair_2_t1796  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10842(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1793 *, KeyValuePair_2_t1796 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10842_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10844_gshared (Dictionary_2_t1793 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10844(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1793 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10844_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10846_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10846(__this, method) (( Object_t * (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10846_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10848_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10848(__this, method) (( Object_t* (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10848_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10850_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10850(__this, method) (( Object_t * (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10850_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10852_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10852(__this, method) (( int32_t (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_get_Count_m10852_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m10854_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10854(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1793 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10854_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10856_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10856(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1793 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m10856_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10858_gshared (Dictionary_2_t1793 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10858(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1793 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10858_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10860_gshared (Dictionary_2_t1793 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10860(__this, ___size, method) (( void (*) (Dictionary_2_t1793 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10860_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10862_gshared (Dictionary_2_t1793 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10862(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1793 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10862_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1796  Dictionary_2_make_pair_m10864_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10864(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1796  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m10864_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m10866_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10866(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m10866_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10868_gshared (Dictionary_2_t1793 * __this, KeyValuePair_2U5BU5D_t2404* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10868(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1793 *, KeyValuePair_2U5BU5D_t2404*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10868_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m10870_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10870(__this, method) (( void (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_Resize_m10870_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10872_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10872(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1793 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m10872_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m10874_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10874(__this, method) (( void (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_Clear_m10874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10876_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10876(__this, ___key, method) (( bool (*) (Dictionary_2_t1793 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10876_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10878_gshared (Dictionary_2_t1793 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10878(__this, ___value, method) (( bool (*) (Dictionary_2_t1793 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m10878_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10880_gshared (Dictionary_2_t1793 * __this, SerializationInfo_t631 * ___info, StreamingContext_t632  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10880(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1793 *, SerializationInfo_t631 *, StreamingContext_t632 , const MethodInfo*))Dictionary_2_GetObjectData_m10880_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10882_gshared (Dictionary_2_t1793 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10882(__this, ___sender, method) (( void (*) (Dictionary_2_t1793 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10882_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10884_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10884(__this, ___key, method) (( bool (*) (Dictionary_2_t1793 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10884_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10886_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10886(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1793 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10886_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1801 * Dictionary_2_get_Values_m10888_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10888(__this, method) (( ValueCollection_t1801 * (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_get_Values_m10888_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10890_gshared (Dictionary_2_t1793 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10890(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1793 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10890_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m10892_gshared (Dictionary_2_t1793 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10892(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1793 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10892_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10894_gshared (Dictionary_2_t1793 * __this, KeyValuePair_2_t1796  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10894(__this, ___pair, method) (( bool (*) (Dictionary_2_t1793 *, KeyValuePair_2_t1796 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10894_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1803  Dictionary_2_GetEnumerator_m10896_gshared (Dictionary_2_t1793 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10896(__this, method) (( Enumerator_t1803  (*) (Dictionary_2_t1793 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10896_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1036  Dictionary_2_U3CCopyToU3Em__0_m10898_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10898(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1036  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10898_gshared)(__this /* static, unused */, ___key, ___value, method)
