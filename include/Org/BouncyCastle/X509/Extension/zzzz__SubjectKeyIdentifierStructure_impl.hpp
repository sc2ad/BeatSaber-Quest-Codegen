#pragma once
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectKeyIdentifier_impl.hpp"
#include "Org/BouncyCastle/X509/Extension/zzzz__SubjectKeyIdentifierStructure_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::*)(Org::BouncyCastle::Asn1::Asn1OctetString)>(&Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x10e41d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure.FromPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1OctetString (*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::FromPublicKey)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x10e426c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure>::get(),
                            "FromPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::*)(Org::BouncyCastle::Crypto::AsymmetricKeyParameter)>(&Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x10e4428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "encodedValue", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
 Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::SubjectKeyIdentifierStructure(Org::BouncyCastle::Asn1::Asn1OctetString encodedValue)  : Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier(THROW_UNLESS(::il2cpp_utils::New<SubjectKeyIdentifierStructure>(encodedValue))) {}
 void Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor(Org::BouncyCastle::Asn1::Asn1OctetString encodedValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1OctetString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encodedValue);
}
 Org::BouncyCastle::Asn1::Asn1OctetString Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::FromPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure>::get(),
                            "FromPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1OctetString, false>(nullptr, ___internal_method, pubKey);
}
// Ctor Parameters [CppParam { name: "pubKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
 Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::SubjectKeyIdentifierStructure(Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey)  : Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier(THROW_UNLESS(::il2cpp_utils::New<SubjectKeyIdentifierStructure>(pubKey))) {}
 void Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure::_ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pubKey);
}
