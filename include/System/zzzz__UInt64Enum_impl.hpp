#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__UInt64Enum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr System::UInt64Enum::UInt64Enum(uint64_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::UInt64Enum::__set_value__(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t System::UInt64Enum::__get_value__() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
