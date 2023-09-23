#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Oculus/Platform/zzzz__PartyUpdateAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Oculus::Platform::PartyUpdateAction::PartyUpdateAction(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Oculus::Platform::PartyUpdateAction::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Oculus::Platform::PartyUpdateAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Oculus::Platform::PartyUpdateAction  Oculus::Platform::PartyUpdateAction::Unknown{0};
constexpr Oculus::Platform::PartyUpdateAction  Oculus::Platform::PartyUpdateAction::Join{1};
constexpr Oculus::Platform::PartyUpdateAction  Oculus::Platform::PartyUpdateAction::Leave{2};
constexpr Oculus::Platform::PartyUpdateAction  Oculus::Platform::PartyUpdateAction::Invite{3};
constexpr Oculus::Platform::PartyUpdateAction  Oculus::Platform::PartyUpdateAction::Uninvite{4};
