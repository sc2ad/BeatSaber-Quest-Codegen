#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__DynamicAtlasFiltersInternal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal::DynamicAtlasFiltersInternal(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::DynamicAtlasFiltersInternal::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::DynamicAtlasFiltersInternal::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  ::UnityEngine::UIElements::DynamicAtlasFiltersInternal::None{0};
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  ::UnityEngine::UIElements::DynamicAtlasFiltersInternal::Readability{1};
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  ::UnityEngine::UIElements::DynamicAtlasFiltersInternal::Size{2};
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  ::UnityEngine::UIElements::DynamicAtlasFiltersInternal::Format{4};
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  ::UnityEngine::UIElements::DynamicAtlasFiltersInternal::ColorSpace{8};
constexpr ::UnityEngine::UIElements::DynamicAtlasFiltersInternal  ::UnityEngine::UIElements::DynamicAtlasFiltersInternal::FilterMode{16};
} // end anonymous namespace
