#pragma once
#include "LiteNetLib/zzzz__BaseChannel_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "LiteNetLib/zzzz__ReliableChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
//  Writing Method size for method: ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::*)()>(&::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x20943e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::*)(::LiteNetLib::NetPacket)>(&::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2093e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket.TrySend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::*)(int64_t, ::LiteNetLib::NetPeer)>(&::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::TrySend)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2093e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>::get(),
                            "TrySend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::*)(::LiteNetLib::NetPeer)>(&::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::Clear)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x20939bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_packet", ty: "::LiteNetLib::NetPacket", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_timeStamp", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isSent", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::____LiteNetLib__ReliableChannel__PendingPacket(::LiteNetLib::NetPacket _packet, int64_t _timeStamp, bool _isSent) noexcept : ::bs_hook::ValueTypeWrapper() {this->_packet = _packet;
this->_timeStamp = _timeStamp;
this->_isSent = _isSent;
}
constexpr void ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::__set__packet(::LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetPacket, 0x0>(this->__instance, std::forward<::LiteNetLib::NetPacket>(value));
}
constexpr ::LiteNetLib::NetPacket ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::__get__packet() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacket, 0x0>(this->__instance);
}
constexpr void ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::__set__timeStamp(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::__get__timeStamp() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->__instance);
}
constexpr void ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::__set__isSent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::__get__isSent() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
 ::StringW ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::Init(::LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, packet);
}
 void ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::TrySend(int64_t currentTime, ::LiteNetLib::NetPeer peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>::get(),
                            "TrySend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, currentTime, peer);
}
 bool ::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket::Clear(::LiteNetLib::NetPeer peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, peer);
}
//  Writing Method size for method: ::LiteNetLib::ReliableChannel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPeer, bool, uint8_t)>(&::LiteNetLib::ReliableChannel::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x208ff40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.ProcessAck
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPacket)>(&::LiteNetLib::ReliableChannel::ProcessAck)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x209366c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel>::get(),
                            "ProcessAck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.SendNextPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ReliableChannel::*)()>(&::LiteNetLib::ReliableChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x20939f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LiteNetLib::ReliableChannel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ReliableChannel.ProcessPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::ReliableChannel::*)(::LiteNetLib::NetPacket)>(&::LiteNetLib::ReliableChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x2093ee8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LiteNetLib::ReliableChannel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::LiteNetLib::ReliableChannel::__set__outgoingAcks(::LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<::LiteNetLib::NetPacket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::NetPacket>(value));
}
constexpr ::LiteNetLib::NetPacket ::LiteNetLib::ReliableChannel::__get__outgoingAcks() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::NetPacket, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__pendingPackets(::ArrayW<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket> value)  {
::cordl_internals::setInstanceField<::ArrayW<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>>(value));
}
constexpr ::ArrayW<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket> ::LiteNetLib::ReliableChannel::__get__pendingPackets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::LiteNetLib::____LiteNetLib__ReliableChannel__PendingPacket>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__receivedPackets(::ArrayW<::LiteNetLib::NetPacket> value)  {
::cordl_internals::setInstanceField<::ArrayW<::LiteNetLib::NetPacket>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::LiteNetLib::NetPacket>>(value));
}
constexpr ::ArrayW<::LiteNetLib::NetPacket> ::LiteNetLib::ReliableChannel::__get__receivedPackets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::LiteNetLib::NetPacket>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__earlyReceived(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> ::LiteNetLib::ReliableChannel::__get__earlyReceived() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__localSeqence(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::ReliableChannel::__get__localSeqence() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__remoteSequence(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::ReliableChannel::__get__remoteSequence() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__localWindowStart(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::ReliableChannel::__get__localWindowStart() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__remoteWindowStart(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::ReliableChannel::__get__remoteWindowStart() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__mustSendAcks(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::LiteNetLib::ReliableChannel::__get__mustSendAcks() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__deliveryMethod(::LiteNetLib::DeliveryMethod value)  {
::cordl_internals::setInstanceField<::LiteNetLib::DeliveryMethod, 0x59>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::LiteNetLib::DeliveryMethod>(value));
}
constexpr ::LiteNetLib::DeliveryMethod ::LiteNetLib::ReliableChannel::__get__deliveryMethod() const {
return ::cordl_internals::getInstanceField<::LiteNetLib::DeliveryMethod, 0x59>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__ordered(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::LiteNetLib::ReliableChannel::__get__ordered() const {
return ::cordl_internals::getInstanceField<bool, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__windowSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::ReliableChannel::__get__windowSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::LiteNetLib::ReliableChannel::__set__id(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::LiteNetLib::ReliableChannel::__get__id() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "peer", ty: "::LiteNetLib::NetPeer", modifiers: "", def_value: None }, CppParam { name: "ordered", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "uint8_t", modifiers: "", def_value: None }]
 ::LiteNetLib::ReliableChannel::ReliableChannel(::LiteNetLib::NetPeer peer, bool ordered, uint8_t id)  : ::LiteNetLib::BaseChannel(THROW_UNLESS(::il2cpp_utils::New<ReliableChannel>(peer, ordered, id))) {}
 void ::LiteNetLib::ReliableChannel::_ctor(::LiteNetLib::NetPeer peer, bool ordered, uint8_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, ordered, id);
}
 void ::LiteNetLib::ReliableChannel::ProcessAck(::LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel>::get(),
                            "ProcessAck",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void ::LiteNetLib::ReliableChannel::SendNextPackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel>::get(),
                            "SendNextPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::LiteNetLib::ReliableChannel::ProcessPacket(::LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ReliableChannel>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet);
}
} // end anonymous namespace
