#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::InputDeviceChange::InputDeviceChange(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::InputDeviceChange::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::InputDeviceChange::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Added{0};
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Removed{1};
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Disconnected{2};
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Reconnected{3};
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Enabled{4};
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Disabled{5};
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::UsageChanged{6};
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::ConfigurationChanged{7};
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::SoftReset{8};
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::HardReset{9};
constexpr UnityEngine::InputSystem::InputDeviceChange  UnityEngine::InputSystem::InputDeviceChange::Destroyed{10};
