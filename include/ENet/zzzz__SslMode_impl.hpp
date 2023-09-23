#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "ENet/zzzz__SslMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ENet::SslMode::SslMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ENet::SslMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ENet::SslMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ENet::SslMode  ENet::SslMode::None{0};
constexpr ENet::SslMode  ENet::SslMode::Server{1};
constexpr ENet::SslMode  ENet::SslMode::Client{2};
