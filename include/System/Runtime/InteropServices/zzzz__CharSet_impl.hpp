#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/InteropServices/zzzz__CharSet_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::CharSet::CharSet(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::InteropServices::CharSet::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::InteropServices::CharSet::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::InteropServices::CharSet  ::System::Runtime::InteropServices::CharSet::None{1};
constexpr ::System::Runtime::InteropServices::CharSet  ::System::Runtime::InteropServices::CharSet::Ansi{2};
constexpr ::System::Runtime::InteropServices::CharSet  ::System::Runtime::InteropServices::CharSet::Unicode{3};
constexpr ::System::Runtime::InteropServices::CharSet  ::System::Runtime::InteropServices::CharSet::Auto{4};
} // end anonymous namespace
