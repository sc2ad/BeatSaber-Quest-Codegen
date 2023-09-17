#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LiteNetLib/zzzz__LocalAddrType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::LocalAddrType::LocalAddrType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LiteNetLib::LocalAddrType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::LocalAddrType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::LiteNetLib::LocalAddrType  ::LiteNetLib::LocalAddrType::IPv4{1};
constexpr ::LiteNetLib::LocalAddrType  ::LiteNetLib::LocalAddrType::IPv6{2};
constexpr ::LiteNetLib::LocalAddrType  ::LiteNetLib::LocalAddrType::All{3};
} // end anonymous namespace
