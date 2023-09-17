#pragma once
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttributeX509_impl.hpp"
namespace {
#include "Org/BouncyCastle/Asn1/Smime/zzzz__SmimeEncryptionKeyPreferenceAttribute_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__IssuerAndSerialNumber_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientKeyIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::*)(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber)>(&::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xfe7c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::*)(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier)>(&::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xfe7d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::*)(::Org::BouncyCastle::Asn1::Asn1OctetString)>(&::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xfe7e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "issAndSer", ty: "::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::SmimeEncryptionKeyPreferenceAttribute(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber issAndSer)  : ::Org::BouncyCastle::Asn1::X509::AttributeX509(THROW_UNLESS(::il2cpp_utils::New<SmimeEncryptionKeyPreferenceAttribute>(issAndSer))) {}
 void ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber issAndSer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, issAndSer);
}
// Ctor Parameters [CppParam { name: "rKeyID", ty: "::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::SmimeEncryptionKeyPreferenceAttribute(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier rKeyID)  : ::Org::BouncyCastle::Asn1::X509::AttributeX509(THROW_UNLESS(::il2cpp_utils::New<SmimeEncryptionKeyPreferenceAttribute>(rKeyID))) {}
 void ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor(::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier rKeyID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rKeyID);
}
// Ctor Parameters [CppParam { name: "sKeyID", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::SmimeEncryptionKeyPreferenceAttribute(::Org::BouncyCastle::Asn1::Asn1OctetString sKeyID)  : ::Org::BouncyCastle::Asn1::X509::AttributeX509(THROW_UNLESS(::il2cpp_utils::New<SmimeEncryptionKeyPreferenceAttribute>(sKeyID))) {}
 void ::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString sKeyID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Smime::SmimeEncryptionKeyPreferenceAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1OctetString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sKeyID);
}
} // end anonymous namespace
