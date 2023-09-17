#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_impl.hpp"
#include "BGNet/Core/Messages/zzzz__ServerHelloRequest_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::ServerHelloRequest.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ServerHelloRequest> (*)()>(&BGNet::Core::Messages::ServerHelloRequest::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde006c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerHelloRequest.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::ServerHelloRequest (BGNet::Core::Messages::ServerHelloRequest::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::ServerHelloRequest::Init)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xde2020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerHelloRequest.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerHelloRequest::*)(LiteNetLib::Utils::NetDataWriter)>(&BGNet::Core::Messages::ServerHelloRequest::Serialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xde305c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::ServerHelloRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerHelloRequest.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerHelloRequest::*)(LiteNetLib::Utils::NetDataReader)>(&BGNet::Core::Messages::ServerHelloRequest::Deserialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xde30b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::ServerHelloRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerHelloRequest.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerHelloRequest::*)()>(&BGNet::Core::Messages::ServerHelloRequest::Release)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xde3114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::ServerHelloRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::ServerHelloRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerHelloRequest::*)()>(&BGNet::Core::Messages::ServerHelloRequest::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xde3198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeServerToClientMessage
constexpr  BGNet::Core::Messages::ServerHelloRequest::operator BGNet::Core::Messages::IHandshakeServerToClientMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeServerToClientMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeMessage
constexpr  BGNet::Core::Messages::ServerHelloRequest::operator BGNet::Core::Messages::IHandshakeMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::ServerHelloRequest::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::ServerHelloRequest::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::ServerHelloRequest::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::ServerHelloRequest::__set_random(GlobalNamespace::ByteArrayNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ByteArrayNetSerializable>(value));
}
constexpr GlobalNamespace::ByteArrayNetSerializable BGNet::Core::Messages::ServerHelloRequest::__get_random() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::ServerHelloRequest::__set_publicKey(GlobalNamespace::ByteArrayNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ByteArrayNetSerializable>(value));
}
constexpr GlobalNamespace::ByteArrayNetSerializable BGNet::Core::Messages::ServerHelloRequest::__get_publicKey() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::ServerHelloRequest::__set_signature(GlobalNamespace::ByteArrayNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ByteArrayNetSerializable>(value));
}
constexpr GlobalNamespace::ByteArrayNetSerializable BGNet::Core::Messages::ServerHelloRequest::__get_signature() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ServerHelloRequest> BGNet::Core::Messages::ServerHelloRequest::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ServerHelloRequest>, false>(nullptr, ___internal_method);
}
 BGNet::Core::Messages::ServerHelloRequest BGNet::Core::Messages::ServerHelloRequest::Init(::ArrayW<uint8_t> random, ::ArrayW<uint8_t> publicKey, ::ArrayW<uint8_t> signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::ServerHelloRequest, false>(const_cast<void*>(instance), ___internal_method, random, publicKey, signature);
}
 void BGNet::Core::Messages::ServerHelloRequest::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void BGNet::Core::Messages::ServerHelloRequest::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void BGNet::Core::Messages::ServerHelloRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 BGNet::Core::Messages::ServerHelloRequest::ServerHelloRequest()  : BGNet::Core::Messages::BaseReliableResponse(THROW_UNLESS(::il2cpp_utils::New<ServerHelloRequest>())) {}
 void BGNet::Core::Messages::ServerHelloRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::ServerHelloRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
