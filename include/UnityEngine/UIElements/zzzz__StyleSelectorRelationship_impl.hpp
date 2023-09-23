#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSelectorRelationship_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::StyleSelectorRelationship::StyleSelectorRelationship(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::StyleSelectorRelationship::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::StyleSelectorRelationship::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::StyleSelectorRelationship  UnityEngine::UIElements::StyleSelectorRelationship::None{0};
constexpr UnityEngine::UIElements::StyleSelectorRelationship  UnityEngine::UIElements::StyleSelectorRelationship::Child{1};
constexpr UnityEngine::UIElements::StyleSelectorRelationship  UnityEngine::UIElements::StyleSelectorRelationship::Descendent{2};
