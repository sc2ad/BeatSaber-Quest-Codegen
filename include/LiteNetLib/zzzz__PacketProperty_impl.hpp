#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LiteNetLib/zzzz__PacketProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr LiteNetLib::PacketProperty::PacketProperty(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LiteNetLib::PacketProperty::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t LiteNetLib::PacketProperty::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::Unreliable{0u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::Channeled{1u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::Ack{2u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::Ping{3u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::Pong{4u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::ConnectRequest{5u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::ConnectAccept{6u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::Disconnect{7u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::UnconnectedMessage{8u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::MtuCheck{9u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::MtuOk{10u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::Broadcast{11u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::Merged{12u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::ShutdownOk{13u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::PeerNotFound{14u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::InvalidProtocol{15u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::NatMessage{16u};
constexpr LiteNetLib::PacketProperty  LiteNetLib::PacketProperty::Empty{17u};
