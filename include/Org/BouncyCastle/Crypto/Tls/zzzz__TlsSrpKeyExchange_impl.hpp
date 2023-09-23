#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpKeyExchange_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6Client_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpGroupVerifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSrpLoginParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6Server_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.CreateSigner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsSigner (*)(int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::CreateSigner)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xf29e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "CreateSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(int32_t, System::Collections::IList, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xf29f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(int32_t, System::Collections::IList, Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xf29ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(int32_t, System::Collections::IList, ::ArrayW<uint8_t>, Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xf2a0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(Org::BouncyCastle::Crypto::Tls::TlsContext)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::Init)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xf2a1b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.SkipServerCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::SkipServerCredentials)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xf2a270;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ProcessServerCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(Org::BouncyCastle::Crypto::Tls::Certificate)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xf2a2c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ProcessServerCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(Org::BouncyCastle::Crypto::Tls::TlsCredentials)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerCredentials)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xf2a538;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.get_RequiresServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::get_RequiresServerKeyExchange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf2a6ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.GenerateServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GenerateServerKeyExchange)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0xf2a6b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ProcessServerKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0xf2abe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ValidateCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(Org::BouncyCastle::Crypto::Tls::CertificateRequest)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ValidateCertificateRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf2b120;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ProcessClientCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(Org::BouncyCastle::Crypto::Tls::TlsCredentials)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessClientCredentials)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf2b160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.GenerateClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xf2b1a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.ProcessClientKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xf2b32c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.GeneratePremasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GeneratePremasterSecret)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xf2b59c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange.InitVerifyer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ISigner (Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::*)(Org::BouncyCastle::Crypto::Tls::TlsSigner, Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, Org::BouncyCastle::Crypto::Tls::SecurityParameters)>(&Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::InitVerifyer)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xf2b6b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mTlsSigner(Org::BouncyCastle::Crypto::Tls::TlsSigner value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSigner, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsSigner>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsSigner Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mTlsSigner() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSigner, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mGroupVerifier(Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mGroupVerifier() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mIdentity(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mIdentity() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mPassword(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mPassword() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mServerPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::AsymmetricKeyParameter>(value));
}
constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mServerPublicKey() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::AsymmetricKeyParameter, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mSrpGroup(Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mSrpGroup() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mSrpClient(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client>(value));
}
constexpr Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mSrpClient() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Client, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mSrpServer(Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server>(value));
}
constexpr Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mSrpServer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Agreement::Srp::Srp6Server, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mSrpPeerCredentials(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mSrpPeerCredentials() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mSrpVerifier(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mSrpVerifier() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mSrpSalt(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mSrpSalt() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__set_mServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::__get_mServerCredentials() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Tls::TlsSigner Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::CreateSigner(int32_t keyExchange)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "CreateSigner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsSigner, false>(nullptr, ___internal_method, keyExchange);
}
// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "identity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::TlsSrpKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password)  : Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange(THROW_UNLESS(::il2cpp_utils::New<TlsSrpKeyExchange>(keyExchange, supportedSignatureAlgorithms, identity, password))) {}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyExchange, supportedSignatureAlgorithms, identity, password);
}
// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "groupVerifier", ty: "Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier", modifiers: "", def_value: None }, CppParam { name: "identity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::TlsSrpKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier groupVerifier, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password)  : Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange(THROW_UNLESS(::il2cpp_utils::New<TlsSrpKeyExchange>(keyExchange, supportedSignatureAlgorithms, groupVerifier, identity, password))) {}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier groupVerifier, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyExchange, supportedSignatureAlgorithms, groupVerifier, identity, password);
}
// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "identity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "loginParameters", ty: "Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::TlsSrpKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<uint8_t> identity, Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters loginParameters)  : Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange(THROW_UNLESS(::il2cpp_utils::New<TlsSrpKeyExchange>(keyExchange, supportedSignatureAlgorithms, identity, loginParameters))) {}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::_ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<uint8_t> identity, Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters loginParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyExchange, supportedSignatureAlgorithms, identity, loginParameters);
}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::Init(Org::BouncyCastle::Crypto::Tls::TlsContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::SkipServerCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "SkipServerCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "ProcessServerCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCertificate);
}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "ProcessServerCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsCredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverCredentials);
}
 bool Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::get_RequiresServerKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "get_RequiresServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GenerateServerKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "GenerateServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessServerKeyExchange(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "ProcessServerKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ValidateCertificateRequest(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "ValidateCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::CertificateRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificateRequest);
}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessClientCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "ProcessClientCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsCredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientCredentials);
}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GenerateClientKeyExchange(System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "GenerateClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output);
}
 void Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::ProcessClientKeyExchange(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "ProcessClientKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::GeneratePremasterSecret()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "GeneratePremasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::ISigner Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange::InitVerifyer(Org::BouncyCastle::Crypto::Tls::TlsSigner tlsSigner, Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSrpKeyExchange>::get(),
                            "InitVerifyer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsSigner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::SecurityParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ISigner, false>(const_cast<void*>(instance), ___internal_method, tlsSigner, algorithm, securityParameters);
}
