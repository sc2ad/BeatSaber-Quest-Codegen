#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__FocusType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::FocusType::FocusType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::FocusType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::FocusType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::FocusType  UnityEngine::FocusType::Native{0};
constexpr UnityEngine::FocusType  UnityEngine::FocusType::Keyboard{1};
constexpr UnityEngine::FocusType  UnityEngine::FocusType::Passive{2};
