#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__FontStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FontStyle::FontStyle(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::FontStyle::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::FontStyle::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::FontStyle  ::UnityEngine::FontStyle::Normal{0};
constexpr ::UnityEngine::FontStyle  ::UnityEngine::FontStyle::Bold{1};
constexpr ::UnityEngine::FontStyle  ::UnityEngine::FontStyle::Italic{2};
constexpr ::UnityEngine::FontStyle  ::UnityEngine::FontStyle::BoldAndItalic{3};
} // end anonymous namespace
