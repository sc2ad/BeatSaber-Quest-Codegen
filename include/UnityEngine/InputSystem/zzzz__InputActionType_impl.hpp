#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::InputActionType::InputActionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::InputActionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputActionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::InputActionType  UnityEngine::InputSystem::InputActionType::Value{0};
constexpr UnityEngine::InputSystem::InputActionType  UnityEngine::InputSystem::InputActionType::Button{1};
constexpr UnityEngine::InputSystem::InputActionType  UnityEngine::InputSystem::InputActionType::PassThrough{2};
