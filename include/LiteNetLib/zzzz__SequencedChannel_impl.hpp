#pragma once
#include "LiteNetLib/zzzz__BaseChannel_impl.hpp"
#include "LiteNetLib/zzzz__SequencedChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
//  Writing Method size for method: LiteNetLib::SequencedChannel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::SequencedChannel::*)(LiteNetLib::NetPeer, bool, uint8_t)>(&LiteNetLib::SequencedChannel::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x20900c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SequencedChannel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::SequencedChannel.SendNextPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::SequencedChannel::*)()>(&LiteNetLib::SequencedChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x209444c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::SequencedChannel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SequencedChannel>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::SequencedChannel.ProcessPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::SequencedChannel::*)(LiteNetLib::NetPacket)>(&LiteNetLib::SequencedChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2094754;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::SequencedChannel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SequencedChannel>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::SequencedChannel::__set__localSequence(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::SequencedChannel::__get__localSequence() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::SequencedChannel::__set__remoteSequence(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint16_t>(value));
}
constexpr uint16_t LiteNetLib::SequencedChannel::__get__remoteSequence() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::SequencedChannel::__set__reliable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool LiteNetLib::SequencedChannel::__get__reliable() const {
return ::cordl_internals::getInstanceField<bool, 0x2e>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::SequencedChannel::__set__lastPacket(LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacket, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPacket>(value));
}
constexpr LiteNetLib::NetPacket LiteNetLib::SequencedChannel::__get__lastPacket() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacket, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::SequencedChannel::__set__ackPacket(LiteNetLib::NetPacket value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPacket, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPacket>(value));
}
constexpr LiteNetLib::NetPacket LiteNetLib::SequencedChannel::__get__ackPacket() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPacket, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::SequencedChannel::__set__mustSendAck(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool LiteNetLib::SequencedChannel::__get__mustSendAck() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::SequencedChannel::__set__id(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x41>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t LiteNetLib::SequencedChannel::__get__id() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x41>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::SequencedChannel::__set__lastPacketSendTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t LiteNetLib::SequencedChannel::__get__lastPacketSendTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 LiteNetLib::SequencedChannel LiteNetLib::SequencedChannel::New_ctor(LiteNetLib::NetPeer peer, bool reliable, uint8_t id)  {
LiteNetLib::SequencedChannel o{THROW_UNLESS(::il2cpp_utils::New<LiteNetLib::SequencedChannel>(peer, reliable, id))};
return o;
}
 void LiteNetLib::SequencedChannel::_ctor(LiteNetLib::NetPeer peer, bool reliable, uint8_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SequencedChannel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, reliable, id);
}
 void LiteNetLib::SequencedChannel::SendNextPackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SequencedChannel>::get(),
                            "SendNextPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool LiteNetLib::SequencedChannel::ProcessPacket(LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SequencedChannel>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet);
}
