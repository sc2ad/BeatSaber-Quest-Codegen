#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__UsageHints_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UsageHints::UsageHints(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::UsageHints::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::UsageHints::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::UsageHints  ::UnityEngine::UIElements::UsageHints::None{0};
constexpr ::UnityEngine::UIElements::UsageHints  ::UnityEngine::UIElements::UsageHints::DynamicTransform{1};
constexpr ::UnityEngine::UIElements::UsageHints  ::UnityEngine::UIElements::UsageHints::GroupTransform{2};
constexpr ::UnityEngine::UIElements::UsageHints  ::UnityEngine::UIElements::UsageHints::MaskContainer{4};
constexpr ::UnityEngine::UIElements::UsageHints  ::UnityEngine::UIElements::UsageHints::DynamicColor{8};
} // end anonymous namespace
