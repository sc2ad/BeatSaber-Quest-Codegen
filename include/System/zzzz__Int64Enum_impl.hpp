#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__Int64Enum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Int64Enum::Int64Enum(int64_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Int64Enum::__set_value__(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::Int64Enum::__get_value__() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
} // end anonymous namespace
