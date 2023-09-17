#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__AnimatorControllerParameterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AnimatorControllerParameterType::AnimatorControllerParameterType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::AnimatorControllerParameterType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::AnimatorControllerParameterType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::AnimatorControllerParameterType  ::UnityEngine::AnimatorControllerParameterType::Float{1};
constexpr ::UnityEngine::AnimatorControllerParameterType  ::UnityEngine::AnimatorControllerParameterType::Int{3};
constexpr ::UnityEngine::AnimatorControllerParameterType  ::UnityEngine::AnimatorControllerParameterType::Bool{4};
constexpr ::UnityEngine::AnimatorControllerParameterType  ::UnityEngine::AnimatorControllerParameterType::Trigger{9};
} // end anonymous namespace
