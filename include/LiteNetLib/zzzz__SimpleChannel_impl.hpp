#pragma once
#include "LiteNetLib/zzzz__BaseChannel_impl.hpp"
#include "LiteNetLib/zzzz__SimpleChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
//  Writing Method size for method: LiteNetLib::SimpleChannel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::SimpleChannel::*)(LiteNetLib::NetPeer)>(&LiteNetLib::SimpleChannel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2094924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SimpleChannel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::SimpleChannel.SendNextPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::SimpleChannel::*)()>(&LiteNetLib::SimpleChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2094928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::SimpleChannel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SimpleChannel>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::SimpleChannel.ProcessPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LiteNetLib::SimpleChannel::*)(LiteNetLib::NetPacket)>(&LiteNetLib::SimpleChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2094a98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::SimpleChannel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SimpleChannel>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "peer", ty: "LiteNetLib::NetPeer", modifiers: "", def_value: None }]
 LiteNetLib::SimpleChannel::SimpleChannel(LiteNetLib::NetPeer peer)  : LiteNetLib::BaseChannel(THROW_UNLESS(::il2cpp_utils::New<SimpleChannel>(peer))) {}
 void LiteNetLib::SimpleChannel::_ctor(LiteNetLib::NetPeer peer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SimpleChannel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer);
}
 void LiteNetLib::SimpleChannel::SendNextPackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SimpleChannel>::get(),
                            "SendNextPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool LiteNetLib::SimpleChannel::ProcessPacket(LiteNetLib::NetPacket packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::SimpleChannel>::get(),
                            "ProcessPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPacket>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet);
}
