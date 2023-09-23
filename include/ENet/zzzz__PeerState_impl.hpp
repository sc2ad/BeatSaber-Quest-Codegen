#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "ENet/zzzz__PeerState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ENet::PeerState::PeerState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ENet::PeerState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ENet::PeerState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ENet::PeerState  ENet::PeerState::Uninitialized{-1};
constexpr ENet::PeerState  ENet::PeerState::Disconnected{0};
constexpr ENet::PeerState  ENet::PeerState::Connecting{1};
constexpr ENet::PeerState  ENet::PeerState::AcknowledgingConnect{2};
constexpr ENet::PeerState  ENet::PeerState::ConnectionPending{3};
constexpr ENet::PeerState  ENet::PeerState::ConnectionSucceeded{4};
constexpr ENet::PeerState  ENet::PeerState::Connected{5};
constexpr ENet::PeerState  ENet::PeerState::DisconnectLater{6};
constexpr ENet::PeerState  ENet::PeerState::Disconnecting{7};
constexpr ENet::PeerState  ENet::PeerState::AcknowledgingDisconnect{8};
constexpr ENet::PeerState  ENet::PeerState::Zombie{9};
