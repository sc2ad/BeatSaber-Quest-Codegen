#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__ParseFailureKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ParseFailureKind::ParseFailureKind(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::ParseFailureKind::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::ParseFailureKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::ParseFailureKind  ::System::ParseFailureKind::None{0};
constexpr ::System::ParseFailureKind  ::System::ParseFailureKind::ArgumentNull{1};
constexpr ::System::ParseFailureKind  ::System::ParseFailureKind::Format{2};
constexpr ::System::ParseFailureKind  ::System::ParseFailureKind::FormatWithParameter{3};
constexpr ::System::ParseFailureKind  ::System::ParseFailureKind::FormatWithOriginalDateTime{4};
constexpr ::System::ParseFailureKind  ::System::ParseFailureKind::FormatWithFormatSpecifier{5};
constexpr ::System::ParseFailureKind  ::System::ParseFailureKind::FormatWithOriginalDateTimeAndParameter{6};
constexpr ::System::ParseFailureKind  ::System::ParseFailureKind::FormatBadDateTimeCalendar{7};
} // end anonymous namespace
