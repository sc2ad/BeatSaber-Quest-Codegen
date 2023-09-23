#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Globalization/zzzz__CultureTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::CultureTypes::CultureTypes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::CultureTypes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::CultureTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Globalization::CultureTypes  System::Globalization::CultureTypes::NeutralCultures{1};
constexpr System::Globalization::CultureTypes  System::Globalization::CultureTypes::SpecificCultures{2};
constexpr System::Globalization::CultureTypes  System::Globalization::CultureTypes::InstalledWin32Cultures{4};
constexpr System::Globalization::CultureTypes  System::Globalization::CultureTypes::AllCultures{7};
constexpr System::Globalization::CultureTypes  System::Globalization::CultureTypes::UserCustomCulture{8};
constexpr System::Globalization::CultureTypes  System::Globalization::CultureTypes::ReplacementCultures{16};
constexpr System::Globalization::CultureTypes  System::Globalization::CultureTypes::WindowsOnlyCultures{32};
constexpr System::Globalization::CultureTypes  System::Globalization::CultureTypes::FrameworkCultures{64};
