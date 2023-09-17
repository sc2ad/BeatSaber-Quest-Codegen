#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CanvasUpdate::CanvasUpdate(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UI::CanvasUpdate::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UI::CanvasUpdate::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UI::CanvasUpdate  ::UnityEngine::UI::CanvasUpdate::Prelayout{0};
constexpr ::UnityEngine::UI::CanvasUpdate  ::UnityEngine::UI::CanvasUpdate::Layout{1};
constexpr ::UnityEngine::UI::CanvasUpdate  ::UnityEngine::UI::CanvasUpdate::PostLayout{2};
constexpr ::UnityEngine::UI::CanvasUpdate  ::UnityEngine::UI::CanvasUpdate::PreRender{3};
constexpr ::UnityEngine::UI::CanvasUpdate  ::UnityEngine::UI::CanvasUpdate::LatePreRender{4};
constexpr ::UnityEngine::UI::CanvasUpdate  ::UnityEngine::UI::CanvasUpdate::MaxUpdateValue{5};
} // end anonymous namespace
