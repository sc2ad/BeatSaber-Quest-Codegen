#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TwoPaneSplitViewOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::TwoPaneSplitViewOrientation::TwoPaneSplitViewOrientation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::TwoPaneSplitViewOrientation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::TwoPaneSplitViewOrientation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::TwoPaneSplitViewOrientation  UnityEngine::UIElements::TwoPaneSplitViewOrientation::Horizontal{0};
constexpr UnityEngine::UIElements::TwoPaneSplitViewOrientation  UnityEngine::UIElements::TwoPaneSplitViewOrientation::Vertical{1};
