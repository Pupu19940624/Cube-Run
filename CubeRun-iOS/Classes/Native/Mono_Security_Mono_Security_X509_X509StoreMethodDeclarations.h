﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.X509.X509Store
struct X509Store_t744;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t732;
// System.Collections.ArrayList
struct ArrayList_t708;
// System.Byte[]
struct ByteU5BU5D_t677;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t734;
// Mono.Security.X509.X509Crl
struct X509Crl_t742;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C" void X509Store__ctor_m3977 (X509Store_t744 * __this, String_t* ___path, bool ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C" X509CertificateCollection_t732 * X509Store_get_Certificates_m3978 (X509Store_t744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C" ArrayList_t708 * X509Store_get_Crls_m3979 (X509Store_t744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C" ByteU5BU5D_t677* X509Store_Load_m3980 (X509Store_t744 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C" X509Certificate_t734 * X509Store_LoadCertificate_m3981 (X509Store_t744 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C" X509Crl_t742 * X509Store_LoadCrl_m3982 (X509Store_t744 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C" bool X509Store_CheckStore_m3983 (X509Store_t744 * __this, String_t* ___path, bool ___throwException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C" X509CertificateCollection_t732 * X509Store_BuildCertificatesCollection_m3984 (X509Store_t744 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C" ArrayList_t708 * X509Store_BuildCrlsCollection_m3985 (X509Store_t744 * __this, String_t* ___storeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
