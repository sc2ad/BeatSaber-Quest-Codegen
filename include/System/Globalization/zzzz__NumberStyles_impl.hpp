#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::NumberStyles::NumberStyles(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Globalization::NumberStyles::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Globalization::NumberStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::None{0};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::AllowLeadingWhite{1};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::AllowTrailingWhite{2};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::AllowLeadingSign{4};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::AllowTrailingSign{8};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::AllowParentheses{16};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::AllowDecimalPoint{32};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::AllowThousands{64};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::AllowExponent{128};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::AllowCurrencySymbol{256};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::AllowHexSpecifier{512};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::Integer{7};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::HexNumber{515};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::Number{111};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::Float{167};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::Currency{383};
constexpr ::System::Globalization::NumberStyles  ::System::Globalization::NumberStyles::Any{511};
} // end anonymous namespace
