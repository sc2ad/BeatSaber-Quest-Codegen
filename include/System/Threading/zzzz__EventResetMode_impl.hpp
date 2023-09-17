#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Threading/zzzz__EventResetMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::EventResetMode::EventResetMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::EventResetMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::EventResetMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::EventResetMode  ::System::Threading::EventResetMode::AutoReset{0};
constexpr ::System::Threading::EventResetMode  ::System::Threading::EventResetMode::ManualReset{1};
} // end anonymous namespace
