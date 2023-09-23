#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::StyleSelectorType::StyleSelectorType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::StyleSelectorType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleSelectorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::Unknown{0};
constexpr UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::Wildcard{1};
constexpr UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::Type{2};
constexpr UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::Class{3};
constexpr UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::PseudoClass{4};
constexpr UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::RecursivePseudoClass{5};
constexpr UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::ID{6};
constexpr UnityEngine::UIElements::StyleSelectorType  UnityEngine::UIElements::StyleSelectorType::Predicate{7};
