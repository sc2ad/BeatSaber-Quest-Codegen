#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__TimeUnit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TimeUnit::TimeUnit(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::TimeUnit::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::TimeUnit::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::TimeUnit  ::UnityEngine::UIElements::TimeUnit::Second{0};
constexpr ::UnityEngine::UIElements::TimeUnit  ::UnityEngine::UIElements::TimeUnit::Millisecond{1};
} // end anonymous namespace
