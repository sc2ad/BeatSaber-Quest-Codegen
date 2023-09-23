#pragma once
#include "Mono/Security/Authenticode/zzzz__AuthenticodeBase_impl.hpp"
#include "Mono/Security/Authenticode/zzzz__AuthenticodeDeformatter_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Mono/Security/zzzz__PKCS7_def.hpp"
#include "Mono/Security/zzzz__PKCS7_def.hpp"
#include "Mono/Security/X509/zzzz__X509Chain_def.hpp"
//  Writing Method size for method: Mono::Security::Authenticode::AuthenticodeDeformatter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(&Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x229d808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Authenticode::AuthenticodeDeformatter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Authenticode::AuthenticodeDeformatter::*)(::ArrayW<uint8_t>)>(&Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x229d894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Authenticode::AuthenticodeDeformatter.set_RawData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Authenticode::AuthenticodeDeformatter::*)(::ArrayW<uint8_t>)>(&Mono::Security::Authenticode::AuthenticodeDeformatter::set_RawData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x229d8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "set_RawData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Authenticode::AuthenticodeDeformatter.get_SigningCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Certificate (Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(&Mono::Security::Authenticode::AuthenticodeDeformatter::get_SigningCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229dd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "get_SigningCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Authenticode::AuthenticodeDeformatter.CheckSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(&Mono::Security::Authenticode::AuthenticodeDeformatter::CheckSignature)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x229da30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "CheckSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Authenticode::AuthenticodeDeformatter.CompareIssuerSerial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Authenticode::AuthenticodeDeformatter::*)(::StringW, ::ArrayW<uint8_t>, Mono::Security::X509::X509Certificate)>(&Mono::Security::Authenticode::AuthenticodeDeformatter::CompareIssuerSerial)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x229e774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "CompareIssuerSerial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Authenticode::AuthenticodeDeformatter.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Authenticode::AuthenticodeDeformatter::*)(Mono::Security::Mono__Security__PKCS7__SignedData, ::ArrayW<uint8_t>, System::Security::Cryptography::HashAlgorithm)>(&Mono::Security::Authenticode::AuthenticodeDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0xa48;
  constexpr static std::size_t addrs = 0x229dd2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Mono__Security__PKCS7__SignedData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::HashAlgorithm>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Authenticode::AuthenticodeDeformatter.VerifyCounterSignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Authenticode::AuthenticodeDeformatter::*)(Mono::Security::Mono__Security__PKCS7__SignerInfo, ::ArrayW<uint8_t>)>(&Mono::Security::Authenticode::AuthenticodeDeformatter::VerifyCounterSignature)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x229e868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "VerifyCounterSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Mono__Security__PKCS7__SignerInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Authenticode::AuthenticodeDeformatter.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Authenticode::AuthenticodeDeformatter::*)()>(&Mono::Security::Authenticode::AuthenticodeDeformatter::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x229d98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_filename(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Mono::Security::Authenticode::AuthenticodeDeformatter::__get_filename() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_rawdata(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Mono::Security::Authenticode::AuthenticodeDeformatter::__get_rawdata() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_hash(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Mono::Security::Authenticode::AuthenticodeDeformatter::__get_hash() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_coll(Mono::Security::X509::X509CertificateCollection value)  {
::cordl_internals::setInstanceField<Mono::Security::X509::X509CertificateCollection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::X509::X509CertificateCollection>(value));
}
constexpr Mono::Security::X509::X509CertificateCollection Mono::Security::Authenticode::AuthenticodeDeformatter::__get_coll() const {
return ::cordl_internals::getInstanceField<Mono::Security::X509::X509CertificateCollection, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_signedHash(Mono::Security::ASN1 value)  {
::cordl_internals::setInstanceField<Mono::Security::ASN1, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::ASN1>(value));
}
constexpr Mono::Security::ASN1 Mono::Security::Authenticode::AuthenticodeDeformatter::__get_signedHash() const {
return ::cordl_internals::getInstanceField<Mono::Security::ASN1, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_timestamp(System::DateTime value)  {
::cordl_internals::setInstanceField<System::DateTime, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::DateTime>(value));
}
constexpr System::DateTime Mono::Security::Authenticode::AuthenticodeDeformatter::__get_timestamp() const {
return ::cordl_internals::getInstanceField<System::DateTime, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_signingCertificate(Mono::Security::X509::X509Certificate value)  {
::cordl_internals::setInstanceField<Mono::Security::X509::X509Certificate, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::X509::X509Certificate>(value));
}
constexpr Mono::Security::X509::X509Certificate Mono::Security::Authenticode::AuthenticodeDeformatter::__get_signingCertificate() const {
return ::cordl_internals::getInstanceField<Mono::Security::X509::X509Certificate, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_reason(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Security::Authenticode::AuthenticodeDeformatter::__get_reason() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_trustedRoot(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Mono::Security::Authenticode::AuthenticodeDeformatter::__get_trustedRoot() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_trustedTimestampRoot(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Mono::Security::Authenticode::AuthenticodeDeformatter::__get_trustedTimestampRoot() const {
return ::cordl_internals::getInstanceField<bool, 0x7d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_entry(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Mono::Security::Authenticode::AuthenticodeDeformatter::__get_entry() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_signerChain(Mono::Security::X509::X509Chain value)  {
::cordl_internals::setInstanceField<Mono::Security::X509::X509Chain, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::X509::X509Chain>(value));
}
constexpr Mono::Security::X509::X509Chain Mono::Security::Authenticode::AuthenticodeDeformatter::__get_signerChain() const {
return ::cordl_internals::getInstanceField<Mono::Security::X509::X509Chain, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Authenticode::AuthenticodeDeformatter::__set_timestampChain(Mono::Security::X509::X509Chain value)  {
::cordl_internals::setInstanceField<Mono::Security::X509::X509Chain, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::X509::X509Chain>(value));
}
constexpr Mono::Security::X509::X509Chain Mono::Security::Authenticode::AuthenticodeDeformatter::__get_timestampChain() const {
return ::cordl_internals::getInstanceField<Mono::Security::X509::X509Chain, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Mono::Security::Authenticode::AuthenticodeDeformatter::AuthenticodeDeformatter()  : Mono::Security::Authenticode::AuthenticodeBase(THROW_UNLESS(::il2cpp_utils::New<AuthenticodeDeformatter>())) {}
 void Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "rawData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Mono::Security::Authenticode::AuthenticodeDeformatter::AuthenticodeDeformatter(::ArrayW<uint8_t> rawData)  : Mono::Security::Authenticode::AuthenticodeBase(THROW_UNLESS(::il2cpp_utils::New<AuthenticodeDeformatter>(rawData))) {}
 void Mono::Security::Authenticode::AuthenticodeDeformatter::_ctor(::ArrayW<uint8_t> rawData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rawData);
}
 void Mono::Security::Authenticode::AuthenticodeDeformatter::set_RawData(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "set_RawData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Mono::Security::X509::X509Certificate Mono::Security::Authenticode::AuthenticodeDeformatter::get_SigningCertificate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "get_SigningCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509Certificate, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Security::Authenticode::AuthenticodeDeformatter::CheckSignature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "CheckSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Mono::Security::Authenticode::AuthenticodeDeformatter::CompareIssuerSerial(::StringW issuer, ::ArrayW<uint8_t> serial, Mono::Security::X509::X509Certificate x509)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "CompareIssuerSerial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, issuer, serial, x509);
}
 bool Mono::Security::Authenticode::AuthenticodeDeformatter::VerifySignature(Mono::Security::Mono__Security__PKCS7__SignedData sd, ::ArrayW<uint8_t> calculatedMessageDigest, System::Security::Cryptography::HashAlgorithm ha)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Mono__Security__PKCS7__SignedData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::HashAlgorithm>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sd, calculatedMessageDigest, ha);
}
 bool Mono::Security::Authenticode::AuthenticodeDeformatter::VerifyCounterSignature(Mono::Security::Mono__Security__PKCS7__SignerInfo cs, ::ArrayW<uint8_t> signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "VerifyCounterSignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Mono__Security__PKCS7__SignerInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, cs, signature);
}
 void Mono::Security::Authenticode::AuthenticodeDeformatter::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Authenticode::AuthenticodeDeformatter>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
