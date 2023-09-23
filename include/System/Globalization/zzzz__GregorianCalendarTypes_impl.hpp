#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Globalization/zzzz__GregorianCalendarTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::GregorianCalendarTypes::GregorianCalendarTypes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::GregorianCalendarTypes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::GregorianCalendarTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Globalization::GregorianCalendarTypes  System::Globalization::GregorianCalendarTypes::Localized{1};
constexpr System::Globalization::GregorianCalendarTypes  System::Globalization::GregorianCalendarTypes::USEnglish{2};
constexpr System::Globalization::GregorianCalendarTypes  System::Globalization::GregorianCalendarTypes::MiddleEastFrench{9};
constexpr System::Globalization::GregorianCalendarTypes  System::Globalization::GregorianCalendarTypes::Arabic{10};
constexpr System::Globalization::GregorianCalendarTypes  System::Globalization::GregorianCalendarTypes::TransliteratedEnglish{11};
constexpr System::Globalization::GregorianCalendarTypes  System::Globalization::GregorianCalendarTypes::TransliteratedFrench{12};
