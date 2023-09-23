#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Polyglot/zzzz__LanguageDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Polyglot::LanguageDirection::LanguageDirection(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Polyglot::LanguageDirection::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Polyglot::LanguageDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Polyglot::LanguageDirection  Polyglot::LanguageDirection::LeftToRight{0};
constexpr Polyglot::LanguageDirection  Polyglot::LanguageDirection::RightToLeft{1};
