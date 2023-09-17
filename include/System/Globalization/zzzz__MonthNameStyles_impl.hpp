#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Globalization/zzzz__MonthNameStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::MonthNameStyles::MonthNameStyles(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Globalization::MonthNameStyles::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Globalization::MonthNameStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Globalization::MonthNameStyles  ::System::Globalization::MonthNameStyles::Regular{0};
constexpr ::System::Globalization::MonthNameStyles  ::System::Globalization::MonthNameStyles::Genitive{1};
constexpr ::System::Globalization::MonthNameStyles  ::System::Globalization::MonthNameStyles::LeapYear{2};
} // end anonymous namespace
