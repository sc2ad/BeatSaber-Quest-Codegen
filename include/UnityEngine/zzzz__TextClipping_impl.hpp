#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__TextClipping_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextClipping::TextClipping(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::TextClipping::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextClipping::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::TextClipping  ::UnityEngine::TextClipping::Overflow{0};
constexpr ::UnityEngine::TextClipping  ::UnityEngine::TextClipping::Clip{1};
} // end anonymous namespace