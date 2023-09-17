#pragma once
#include "BGNet/Core/Messages/zzzz__BaseAcknowledgeMessage_impl.hpp"
#include "BGNet/Core/Messages/zzzz__HandshakeMessageReceivedAcknowledge_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge> (*)()>(&BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde012c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::*)()>(&BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xde3cd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::*)()>(&BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde3d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeMessage
constexpr  BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::operator BGNet::Core::Messages::IHandshakeMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge> BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge>, false>(nullptr, ___internal_method);
}
 void BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::HandshakeMessageReceivedAcknowledge()  : BGNet::Core::Messages::BaseAcknowledgeMessage(THROW_UNLESS(::il2cpp_utils::New<HandshakeMessageReceivedAcknowledge>())) {}
 void BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
