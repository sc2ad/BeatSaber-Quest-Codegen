#pragma once
#include "GameLift/zzzz__IGameLiftClientToServerMessage_def.hpp"
namespace {
//  Writing Method size for method: GameLift::IGameLiftClientToServerMessage.get_userId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GameLift::IGameLiftClientToServerMessage::*)()>(&GameLift::IGameLiftClientToServerMessage::get_userId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::IGameLiftClientToServerMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::IGameLiftClientToServerMessage>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::IGameLiftClientToServerMessage.get_userName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GameLift::IGameLiftClientToServerMessage::*)()>(&GameLift::IGameLiftClientToServerMessage::get_userName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::IGameLiftClientToServerMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::IGameLiftClientToServerMessage>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to GameLift::IGameLiftMessage
constexpr  GameLift::IGameLiftClientToServerMessage::operator GameLift::IGameLiftMessage() const noexcept {
return GameLift::IGameLiftMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  GameLift::IGameLiftClientToServerMessage::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GameLift::IGameLiftClientToServerMessage::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GameLift::IGameLiftClientToServerMessage::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW GameLift::IGameLiftClientToServerMessage::get_userId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::IGameLiftClientToServerMessage>::get(),
                            "get_userId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GameLift::IGameLiftClientToServerMessage::get_userName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::IGameLiftClientToServerMessage>::get(),
                            "get_userName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
