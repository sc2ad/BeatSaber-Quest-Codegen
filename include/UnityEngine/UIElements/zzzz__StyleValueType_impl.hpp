#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleValueType::StyleValueType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::StyleValueType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::StyleValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::Invalid{0};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::Keyword{1};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::Float{2};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::Dimension{3};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::Color{4};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::ResourcePath{5};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::AssetReference{6};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::Enum{7};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::Variable{8};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::String{9};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::Function{10};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::CommaSeparator{11};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::ScalableImage{12};
constexpr ::UnityEngine::UIElements::StyleValueType  ::UnityEngine::UIElements::StyleValueType::MissingAssetReference{13};
} // end anonymous namespace
