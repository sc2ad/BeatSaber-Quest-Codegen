#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__Align_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Align::Align(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::Align::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::Align::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::Align  ::UnityEngine::UIElements::Align::Auto{0};
constexpr ::UnityEngine::UIElements::Align  ::UnityEngine::UIElements::Align::FlexStart{1};
constexpr ::UnityEngine::UIElements::Align  ::UnityEngine::UIElements::Align::Center{2};
constexpr ::UnityEngine::UIElements::Align  ::UnityEngine::UIElements::Align::FlexEnd{3};
constexpr ::UnityEngine::UIElements::Align  ::UnityEngine::UIElements::Align::Stretch{4};
} // end anonymous namespace