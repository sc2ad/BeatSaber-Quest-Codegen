#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "TMPro/zzzz__ColorMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::ColorMode::ColorMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::ColorMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::ColorMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr TMPro::ColorMode  TMPro::ColorMode::Single{0};
constexpr TMPro::ColorMode  TMPro::ColorMode::HorizontalGradient{1};
constexpr TMPro::ColorMode  TMPro::ColorMode::VerticalGradient{2};
constexpr TMPro::ColorMode  TMPro::ColorMode::FourCornersGradient{3};
