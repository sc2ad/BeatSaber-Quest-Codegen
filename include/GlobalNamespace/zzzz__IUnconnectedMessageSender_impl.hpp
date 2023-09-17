#pragma once
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "GlobalNamespace/zzzz__PacketEncryptionLayer_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageReceiver_def.hpp"
namespace {
//  Writing Method size for method: GlobalNamespace::IUnconnectedMessageSender.get_unconnectedPacketHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::IUnconnectedMessageSender::*)()>(&GlobalNamespace::IUnconnectedMessageSender::get_unconnectedPacketHeader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IUnconnectedMessageSender),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageSender>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IUnconnectedMessageSender.get_encryptionLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketEncryptionLayer (GlobalNamespace::IUnconnectedMessageSender::*)()>(&GlobalNamespace::IUnconnectedMessageSender::get_encryptionLayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IUnconnectedMessageSender),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageSender>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IUnconnectedMessageSender.SendUnconnectedMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedMessageSender::*)(System::Net::IPEndPoint, LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::IUnconnectedMessageSender::SendUnconnectedMessage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IUnconnectedMessageSender),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageSender>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IUnconnectedMessageSender.RegisterReceiver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedMessageSender::*)(GlobalNamespace::IUnconnectedMessageReceiver)>(&GlobalNamespace::IUnconnectedMessageSender::RegisterReceiver)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IUnconnectedMessageSender),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageSender>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IUnconnectedMessageSender.UnregisterReceiver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IUnconnectedMessageSender::*)(GlobalNamespace::IUnconnectedMessageReceiver)>(&GlobalNamespace::IUnconnectedMessageSender::UnregisterReceiver)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IUnconnectedMessageSender),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageSender>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<uint8_t> GlobalNamespace::IUnconnectedMessageSender::get_unconnectedPacketHeader()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageSender>::get(),
                            "get_unconnectedPacketHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::PacketEncryptionLayer GlobalNamespace::IUnconnectedMessageSender::get_encryptionLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageSender>::get(),
                            "get_encryptionLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketEncryptionLayer, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::IUnconnectedMessageSender::SendUnconnectedMessage(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageSender>::get(),
                            "SendUnconnectedMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, remoteEndPoint, writer);
}
 void GlobalNamespace::IUnconnectedMessageSender::RegisterReceiver(GlobalNamespace::IUnconnectedMessageReceiver receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageSender>::get(),
                            "RegisterReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IUnconnectedMessageReceiver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, receiver);
}
 void GlobalNamespace::IUnconnectedMessageSender::UnregisterReceiver(GlobalNamespace::IUnconnectedMessageReceiver receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IUnconnectedMessageSender>::get(),
                            "UnregisterReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IUnconnectedMessageReceiver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, receiver);
}
} // end anonymous namespace
