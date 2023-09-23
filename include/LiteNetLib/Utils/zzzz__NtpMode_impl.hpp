#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NtpMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr LiteNetLib::Utils::NtpMode::NtpMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void LiteNetLib::Utils::NtpMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t LiteNetLib::Utils::NtpMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr LiteNetLib::Utils::NtpMode  LiteNetLib::Utils::NtpMode::Client{3};
constexpr LiteNetLib::Utils::NtpMode  LiteNetLib::Utils::NtpMode::Server{4};
