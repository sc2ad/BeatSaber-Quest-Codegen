#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HMUI/zzzz__UISelectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::UISelectionState::UISelectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HMUI::UISelectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HMUI::UISelectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HMUI::UISelectionState  ::HMUI::UISelectionState::Normal{0};
constexpr ::HMUI::UISelectionState  ::HMUI::UISelectionState::Highlighted{1};
constexpr ::HMUI::UISelectionState  ::HMUI::UISelectionState::Pressed{2};
constexpr ::HMUI::UISelectionState  ::HMUI::UISelectionState::Selected{3};
constexpr ::HMUI::UISelectionState  ::HMUI::UISelectionState::Disabled{4};
} // end anonymous namespace
