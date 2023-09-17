#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__NoteVisualModifierType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteVisualModifierType::NoteVisualModifierType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::NoteVisualModifierType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::NoteVisualModifierType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::NoteVisualModifierType  ::GlobalNamespace::NoteVisualModifierType::Normal{0};
constexpr ::GlobalNamespace::NoteVisualModifierType  ::GlobalNamespace::NoteVisualModifierType::DisappearingArrow{1};
constexpr ::GlobalNamespace::NoteVisualModifierType  ::GlobalNamespace::NoteVisualModifierType::Ghost{2};
} // end anonymous namespace
