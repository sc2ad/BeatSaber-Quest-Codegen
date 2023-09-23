#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__UInt32Enum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::UInt32Enum::UInt32Enum(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::UInt32Enum::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t System::UInt32Enum::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
