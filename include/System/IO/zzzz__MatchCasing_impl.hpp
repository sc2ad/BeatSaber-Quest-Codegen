#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/IO/zzzz__MatchCasing_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::MatchCasing::MatchCasing(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::IO::MatchCasing::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::IO::MatchCasing::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::IO::MatchCasing  ::System::IO::MatchCasing::PlatformDefault{0};
constexpr ::System::IO::MatchCasing  ::System::IO::MatchCasing::CaseSensitive{1};
constexpr ::System::IO::MatchCasing  ::System::IO::MatchCasing::CaseInsensitive{2};
} // end anonymous namespace
