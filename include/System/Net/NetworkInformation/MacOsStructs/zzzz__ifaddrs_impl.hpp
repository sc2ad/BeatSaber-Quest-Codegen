#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Net/NetworkInformation/MacOsStructs/zzzz__ifaddrs_def.hpp"
// Ctor Parameters [CppParam { name: "ifa_next", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ifa_flags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_addr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_netmask", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_dstaddr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ifa_data", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::NetworkInformation::MacOsStructs::ifaddrs::ifaddrs(::cordl_internals::intptr_t ifa_next, ::StringW ifa_name, uint32_t ifa_flags, ::cordl_internals::intptr_t ifa_addr, ::cordl_internals::intptr_t ifa_netmask, ::cordl_internals::intptr_t ifa_dstaddr, ::cordl_internals::intptr_t ifa_data) noexcept : ::bs_hook::ValueTypeWrapper() {this->ifa_next = ifa_next;
this->ifa_name = ifa_name;
this->ifa_flags = ifa_flags;
this->ifa_addr = ifa_addr;
this->ifa_netmask = ifa_netmask;
this->ifa_dstaddr = ifa_dstaddr;
this->ifa_data = ifa_data;
}
constexpr void System::Net::NetworkInformation::MacOsStructs::ifaddrs::__set_ifa_next(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Net::NetworkInformation::MacOsStructs::ifaddrs::__get_ifa_next() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::ifaddrs::__set_ifa_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::NetworkInformation::MacOsStructs::ifaddrs::__get_ifa_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::ifaddrs::__set_ifa_flags(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::Net::NetworkInformation::MacOsStructs::ifaddrs::__get_ifa_flags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::ifaddrs::__set_ifa_addr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Net::NetworkInformation::MacOsStructs::ifaddrs::__get_ifa_addr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::ifaddrs::__set_ifa_netmask(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Net::NetworkInformation::MacOsStructs::ifaddrs::__get_ifa_netmask() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::ifaddrs::__set_ifa_dstaddr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x28>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Net::NetworkInformation::MacOsStructs::ifaddrs::__get_ifa_dstaddr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x28>(this->__instance);
}
constexpr void System::Net::NetworkInformation::MacOsStructs::ifaddrs::__set_ifa_data(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x30>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t System::Net::NetworkInformation::MacOsStructs::ifaddrs::__get_ifa_data() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x30>(this->__instance);
}
