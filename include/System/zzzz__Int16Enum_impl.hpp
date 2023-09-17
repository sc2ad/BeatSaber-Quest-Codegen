#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__Int16Enum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Int16Enum::Int16Enum(int16_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Int16Enum::__set_value__(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t ::System::Int16Enum::__get_value__() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->__instance);
}
} // end anonymous namespace
