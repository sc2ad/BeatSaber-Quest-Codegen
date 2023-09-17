#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_impl.hpp"
#include "BGNet/Core/Messages/zzzz__HelloVerifyRequest_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::HelloVerifyRequest.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HelloVerifyRequest> (*)()>(&BGNet::Core::Messages::HelloVerifyRequest::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xde002c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::HelloVerifyRequest.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::Messages::HelloVerifyRequest (BGNet::Core::Messages::HelloVerifyRequest::*)(::ArrayW<uint8_t>)>(&BGNet::Core::Messages::HelloVerifyRequest::Init)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xde034c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::HelloVerifyRequest.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::HelloVerifyRequest::*)(LiteNetLib::Utils::NetDataWriter)>(&BGNet::Core::Messages::HelloVerifyRequest::Serialize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xde2f08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::HelloVerifyRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::HelloVerifyRequest.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::HelloVerifyRequest::*)(LiteNetLib::Utils::NetDataReader)>(&BGNet::Core::Messages::HelloVerifyRequest::Deserialize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xde2f3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::HelloVerifyRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::HelloVerifyRequest.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::HelloVerifyRequest::*)()>(&BGNet::Core::Messages::HelloVerifyRequest::Release)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xde2f70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::HelloVerifyRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::HelloVerifyRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::HelloVerifyRequest::*)()>(&BGNet::Core::Messages::HelloVerifyRequest::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xde2fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeServerToClientMessage
constexpr  BGNet::Core::Messages::HelloVerifyRequest::operator BGNet::Core::Messages::IHandshakeServerToClientMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeServerToClientMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IHandshakeMessage
constexpr  BGNet::Core::Messages::HelloVerifyRequest::operator BGNet::Core::Messages::IHandshakeMessage() const noexcept {
return BGNet::Core::Messages::IHandshakeMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::HelloVerifyRequest::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::HelloVerifyRequest::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::HelloVerifyRequest::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::HelloVerifyRequest::__set_cookie(GlobalNamespace::ByteArrayNetSerializable value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ByteArrayNetSerializable>(value));
}
constexpr GlobalNamespace::ByteArrayNetSerializable BGNet::Core::Messages::HelloVerifyRequest::__get_cookie() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ByteArrayNetSerializable, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HelloVerifyRequest> BGNet::Core::Messages::HelloVerifyRequest::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<BGNet::Core::Messages::HelloVerifyRequest>, false>(nullptr, ___internal_method);
}
 BGNet::Core::Messages::HelloVerifyRequest BGNet::Core::Messages::HelloVerifyRequest::Init(::ArrayW<uint8_t> cookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::Messages::HelloVerifyRequest, false>(const_cast<void*>(instance), ___internal_method, cookie);
}
 void BGNet::Core::Messages::HelloVerifyRequest::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void BGNet::Core::Messages::HelloVerifyRequest::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void BGNet::Core::Messages::HelloVerifyRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 BGNet::Core::Messages::HelloVerifyRequest::HelloVerifyRequest()  : BGNet::Core::Messages::BaseReliableResponse(THROW_UNLESS(::il2cpp_utils::New<HelloVerifyRequest>())) {}
 void BGNet::Core::Messages::HelloVerifyRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::HelloVerifyRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
