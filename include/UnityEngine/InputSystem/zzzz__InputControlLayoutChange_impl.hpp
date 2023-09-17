#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputControlLayoutChange::InputControlLayoutChange(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::InputControlLayoutChange::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::InputControlLayoutChange::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::InputControlLayoutChange  ::UnityEngine::InputSystem::InputControlLayoutChange::Added{0};
constexpr ::UnityEngine::InputSystem::InputControlLayoutChange  ::UnityEngine::InputSystem::InputControlLayoutChange::Removed{1};
constexpr ::UnityEngine::InputSystem::InputControlLayoutChange  ::UnityEngine::InputSystem::InputControlLayoutChange::Replaced{2};
} // end anonymous namespace
