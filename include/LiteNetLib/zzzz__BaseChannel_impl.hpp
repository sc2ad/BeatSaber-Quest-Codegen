#pragma once
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
//  Writing Method size for method: LiteNetLib::BaseChannel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::BaseChannel::*)(LiteNetLib::NetPeer)>(&LiteNetLib::BaseChannel::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x208485c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::BaseChannel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::BaseChannel.get_PacketsInQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (LiteNetLib::BaseChannel::*)()>(&LiteNetLib::BaseChannel::get_PacketsInQueue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x20848f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::BaseChannel>::get(),
                            "get_PacketsInQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::BaseChannel.AddToQueue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::BaseChannel::*)(LiteNetLib::NetPacket)>(&LiteNetLib::BaseChannel::AddToQueue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2084938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::BaseChannel>::get(),
                            "AddToQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::BaseChannel.SendNextPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::BaseChannel::*)()>(&LiteNetLib::BaseChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::BaseChannel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::BaseChannel>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::BaseChannel.ProcessPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::BaseChannel::*)(LiteNetLib::NetPacket)>(&LiteNetLib::BaseChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::BaseChannel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::BaseChannel>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::BaseChannel::__set_Next(LiteNetLib::BaseChannel value)  {
::cordl_internals::setInstanceField<LiteNetLib::BaseChannel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::BaseChannel>(value));
}
constexpr LiteNetLib::BaseChannel LiteNetLib::BaseChannel::__get_Next() const {
return ::cordl_internals::getInstanceField<LiteNetLib::BaseChannel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::BaseChannel::__set_Peer(LiteNetLib::NetPeer value)  {
::cordl_internals::setInstanceField<LiteNetLib::NetPeer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::NetPeer>(value));
}
constexpr LiteNetLib::NetPeer LiteNetLib::BaseChannel::__get_Peer() const {
return ::cordl_internals::getInstanceField<LiteNetLib::NetPeer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::BaseChannel::__set_OutgoingQueue(System::Collections::Generic::Queue_1<LiteNetLib::NetPacket> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Queue_1<LiteNetLib::NetPacket>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Queue_1<LiteNetLib::NetPacket>>(value));
}
constexpr System::Collections::Generic::Queue_1<LiteNetLib::NetPacket> LiteNetLib::BaseChannel::__get_OutgoingQueue() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Queue_1<LiteNetLib::NetPacket>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "peer", ty: "LiteNetLib::NetPeer", modifiers: "", def_value: None }]
 LiteNetLib::BaseChannel::BaseChannel(LiteNetLib::NetPeer peer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BaseChannel>(peer))) {}
 void LiteNetLib::BaseChannel::_ctor(LiteNetLib::NetPeer peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::BaseChannel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer);
}
 int32_t LiteNetLib::BaseChannel::get_PacketsInQueue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::BaseChannel>::get(),
                            "get_PacketsInQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::BaseChannel::AddToQueue(LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::BaseChannel>::get(),
                            "AddToQueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void LiteNetLib::BaseChannel::SendNextPackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::BaseChannel>::get(),
                            "SendNextPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool LiteNetLib::BaseChannel::ProcessPacket(LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::BaseChannel>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet);
}
