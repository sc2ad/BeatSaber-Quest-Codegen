#pragma once
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
//  Writing Method size for method: GlobalNamespace::INetworkPacketSubSerializer_1.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPacketSubSerializer_1::*)(LiteNetLib::Utils::NetDataReader, int32_t, TData)>(&GlobalNamespace::INetworkPacketSubSerializer_1::Deserialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkPacketSubSerializer_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkPacketSubSerializer_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::INetworkPacketSubSerializer_1.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPacketSubSerializer_1::*)(LiteNetLib::Utils::NetDataWriter, LiteNetLib::Utils::INetSerializable)>(&GlobalNamespace::INetworkPacketSubSerializer_1::Serialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkPacketSubSerializer_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkPacketSubSerializer_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::INetworkPacketSubSerializer_1.HandlesType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPacketSubSerializer_1::*)(System::Type)>(&GlobalNamespace::INetworkPacketSubSerializer_1::HandlesType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::INetworkPacketSubSerializer_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkPacketSubSerializer_1>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::INetworkPacketSubSerializer_1::Deserialize(LiteNetLib::Utils::NetDataReader reader, int32_t length, TData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkPacketSubSerializer_1>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, length, data);
}
 void GlobalNamespace::INetworkPacketSubSerializer_1::Serialize(LiteNetLib::Utils::NetDataWriter writer, LiteNetLib::Utils::INetSerializable packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkPacketSubSerializer_1>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::INetSerializable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, packet);
}
 bool GlobalNamespace::INetworkPacketSubSerializer_1::HandlesType(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::INetworkPacketSubSerializer_1>::get(),
                            "HandlesType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, type);
}
