#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsRsaKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsEncryptionCredentials_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::System::Collections::IList)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf23ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.SkipServerCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::SkipServerCredentials)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf2400c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ProcessServerCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessServerCredentials)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xf2404c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ProcessServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xf241b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ValidateCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ValidateCertificateRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xf243f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ProcessClientCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessClientCredentials)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf24490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.GenerateClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf2451c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ProcessClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xf24544;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.GeneratePremasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::GeneratePremasterSecret)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xf2465c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange.ValidateRsaPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters (::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::*)(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters)>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ValidateRsaPublicKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf246b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__set_mServerPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter>(value));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mServerPublicKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__set_mRsaServerPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mRsaServerPublicKey() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mServerCredentials() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__set_mPremasterSecret(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::__get_mPremasterSecret() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "supportedSignatureAlgorithms", ty: "::System::Collections::IList", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::TlsRsaKeyExchange(::System::Collections::IList supportedSignatureAlgorithms)  : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange(THROW_UNLESS(::il2cpp_utils::New<TlsRsaKeyExchange>(supportedSignatureAlgorithms))) {}
 void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::_ctor(::System::Collections::IList supportedSignatureAlgorithms)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, supportedSignatureAlgorithms);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::SkipServerCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            "SkipServerCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            "ProcessServerCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCredentials);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            "ProcessServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCertificate);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            "ValidateCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificateRequest);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            "ProcessClientCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientCredentials);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::GenerateClientKeyExchange(::System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            "GenerateClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ProcessClientKeyExchange(::System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            "ProcessClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::GeneratePremasterSecret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            "GeneratePremasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters ::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange::ValidateRsaPublicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsRsaKeyExchange>::get(),
                            "ValidateRsaPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters, false>(const_cast<void*>(instance), ___internal_method, key);
}
} // end anonymous namespace
