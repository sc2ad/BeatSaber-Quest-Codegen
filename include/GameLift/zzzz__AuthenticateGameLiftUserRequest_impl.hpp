#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_impl.hpp"
#include "GameLift/zzzz__AuthenticateGameLiftUserRequest_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
namespace {
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserRequest.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GameLift::AuthenticateGameLiftUserRequest> (*)()>(&GameLift::AuthenticateGameLiftUserRequest::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdd7e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserRequest.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GameLift::AuthenticateGameLiftUserRequest::*)()>(&GameLift::AuthenticateGameLiftUserRequest::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserRequest.set_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)(::StringW)>(&GameLift::AuthenticateGameLiftUserRequest::set_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "set_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserRequest.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GameLift::AuthenticateGameLiftUserRequest::*)()>(&GameLift::AuthenticateGameLiftUserRequest::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserRequest.set_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)(::StringW)>(&GameLift::AuthenticateGameLiftUserRequest::set_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "set_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserRequest.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GameLift::AuthenticateGameLiftUserRequest (GameLift::AuthenticateGameLiftUserRequest::*)(::StringW, ::StringW, ::StringW)>(&GameLift::AuthenticateGameLiftUserRequest::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdd7e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserRequest.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)(LiteNetLib::Utils::NetDataWriter)>(&GameLift::AuthenticateGameLiftUserRequest::Serialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xdd7e74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::AuthenticateGameLiftUserRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserRequest.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)(LiteNetLib::Utils::NetDataReader)>(&GameLift::AuthenticateGameLiftUserRequest::Deserialize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xdd7ecc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::AuthenticateGameLiftUserRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserRequest.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)()>(&GameLift::AuthenticateGameLiftUserRequest::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xdd7f28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::AuthenticateGameLiftUserRequest),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserRequest._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserRequest::*)()>(&GameLift::AuthenticateGameLiftUserRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GameLift::IGameLiftClientToServerMessage
constexpr  GameLift::AuthenticateGameLiftUserRequest::operator GameLift::IGameLiftClientToServerMessage() const noexcept {
return GameLift::IGameLiftClientToServerMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GameLift::IGameLiftMessage
constexpr  GameLift::AuthenticateGameLiftUserRequest::operator GameLift::IGameLiftMessage() const noexcept {
return GameLift::IGameLiftMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  GameLift::AuthenticateGameLiftUserRequest::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GameLift::AuthenticateGameLiftUserRequest::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GameLift::AuthenticateGameLiftUserRequest::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedAuthenticateRequest
constexpr  GameLift::AuthenticateGameLiftUserRequest::operator BGNet::Core::Messages::IUnconnectedAuthenticateRequest() const noexcept {
return BGNet::Core::Messages::IUnconnectedAuthenticateRequest(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableResponse
constexpr  GameLift::AuthenticateGameLiftUserRequest::operator BGNet::Core::Messages::IUnconnectedReliableResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableResponse(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr  GameLift::AuthenticateGameLiftUserRequest::operator BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableRequest(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr  GameLift::AuthenticateGameLiftUserRequest::operator BGNet::Core::Messages::IUnconnectedResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedResponse(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GameLift::AuthenticateGameLiftUserRequest::__set__userId_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GameLift::AuthenticateGameLiftUserRequest::__get__userId_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GameLift::AuthenticateGameLiftUserRequest::__set__userName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GameLift::AuthenticateGameLiftUserRequest::__get__userName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GameLift::AuthenticateGameLiftUserRequest::__set_playerSessionId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GameLift::AuthenticateGameLiftUserRequest::__get_playerSessionId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GameLift::AuthenticateGameLiftUserRequest> GameLift::AuthenticateGameLiftUserRequest::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GameLift::AuthenticateGameLiftUserRequest>, false>(nullptr, ___internal_method);
}
 ::StringW GameLift::AuthenticateGameLiftUserRequest::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GameLift::AuthenticateGameLiftUserRequest::set_userId(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "set_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW GameLift::AuthenticateGameLiftUserRequest::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void GameLift::AuthenticateGameLiftUserRequest::set_userName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "set_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GameLift::AuthenticateGameLiftUserRequest GameLift::AuthenticateGameLiftUserRequest::Init(::StringW userId, ::StringW userName, ::StringW playerSessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GameLift::AuthenticateGameLiftUserRequest, false>(const_cast<void*>(instance), ___internal_method, userId, userName, playerSessionId);
}
 void GameLift::AuthenticateGameLiftUserRequest::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GameLift::AuthenticateGameLiftUserRequest::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GameLift::AuthenticateGameLiftUserRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GameLift::AuthenticateGameLiftUserRequest::AuthenticateGameLiftUserRequest()  : BGNet::Core::Messages::BaseReliableResponse(THROW_UNLESS(::il2cpp_utils::New<AuthenticateGameLiftUserRequest>())) {}
 void GameLift::AuthenticateGameLiftUserRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserRequest>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
