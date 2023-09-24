#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsECDHKeyExchange_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsECDheKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::*)(int32_t, System::Collections::IList, ::ArrayW<int32_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf1dd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange.ProcessServerCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::*)(Org::BouncyCastle::Crypto::Tls::TlsCredentials)>(&Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::ProcessServerCredentials)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xf1dd98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange.GenerateServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::GenerateServerKeyExchange)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xf1df00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange.ProcessServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xf1e4dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange.ValidateCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::*)(Org::BouncyCastle::Crypto::Tls::CertificateRequest)>(&Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::ValidateCertificateRequest)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xf1e7e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange.ProcessClientCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::*)(Org::BouncyCastle::Crypto::Tls::TlsCredentials)>(&Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::ProcessClientCredentials)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf1e87c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange.InitVerifyer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ISigner (Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::*)(Org::BouncyCastle::Crypto::Tls::TlsSigner, Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, Org::BouncyCastle::Crypto::Tls::SecurityParameters)>(&Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::InitVerifyer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xf1e908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::__set_mServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::__get_mServerCredentials() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::New_ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats)  {
Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>(keyExchange, supportedSignatureAlgorithms, namedCurves, clientECPointFormats, serverECPointFormats))};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::_ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyExchange, supportedSignatureAlgorithms, namedCurves, clientECPointFormats, serverECPointFormats);
}
 void Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::ProcessServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                            "ProcessServerCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsCredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCredentials);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::GenerateServerKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                            "GenerateServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::ProcessServerKeyExchange(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                            "ProcessServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::ValidateCertificateRequest(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                            "ValidateCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::CertificateRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificateRequest);
}
 void Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::ProcessClientCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                            "ProcessClientCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsCredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientCredentials);
}
 Org::BouncyCastle::Crypto::ISigner Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange::InitVerifyer(Org::BouncyCastle::Crypto::Tls::TlsSigner tlsSigner, Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange>::get(),
                            "InitVerifyer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsSigner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::SecurityParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ISigner, false>(const_cast<void*>(instance), ___internal_method, tlsSigner, algorithm, securityParameters);
}
