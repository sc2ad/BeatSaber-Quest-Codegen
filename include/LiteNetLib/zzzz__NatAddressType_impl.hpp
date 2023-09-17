#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LiteNetLib/zzzz__NatAddressType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::NatAddressType::NatAddressType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LiteNetLib::NatAddressType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::NatAddressType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::LiteNetLib::NatAddressType  ::LiteNetLib::NatAddressType::Internal{0};
constexpr ::LiteNetLib::NatAddressType  ::LiteNetLib::NatAddressType::External{1};
} // end anonymous namespace
