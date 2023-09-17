#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdatePhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase::VisualTreeUpdatePhase(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::VisualTreeUpdatePhase::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::VisualTreeUpdatePhase::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  ::UnityEngine::UIElements::VisualTreeUpdatePhase::ViewData{0};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  ::UnityEngine::UIElements::VisualTreeUpdatePhase::Bindings{1};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  ::UnityEngine::UIElements::VisualTreeUpdatePhase::Animation{2};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  ::UnityEngine::UIElements::VisualTreeUpdatePhase::Styles{3};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  ::UnityEngine::UIElements::VisualTreeUpdatePhase::Layout{4};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  ::UnityEngine::UIElements::VisualTreeUpdatePhase::TransformClip{5};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  ::UnityEngine::UIElements::VisualTreeUpdatePhase::Repaint{6};
constexpr ::UnityEngine::UIElements::VisualTreeUpdatePhase  ::UnityEngine::UIElements::VisualTreeUpdatePhase::Count{7};
} // end anonymous namespace
