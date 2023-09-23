#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__ImagePosition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ImagePosition::ImagePosition(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ImagePosition::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ImagePosition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ImagePosition  UnityEngine::ImagePosition::ImageLeft{0};
constexpr UnityEngine::ImagePosition  UnityEngine::ImagePosition::ImageAbove{1};
constexpr UnityEngine::ImagePosition  UnityEngine::ImagePosition::ImageOnly{2};
constexpr UnityEngine::ImagePosition  UnityEngine::ImagePosition::TextOnly{3};
