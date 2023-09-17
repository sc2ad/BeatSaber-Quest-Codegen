#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LiteNetLib/zzzz__ConnectionRequestResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::ConnectionRequestResult::ConnectionRequestResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LiteNetLib::ConnectionRequestResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::ConnectionRequestResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::LiteNetLib::ConnectionRequestResult  ::LiteNetLib::ConnectionRequestResult::None{0};
constexpr ::LiteNetLib::ConnectionRequestResult  ::LiteNetLib::ConnectionRequestResult::Accept{1};
constexpr ::LiteNetLib::ConnectionRequestResult  ::LiteNetLib::ConnectionRequestResult::Reject{2};
constexpr ::LiteNetLib::ConnectionRequestResult  ::LiteNetLib::ConnectionRequestResult::RejectForce{3};
} // end anonymous namespace
