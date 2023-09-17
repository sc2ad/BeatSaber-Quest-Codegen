#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__SByteEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::SByteEnum::SByteEnum(int8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::SByteEnum::__set_value__(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x0>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t ::System::SByteEnum::__get_value__() const {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->__instance);
}
} // end anonymous namespace
