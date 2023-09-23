#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Users::InputUserChange::InputUserChange(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::Users::InputUserChange::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Users::InputUserChange::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::Added{0};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::Removed{1};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::DevicePaired{2};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::DeviceUnpaired{3};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::DeviceLost{4};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::DeviceRegained{5};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::AccountChanged{6};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::AccountNameChanged{7};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::AccountSelectionInProgress{8};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::AccountSelectionCanceled{9};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::AccountSelectionComplete{10};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::ControlSchemeChanged{11};
constexpr UnityEngine::InputSystem::Users::InputUserChange  UnityEngine::InputSystem::Users::InputUserChange::ControlsChanged{12};
