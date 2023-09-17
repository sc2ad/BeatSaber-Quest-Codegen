#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionCombinator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::ExpressionCombinator(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::None{0};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::Or{1};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::OrOr{2};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::AndAnd{3};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::Juxtaposition{4};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator  ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator::Group{5};
} // end anonymous namespace
