#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_impl.hpp"
#include "BGNet/Core/Messages/zzzz__ChangeCipherSpecRequest_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::ChangeCipherSpecRequest.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ChangeCipherSpecRequest> (*)()>(&BGNet::Core::Messages::ChangeCipherSpecRequest::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde00ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ChangeCipherSpecRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ChangeCipherSpecRequest.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ChangeCipherSpecRequest::*)()>(&BGNet::Core::Messages::ChangeCipherSpecRequest::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xde3c7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::ChangeCipherSpecRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ChangeCipherSpecRequest>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ChangeCipherSpecRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ChangeCipherSpecRequest::*)()>(&BGNet::Core::Messages::ChangeCipherSpecRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde3cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ChangeCipherSpecRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeServerToClientMessage
constexpr  BGNet::Core::Messages::ChangeCipherSpecRequest::operator BGNet::Core::Messages::IHandshakeServerToClientMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeServerToClientMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeMessage
constexpr  BGNet::Core::Messages::ChangeCipherSpecRequest::operator BGNet::Core::Messages::IHandshakeMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::ChangeCipherSpecRequest::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::ChangeCipherSpecRequest::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::ChangeCipherSpecRequest::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ChangeCipherSpecRequest> BGNet::Core::Messages::ChangeCipherSpecRequest::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ChangeCipherSpecRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ChangeCipherSpecRequest>, false>(nullptr, ___internal_method);
}
 void BGNet::Core::Messages::ChangeCipherSpecRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ChangeCipherSpecRequest>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 BGNet::Core::Messages::ChangeCipherSpecRequest::ChangeCipherSpecRequest()  : BGNet::Core::Messages::BaseReliableResponse(THROW_UNLESS(::il2cpp_utils::New<ChangeCipherSpecRequest>())) {}
 void BGNet::Core::Messages::ChangeCipherSpecRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ChangeCipherSpecRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
