#pragma once
#include "BGNet/Core/Messages/zzzz__BaseMultipartMessage_impl.hpp"
#include "GameLift/zzzz__GameLiftMultipartMessage_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
namespace {
//  Writing Method size for method: GameLift::GameLiftMultipartMessage.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GameLift::GameLiftMultipartMessage> (*)()>(&GameLift::GameLiftMultipartMessage::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdd81c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMultipartMessage>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::GameLiftMultipartMessage.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::GameLiftMultipartMessage::*)()>(&GameLift::GameLiftMultipartMessage::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xdd8204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::GameLiftMultipartMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMultipartMessage>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::GameLiftMultipartMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::GameLiftMultipartMessage::*)()>(&GameLift::GameLiftMultipartMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd8258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMultipartMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GameLift::IGameLiftMessage
constexpr  GameLift::GameLiftMultipartMessage::operator GameLift::IGameLiftMessage() const noexcept {
return GameLift::IGameLiftMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  GameLift::GameLiftMultipartMessage::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GameLift::GameLiftMultipartMessage::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GameLift::GameLiftMultipartMessage::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GameLift::GameLiftMultipartMessage> GameLift::GameLiftMultipartMessage::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMultipartMessage>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GameLift::GameLiftMultipartMessage>, false>(nullptr, ___internal_method);
}
 void GameLift::GameLiftMultipartMessage::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMultipartMessage>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GameLift::GameLiftMultipartMessage::GameLiftMultipartMessage()  : BGNet::Core::Messages::BaseMultipartMessage(THROW_UNLESS(::il2cpp_utils::New<GameLiftMultipartMessage>())) {}
 void GameLift::GameLiftMultipartMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMultipartMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
