#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsPeer_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__NewSessionTicket_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClient_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCompression_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipherFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsClientContext_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xecb33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xecb3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsCipherFactory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.AllowUnexpectedServerExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(int32_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::AllowUnexpectedServerExtension)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xecb3d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.CheckForUnexpectedServerExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(System::Collections::IDictionary, int32_t)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::CheckForUnexpectedServerExtension)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xecb490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(Org::BouncyCastle::Crypto::Tls::TlsClientContext)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecb564;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.GetSessionToResume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsSession (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetSessionToResume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecb56c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.get_ClientHelloRecordLayerVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::ProtocolVersion (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::get_ClientHelloRecordLayerVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xecb574;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.get_ClientVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::ProtocolVersion (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::get_ClientVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xecb584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.get_IsFallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::get_IsFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecb5dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.GetClientExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetClientExtensions)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xecb5e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.get_MinimumVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::ProtocolVersion (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::get_MinimumVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xecb840;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.NotifyServerVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(Org::BouncyCastle::Crypto::Tls::ProtocolVersion)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::NotifyServerVersion)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xecb898;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.GetCipherSuites
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetCipherSuites)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  54
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.GetCompressionMethods
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetCompressionMethods)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xecb914;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.NotifySessionID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::NotifySessionID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xecb958;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.NotifySelectedCipherSuite
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(int32_t)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::NotifySelectedCipherSuite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecb95c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  57
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.NotifySelectedCompressionMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::NotifySelectedCompressionMethod)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xecb964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  58
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.ProcessServerExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(System::Collections::IDictionary)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::ProcessServerExtensions)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xecb970;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.ProcessServerSupplementalData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(System::Collections::IList)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::ProcessServerSupplementalData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xecba84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.GetKeyExchange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsKeyExchange (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetKeyExchange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.GetAuthentication
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsAuthentication (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetAuthentication)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.GetClientSupplementalData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetClientSupplementalData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xecbad0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.GetCompression
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsCompression (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetCompression)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xecbad8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.GetCipher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsCipher (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)()>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetCipher)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xecbbd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::AbstractTlsClient.NotifyNewSessionTicket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::*)(Org::BouncyCastle::Crypto::Tls::NewSessionTicket)>(&Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::NotifyNewSessionTicket)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xecbcdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::AbstractTlsClient),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                                  64
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsClient
constexpr  Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::operator Org::BouncyCastle::Crypto::Tls::TlsClient() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsClient(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsPeer
constexpr  Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::operator Org::BouncyCastle::Crypto::Tls::TlsPeer() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsPeer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__set_mCipherFactory(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsCipherFactory, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsCipherFactory>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsCipherFactory Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__get_mCipherFactory() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsCipherFactory, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__set_mContext(Org::BouncyCastle::Crypto::Tls::TlsClientContext value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsClientContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsClientContext>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsClientContext Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__get_mContext() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsClientContext, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__set_mSupportedSignatureAlgorithms(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__get_mSupportedSignatureAlgorithms() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__set_mNamedCurves(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__get_mNamedCurves() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__set_mClientECPointFormats(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__get_mClientECPointFormats() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__set_mServerECPointFormats(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__get_mServerECPointFormats() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__set_mSelectedCipherSuite(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__get_mSelectedCipherSuite() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__set_mSelectedCompressionMethod(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int16_t>(value));
}
constexpr int16_t Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::__get_mSelectedCompressionMethod() const {
return ::cordl_internals::getInstanceField<int16_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::AbstractTlsClient()  : Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer(THROW_UNLESS(::il2cpp_utils::New<AbstractTlsClient>())) {}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "cipherFactory", ty: "Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::AbstractTlsClient(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory)  : Org::BouncyCastle::Crypto::Tls::AbstractTlsPeer(THROW_UNLESS(::il2cpp_utils::New<AbstractTlsClient>(cipherFactory))) {}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::_ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsCipherFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cipherFactory);
}
 bool Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::AllowUnexpectedServerExtension(int32_t extensionType, ::ArrayW<uint8_t> extensionData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "AllowUnexpectedServerExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, extensionType, extensionData);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::CheckForUnexpectedServerExtension(System::Collections::IDictionary serverExtensions, int32_t extensionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "CheckForUnexpectedServerExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverExtensions, extensionType);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::Init(Org::BouncyCastle::Crypto::Tls::TlsClientContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsClientContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 Org::BouncyCastle::Crypto::Tls::TlsSession Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetSessionToResume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "GetSessionToResume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsSession, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::get_ClientHelloRecordLayerVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "get_ClientHelloRecordLayerVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::get_ClientVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "get_ClientVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::get_IsFallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "get_IsFallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IDictionary Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetClientExtensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "GetClientExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionary, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::get_MinimumVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "get_MinimumVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::NotifyServerVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion serverVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "NotifyServerVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::ProtocolVersion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverVersion);
}
 ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetCipherSuites()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "GetCipherSuites",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetCompressionMethods()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "GetCompressionMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::NotifySessionID(::ArrayW<uint8_t> sessionID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "NotifySessionID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sessionID);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::NotifySelectedCipherSuite(int32_t selectedCipherSuite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "NotifySelectedCipherSuite",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectedCipherSuite);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::NotifySelectedCompressionMethod(uint8_t selectedCompressionMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "NotifySelectedCompressionMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectedCompressionMethod);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::ProcessServerExtensions(System::Collections::IDictionary serverExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "ProcessServerExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverExtensions);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::ProcessServerSupplementalData(System::Collections::IList serverSupplementalData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "ProcessServerSupplementalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverSupplementalData);
}
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetKeyExchange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "GetKeyExchange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::TlsAuthentication Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetAuthentication()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "GetAuthentication",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsAuthentication, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IList Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetClientSupplementalData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "GetClientSupplementalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IList, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::TlsCompression Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetCompression()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "GetCompression",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsCompression, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::TlsCipher Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::GetCipher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "GetCipher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsCipher, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::AbstractTlsClient::NotifyNewSessionTicket(Org::BouncyCastle::Crypto::Tls::NewSessionTicket newSessionTicket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::AbstractTlsClient>::get(),
                            "NotifyNewSessionTicket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::NewSessionTicket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newSessionTicket);
}
