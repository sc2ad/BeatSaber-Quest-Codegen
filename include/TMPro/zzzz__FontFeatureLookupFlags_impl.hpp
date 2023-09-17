#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "TMPro/zzzz__FontFeatureLookupFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::FontFeatureLookupFlags::FontFeatureLookupFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::TMPro::FontFeatureLookupFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::TMPro::FontFeatureLookupFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::TMPro::FontFeatureLookupFlags  ::TMPro::FontFeatureLookupFlags::None{0};
constexpr ::TMPro::FontFeatureLookupFlags  ::TMPro::FontFeatureLookupFlags::IgnoreLigatures{4};
constexpr ::TMPro::FontFeatureLookupFlags  ::TMPro::FontFeatureLookupFlags::IgnoreSpacingAdjustments{256};
} // end anonymous namespace
