#pragma once
#include "GlobalNamespace/zzzz__INetworkPacketSerializer_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: GlobalNamespace::INetworkPacketSerializer_1.ProcessAllPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPacketSerializer_1::*)(LiteNetLib::Utils::NetDataReader, TData)>(&GlobalNamespace::INetworkPacketSerializer_1::ProcessAllPackets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkPacketSerializer_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkPacketSerializer_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::INetworkPacketSerializer_1.SerializePacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPacketSerializer_1::*)(LiteNetLib::Utils::NetDataWriter, LiteNetLib::Utils::INetSerializable)>(&GlobalNamespace::INetworkPacketSerializer_1::SerializePacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkPacketSerializer_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkPacketSerializer_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::INetworkPacketSerializer_1::ProcessAllPackets(LiteNetLib::Utils::NetDataReader reader, TData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkPacketSerializer_1>::get(),
                            "ProcessAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, data);
}
 void GlobalNamespace::INetworkPacketSerializer_1::SerializePacket(LiteNetLib::Utils::NetDataWriter writer, LiteNetLib::Utils::INetSerializable packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkPacketSerializer_1>::get(),
                            "SerializePacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, packet);
}
