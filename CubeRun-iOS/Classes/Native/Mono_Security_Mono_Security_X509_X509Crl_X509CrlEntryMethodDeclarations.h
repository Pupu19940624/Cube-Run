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

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t741;
// Mono.Security.ASN1
struct ASN1_t707;
// System.Byte[]
struct ByteU5BU5D_t677;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t736;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m3944 (X509CrlEntry_t741 * __this, ASN1_t707 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t677* X509CrlEntry_get_SerialNumber_m3945 (X509CrlEntry_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t525  X509CrlEntry_get_RevocationDate_m3946 (X509CrlEntry_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t736 * X509CrlEntry_get_Extensions_m3947 (X509CrlEntry_t741 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
