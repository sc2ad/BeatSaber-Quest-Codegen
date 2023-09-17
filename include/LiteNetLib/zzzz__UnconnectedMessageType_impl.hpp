#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LiteNetLib/zzzz__UnconnectedMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::UnconnectedMessageType::UnconnectedMessageType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LiteNetLib::UnconnectedMessageType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LiteNetLib::UnconnectedMessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::LiteNetLib::UnconnectedMessageType  ::LiteNetLib::UnconnectedMessageType::BasicMessage{0};
constexpr ::LiteNetLib::UnconnectedMessageType  ::LiteNetLib::UnconnectedMessageType::Broadcast{1};
} // end anonymous namespace
