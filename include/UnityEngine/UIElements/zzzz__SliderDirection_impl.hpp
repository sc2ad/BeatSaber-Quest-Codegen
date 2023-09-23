#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SliderDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::SliderDirection::SliderDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::SliderDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::SliderDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::SliderDirection  UnityEngine::UIElements::SliderDirection::Horizontal{0};
constexpr UnityEngine::UIElements::SliderDirection  UnityEngine::UIElements::SliderDirection::Vertical{1};
