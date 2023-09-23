#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::TouchFlags::TouchFlags(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchFlags::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::LowLevel::TouchFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::IndirectTouch{1u};
constexpr UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::PrimaryTouch{8u};
constexpr UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::TapPress{16u};
constexpr UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::TapRelease{32u};
constexpr UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::OrphanedPrimaryTouch{64u};
constexpr UnityEngine::InputSystem::LowLevel::TouchFlags  UnityEngine::InputSystem::LowLevel::TouchFlags::BeganInSameFrame{128u};
