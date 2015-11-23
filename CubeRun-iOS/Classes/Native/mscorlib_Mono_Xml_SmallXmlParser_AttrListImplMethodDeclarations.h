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

// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t1155;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t576;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::.ctor()
extern "C" void AttrListImpl__ctor_m6983 (AttrListImpl_t1155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser/AttrListImpl::get_Length()
extern "C" int32_t AttrListImpl_get_Length_m6984 (AttrListImpl_t1155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetName(System.Int32)
extern "C" String_t* AttrListImpl_GetName_m6985 (AttrListImpl_t1155 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetValue(System.Int32)
extern "C" String_t* AttrListImpl_GetValue_m6986 (AttrListImpl_t1155 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser/AttrListImpl::GetValue(System.String)
extern "C" String_t* AttrListImpl_GetValue_m6987 (AttrListImpl_t1155 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.SmallXmlParser/AttrListImpl::get_Names()
extern "C" StringU5BU5D_t576* AttrListImpl_get_Names_m6988 (AttrListImpl_t1155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.SmallXmlParser/AttrListImpl::get_Values()
extern "C" StringU5BU5D_t576* AttrListImpl_get_Values_m6989 (AttrListImpl_t1155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::Clear()
extern "C" void AttrListImpl_Clear_m6990 (AttrListImpl_t1155 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser/AttrListImpl::Add(System.String,System.String)
extern "C" void AttrListImpl_Add_m6991 (AttrListImpl_t1155 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
