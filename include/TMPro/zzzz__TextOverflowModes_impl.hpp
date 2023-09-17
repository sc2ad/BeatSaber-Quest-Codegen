#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "TMPro/zzzz__TextOverflowModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TextOverflowModes::TextOverflowModes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::TextOverflowModes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::TextOverflowModes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::TextOverflowModes  ::TMPro::TextOverflowModes::Overflow{0};
constexpr ::TMPro::TextOverflowModes  ::TMPro::TextOverflowModes::Ellipsis{1};
constexpr ::TMPro::TextOverflowModes  ::TMPro::TextOverflowModes::Masking{2};
constexpr ::TMPro::TextOverflowModes  ::TMPro::TextOverflowModes::Truncate{3};
constexpr ::TMPro::TextOverflowModes  ::TMPro::TextOverflowModes::ScrollRect{4};
constexpr ::TMPro::TextOverflowModes  ::TMPro::TextOverflowModes::Page{5};
constexpr ::TMPro::TextOverflowModes  ::TMPro::TextOverflowModes::Linked{6};
} // end anonymous namespace
