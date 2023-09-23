#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GradientType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::GradientType::GradientType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::GradientType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::GradientType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::GradientType  UnityEngine::UIElements::GradientType::Linear{0};
constexpr UnityEngine::UIElements::GradientType  UnityEngine::UIElements::GradientType::Radial{1};
