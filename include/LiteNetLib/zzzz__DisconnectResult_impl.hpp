#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LiteNetLib/zzzz__DisconnectResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::DisconnectResult::DisconnectResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LiteNetLib::DisconnectResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::DisconnectResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::LiteNetLib::DisconnectResult  ::LiteNetLib::DisconnectResult::None{0};
constexpr ::LiteNetLib::DisconnectResult  ::LiteNetLib::DisconnectResult::Reject{1};
constexpr ::LiteNetLib::DisconnectResult  ::LiteNetLib::DisconnectResult::Disconnect{2};
} // end anonymous namespace
