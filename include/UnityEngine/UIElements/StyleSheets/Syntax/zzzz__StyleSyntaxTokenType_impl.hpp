#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__StyleSyntaxTokenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::StyleSyntaxTokenType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::Unknown{0};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::String{1};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::Number{2};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::Space{3};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::SingleBar{4};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::DoubleBar{5};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::DoubleAmpersand{6};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::Comma{7};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::SingleQuote{8};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::Asterisk{9};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::Plus{10};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::QuestionMark{11};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::HashMark{12};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::ExclamationPoint{13};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::OpenBracket{14};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::CloseBracket{15};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::OpenBrace{16};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::CloseBrace{17};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::LessThan{18};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::GreaterThan{19};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType  ::UnityEngine::UIElements::StyleSheets::Syntax::StyleSyntaxTokenType::End{20};
} // end anonymous namespace
