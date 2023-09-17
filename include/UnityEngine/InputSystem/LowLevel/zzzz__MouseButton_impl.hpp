#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__MouseButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton::MouseButton(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::MouseButton::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::LowLevel::MouseButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton  ::UnityEngine::InputSystem::LowLevel::MouseButton::Left{0};
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton  ::UnityEngine::InputSystem::LowLevel::MouseButton::Right{1};
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton  ::UnityEngine::InputSystem::LowLevel::MouseButton::Middle{2};
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton  ::UnityEngine::InputSystem::LowLevel::MouseButton::Forward{3};
constexpr ::UnityEngine::InputSystem::LowLevel::MouseButton  ::UnityEngine::InputSystem::LowLevel::MouseButton::Back{4};
} // end anonymous namespace
