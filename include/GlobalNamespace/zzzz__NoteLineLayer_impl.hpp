#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::NoteLineLayer::NoteLineLayer(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::NoteLineLayer::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::NoteLineLayer::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::NoteLineLayer  GlobalNamespace::NoteLineLayer::Base{0};
constexpr GlobalNamespace::NoteLineLayer  GlobalNamespace::NoteLineLayer::Upper{1};
constexpr GlobalNamespace::NoteLineLayer  GlobalNamespace::NoteLineLayer::Top{2};
