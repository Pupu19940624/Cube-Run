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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1823;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t40;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t336;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2066;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1822;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m11260_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11260(__this, method) (( void (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1__ctor_m11260_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11261_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11261(__this, method) (( bool (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11261_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11262_gshared (Collection_1_t1823 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11262(__this, ___array, ___index, method) (( void (*) (Collection_1_t1823 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11262_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11263_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11263(__this, method) (( Object_t * (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11263_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11264_gshared (Collection_1_t1823 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11264(__this, ___value, method) (( int32_t (*) (Collection_1_t1823 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11264_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11265_gshared (Collection_1_t1823 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11265(__this, ___value, method) (( bool (*) (Collection_1_t1823 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11265_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11266_gshared (Collection_1_t1823 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11266(__this, ___value, method) (( int32_t (*) (Collection_1_t1823 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11266_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11267_gshared (Collection_1_t1823 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11267(__this, ___index, ___value, method) (( void (*) (Collection_1_t1823 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11267_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11268_gshared (Collection_1_t1823 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11268(__this, ___value, method) (( void (*) (Collection_1_t1823 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11268_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11269_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m11269(__this, method) (( bool (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11269_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11270_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11270(__this, method) (( Object_t * (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11270_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11271_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m11271(__this, method) (( bool (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11271_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11272_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m11272(__this, method) (( bool (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11272_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11273_gshared (Collection_1_t1823 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11273(__this, ___index, method) (( Object_t * (*) (Collection_1_t1823 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11273_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11274_gshared (Collection_1_t1823 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11274(__this, ___index, ___value, method) (( void (*) (Collection_1_t1823 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11274_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m11275_gshared (Collection_1_t1823 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m11275(__this, ___item, method) (( void (*) (Collection_1_t1823 *, Object_t *, const MethodInfo*))Collection_1_Add_m11275_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m11276_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11276(__this, method) (( void (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1_Clear_m11276_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m11277_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11277(__this, method) (( void (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1_ClearItems_m11277_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m11278_gshared (Collection_1_t1823 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m11278(__this, ___item, method) (( bool (*) (Collection_1_t1823 *, Object_t *, const MethodInfo*))Collection_1_Contains_m11278_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11279_gshared (Collection_1_t1823 * __this, ObjectU5BU5D_t336* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11279(__this, ___array, ___index, method) (( void (*) (Collection_1_t1823 *, ObjectU5BU5D_t336*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11279_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11280_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11280(__this, method) (( Object_t* (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1_GetEnumerator_m11280_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11281_gshared (Collection_1_t1823 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11281(__this, ___item, method) (( int32_t (*) (Collection_1_t1823 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m11281_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11282_gshared (Collection_1_t1823 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m11282(__this, ___index, ___item, method) (( void (*) (Collection_1_t1823 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m11282_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11283_gshared (Collection_1_t1823 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m11283(__this, ___index, ___item, method) (( void (*) (Collection_1_t1823 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m11283_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m11284_gshared (Collection_1_t1823 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m11284(__this, ___item, method) (( bool (*) (Collection_1_t1823 *, Object_t *, const MethodInfo*))Collection_1_Remove_m11284_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11285_gshared (Collection_1_t1823 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m11285(__this, ___index, method) (( void (*) (Collection_1_t1823 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m11285_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11286_gshared (Collection_1_t1823 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11286(__this, ___index, method) (( void (*) (Collection_1_t1823 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11286_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11287_gshared (Collection_1_t1823 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11287(__this, method) (( int32_t (*) (Collection_1_t1823 *, const MethodInfo*))Collection_1_get_Count_m11287_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m11288_gshared (Collection_1_t1823 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11288(__this, ___index, method) (( Object_t * (*) (Collection_1_t1823 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11288_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11289_gshared (Collection_1_t1823 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11289(__this, ___index, ___value, method) (( void (*) (Collection_1_t1823 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m11289_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11290_gshared (Collection_1_t1823 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11290(__this, ___index, ___item, method) (( void (*) (Collection_1_t1823 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m11290_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11291_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11291(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11291_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m11292_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11292(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11292_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11293_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11293(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11293_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m11294_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m11294(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m11294_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m11295_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m11295(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m11295_gshared)(__this /* static, unused */, ___list, method)
