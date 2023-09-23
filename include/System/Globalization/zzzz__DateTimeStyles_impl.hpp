#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::DateTimeStyles::DateTimeStyles(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::DateTimeStyles::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::DateTimeStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::None{0};
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowLeadingWhite{1};
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowTrailingWhite{2};
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowInnerWhite{4};
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AllowWhiteSpaces{7};
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::NoCurrentDateDefault{8};
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AdjustToUniversal{16};
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AssumeLocal{32};
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::AssumeUniversal{64};
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeStyles::RoundtripKind{128};
