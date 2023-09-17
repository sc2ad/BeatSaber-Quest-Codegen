#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::TouchPhase::TouchPhase(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::TouchPhase::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::TouchPhase::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::TouchPhase  ::UnityEngine::InputSystem::TouchPhase::None{0};
constexpr ::UnityEngine::InputSystem::TouchPhase  ::UnityEngine::InputSystem::TouchPhase::Began{1};
constexpr ::UnityEngine::InputSystem::TouchPhase  ::UnityEngine::InputSystem::TouchPhase::Moved{2};
constexpr ::UnityEngine::InputSystem::TouchPhase  ::UnityEngine::InputSystem::TouchPhase::Ended{3};
constexpr ::UnityEngine::InputSystem::TouchPhase  ::UnityEngine::InputSystem::TouchPhase::Canceled{4};
constexpr ::UnityEngine::InputSystem::TouchPhase  ::UnityEngine::InputSystem::TouchPhase::Stationary{5};
} // end anonymous namespace
