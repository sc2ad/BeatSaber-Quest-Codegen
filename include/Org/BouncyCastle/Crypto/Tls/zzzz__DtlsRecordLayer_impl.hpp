#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Timeout_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsEpoch_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ProtocolVersion_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ByteQueue_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DatagramTransport_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCloseable_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsHandshakeRetransmit_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.SendDatagram
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Crypto::Tls::DatagramTransport, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SendDatagram)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xedee60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "SendDatagram",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::DatagramTransport>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(Org::BouncyCastle::Crypto::Tls::DatagramTransport, Org::BouncyCastle::Crypto::Tls::TlsContext, Org::BouncyCastle::Crypto::Tls::TlsPeer, uint8_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xeda454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::DatagramTransport>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.get_IsClosed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_IsClosed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xedef20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "get_IsClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.SetPlaintextLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(int32_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SetPlaintextLimit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xedef38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.get_ReadEpoch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_ReadEpoch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xedef5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.get_ReadVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::ProtocolVersion (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_ReadVersion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xedef78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.set_ReadVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(Org::BouncyCastle::Crypto::Tls::ProtocolVersion)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::set_ReadVersion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xedef90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.SetWriteVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(Org::BouncyCastle::Crypto::Tls::ProtocolVersion)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SetWriteVersion)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xedefb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.InitPendingEpoch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(Org::BouncyCastle::Crypto::Tls::TlsCipher)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::InitPendingEpoch)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xedefd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.HandshakeSuccessful
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::HandshakeSuccessful)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xedf098;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.ResetWriteEpoch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ResetWriteEpoch)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xedf174;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.GetReceiveLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetReceiveLimit)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xedf188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.GetSendLimit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetSendLimit)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xedf2f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Receive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Receive)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xedf46c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Send
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Send)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xedfd60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Close)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xee0158;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Failed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Failed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xee0338;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Fail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Fail)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xee0378;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.Warn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(uint8_t, ::StringW)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Warn)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xee0570;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.CloseTransport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)()>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::CloseTransport)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xee01dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "CloseTransport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.RaiseAlert
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(uint8_t, uint8_t, ::StringW, System::Exception)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::RaiseAlert)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xee0444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "RaiseAlert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.ReceiveDatagram
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ReceiveDatagram)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xee0584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "ReceiveDatagram",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.ProcessRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ProcessRecord)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0xedf800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "ProcessRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.ReceiveRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ReceiveRecord)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xedf630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "ReceiveRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.SendRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::*)(uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SendRecord)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xedfed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "SendRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer.GetMacSequenceNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t, int64_t)>(&Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetMacSequenceNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xee075c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "GetMacSequenceNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::DatagramTransport
constexpr  Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::operator Org::BouncyCastle::Crypto::Tls::DatagramTransport() const noexcept {
return Org::BouncyCastle::Crypto::Tls::DatagramTransport(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCloseable
constexpr  Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::operator Org::BouncyCastle::Crypto::Tls::TlsCloseable() const noexcept {
return Org::BouncyCastle::Crypto::Tls::TlsCloseable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mTransport(Org::BouncyCastle::Crypto::Tls::DatagramTransport value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::DatagramTransport, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::DatagramTransport>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::DatagramTransport Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mTransport() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::DatagramTransport, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mContext(Org::BouncyCastle::Crypto::Tls::TlsContext value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsContext>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsContext Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mContext() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mPeer(Org::BouncyCastle::Crypto::Tls::TlsPeer value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::TlsPeer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::TlsPeer>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::TlsPeer Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mPeer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::TlsPeer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mRecordQueue(Org::BouncyCastle::Crypto::Tls::ByteQueue value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueue, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::ByteQueue>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::ByteQueue Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRecordQueue() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::ByteQueue, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mClosed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mClosed() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mFailed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mFailed() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mReadVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::ProtocolVersion>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mReadVersion() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mWriteVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::ProtocolVersion>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::ProtocolVersion Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mWriteVersion() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mInHandshake(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mInHandshake() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mPlaintextLimit(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mPlaintextLimit() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mCurrentEpoch(Org::BouncyCastle::Crypto::Tls::DtlsEpoch value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::DtlsEpoch>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::DtlsEpoch Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mCurrentEpoch() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mPendingEpoch(Org::BouncyCastle::Crypto::Tls::DtlsEpoch value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::DtlsEpoch>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::DtlsEpoch Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mPendingEpoch() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mReadEpoch(Org::BouncyCastle::Crypto::Tls::DtlsEpoch value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::DtlsEpoch>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::DtlsEpoch Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mReadEpoch() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mWriteEpoch(Org::BouncyCastle::Crypto::Tls::DtlsEpoch value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::DtlsEpoch>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::DtlsEpoch Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mWriteEpoch() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mRetransmit(Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRetransmit() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mRetransmitEpoch(Org::BouncyCastle::Crypto::Tls::DtlsEpoch value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::DtlsEpoch>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::DtlsEpoch Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRetransmitEpoch() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::DtlsEpoch, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__set_mRetransmitTimeout(Org::BouncyCastle::Crypto::Tls::Timeout value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::Timeout, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::Timeout>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::Timeout Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::__get_mRetransmitTimeout() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::Timeout, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SendDatagram(Org::BouncyCastle::Crypto::Tls::DatagramTransport sender, ::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "SendDatagram",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::DatagramTransport>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, buf, off, len);
}
// Ctor Parameters [CppParam { name: "transport", ty: "Org::BouncyCastle::Crypto::Tls::DatagramTransport", modifiers: "", def_value: None }, CppParam { name: "context", ty: "Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }, CppParam { name: "peer", ty: "Org::BouncyCastle::Crypto::Tls::TlsPeer", modifiers: "", def_value: None }, CppParam { name: "contentType", ty: "uint8_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::DtlsRecordLayer(Org::BouncyCastle::Crypto::Tls::DatagramTransport transport, Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::TlsPeer peer, uint8_t contentType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DtlsRecordLayer>(transport, context, peer, contentType))) {}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::_ctor(Org::BouncyCastle::Crypto::Tls::DatagramTransport transport, Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Tls::TlsPeer peer, uint8_t contentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::DatagramTransport>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, transport, context, peer, contentType);
}
 bool Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_IsClosed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "get_IsClosed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SetPlaintextLimit(int32_t plaintextLimit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "SetPlaintextLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, plaintextLimit);
}
 int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_ReadEpoch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "get_ReadEpoch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::Tls::ProtocolVersion Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::get_ReadVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "get_ReadVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::ProtocolVersion, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::set_ReadVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "set_ReadVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::ProtocolVersion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SetWriteVersion(Org::BouncyCastle::Crypto::Tls::ProtocolVersion writeVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "SetWriteVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::ProtocolVersion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writeVersion);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::InitPendingEpoch(Org::BouncyCastle::Crypto::Tls::TlsCipher pendingCipher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "InitPendingEpoch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsCipher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pendingCipher);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::HandshakeSuccessful(Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit retransmit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "HandshakeSuccessful",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, retransmit);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ResetWriteEpoch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "ResetWriteEpoch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetReceiveLimit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "GetReceiveLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetSendLimit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "GetSendLimit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Receive(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t waitMillis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "Receive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buf, off, len, waitMillis);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Send(::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "Send",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf, off, len);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Failed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "Failed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Fail(uint8_t alertDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "Fail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alertDescription);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::Warn(uint8_t alertDescription, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "Warn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alertDescription, message);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::CloseTransport()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "CloseTransport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::RaiseAlert(uint8_t alertLevel, uint8_t alertDescription, ::StringW message, System::Exception cause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "RaiseAlert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alertLevel, alertDescription, message, cause);
}
 int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ReceiveDatagram(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t waitMillis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "ReceiveDatagram",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buf, off, len, waitMillis);
}
 int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ProcessRecord(int32_t received, ::ArrayW<uint8_t> record, ::ArrayW<uint8_t> buf, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "ProcessRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, received, record, buf, off);
}
 int32_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::ReceiveRecord(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t waitMillis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "ReceiveRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buf, off, len, waitMillis);
}
 void Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::SendRecord(uint8_t contentType, ::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "SendRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contentType, buf, off, len);
}
 int64_t Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer::GetMacSequenceNumber(int32_t epoch, int64_t sequence_number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer>::get(),
                            "GetMacSequenceNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, epoch, sequence_number);
}
