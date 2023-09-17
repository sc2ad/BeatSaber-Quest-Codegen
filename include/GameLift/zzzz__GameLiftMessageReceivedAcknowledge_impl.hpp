#pragma once
#include "BGNet/Core/Messages/zzzz__BaseAcknowledgeMessage_impl.hpp"
#include "GameLift/zzzz__GameLiftMessageReceivedAcknowledge_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
namespace {
//  Writing Method size for method: GameLift::GameLiftMessageReceivedAcknowledge.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PacketPool_1<GameLift::GameLiftMessageReceivedAcknowledge> (*)()>(&GameLift::GameLiftMessageReceivedAcknowledge::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdd8120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMessageReceivedAcknowledge>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::GameLiftMessageReceivedAcknowledge.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::GameLiftMessageReceivedAcknowledge::*)()>(&GameLift::GameLiftMessageReceivedAcknowledge::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xdd8160;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GameLift::GameLiftMessageReceivedAcknowledge),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMessageReceivedAcknowledge>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GameLift::GameLiftMessageReceivedAcknowledge._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::GameLiftMessageReceivedAcknowledge::*)()>(&GameLift::GameLiftMessageReceivedAcknowledge::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd81b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMessageReceivedAcknowledge>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GameLift::IGameLiftMessage
constexpr  GameLift::GameLiftMessageReceivedAcknowledge::operator GameLift::IGameLiftMessage() const noexcept {
return GameLift::IGameLiftMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  GameLift::GameLiftMessageReceivedAcknowledge::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GameLift::GameLiftMessageReceivedAcknowledge::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GameLift::GameLiftMessageReceivedAcknowledge::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::PacketPool_1<GameLift::GameLiftMessageReceivedAcknowledge> GameLift::GameLiftMessageReceivedAcknowledge::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMessageReceivedAcknowledge>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PacketPool_1<GameLift::GameLiftMessageReceivedAcknowledge>, false>(nullptr, ___internal_method);
}
 void GameLift::GameLiftMessageReceivedAcknowledge::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMessageReceivedAcknowledge>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GameLift::GameLiftMessageReceivedAcknowledge::GameLiftMessageReceivedAcknowledge()  : BGNet::Core::Messages::BaseAcknowledgeMessage(THROW_UNLESS(::il2cpp_utils::New<GameLiftMessageReceivedAcknowledge>())) {}
 void GameLift::GameLiftMessageReceivedAcknowledge::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GameLift::GameLiftMessageReceivedAcknowledge>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
