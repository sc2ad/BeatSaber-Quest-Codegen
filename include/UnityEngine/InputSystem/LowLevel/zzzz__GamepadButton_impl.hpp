#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__GamepadButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton::GamepadButton(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::GamepadButton::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::LowLevel::GamepadButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::DpadUp{0};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::DpadDown{1};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::DpadLeft{2};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::DpadRight{3};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::North{4};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::East{5};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::South{6};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::West{7};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::LeftStick{8};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::RightStick{9};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::LeftShoulder{10};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::RightShoulder{11};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::Start{12};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::Select{13};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::LeftTrigger{32};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::RightTrigger{33};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::X{7};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::Y{4};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::A{6};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::B{5};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::Cross{6};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::Square{7};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::Triangle{4};
constexpr ::UnityEngine::InputSystem::LowLevel::GamepadButton  ::UnityEngine::InputSystem::LowLevel::GamepadButton::Circle{5};
} // end anonymous namespace
