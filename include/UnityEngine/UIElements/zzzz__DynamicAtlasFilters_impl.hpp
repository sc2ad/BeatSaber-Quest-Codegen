#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__DynamicAtlasFilters_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DynamicAtlasFilters::DynamicAtlasFilters(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::DynamicAtlasFilters::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::DynamicAtlasFilters::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::DynamicAtlasFilters  ::UnityEngine::UIElements::DynamicAtlasFilters::None{0};
constexpr ::UnityEngine::UIElements::DynamicAtlasFilters  ::UnityEngine::UIElements::DynamicAtlasFilters::Readability{1};
constexpr ::UnityEngine::UIElements::DynamicAtlasFilters  ::UnityEngine::UIElements::DynamicAtlasFilters::Size{2};
constexpr ::UnityEngine::UIElements::DynamicAtlasFilters  ::UnityEngine::UIElements::DynamicAtlasFilters::Format{4};
constexpr ::UnityEngine::UIElements::DynamicAtlasFilters  ::UnityEngine::UIElements::DynamicAtlasFilters::ColorSpace{8};
constexpr ::UnityEngine::UIElements::DynamicAtlasFilters  ::UnityEngine::UIElements::DynamicAtlasFilters::FilterMode{16};
} // end anonymous namespace
