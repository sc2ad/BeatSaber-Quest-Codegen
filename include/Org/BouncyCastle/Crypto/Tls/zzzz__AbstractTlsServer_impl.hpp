#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsPeer_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__NewSessionTicket_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCompression_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServer_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xecc9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xecca58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.get_AllowEncryptThenMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::get_AllowEncryptThenMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecca80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.get_AllowTruncatedHMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::get_AllowTruncatedHMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecca88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.CheckServerExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::CheckServerExtensions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xecca90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetCipherSuites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCipherSuites)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetCompressionMethods
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCompressionMethods)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xeccab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetCompressionMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.get_MaximumVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::get_MaximumVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xeccaf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.get_MinimumVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::get_MinimumVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xeccb4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.SupportsClientEccCapabilities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::SupportsClientEccCapabilities)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xeccba4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::TlsServerContext)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeccc98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.NotifyClientVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::NotifyClientVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeccca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.NotifyFallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)(bool)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::NotifyFallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xeccca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.NotifyOfferedCipherSuites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)(::ArrayW<int32_t>)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::NotifyOfferedCipherSuites)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xeccd24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  54
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.NotifyOfferedCompressionMethods
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::NotifyOfferedCompressionMethods)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeccd98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.ProcessClientExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)(::System::Collections::IDictionary)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::ProcessClientExtensions)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xeccda0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetServerVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetServerVersion)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xeccf08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  57
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetSelectedCipherSuite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetSelectedCipherSuite)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xeccfe8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  58
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetSelectedCompressionMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetSelectedCompressionMethod)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xecd1e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetServerExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetServerExtensions)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xecd300;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetServerSupplementalData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetServerSupplementalData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecd50c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetCredentials
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCredentials)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetCertificateStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::CertificateStatus (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCertificateStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecd514;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetKeyExchange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  64
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetCertificateRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::CertificateRequest (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCertificateRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecd51c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.ProcessClientSupplementalData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)(::System::Collections::IList)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::ProcessClientSupplementalData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xecd524;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  66
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.NotifyClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)(::Org::BouncyCastle::Crypto::Tls::Certificate)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::NotifyClientCertificate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xecd570;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetCompression
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCompression (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCompression)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xecd5b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCipher)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xecd65c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer.GetNewSessionTicket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket (::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetNewSessionTicket)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xecd760;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsServer
constexpr  ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::operator ::Org::BouncyCastle::Crypto::Tls::TlsServer() const noexcept {
return ::Org::BouncyCastle::Crypto::Tls::TlsServer(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsPeer
constexpr  ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::operator ::Org::BouncyCastle::Crypto::Tls::TlsPeer() const noexcept {
return ::Org::BouncyCastle::Crypto::Tls::TlsPeer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mCipherFactory(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mCipherFactory() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContext value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsServerContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::TlsServerContext>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContext ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mContext() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::TlsServerContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mClientVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mClientVersion() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mOfferedCipherSuites(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mOfferedCipherSuites() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mOfferedCompressionMethods(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mOfferedCompressionMethods() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mClientExtensions(::System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IDictionary>(value));
}
constexpr ::System::Collections::IDictionary ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mClientExtensions() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mEncryptThenMacOffered(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mEncryptThenMacOffered() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mMaxFragmentLengthOffered(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x4a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int16_t>(value));
}
constexpr int16_t ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mMaxFragmentLengthOffered() const {
return ::cordl_internals::getInstanceField<int16_t, 0x4a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mTruncatedHMacOffered(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mTruncatedHMacOffered() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mSupportedSignatureAlgorithms(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mSupportedSignatureAlgorithms() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mEccCipherSuitesOffered(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mEccCipherSuitesOffered() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mNamedCurves(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mNamedCurves() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mClientECPointFormats(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mClientECPointFormats() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mServerECPointFormats(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mServerECPointFormats() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mServerVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion>(value));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mServerVersion() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mSelectedCipherSuite(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mSelectedCipherSuite() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mSelectedCompressionMethod(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mSelectedCompressionMethod() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__set_mServerExtensions(::System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<::System::Collections::IDictionary, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IDictionary>(value));
}
constexpr ::System::Collections::IDictionary ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::__get_mServerExtensions() const {
return ::cordl_internals::getInstanceField<::System::Collections::IDictionary, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::AbstractTlsServer()  : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer(THROW_UNLESS(::il2cpp_utils::New<AbstractTlsServer>())) {}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "cipherFactory", ty: "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::AbstractTlsServer(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory)  : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer(THROW_UNLESS(::il2cpp_utils::New<AbstractTlsServer>(cipherFactory))) {}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cipherFactory);
}
 bool ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::get_AllowEncryptThenMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "get_AllowEncryptThenMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::get_AllowTruncatedHMac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "get_AllowTruncatedHMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IDictionary ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::CheckServerExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "CheckServerExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<int32_t> ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCipherSuites()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetCipherSuites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCompressionMethods()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetCompressionMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::get_MaximumVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "get_MaximumVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::get_MinimumVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "get_MinimumVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::SupportsClientEccCapabilities(::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> ecPointFormats)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "SupportsClientEccCapabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, namedCurves, ecPointFormats);
}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::Init(::Org::BouncyCastle::Crypto::Tls::TlsServerContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsServerContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::NotifyClientVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion clientVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "NotifyClientVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientVersion);
}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::NotifyFallback(bool isFallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "NotifyFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isFallback);
}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::NotifyOfferedCipherSuites(::ArrayW<int32_t> offeredCipherSuites)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "NotifyOfferedCipherSuites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, offeredCipherSuites);
}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::NotifyOfferedCompressionMethods(::ArrayW<uint8_t> offeredCompressionMethods)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "NotifyOfferedCompressionMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, offeredCompressionMethods);
}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::ProcessClientExtensions(::System::Collections::IDictionary clientExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "ProcessClientExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientExtensions);
}
 ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetServerVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetServerVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ProtocolVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetSelectedCipherSuite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetSelectedCipherSuite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 uint8_t ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetSelectedCompressionMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetSelectedCompressionMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IDictionary ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetServerExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetServerExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IList ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetServerSupplementalData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetServerSupplementalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsCredentials ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCredentials()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetCredentials",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCredentials, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::CertificateStatus ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCertificateStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetCertificateStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::CertificateStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::CertificateRequest ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCertificateRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetCertificateRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::CertificateRequest, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::ProcessClientSupplementalData(::System::Collections::IList clientSupplementalData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "ProcessClientSupplementalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientSupplementalData);
}
 void ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "NotifyClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientCertificate);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsCompression ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCompression()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetCompression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCompression, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::TlsCipher ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetCipher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCipher, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Crypto::Tls::NewSessionTicket ::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer::GetNewSessionTicket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::AbstractTlsServer>::get(),
                            "GetNewSessionTicket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
