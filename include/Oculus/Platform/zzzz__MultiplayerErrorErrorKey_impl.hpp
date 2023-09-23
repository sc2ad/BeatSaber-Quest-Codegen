#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__MultiplayerErrorErrorKey_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::MultiplayerErrorErrorKey::MultiplayerErrorErrorKey(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::MultiplayerErrorErrorKey::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::MultiplayerErrorErrorKey::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::Unknown{0};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::DestinationUnavailable{1};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::DlcRequired{2};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::General{3};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::GroupFull{4};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::InviterNotJoinable{5};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::LevelNotHighEnough{6};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::LevelNotUnlocked{7};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::NetworkTimeout{8};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::NoLongerAvailable{9};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::UpdateRequired{10};
constexpr Oculus::Platform::MultiplayerErrorErrorKey  Oculus::Platform::MultiplayerErrorErrorKey::TutorialRequired{11};
