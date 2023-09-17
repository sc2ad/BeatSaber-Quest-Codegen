#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__TextGenerationError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextGenerationError::TextGenerationError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::TextGenerationError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextGenerationError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::TextGenerationError  ::UnityEngine::TextGenerationError::None{0};
constexpr ::UnityEngine::TextGenerationError  ::UnityEngine::TextGenerationError::CustomSizeOnNonDynamicFont{1};
constexpr ::UnityEngine::TextGenerationError  ::UnityEngine::TextGenerationError::CustomStyleOnNonDynamicFont{2};
constexpr ::UnityEngine::TextGenerationError  ::UnityEngine::TextGenerationError::NoFont{4};
} // end anonymous namespace
