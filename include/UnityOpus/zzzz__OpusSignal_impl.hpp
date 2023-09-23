#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityOpus/zzzz__OpusSignal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityOpus::OpusSignal::OpusSignal(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityOpus::OpusSignal::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityOpus::OpusSignal::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityOpus::OpusSignal  UnityOpus::OpusSignal::Auto{-1000};
constexpr UnityOpus::OpusSignal  UnityOpus::OpusSignal::Voice{3001};
constexpr UnityOpus::OpusSignal  UnityOpus::OpusSignal::Music{3002};
