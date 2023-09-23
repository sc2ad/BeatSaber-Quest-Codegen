#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LiteNetLib/zzzz__ConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr LiteNetLib::ConnectionState::ConnectionState(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LiteNetLib::ConnectionState::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t LiteNetLib::ConnectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr LiteNetLib::ConnectionState  LiteNetLib::ConnectionState::Outgoing{2u};
constexpr LiteNetLib::ConnectionState  LiteNetLib::ConnectionState::Connected{4u};
constexpr LiteNetLib::ConnectionState  LiteNetLib::ConnectionState::ShutdownRequested{8u};
constexpr LiteNetLib::ConnectionState  LiteNetLib::ConnectionState::Disconnected{16u};
constexpr LiteNetLib::ConnectionState  LiteNetLib::ConnectionState::Any{14u};
