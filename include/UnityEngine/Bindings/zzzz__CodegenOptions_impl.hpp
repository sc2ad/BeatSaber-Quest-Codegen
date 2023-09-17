#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Bindings/zzzz__CodegenOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Bindings::CodegenOptions::CodegenOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Bindings::CodegenOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Bindings::CodegenOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Bindings::CodegenOptions  ::UnityEngine::Bindings::CodegenOptions::Auto{0};
constexpr ::UnityEngine::Bindings::CodegenOptions  ::UnityEngine::Bindings::CodegenOptions::Custom{1};
constexpr ::UnityEngine::Bindings::CodegenOptions  ::UnityEngine::Bindings::CodegenOptions::Force{2};
} // end anonymous namespace
