#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceIncomingPacket_def.hpp"
#include "ENet/zzzz__Packet_def.hpp"
// Ctor Parameters [CppParam { name: "Channel", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Payload", ty: "ENet::Packet", modifiers: "", def_value: Some("{}") }]
constexpr IgnoranceCore::IgnoranceIncomingPacket::IgnoranceIncomingPacket(uint8_t Channel, uint32_t NativePeerId, ENet::Packet Payload) noexcept : ::bs_hook::ValueTypeWrapper() {this->Channel = Channel;
this->NativePeerId = NativePeerId;
this->Payload = Payload;
}
constexpr void IgnoranceCore::IgnoranceIncomingPacket::__set_Channel(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t IgnoranceCore::IgnoranceIncomingPacket::__get_Channel() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void IgnoranceCore::IgnoranceIncomingPacket::__set_NativePeerId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t IgnoranceCore::IgnoranceIncomingPacket::__get_NativePeerId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void IgnoranceCore::IgnoranceIncomingPacket::__set_Payload(ENet::Packet value)  {
::cordl_internals::setInstanceField<ENet::Packet, 0x8>(this->__instance, std::forward<ENet::Packet>(value));
}
constexpr ENet::Packet IgnoranceCore::IgnoranceIncomingPacket::__get_Payload() const {
return ::cordl_internals::getInstanceField<ENet::Packet, 0x8>(this->__instance);
}
