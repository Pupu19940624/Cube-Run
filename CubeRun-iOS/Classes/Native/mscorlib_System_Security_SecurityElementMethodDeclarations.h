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

// System.Security.SecurityElement
struct SecurityElement_t1154;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t708;
// System.Text.StringBuilder
struct StringBuilder_t334;
// System.Security.SecurityElement/SecurityAttribute
struct SecurityAttribute_t1561;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.SecurityElement::.ctor(System.String)
extern "C" void SecurityElement__ctor_m9516 (SecurityElement_t1154 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.ctor(System.String,System.String)
extern "C" void SecurityElement__ctor_m9517 (SecurityElement_t1154 * __this, String_t* ___tag, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::.cctor()
extern "C" void SecurityElement__cctor_m9518 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityElement::get_Children()
extern "C" ArrayList_t708 * SecurityElement_get_Children_m9519 (SecurityElement_t1154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::get_Tag()
extern "C" String_t* SecurityElement_get_Tag_m9520 (SecurityElement_t1154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::set_Text(System.String)
extern "C" void SecurityElement_set_Text_m9521 (SecurityElement_t1154 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddAttribute(System.String,System.String)
extern "C" void SecurityElement_AddAttribute_m9522 (SecurityElement_t1154 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::AddChild(System.Security.SecurityElement)
extern "C" void SecurityElement_AddChild_m9523 (SecurityElement_t1154 * __this, SecurityElement_t1154 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Escape(System.String)
extern "C" String_t* SecurityElement_Escape_m9524 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::Unescape(System.String)
extern "C" String_t* SecurityElement_Unescape_m9525 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeName(System.String)
extern "C" bool SecurityElement_IsValidAttributeName_m9526 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidAttributeValue(System.String)
extern "C" bool SecurityElement_IsValidAttributeValue_m9527 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidTag(System.String)
extern "C" bool SecurityElement_IsValidTag_m9528 (Object_t * __this /* static, unused */, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityElement::IsValidText(System.String)
extern "C" bool SecurityElement_IsValidText_m9529 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.SecurityElement::SearchForChildByTag(System.String)
extern "C" SecurityElement_t1154 * SecurityElement_SearchForChildByTag_m9530 (SecurityElement_t1154 * __this, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityElement::ToString()
extern "C" String_t* SecurityElement_ToString_m9531 (SecurityElement_t1154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityElement::ToXml(System.Text.StringBuilder&,System.Int32)
extern "C" void SecurityElement_ToXml_m9532 (SecurityElement_t1154 * __this, StringBuilder_t334 ** ___s, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement/SecurityAttribute System.Security.SecurityElement::GetAttribute(System.String)
extern "C" SecurityAttribute_t1561 * SecurityElement_GetAttribute_m9533 (SecurityElement_t1154 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
