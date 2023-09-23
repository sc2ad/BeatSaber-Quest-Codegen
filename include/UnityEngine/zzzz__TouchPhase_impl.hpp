#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__TouchPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TouchPhase::TouchPhase(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TouchPhase::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TouchPhase::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TouchPhase  UnityEngine::TouchPhase::Began{0};
constexpr UnityEngine::TouchPhase  UnityEngine::TouchPhase::Moved{1};
constexpr UnityEngine::TouchPhase  UnityEngine::TouchPhase::Stationary{2};
constexpr UnityEngine::TouchPhase  UnityEngine::TouchPhase::Ended{3};
constexpr UnityEngine::TouchPhase  UnityEngine::TouchPhase::Canceled{4};
