#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__FlexDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::FlexDirection::FlexDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::FlexDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::FlexDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::FlexDirection  ::UnityEngine::UIElements::FlexDirection::Column{0};
constexpr ::UnityEngine::UIElements::FlexDirection  ::UnityEngine::UIElements::FlexDirection::ColumnReverse{1};
constexpr ::UnityEngine::UIElements::FlexDirection  ::UnityEngine::UIElements::FlexDirection::Row{2};
constexpr ::UnityEngine::UIElements::FlexDirection  ::UnityEngine::UIElements::FlexDirection::RowReverse{3};
} // end anonymous namespace
