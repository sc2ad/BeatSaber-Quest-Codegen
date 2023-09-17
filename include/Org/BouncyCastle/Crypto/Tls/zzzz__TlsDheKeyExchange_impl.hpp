#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHKeyExchange_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDheKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::*)(int32_t, ::System::Collections::IList, ::Org::BouncyCastle::Crypto::Parameters::DHParameters)>(&::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xf17cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::*)(int32_t, ::System::Collections::IList, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier, ::Org::BouncyCastle::Crypto::Parameters::DHParameters)>(&::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf17d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange.ProcessServerCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials)>(&::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::ProcessServerCredentials)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xf17d44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange.GenerateServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::GenerateServerKeyExchange)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0xf17eb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange.ProcessServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xf182fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange.InitVerifyer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ISigner (::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsSigner, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters)>(&::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::InitVerifyer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xf185d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::__set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::__get_mServerCredentials() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "dhParameters", ty: "::Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::TlsDheKeyExchange(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters)  : ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange(THROW_UNLESS(::il2cpp_utils::New<TlsDheKeyExchange>(keyExchange, supportedSignatureAlgorithms, dhParameters))) {}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::_ctor(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyExchange, supportedSignatureAlgorithms, dhParameters);
}
// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "dhVerifier", ty: "::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier", modifiers: "", def_value: None }, CppParam { name: "dhParameters", ty: "::Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::TlsDheKeyExchange(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters)  : ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange(THROW_UNLESS(::il2cpp_utils::New<TlsDheKeyExchange>(keyExchange, supportedSignatureAlgorithms, dhVerifier, dhParameters))) {}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::_ctor(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::DHParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyExchange, supportedSignatureAlgorithms, dhVerifier, dhParameters);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                            "ProcessServerCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCredentials);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::GenerateServerKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                            "GenerateServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::ProcessServerKeyExchange(::System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                            "ProcessServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 ::Org::BouncyCastle::Crypto::ISigner ::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange::InitVerifyer(::Org::BouncyCastle::Crypto::Tls::TlsSigner tlsSigner, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange>::get(),
                            "InitVerifyer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsSigner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::SecurityParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner, false>(const_cast<void*>(instance), ___internal_method, tlsSigner, algorithm, securityParameters);
}
} // end anonymous namespace
