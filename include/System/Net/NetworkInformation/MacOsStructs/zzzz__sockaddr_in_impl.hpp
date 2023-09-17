#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/MacOsStructs/zzzz__sockaddr_in_def.hpp"
// Ctor Parameters [CppParam { name: "sin_len", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin_family", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin_port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin_addr", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::MacOsStructs::sockaddr_in::sockaddr_in(uint8_t sin_len, uint8_t sin_family, uint16_t sin_port, uint32_t sin_addr) noexcept : ::bs_hook::ValueTypeWrapper() {this->sin_len = sin_len;
this->sin_family = sin_family;
this->sin_port = sin_port;
this->sin_addr = sin_addr;
}
constexpr void ::System::Net::NetworkInformation::MacOsStructs::sockaddr_in::__set_sin_len(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::Net::NetworkInformation::MacOsStructs::sockaddr_in::__get_sin_len() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::NetworkInformation::MacOsStructs::sockaddr_in::__set_sin_family(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::Net::NetworkInformation::MacOsStructs::sockaddr_in::__get_sin_family() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->__instance);
}
constexpr void ::System::Net::NetworkInformation::MacOsStructs::sockaddr_in::__set_sin_port(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::System::Net::NetworkInformation::MacOsStructs::sockaddr_in::__get_sin_port() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void ::System::Net::NetworkInformation::MacOsStructs::sockaddr_in::__set_sin_addr(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::Net::NetworkInformation::MacOsStructs::sockaddr_in::__get_sin_addr() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
} // end anonymous namespace
