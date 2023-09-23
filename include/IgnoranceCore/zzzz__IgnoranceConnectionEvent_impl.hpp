#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "IgnoranceCore/zzzz__IgnoranceConnectionEvent_def.hpp"
// Ctor Parameters [CppParam { name: "EventType", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IP", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr IgnoranceCore::IgnoranceConnectionEvent::IgnoranceConnectionEvent(uint8_t EventType, uint16_t Port, uint32_t NativePeerId, ::StringW IP) noexcept : ::bs_hook::ValueTypeWrapper() {this->EventType = EventType;
this->Port = Port;
this->NativePeerId = NativePeerId;
this->IP = IP;
}
constexpr void IgnoranceCore::IgnoranceConnectionEvent::__set_EventType(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t IgnoranceCore::IgnoranceConnectionEvent::__get_EventType() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void IgnoranceCore::IgnoranceConnectionEvent::__set_Port(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t IgnoranceCore::IgnoranceConnectionEvent::__get_Port() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void IgnoranceCore::IgnoranceConnectionEvent::__set_NativePeerId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t IgnoranceCore::IgnoranceConnectionEvent::__get_NativePeerId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void IgnoranceCore::IgnoranceConnectionEvent::__set_IP(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW IgnoranceCore::IgnoranceConnectionEvent::__get_IP() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
