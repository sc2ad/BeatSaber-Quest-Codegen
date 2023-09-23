#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::InputActionChange::InputActionChange(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::InputActionChange::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputActionChange::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionEnabled{0};
constexpr UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionDisabled{1};
constexpr UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionMapEnabled{2};
constexpr UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionMapDisabled{3};
constexpr UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionStarted{4};
constexpr UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionPerformed{5};
constexpr UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::ActionCanceled{6};
constexpr UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::BoundControlsAboutToChange{7};
constexpr UnityEngine::InputSystem::InputActionChange  UnityEngine::InputSystem::InputActionChange::BoundControlsChanged{8};
