#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerLobbyState::MultiplayerLobbyState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::MultiplayerLobbyState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::MultiplayerLobbyState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::MultiplayerLobbyState  ::GlobalNamespace::MultiplayerLobbyState::None{0};
constexpr ::GlobalNamespace::MultiplayerLobbyState  ::GlobalNamespace::MultiplayerLobbyState::LobbySetup{1};
constexpr ::GlobalNamespace::MultiplayerLobbyState  ::GlobalNamespace::MultiplayerLobbyState::LobbyCountdown{2};
constexpr ::GlobalNamespace::MultiplayerLobbyState  ::GlobalNamespace::MultiplayerLobbyState::GameStarting{3};
constexpr ::GlobalNamespace::MultiplayerLobbyState  ::GlobalNamespace::MultiplayerLobbyState::GameRunning{4};
constexpr ::GlobalNamespace::MultiplayerLobbyState  ::GlobalNamespace::MultiplayerLobbyState::Error{5};
} // end anonymous namespace
