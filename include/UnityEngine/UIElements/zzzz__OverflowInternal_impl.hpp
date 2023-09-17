#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__OverflowInternal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::OverflowInternal::OverflowInternal(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::OverflowInternal::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::OverflowInternal::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::OverflowInternal  ::UnityEngine::UIElements::OverflowInternal::Visible{0};
constexpr ::UnityEngine::UIElements::OverflowInternal  ::UnityEngine::UIElements::OverflowInternal::Hidden{1};
constexpr ::UnityEngine::UIElements::OverflowInternal  ::UnityEngine::UIElements::OverflowInternal::Scroll{2};
} // end anonymous namespace
