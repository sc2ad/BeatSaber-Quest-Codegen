#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__AnimatorUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorUpdateMode::AnimatorUpdateMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::AnimatorUpdateMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::AnimatorUpdateMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::AnimatorUpdateMode  ::UnityEngine::AnimatorUpdateMode::Normal{0};
constexpr ::UnityEngine::AnimatorUpdateMode  ::UnityEngine::AnimatorUpdateMode::AnimatePhysics{1};
constexpr ::UnityEngine::AnimatorUpdateMode  ::UnityEngine::AnimatorUpdateMode::UnscaledTime{2};
} // end anonymous namespace
