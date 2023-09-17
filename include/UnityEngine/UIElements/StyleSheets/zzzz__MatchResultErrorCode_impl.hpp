#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::MatchResultErrorCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::None{0};
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::Syntax{1};
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::EmptyValue{2};
constexpr ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode  ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode::ExpectedEndOfValue{3};
} // end anonymous namespace
