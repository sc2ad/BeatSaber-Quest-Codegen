#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityOpus/zzzz__OpusApplication_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityOpus::OpusApplication::OpusApplication(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityOpus::OpusApplication::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityOpus::OpusApplication::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityOpus::OpusApplication  UnityOpus::OpusApplication::VoIP{2048};
constexpr UnityOpus::OpusApplication  UnityOpus::OpusApplication::Audio{2049};
constexpr UnityOpus::OpusApplication  UnityOpus::OpusApplication::RestrictedLowDelay{2051};
