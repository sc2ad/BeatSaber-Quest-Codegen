#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__DataType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType::DataType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::DataType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleSheets::Syntax::DataType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::None{0};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Number{1};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Integer{2};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Length{3};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Percentage{4};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Color{5};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Resource{6};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Url{7};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Time{8};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::Angle{9};
constexpr UnityEngine::UIElements::StyleSheets::Syntax::DataType  UnityEngine::UIElements::StyleSheets::Syntax::DataType::CustomIdent{10};
