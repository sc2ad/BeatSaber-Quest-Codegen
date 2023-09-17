#pragma once
#include "GameLift/zzzz__IGameLiftServerToClientMessage_def.hpp"
namespace {
/// @brief Convert operator to GameLift::IGameLiftMessage
constexpr  GameLift::IGameLiftServerToClientMessage::operator GameLift::IGameLiftMessage() const noexcept {
return GameLift::IGameLiftMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  GameLift::IGameLiftServerToClientMessage::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  GameLift::IGameLiftServerToClientMessage::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  GameLift::IGameLiftServerToClientMessage::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
} // end anonymous namespace
