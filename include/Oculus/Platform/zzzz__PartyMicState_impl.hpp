#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__PartyMicState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::PartyMicState::PartyMicState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::PartyMicState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::PartyMicState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::Unknown{0};
constexpr Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::Party{1};
constexpr Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::App{2};
constexpr Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::Mute{3};
constexpr Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::Inactive{4};
constexpr Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::InputShared{5};
