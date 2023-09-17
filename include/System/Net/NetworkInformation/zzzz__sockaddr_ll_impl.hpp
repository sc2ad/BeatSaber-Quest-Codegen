#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/zzzz__sockaddr_ll_def.hpp"
// Ctor Parameters [CppParam { name: "sll_family", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sll_protocol", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sll_ifindex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sll_hatype", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sll_pkttype", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sll_halen", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sll_addr", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Net::NetworkInformation::sockaddr_ll::sockaddr_ll(uint16_t sll_family, uint16_t sll_protocol, int32_t sll_ifindex, uint16_t sll_hatype, uint8_t sll_pkttype, uint8_t sll_halen, ::ArrayW<uint8_t> sll_addr) noexcept : ::bs_hook::ValueTypeWrapper() {this->sll_family = sll_family;
this->sll_protocol = sll_protocol;
this->sll_ifindex = sll_ifindex;
this->sll_hatype = sll_hatype;
this->sll_pkttype = sll_pkttype;
this->sll_halen = sll_halen;
this->sll_addr = sll_addr;
}
constexpr void ::System::Net::NetworkInformation::sockaddr_ll::__set_sll_family(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::System::Net::NetworkInformation::sockaddr_ll::__get_sll_family() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr void ::System::Net::NetworkInformation::sockaddr_ll::__set_sll_protocol(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::System::Net::NetworkInformation::sockaddr_ll::__get_sll_protocol() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void ::System::Net::NetworkInformation::sockaddr_ll::__set_sll_ifindex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::NetworkInformation::sockaddr_ll::__get_sll_ifindex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::System::Net::NetworkInformation::sockaddr_ll::__set_sll_hatype(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x8>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::System::Net::NetworkInformation::sockaddr_ll::__get_sll_hatype() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x8>(this->__instance);
}
constexpr void ::System::Net::NetworkInformation::sockaddr_ll::__set_sll_pkttype(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0xa>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::Net::NetworkInformation::sockaddr_ll::__get_sll_pkttype() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xa>(this->__instance);
}
constexpr void ::System::Net::NetworkInformation::sockaddr_ll::__set_sll_halen(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0xb>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::System::Net::NetworkInformation::sockaddr_ll::__get_sll_halen() const {
return ::cordl_internals::getInstanceField<uint8_t, 0xb>(this->__instance);
}
constexpr void ::System::Net::NetworkInformation::sockaddr_ll::__set_sll_addr(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Net::NetworkInformation::sockaddr_ll::__get_sll_addr() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->__instance);
}
} // end anonymous namespace
