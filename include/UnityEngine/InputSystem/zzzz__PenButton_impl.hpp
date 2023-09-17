#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/zzzz__PenButton_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::PenButton::PenButton(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::PenButton::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::PenButton::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::Tip{0};
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::Eraser{1};
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::BarrelFirst{2};
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::BarrelSecond{3};
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::InRange{4};
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::BarrelThird{5};
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::BarrelFourth{6};
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::Barrel1{2};
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::Barrel2{3};
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::Barrel3{5};
constexpr ::UnityEngine::InputSystem::PenButton  ::UnityEngine::InputSystem::PenButton::Barrel4{6};
} // end anonymous namespace
