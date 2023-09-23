#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__RecordStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SecurityParameters_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ByteQueue_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCloseable_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ByteQueueStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsStream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf113bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::*)(uint8_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xf116b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::Write)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf12ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage.WriteToRecordStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::*)(Org::BouncyCastle::Crypto::Tls::TlsProtocol)>(&Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::WriteToRecordStream)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xf113c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage>::get(),
                            "WriteToRecordStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "handshakeType", ty: "uint8_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage(uint8_t handshakeType)  : System::IO::MemoryStream(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage>(handshakeType))) {}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::_ctor(uint8_t handshakeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handshakeType);
}
// Ctor Parameters [CppParam { name: "handshakeType", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage(uint8_t handshakeType, int32_t length)  : System::IO::MemoryStream(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage>(handshakeType, length))) {}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::_ctor(uint8_t handshakeType, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, handshakeType, length);
}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::Write(::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data);
}
 void Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage::WriteToRecordStream(Org::BouncyCastle::Crypto::Tls::TlsProtocol protocol)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::Org__BouncyCastle__Crypto__Tls__TlsProtocol__HandshakeMessage>::get(),
                            "WriteToRecordStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocol);
}
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(System::IO::Stream, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf0e620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(System::IO::Stream, System::IO::Stream, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xf0e62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xf0e780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsContext (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Context)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_ContextAdmin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_ContextAdmin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_Peer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::TlsPeer (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Peer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleAlertMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, uint8_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertMessage)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xf0e920;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleAlertWarningMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertWarningMessage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf0ea5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleChangeCipherSpecMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleChangeCipherSpecMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf0eae4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleClose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(bool)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleClose)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xf0eae8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::StringW, System::Exception)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleException)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf0ebe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleFailure)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xf0ec5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.HandleHandshakeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, System::IO::MemoryStream)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleHandshakeMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ApplyMaxFragmentLengthExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplyMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf0ece0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.CheckReceivedChangeCipherSpec
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(bool)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::CheckReceivedChangeCipherSpec)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xf0ed78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.CleanupHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::CleanupHandshake)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xf0edd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.BlockForHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::BlockForHandshake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xf0ee70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.CompleteHandshake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::CompleteHandshake)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0xf0ef00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessRecord)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xf06df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessHandshakeQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(Org::BouncyCastle::Crypto::Tls::ByteQueue)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessHandshakeQueue)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xf0f600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessHandshakeQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::ByteQueue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessApplicationDataQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessApplicationDataQueue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xf0f49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessApplicationDataQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessAlertQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessAlertQueue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf0f42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessAlertQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessChangeCipherSpec
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessChangeCipherSpec)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xf0f4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessChangeCipherSpec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ApplicationDataAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplicationDataAvailable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf0f8dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadApplicationData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadApplicationData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xf0f8f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.SafeCheckRecordHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeCheckRecordHeader)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xf0fa88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.SafeReadRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeReadRecord)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xf0fc5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.SafeWriteRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeWriteRecord)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xf0fef4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteData)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xf100c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.SetAppDataSplitMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::SetAppDataSplitMode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xf102b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteHandshakeMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteHandshakeMessage)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xf10364;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_Stream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Stream)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xf104f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.CloseInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::CloseInput)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xf10558;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.OfferInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf1067c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.OfferInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xf106a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetAvailableInputBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableInputBytes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf108e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadInput)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xf10954;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.OfferOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferOutput)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xf10a54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetAvailableOutputBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableOutputBytes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf10b34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadOutput)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xf10bac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.InvalidateSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::InvalidateSession)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xf10c24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessFinishedMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(System::IO::MemoryStream)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessFinishedMessage)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xf10cdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.RaiseAlertFatal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::StringW, System::Exception)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertFatal)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xf10e80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.RaiseAlertWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(uint8_t, ::StringW)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertWarning)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xf11050;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendCertificateMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(Org::BouncyCastle::Crypto::Tls::Certificate)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendCertificateMessage)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xf1118c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendChangeCipherSpecMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendChangeCipherSpecMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf114e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendFinishedMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendFinishedMessage)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xf11580;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.SendSupplementalDataMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(System::Collections::IList)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendSupplementalDataMessage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf1173c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.CreateVerifyData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(bool)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateVerifyData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xf11bdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xf11e9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.Flush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xf11eac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.get_IsClosed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_IsClosed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xf11ed0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ProcessMaxFragmentLengthExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)(System::Collections::IDictionary, System::Collections::IDictionary, uint8_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xf11ee8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.RefuseRenegotiation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsProtocol::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::RefuseRenegotiation)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xf11f98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsProtocol),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.AssertEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::MemoryStream)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::AssertEmpty)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf10df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "AssertEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.CreateRandomBlock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(bool, Org::BouncyCastle::Crypto::Prng::IRandomGenerator)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRandomBlock)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xf1207c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "CreateRandomBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Prng::IRandomGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.CreateRenegotiationInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRenegotiationInfo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xf12190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "CreateRenegotiationInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.EstablishMasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Crypto::Tls::TlsContext, Org::BouncyCastle::Crypto::Tls::TlsKeyExchange)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::EstablishMasterSecret)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xf121e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "EstablishMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsKeyExchange>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetCurrentPrfHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Crypto::Tls::TlsContext, Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetCurrentPrfHash)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xf11cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "GetCurrentPrfHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary (*)(System::IO::MemoryStream)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadExtensions)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xf08e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ReadExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.ReadSupplementalDataMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList (*)(System::IO::MemoryStream)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadSupplementalDataMessage)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xf12418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ReadSupplementalDataMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::Stream, System::Collections::IDictionary)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteExtensions)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xf093dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "WriteExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteSelectedExtensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::Stream, System::Collections::IDictionary, bool)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSelectedExtensions)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0xf1263c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "WriteSelectedExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.WriteSupplementalData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::Stream, System::Collections::IList)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSupplementalData)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xf117bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "WriteSupplementalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsProtocol.GetPrfAlgorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(Org::BouncyCastle::Crypto::Tls::TlsContext, int32_t)>(&Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetPrfAlgorithm)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xf12b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "GetPrfAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCloseable
constexpr  Org::BouncyCastle::Crypto::Tls::TlsProtocol::operator Org::BouncyCastle::Crypto::Tls::TlsCloseable() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsCloseable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mApplicationDataQueue(Org::BouncyCastle::Crypto::Tls::ByteQueue value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueue, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::ByteQueue>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::ByteQueue Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mApplicationDataQueue() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueue, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mAlertQueue(Org::BouncyCastle::Crypto::Tls::ByteQueue value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::ByteQueue>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::ByteQueue Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAlertQueue() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueue, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mHandshakeQueue(Org::BouncyCastle::Crypto::Tls::ByteQueue value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueue, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::ByteQueue>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::ByteQueue Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mHandshakeQueue() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueue, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mRecordStream(Org::BouncyCastle::Crypto::Tls::RecordStream value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::RecordStream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::RecordStream>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::RecordStream Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mRecordStream() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::RecordStream, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mSecureRandom(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
constexpr Org::BouncyCastle::Security::SecureRandom Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSecureRandom() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Security::SecureRandom, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mTlsStream(Org::BouncyCastle::Crypto::Tls::TlsStream value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsStream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsStream>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsStream Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mTlsStream() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsStream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mClosed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mClosed() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mFailedWithError(bool value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mFailedWithError() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mAppDataReady(bool value)  {
::cordl_internals::setInstanceField<bool, 0x42>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAppDataReady() const {
return ::cordl_internals::getInstanceField<bool, 0x42>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mAppDataSplitEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x43>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAppDataSplitEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x43>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mAppDataSplitMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAppDataSplitMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mExpectedVerifyData(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mExpectedVerifyData() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mTlsSession(Org::BouncyCastle::Crypto::Tls::TlsSession value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSession, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsSession>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsSession Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mTlsSession() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsSession, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mSessionParameters(Org::BouncyCastle::Crypto::Tls::SessionParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::SessionParameters, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::SessionParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::SessionParameters Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSessionParameters() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::SessionParameters, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mSecurityParameters(Org::BouncyCastle::Crypto::Tls::SecurityParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::SecurityParameters, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::SecurityParameters>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::SecurityParameters Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSecurityParameters() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::SecurityParameters, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mPeerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::Certificate, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::Certificate>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::Certificate Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mPeerCertificate() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::Certificate, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mOfferedCipherSuites(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mOfferedCipherSuites() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mOfferedCompressionMethods(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mOfferedCompressionMethods() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mClientExtensions(System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<System::Collections::IDictionary, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IDictionary>(value));
}
constexpr System::Collections::IDictionary Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mClientExtensions() const {
return ::cordl_internals::getInstanceField<System::Collections::IDictionary, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mServerExtensions(System::Collections::IDictionary value)  {
::cordl_internals::setInstanceField<System::Collections::IDictionary, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IDictionary>(value));
}
constexpr System::Collections::IDictionary Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mServerExtensions() const {
return ::cordl_internals::getInstanceField<System::Collections::IDictionary, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mConnectionState(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int16_t>(value));
}
constexpr int16_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mConnectionState() const {
return ::cordl_internals::getInstanceField<int16_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mResumedSession(bool value)  {
::cordl_internals::setInstanceField<bool, 0x92>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mResumedSession() const {
return ::cordl_internals::getInstanceField<bool, 0x92>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mReceivedChangeCipherSpec(bool value)  {
::cordl_internals::setInstanceField<bool, 0x93>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mReceivedChangeCipherSpec() const {
return ::cordl_internals::getInstanceField<bool, 0x93>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mSecureRenegotiation(bool value)  {
::cordl_internals::setInstanceField<bool, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mSecureRenegotiation() const {
return ::cordl_internals::getInstanceField<bool, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mAllowCertificateStatus(bool value)  {
::cordl_internals::setInstanceField<bool, 0x95>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mAllowCertificateStatus() const {
return ::cordl_internals::getInstanceField<bool, 0x95>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mExpectSessionTicket(bool value)  {
::cordl_internals::setInstanceField<bool, 0x96>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mExpectSessionTicket() const {
return ::cordl_internals::getInstanceField<bool, 0x96>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mBlocking(bool value)  {
::cordl_internals::setInstanceField<bool, 0x97>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mBlocking() const {
return ::cordl_internals::getInstanceField<bool, 0x97>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mInputBuffers(Org::BouncyCastle::Crypto::Tls::ByteQueueStream value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueueStream, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::ByteQueueStream>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::ByteQueueStream Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mInputBuffers() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueueStream, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsProtocol::__set_mOutputBuffer(Org::BouncyCastle::Crypto::Tls::ByteQueueStream value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueueStream, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::ByteQueueStream>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::ByteQueueStream Org::BouncyCastle::Crypto::Tls::TlsProtocol::__get_mOutputBuffer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueueStream, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "stream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::TlsProtocol::TlsProtocol(System::IO::Stream stream, Org::BouncyCastle::Security::SecureRandom secureRandom)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TlsProtocol>(stream, secureRandom))) {}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor(System::IO::Stream stream, Org::BouncyCastle::Security::SecureRandom secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, stream, secureRandom);
}
// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "output", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::TlsProtocol::TlsProtocol(System::IO::Stream input, System::IO::Stream output, Org::BouncyCastle::Security::SecureRandom secureRandom)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TlsProtocol>(input, output, secureRandom))) {}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor(System::IO::Stream input, System::IO::Stream output, Org::BouncyCastle::Security::SecureRandom secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, output, secureRandom);
}
// Ctor Parameters [CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::TlsProtocol::TlsProtocol(Org::BouncyCastle::Security::SecureRandom secureRandom)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TlsProtocol>(secureRandom))) {}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::_ctor(Org::BouncyCastle::Security::SecureRandom secureRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secureRandom);
}
 Org::BouncyCastle::Crypto::Tls::TlsContext Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Context()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsContext, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::AbstractTlsContext Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_ContextAdmin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "get_ContextAdmin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::AbstractTlsContext, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::TlsPeer Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Peer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "get_Peer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::TlsPeer, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertMessage(uint8_t alertLevel, uint8_t alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "HandleAlertMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alertLevel, alertDescription);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleAlertWarningMessage(uint8_t alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "HandleAlertWarningMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alertDescription);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleChangeCipherSpecMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "HandleChangeCipherSpecMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleClose(bool user_canceled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "HandleClose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, user_canceled);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleException(uint8_t alertDescription, ::StringW message, System::Exception cause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "HandleException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alertDescription, message, cause);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleFailure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "HandleFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::HandleHandshakeMessage(uint8_t type, System::IO::MemoryStream buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "HandleHandshakeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, buf);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplyMaxFragmentLengthExtension()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ApplyMaxFragmentLengthExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CheckReceivedChangeCipherSpec(bool expected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "CheckReceivedChangeCipherSpec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, expected);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CleanupHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "CleanupHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::BlockForHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "BlockForHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CompleteHandshake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "CompleteHandshake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessRecord(uint8_t protocol, ::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocol, buf, off, len);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessHandshakeQueue(Org::BouncyCastle::Crypto::Tls::ByteQueue queue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessHandshakeQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::ByteQueue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, queue);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessApplicationDataQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessApplicationDataQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessAlertQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessAlertQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessChangeCipherSpec(::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessChangeCipherSpec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf, off, len);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ApplicationDataAvailable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ApplicationDataAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadApplicationData(::ArrayW<uint8_t> buf, int32_t offset, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ReadApplicationData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buf, offset, len);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeCheckRecordHeader(::ArrayW<uint8_t> recordHeader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "SafeCheckRecordHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, recordHeader);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeReadRecord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "SafeReadRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SafeWriteRecord(uint8_t type, ::ArrayW<uint8_t> buf, int32_t offset, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "SafeWriteRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, buf, offset, len);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteData(::ArrayW<uint8_t> buf, int32_t offset, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "WriteData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf, offset, len);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SetAppDataSplitMode(int32_t appDataSplitMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "SetAppDataSplitMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, appDataSplitMode);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteHandshakeMessage(::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "WriteHandshakeMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf, off, len);
}
 System::IO::Stream Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_Stream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "get_Stream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::CloseInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "CloseInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput(::ArrayW<uint8_t> input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "OfferInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferInput(::ArrayW<uint8_t> input, int32_t inputOff, int32_t inputLen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "OfferInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, inputOff, inputLen);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableInputBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "GetAvailableInputBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadInput(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ReadInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, length);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::OfferOutput(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "OfferOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, length);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetAvailableOutputBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "GetAvailableOutputBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadOutput(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ReadOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, length);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::InvalidateSession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "InvalidateSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessFinishedMessage(System::IO::MemoryStream buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessFinishedMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertFatal(uint8_t alertDescription, ::StringW message, System::Exception cause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "RaiseAlertFatal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alertDescription, message, cause);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::RaiseAlertWarning(uint8_t alertDescription, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "RaiseAlertWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alertDescription, message);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendCertificateMessage(Org::BouncyCastle::Crypto::Tls::Certificate certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "SendCertificateMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificate);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendChangeCipherSpecMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "SendChangeCipherSpecMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendFinishedMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "SendFinishedMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::SendSupplementalDataMessage(System::Collections::IList supplementalData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "SendSupplementalDataMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, supplementalData);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateVerifyData(bool isServer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "CreateVerifyData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, isServer);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::Flush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "Flush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Crypto::Tls::TlsProtocol::get_IsClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "get_IsClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int16_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::ProcessMaxFragmentLengthExtension(System::Collections::IDictionary clientExtensions, System::Collections::IDictionary serverExtensions, uint8_t alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ProcessMaxFragmentLengthExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(const_cast<void*>(instance), ___internal_method, clientExtensions, serverExtensions, alertDescription);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::RefuseRenegotiation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "RefuseRenegotiation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::AssertEmpty(System::IO::MemoryStream buf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "AssertEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buf);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRandomBlock(bool useGmtUnixTime, Org::BouncyCastle::Crypto::Prng::IRandomGenerator randomGenerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "CreateRandomBlock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Prng::IRandomGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, useGmtUnixTime, randomGenerator);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::CreateRenegotiationInfo(::ArrayW<uint8_t> renegotiated_connection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "CreateRenegotiationInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, renegotiated_connection);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::EstablishMasterSecret(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::TlsKeyExchange keyExchange)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "EstablishMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsKeyExchange>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, context, keyExchange);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetCurrentPrfHash(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash handshakeHash, ::ArrayW<uint8_t> sslSender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "GetCurrentPrfHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, context, handshakeHash, sslSender);
}
 System::Collections::IDictionary Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadExtensions(System::IO::MemoryStream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ReadExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IDictionary, false>(nullptr, ___internal_method, input);
}
 System::Collections::IList Org::BouncyCastle::Crypto::Tls::TlsProtocol::ReadSupplementalDataMessage(System::IO::MemoryStream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "ReadSupplementalDataMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::MemoryStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IList, false>(nullptr, ___internal_method, input);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteExtensions(System::IO::Stream output, System::Collections::IDictionary extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "WriteExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output, extensions);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSelectedExtensions(System::IO::Stream output, System::Collections::IDictionary extensions, bool selectEmpty)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "WriteSelectedExtensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output, extensions, selectEmpty);
}
 void Org::BouncyCastle::Crypto::Tls::TlsProtocol::WriteSupplementalData(System::IO::Stream output, System::Collections::IList supplementalData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "WriteSupplementalData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output, supplementalData);
}
 int32_t Org::BouncyCastle::Crypto::Tls::TlsProtocol::GetPrfAlgorithm(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t ciphersuite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsProtocol>::get(),
                            "GetPrfAlgorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, context, ciphersuite);
}
