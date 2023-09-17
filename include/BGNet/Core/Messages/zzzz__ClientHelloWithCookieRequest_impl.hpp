#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableRequest_impl.hpp"
#include "BGNet/Core/Messages/zzzz__ClientHelloWithCookieRequest_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::ClientHelloWithCookieRequest.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ClientHelloWithCookieRequest> (*)()>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdddae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ClientHelloWithCookieRequest.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::ClientHelloWithCookieRequest (BGNet::Core::Messages::ClientHelloWithCookieRequest::*)(uint32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::Init)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdddb24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ClientHelloWithCookieRequest.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientHelloWithCookieRequest::*)(LiteNetLib::Utils::NetDataWriter)>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::Serialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xde2cfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::ClientHelloWithCookieRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ClientHelloWithCookieRequest.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientHelloWithCookieRequest::*)(LiteNetLib::Utils::NetDataReader)>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::Deserialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xde2d64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::ClientHelloWithCookieRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ClientHelloWithCookieRequest.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientHelloWithCookieRequest::*)()>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::Release)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xde2dd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::ClientHelloWithCookieRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ClientHelloWithCookieRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientHelloWithCookieRequest::*)()>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xde2e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeClientToServerMessage
constexpr  BGNet::Core::Messages::ClientHelloWithCookieRequest::operator BGNet::Core::Messages::IHandshakeClientToServerMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeClientToServerMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeMessage
constexpr  BGNet::Core::Messages::ClientHelloWithCookieRequest::operator BGNet::Core::Messages::IHandshakeMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::ClientHelloWithCookieRequest::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::ClientHelloWithCookieRequest::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::ClientHelloWithCookieRequest::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::ClientHelloWithCookieRequest::__set_certificateResponseId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::ClientHelloWithCookieRequest::__get_certificateResponseId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::ClientHelloWithCookieRequest::__set_random(GlobalNamespace::ByteArrayNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ByteArrayNetSerializable>(value));
}
constexpr GlobalNamespace::ByteArrayNetSerializable BGNet::Core::Messages::ClientHelloWithCookieRequest::__get_random() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::ClientHelloWithCookieRequest::__set_cookie(GlobalNamespace::ByteArrayNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ByteArrayNetSerializable>(value));
}
constexpr GlobalNamespace::ByteArrayNetSerializable BGNet::Core::Messages::ClientHelloWithCookieRequest::__get_cookie() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ClientHelloWithCookieRequest> BGNet::Core::Messages::ClientHelloWithCookieRequest::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ClientHelloWithCookieRequest>, false>(nullptr, ___internal_method);
}
 BGNet::Core::Messages::ClientHelloWithCookieRequest BGNet::Core::Messages::ClientHelloWithCookieRequest::Init(uint32_t certificateResponseId, ::ArrayW<uint8_t> random, ::ArrayW<uint8_t> cookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::ClientHelloWithCookieRequest, false>(const_cast<void*>(instance), ___internal_method, certificateResponseId, random, cookie);
}
 void BGNet::Core::Messages::ClientHelloWithCookieRequest::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void BGNet::Core::Messages::ClientHelloWithCookieRequest::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void BGNet::Core::Messages::ClientHelloWithCookieRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 BGNet::Core::Messages::ClientHelloWithCookieRequest::ClientHelloWithCookieRequest()  : BGNet::Core::Messages::BaseReliableRequest(THROW_UNLESS(::il2cpp_utils::New<ClientHelloWithCookieRequest>())) {}
 void BGNet::Core::Messages::ClientHelloWithCookieRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
