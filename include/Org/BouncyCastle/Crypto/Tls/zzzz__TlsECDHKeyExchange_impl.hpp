#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsECDHKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAgreementCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)(int32_t, ::System::Collections::IList, ::ArrayW<int32_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xf1cd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext)>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf1cecc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.SkipServerCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::SkipServerCredentials)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xf1cf8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.ProcessServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate)>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xf1d020;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.get_RequiresServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::get_RequiresServerKeyExchange)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf1d50c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.GenerateServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::GenerateServerKeyExchange)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xf1d538;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.ProcessServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xf1d69c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.ValidateCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest)>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ValidateCertificateRequest)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xf1d848;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.ProcessClientCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials)>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ProcessClientCredentials)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xf1d928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.GenerateClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xf1da3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.ProcessClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate)>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ProcessClientCertificate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xf1db4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.ProcessClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf1dba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange.GeneratePremasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::GeneratePremasterSecret)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xf1dc68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__set_mTlsSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSigner, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsSigner>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__get_mTlsSigner() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSigner, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__set_mNamedCurves(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__get_mNamedCurves() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__set_mClientECPointFormats(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__get_mClientECPointFormats() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__set_mServerECPointFormats(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__get_mServerECPointFormats() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>(value));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__get_mServerPublicKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__set_mAgreementCredentials(::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__get_mAgreementCredentials() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__set_mECAgreePrivateKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__get_mECAgreePrivateKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__set_mECAgreePublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::__get_mECAgreePublicKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "namedCurves", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "clientECPointFormats", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverECPointFormats", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::TlsECDHKeyExchange(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats)  : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange(THROW_UNLESS(::il2cpp_utils::New<TlsECDHKeyExchange>(keyExchange, supportedSignatureAlgorithms, namedCurves, clientECPointFormats, serverECPointFormats))) {}
 void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::_ctor(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyExchange, supportedSignatureAlgorithms, namedCurves, clientECPointFormats, serverECPointFormats);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::Init(::Org::BouncyCastle::Crypto::Tls::TlsContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::SkipServerCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "SkipServerCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "ProcessServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCertificate);
}
 bool ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::get_RequiresServerKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "get_RequiresServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::GenerateServerKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "GenerateServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ProcessServerKeyExchange(::System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "ProcessServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "ValidateCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificateRequest);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "ProcessClientCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientCredentials);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::GenerateClientKeyExchange(::System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "GenerateClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "ProcessClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientCertificate);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::ProcessClientKeyExchange(::System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "ProcessClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange::GeneratePremasterSecret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange>::get(),
                            "GeneratePremasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
