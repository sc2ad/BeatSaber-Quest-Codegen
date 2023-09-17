#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Interactions/zzzz__PressBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior::PressBehavior(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::Interactions::PressBehavior::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Interactions::PressBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior  ::UnityEngine::InputSystem::Interactions::PressBehavior::PressOnly{0};
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior  ::UnityEngine::InputSystem::Interactions::PressBehavior::ReleaseOnly{1};
constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior  ::UnityEngine::InputSystem::Interactions::PressBehavior::PressAndRelease{2};
} // end anonymous namespace
