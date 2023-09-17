#pragma once
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GameLift/zzzz__AuthenticateGameLiftUserResponse_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
namespace {
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GameLift::GameLift__AuthenticateGameLiftUserResponse__Result::GameLift__AuthenticateGameLiftUserResponse__Result(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GameLift::GameLift__AuthenticateGameLiftUserResponse__Result::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GameLift::GameLift__AuthenticateGameLiftUserResponse__Result::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GameLift::GameLift__AuthenticateGameLiftUserResponse__Result  GameLift::GameLift__AuthenticateGameLiftUserResponse__Result::Success{0};
constexpr GameLift::GameLift__AuthenticateGameLiftUserResponse__Result  GameLift::GameLift__AuthenticateGameLiftUserResponse__Result::Failed{1};
constexpr GameLift::GameLift__AuthenticateGameLiftUserResponse__Result  GameLift::GameLift__AuthenticateGameLiftUserResponse__Result::UnknownError{2};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserResponse.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GameLift::AuthenticateGameLiftUserResponse> (*)()>(&GameLift::AuthenticateGameLiftUserResponse::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdd7f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserResponse.get_resultCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GameLift::AuthenticateGameLiftUserResponse::*)()>(&GameLift::AuthenticateGameLiftUserResponse::get_resultCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd7fc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::AuthenticateGameLiftUserResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserResponse.get_resultCodeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GameLift::AuthenticateGameLiftUserResponse::*)()>(&GameLift::AuthenticateGameLiftUserResponse::get_resultCodeString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xdd7fcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::AuthenticateGameLiftUserResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserResponse.get_isAuthenticated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GameLift::AuthenticateGameLiftUserResponse::*)()>(&GameLift::AuthenticateGameLiftUserResponse::get_isAuthenticated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdd8034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "get_isAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserResponse.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GameLift::AuthenticateGameLiftUserResponse (GameLift::AuthenticateGameLiftUserResponse::*)(GameLift::GameLift__AuthenticateGameLiftUserResponse__Result)>(&GameLift::AuthenticateGameLiftUserResponse::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd8044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GameLift::GameLift__AuthenticateGameLiftUserResponse__Result>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserResponse.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserResponse::*)(LiteNetLib::Utils::NetDataWriter)>(&GameLift::AuthenticateGameLiftUserResponse::Serialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xdd804c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::AuthenticateGameLiftUserResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserResponse.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserResponse::*)(LiteNetLib::Utils::NetDataReader)>(&GameLift::AuthenticateGameLiftUserResponse::Deserialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdd8084;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::AuthenticateGameLiftUserResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserResponse.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserResponse::*)()>(&GameLift::AuthenticateGameLiftUserResponse::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xdd80c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::AuthenticateGameLiftUserResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::AuthenticateGameLiftUserResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::AuthenticateGameLiftUserResponse::*)()>(&GameLift::AuthenticateGameLiftUserResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd8118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GameLift::IGameLiftServerToClientMessage
constexpr  GameLift::AuthenticateGameLiftUserResponse::operator GameLift::IGameLiftServerToClientMessage() const noexcept {
return GameLift::IGameLiftServerToClientMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GameLift::IGameLiftMessage
constexpr  GameLift::AuthenticateGameLiftUserResponse::operator GameLift::IGameLiftMessage() const noexcept {
return GameLift::IGameLiftMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  GameLift::AuthenticateGameLiftUserResponse::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GameLift::AuthenticateGameLiftUserResponse::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GameLift::AuthenticateGameLiftUserResponse::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedAuthenticateResponse
constexpr  GameLift::AuthenticateGameLiftUserResponse::operator BGNet::Core::Messages::IUnconnectedAuthenticateResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedAuthenticateResponse(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableResponse
constexpr  GameLift::AuthenticateGameLiftUserResponse::operator BGNet::Core::Messages::IUnconnectedReliableResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableResponse(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr  GameLift::AuthenticateGameLiftUserResponse::operator BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableRequest(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr  GameLift::AuthenticateGameLiftUserResponse::operator BGNet::Core::Messages::IUnconnectedResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedResponse(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GameLift::AuthenticateGameLiftUserResponse::__set_result(GameLift::GameLift__AuthenticateGameLiftUserResponse__Result value)  {
::cordl_internals::setInstanceField<GameLift::GameLift__AuthenticateGameLiftUserResponse__Result, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GameLift::GameLift__AuthenticateGameLiftUserResponse__Result>(value));
}
constexpr GameLift::GameLift__AuthenticateGameLiftUserResponse__Result GameLift::AuthenticateGameLiftUserResponse::__get_result() const {
return ::cordl_internals::getInstanceField<GameLift::GameLift__AuthenticateGameLiftUserResponse__Result, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GameLift::AuthenticateGameLiftUserResponse> GameLift::AuthenticateGameLiftUserResponse::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GameLift::AuthenticateGameLiftUserResponse>, false>(nullptr, ___internal_method);
}
 uint8_t GameLift::AuthenticateGameLiftUserResponse::get_resultCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "get_resultCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GameLift::AuthenticateGameLiftUserResponse::get_resultCodeString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "get_resultCodeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GameLift::AuthenticateGameLiftUserResponse::get_isAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "get_isAuthenticated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GameLift::AuthenticateGameLiftUserResponse GameLift::AuthenticateGameLiftUserResponse::Init(GameLift::GameLift__AuthenticateGameLiftUserResponse__Result result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GameLift::GameLift__AuthenticateGameLiftUserResponse__Result>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GameLift::AuthenticateGameLiftUserResponse, false>(const_cast<void*>(instance), ___internal_method, result);
}
 void GameLift::AuthenticateGameLiftUserResponse::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void GameLift::AuthenticateGameLiftUserResponse::Deserialize(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void GameLift::AuthenticateGameLiftUserResponse::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GameLift::AuthenticateGameLiftUserResponse::AuthenticateGameLiftUserResponse()  : BGNet::Core::Messages::BaseReliableResponse(THROW_UNLESS(::il2cpp_utils::New<AuthenticateGameLiftUserResponse>())) {}
 void GameLift::AuthenticateGameLiftUserResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::AuthenticateGameLiftUserResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
