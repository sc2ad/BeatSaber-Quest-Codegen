#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LiteNetLib/zzzz__ConnectRequestResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::ConnectRequestResult::ConnectRequestResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LiteNetLib::ConnectRequestResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::ConnectRequestResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::LiteNetLib::ConnectRequestResult  ::LiteNetLib::ConnectRequestResult::None{0};
constexpr ::LiteNetLib::ConnectRequestResult  ::LiteNetLib::ConnectRequestResult::P2PLose{1};
constexpr ::LiteNetLib::ConnectRequestResult  ::LiteNetLib::ConnectRequestResult::Reconnection{2};
constexpr ::LiteNetLib::ConnectRequestResult  ::LiteNetLib::ConnectRequestResult::NewConnection{3};
} // end anonymous namespace