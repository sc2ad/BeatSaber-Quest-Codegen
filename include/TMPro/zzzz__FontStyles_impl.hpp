#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "TMPro/zzzz__FontStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::FontStyles::FontStyles(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::FontStyles::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::FontStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::Normal{0};
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::Bold{1};
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::Italic{2};
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::Underline{4};
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::LowerCase{8};
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::UpperCase{16};
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::SmallCaps{32};
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::Strikethrough{64};
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::Superscript{128};
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::Subscript{256};
constexpr ::TMPro::FontStyles  ::TMPro::FontStyles::Highlight{512};
} // end anonymous namespace
