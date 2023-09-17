#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__AnimatorRecorderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorRecorderMode::AnimatorRecorderMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::AnimatorRecorderMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::AnimatorRecorderMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::AnimatorRecorderMode  ::UnityEngine::AnimatorRecorderMode::Offline{0};
constexpr ::UnityEngine::AnimatorRecorderMode  ::UnityEngine::AnimatorRecorderMode::Playback{1};
constexpr ::UnityEngine::AnimatorRecorderMode  ::UnityEngine::AnimatorRecorderMode::Record{2};
} // end anonymous namespace
