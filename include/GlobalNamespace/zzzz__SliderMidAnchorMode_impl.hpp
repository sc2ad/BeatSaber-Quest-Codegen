#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::SliderMidAnchorMode::SliderMidAnchorMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::SliderMidAnchorMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::SliderMidAnchorMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::SliderMidAnchorMode  GlobalNamespace::SliderMidAnchorMode::Straight{0};
constexpr GlobalNamespace::SliderMidAnchorMode  GlobalNamespace::SliderMidAnchorMode::Clockwise{1};
constexpr GlobalNamespace::SliderMidAnchorMode  GlobalNamespace::SliderMidAnchorMode::CounterClockwise{2};
