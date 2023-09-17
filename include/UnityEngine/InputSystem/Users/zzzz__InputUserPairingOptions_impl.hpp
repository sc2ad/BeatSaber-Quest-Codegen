#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Users/zzzz__InputUserPairingOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions::InputUserPairingOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::Users::InputUserPairingOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Users::InputUserPairingOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions  ::UnityEngine::InputSystem::Users::InputUserPairingOptions::None{0};
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions  ::UnityEngine::InputSystem::Users::InputUserPairingOptions::ForcePlatformUserAccountSelection{1};
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions  ::UnityEngine::InputSystem::Users::InputUserPairingOptions::ForceNoPlatformUserAccountSelection{2};
constexpr ::UnityEngine::InputSystem::Users::InputUserPairingOptions  ::UnityEngine::InputSystem::Users::InputUserPairingOptions::UnpairCurrentDevicesFromUser{8};
} // end anonymous namespace
