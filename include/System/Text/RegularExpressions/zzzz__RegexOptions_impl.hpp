#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Text::RegularExpressions::RegexOptions::RegexOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Text::RegularExpressions::RegexOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Text::RegularExpressions::RegexOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::None{0};
constexpr System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::IgnoreCase{1};
constexpr System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::Multiline{2};
constexpr System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::ExplicitCapture{4};
constexpr System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::Compiled{8};
constexpr System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::Singleline{16};
constexpr System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::IgnorePatternWhitespace{32};
constexpr System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::RightToLeft{64};
constexpr System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::ECMAScript{256};
constexpr System::Text::RegularExpressions::RegexOptions  System::Text::RegularExpressions::RegexOptions::CultureInvariant{512};
