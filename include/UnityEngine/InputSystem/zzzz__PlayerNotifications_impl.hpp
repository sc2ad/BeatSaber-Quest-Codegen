#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerNotifications_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::PlayerNotifications::PlayerNotifications(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::PlayerNotifications::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::PlayerNotifications::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::PlayerNotifications  UnityEngine::InputSystem::PlayerNotifications::SendMessages{0};
constexpr UnityEngine::InputSystem::PlayerNotifications  UnityEngine::InputSystem::PlayerNotifications::BroadcastMessages{1};
constexpr UnityEngine::InputSystem::PlayerNotifications  UnityEngine::InputSystem::PlayerNotifications::InvokeUnityEvents{2};
constexpr UnityEngine::InputSystem::PlayerNotifications  UnityEngine::InputSystem::PlayerNotifications::InvokeCSharpEvents{3};
