#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "ENet/zzzz__ENetAddress_def.hpp"
// Ctor Parameters [CppParam { name: "port", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::ENetAddress::ENetAddress(uint16_t port) noexcept : ::bs_hook::ValueTypeWrapper() {this->port = port;
}
constexpr void ::ENet::ENetAddress::__set_port(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x10>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t ::ENet::ENetAddress::__get_port() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x10>(this->__instance);
}
} // end anonymous namespace
