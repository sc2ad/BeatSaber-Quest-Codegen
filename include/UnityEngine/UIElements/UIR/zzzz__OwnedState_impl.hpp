#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/UIR/zzzz__OwnedState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::OwnedState::OwnedState(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::UIR::OwnedState::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::UnityEngine::UIElements::UIR::OwnedState::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::UIR::OwnedState  ::UnityEngine::UIElements::UIR::OwnedState::Inherited{0u};
constexpr ::UnityEngine::UIElements::UIR::OwnedState  ::UnityEngine::UIElements::UIR::OwnedState::Owned{1u};
} // end anonymous namespace
