#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__CallbackPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CallbackPhase::CallbackPhase(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::CallbackPhase::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::CallbackPhase::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::CallbackPhase  ::UnityEngine::UIElements::CallbackPhase::TargetAndBubbleUp{1};
constexpr ::UnityEngine::UIElements::CallbackPhase  ::UnityEngine::UIElements::CallbackPhase::TrickleDownAndTarget{2};
} // end anonymous namespace
