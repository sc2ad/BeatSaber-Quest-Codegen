#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PseudoStates_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::PseudoStates::PseudoStates(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::PseudoStates::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::PseudoStates::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Active{1};
constexpr UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Hover{2};
constexpr UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Checked{8};
constexpr UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Disabled{32};
constexpr UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Focus{64};
constexpr UnityEngine::UIElements::PseudoStates  UnityEngine::UIElements::PseudoStates::Root{128};
