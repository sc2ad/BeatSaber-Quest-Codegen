#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidInputSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::AndroidInputSource(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Keyboard{257};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Dpad{513};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Gamepad{1025};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Touchscreen{4098};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Mouse{8194};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Stylus{16386};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Trackball{65540};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Touchpad{1048584};
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource  UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource::Joystick{16777232};
