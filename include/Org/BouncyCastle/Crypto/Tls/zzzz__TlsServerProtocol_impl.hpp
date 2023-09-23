#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__NewSessionTicket_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContextImpl_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(System::IO::Stream, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf256a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(System::IO::Stream, System::IO::Stream, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf256c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf256ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.Accept
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(Org::BouncyCastle::Crypto::Tls::TlsServer)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::Accept)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xf25710;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.CleanupHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::CleanupHandshake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf25a18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.get_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsContext (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf25a3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.get_ContextAdmin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_ContextAdmin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf25a44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.get_Peer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsPeer (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Peer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf25a4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.HandleHandshakeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(uint8_t, System::IO::MemoryStream)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleHandshakeMessage)> {
  constexpr static std::size_t size = 0xcdc;
  constexpr static std::size_t addrs = 0xf25a54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.HandleAlertWarningMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleAlertWarningMessage)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xf26afc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.NotifyClientCertificate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(Org::BouncyCastle::Crypto::Tls::Certificate)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::NotifyClientCertificate)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xf26c70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveCertificateMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(System::IO::MemoryStream)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateMessage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf27278;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveCertificateVerifyMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(System::IO::MemoryStream)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0xf27304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  54
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveClientHelloMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(System::IO::MemoryStream)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientHelloMessage)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0xf27efc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveClientKeyExchangeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(System::IO::MemoryStream)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientKeyExchangeMessage)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xf2899c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendCertificateRequestMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(Org::BouncyCastle::Crypto::Tls::CertificateRequest)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateRequestMessage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xf28c78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  57
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendCertificateStatusMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(Org::BouncyCastle::Crypto::Tls::CertificateStatus)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateStatusMessage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xf28d08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  58
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendNewSessionTicketMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(Org::BouncyCastle::Crypto::Tls::NewSessionTicket)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendNewSessionTicketMessage)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xf28d98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendServerHelloMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloMessage)> {
  constexpr static std::size_t size = 0x874;
  constexpr static std::size_t addrs = 0xf28e5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendServerHelloDoneMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloDoneMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf2998c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendServerKeyExchangeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerKeyExchangeMessage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf29ab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ExpectCertificateVerifyMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ExpectCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf29b40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsServerProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mTlsServer(Org::BouncyCastle::Crypto::Tls::TlsServer value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsServer, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsServer>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsServer Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mTlsServer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsServer, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mTlsServerContext(Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mTlsServerContext() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mKeyExchange(Org::BouncyCastle::Crypto::Tls::TlsKeyExchange value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsKeyExchange>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsKeyExchange Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mKeyExchange() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsKeyExchange, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsCredentials, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsCredentials>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsCredentials Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mServerCredentials() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsCredentials, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mCertificateRequest(Org::BouncyCastle::Crypto::Tls::CertificateRequest value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::CertificateRequest, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::CertificateRequest>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::CertificateRequest Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mCertificateRequest() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::CertificateRequest, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mClientCertificateType(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int16_t>(value));
}
constexpr int16_t Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mClientCertificateType() const {
return ::cordl_internals::getInstanceField<int16_t, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mPrepareFinishHash(Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mPrepareFinishHash() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::TlsServerProtocol(System::IO::Stream stream, Org::BouncyCastle::Security::SecureRandom secureRandom)  : Org::BouncyCastle::Crypto::Tls::TlsProtocol(THROW_UNLESS(::il2cpp_utils::New<TlsServerProtocol>(stream, secureRandom))) {}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor(System::IO::Stream stream, Org::BouncyCastle::Security::SecureRandom secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, secureRandom);
}
// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::TlsServerProtocol(System::IO::Stream input, System::IO::Stream output, Org::BouncyCastle::Security::SecureRandom secureRandom)  : Org::BouncyCastle::Crypto::Tls::TlsProtocol(THROW_UNLESS(::il2cpp_utils::New<TlsServerProtocol>(input, output, secureRandom))) {}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor(System::IO::Stream input, System::IO::Stream output, Org::BouncyCastle::Security::SecureRandom secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, output, secureRandom);
}
// Ctor Parameters [CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::TlsServerProtocol(Org::BouncyCastle::Security::SecureRandom secureRandom)  : Org::BouncyCastle::Crypto::Tls::TlsProtocol(THROW_UNLESS(::il2cpp_utils::New<TlsServerProtocol>(secureRandom))) {}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor(Org::BouncyCastle::Security::SecureRandom secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secureRandom);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::Accept(Org::BouncyCastle::Crypto::Tls::TlsServer tlsServer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "Accept",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsServer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tlsServer);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::CleanupHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "CleanupHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::TlsContext Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Context()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsContext, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::AbstractTlsContext Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_ContextAdmin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "get_ContextAdmin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::TlsPeer Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Peer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "get_Peer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsPeer, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleHandshakeMessage(uint8_t type, System::IO::MemoryStream buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "HandleHandshakeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, buf);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleAlertWarningMessage(uint8_t alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "HandleAlertWarningMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alertDescription);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::NotifyClientCertificate(Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "NotifyClientCertificate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientCertificate);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateMessage(System::IO::MemoryStream buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "ReceiveCertificateMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateVerifyMessage(System::IO::MemoryStream buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "ReceiveCertificateVerifyMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientHelloMessage(System::IO::MemoryStream buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "ReceiveClientHelloMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientKeyExchangeMessage(System::IO::MemoryStream buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "ReceiveClientKeyExchangeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateRequestMessage(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "SendCertificateRequestMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::CertificateRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificateRequest);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateStatusMessage(Org::BouncyCastle::Crypto::Tls::CertificateStatus certificateStatus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "SendCertificateStatusMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::CertificateStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificateStatus);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendNewSessionTicketMessage(Org::BouncyCastle::Crypto::Tls::NewSessionTicket newSessionTicket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "SendNewSessionTicketMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::NewSessionTicket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newSessionTicket);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "SendServerHelloMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloDoneMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "SendServerHelloDoneMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerKeyExchangeMessage(::ArrayW<uint8_t> serverKeyExchange)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "SendServerKeyExchangeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverKeyExchange);
}
 bool Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ExpectCertificateVerifyMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsServerProtocol>::get(),
                            "ExpectCertificateVerifyMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
