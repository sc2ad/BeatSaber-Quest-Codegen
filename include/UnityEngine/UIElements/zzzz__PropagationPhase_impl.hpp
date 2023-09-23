#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::PropagationPhase::PropagationPhase(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::PropagationPhase::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::PropagationPhase::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::PropagationPhase  UnityEngine::UIElements::PropagationPhase::None{0};
constexpr UnityEngine::UIElements::PropagationPhase  UnityEngine::UIElements::PropagationPhase::TrickleDown{1};
constexpr UnityEngine::UIElements::PropagationPhase  UnityEngine::UIElements::PropagationPhase::AtTarget{2};
constexpr UnityEngine::UIElements::PropagationPhase  UnityEngine::UIElements::PropagationPhase::DefaultActionAtTarget{5};
constexpr UnityEngine::UIElements::PropagationPhase  UnityEngine::UIElements::PropagationPhase::BubbleUp{3};
constexpr UnityEngine::UIElements::PropagationPhase  UnityEngine::UIElements::PropagationPhase::DefaultAction{4};
