#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Diagnostics/zzzz__ProcessWindowStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::ProcessWindowStyle::ProcessWindowStyle(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Diagnostics::ProcessWindowStyle::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Diagnostics::ProcessWindowStyle::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Diagnostics::ProcessWindowStyle  ::System::Diagnostics::ProcessWindowStyle::Hidden{1};
constexpr ::System::Diagnostics::ProcessWindowStyle  ::System::Diagnostics::ProcessWindowStyle::Maximized{3};
constexpr ::System::Diagnostics::ProcessWindowStyle  ::System::Diagnostics::ProcessWindowStyle::Minimized{2};
constexpr ::System::Diagnostics::ProcessWindowStyle  ::System::Diagnostics::ProcessWindowStyle::Normal{0};
} // end anonymous namespace
