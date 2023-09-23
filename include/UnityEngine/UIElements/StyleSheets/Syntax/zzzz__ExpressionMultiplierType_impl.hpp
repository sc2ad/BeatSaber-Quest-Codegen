#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionMultiplierType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType::ExpressionMultiplierType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType::None{0};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType::ZeroOrMore{1};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType::OneOrMore{2};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType::ZeroOrOne{3};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType::Ranges{4};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType::OneOrMoreComma{5};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType  UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplierType::GroupAtLeastOne{6};
