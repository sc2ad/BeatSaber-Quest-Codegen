#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__Justify_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Justify::Justify(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::Justify::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::Justify::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::Justify  ::UnityEngine::UIElements::Justify::FlexStart{0};
constexpr ::UnityEngine::UIElements::Justify  ::UnityEngine::UIElements::Justify::Center{1};
constexpr ::UnityEngine::UIElements::Justify  ::UnityEngine::UIElements::Justify::FlexEnd{2};
constexpr ::UnityEngine::UIElements::Justify  ::UnityEngine::UIElements::Justify::SpaceBetween{3};
constexpr ::UnityEngine::UIElements::Justify  ::UnityEngine::UIElements::Justify::SpaceAround{4};
} // end anonymous namespace
