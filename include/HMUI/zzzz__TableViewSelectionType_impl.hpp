#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HMUI/zzzz__TableViewSelectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::TableViewSelectionType::TableViewSelectionType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HMUI::TableViewSelectionType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HMUI::TableViewSelectionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HMUI::TableViewSelectionType  ::HMUI::TableViewSelectionType::None{0};
constexpr ::HMUI::TableViewSelectionType  ::HMUI::TableViewSelectionType::Single{1};
constexpr ::HMUI::TableViewSelectionType  ::HMUI::TableViewSelectionType::Multiple{2};
} // end anonymous namespace