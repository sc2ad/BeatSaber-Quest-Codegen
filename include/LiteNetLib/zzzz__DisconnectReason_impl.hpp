#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr LiteNetLib::DisconnectReason::DisconnectReason(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LiteNetLib::DisconnectReason::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::DisconnectReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::ConnectionFailed{0};
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::Timeout{1};
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::HostUnreachable{2};
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::NetworkUnreachable{3};
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::RemoteConnectionClose{4};
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::DisconnectPeerCalled{5};
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::ConnectionRejected{6};
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::InvalidProtocol{7};
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::UnknownHost{8};
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::Reconnect{9};
constexpr LiteNetLib::DisconnectReason  LiteNetLib::DisconnectReason::PeerToPeerConnection{10};
