#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::HorizontalAlignmentOptions::HorizontalAlignmentOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void TMPro::HorizontalAlignmentOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::HorizontalAlignmentOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Left{1};
constexpr TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Center{2};
constexpr TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Right{4};
constexpr TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Justified{8};
constexpr TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Flush{16};
constexpr TMPro::HorizontalAlignmentOptions  TMPro::HorizontalAlignmentOptions::Geometry{32};
