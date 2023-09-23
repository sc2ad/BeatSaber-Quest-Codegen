#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__sockaddr_in6_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__in6_addr_def.hpp"
// Ctor Parameters [CppParam { name: "sin6_len", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin6_family", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin6_port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin6_flowinfo", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin6_addr", ty: "System::Net::NetworkInformation::AixStructs::in6_addr", modifiers: "", def_value: Some("{}") }, CppParam { name: "sin6_scope_id", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::NetworkInformation::AixStructs::sockaddr_in6::sockaddr_in6(uint8_t sin6_len, uint8_t sin6_family, uint16_t sin6_port, uint32_t sin6_flowinfo, System::Net::NetworkInformation::AixStructs::in6_addr sin6_addr, uint32_t sin6_scope_id) noexcept : ::bs_hook::ValueTypeWrapper() {this->sin6_len = sin6_len;
this->sin6_family = sin6_family;
this->sin6_port = sin6_port;
this->sin6_flowinfo = sin6_flowinfo;
this->sin6_addr = sin6_addr;
this->sin6_scope_id = sin6_scope_id;
}
constexpr void System::Net::NetworkInformation::AixStructs::sockaddr_in6::__set_sin6_len(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::NetworkInformation::AixStructs::sockaddr_in6::__get_sin6_len() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void System::Net::NetworkInformation::AixStructs::sockaddr_in6::__set_sin6_family(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Net::NetworkInformation::AixStructs::sockaddr_in6::__get_sin6_family() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->__instance);
}
constexpr void System::Net::NetworkInformation::AixStructs::sockaddr_in6::__set_sin6_port(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t System::Net::NetworkInformation::AixStructs::sockaddr_in6::__get_sin6_port() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void System::Net::NetworkInformation::AixStructs::sockaddr_in6::__set_sin6_flowinfo(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Net::NetworkInformation::AixStructs::sockaddr_in6::__get_sin6_flowinfo() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void System::Net::NetworkInformation::AixStructs::sockaddr_in6::__set_sin6_addr(System::Net::NetworkInformation::AixStructs::in6_addr value)  {
::cordl_internals::setInstanceField<System::Net::NetworkInformation::AixStructs::in6_addr, 0x8>(this->__instance, std::forward<System::Net::NetworkInformation::AixStructs::in6_addr>(value));
}
constexpr System::Net::NetworkInformation::AixStructs::in6_addr System::Net::NetworkInformation::AixStructs::sockaddr_in6::__get_sin6_addr() const {
return ::cordl_internals::getInstanceField<System::Net::NetworkInformation::AixStructs::in6_addr, 0x8>(this->__instance);
}
constexpr void System::Net::NetworkInformation::AixStructs::sockaddr_in6::__set_sin6_scope_id(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Net::NetworkInformation::AixStructs::sockaddr_in6::__get_sin6_scope_id() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
