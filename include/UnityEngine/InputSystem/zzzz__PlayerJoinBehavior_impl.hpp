#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerJoinBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::PlayerJoinBehavior::PlayerJoinBehavior(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::PlayerJoinBehavior::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::PlayerJoinBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::PlayerJoinBehavior  UnityEngine::InputSystem::PlayerJoinBehavior::JoinPlayersWhenButtonIsPressed{0};
constexpr UnityEngine::InputSystem::PlayerJoinBehavior  UnityEngine::InputSystem::PlayerJoinBehavior::JoinPlayersWhenJoinActionIsTriggered{1};
constexpr UnityEngine::InputSystem::PlayerJoinBehavior  UnityEngine::InputSystem::PlayerJoinBehavior::JoinPlayersManually{2};
