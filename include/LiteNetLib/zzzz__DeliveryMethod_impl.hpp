#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::DeliveryMethod::DeliveryMethod(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::LiteNetLib::DeliveryMethod::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::LiteNetLib::DeliveryMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::LiteNetLib::DeliveryMethod  ::LiteNetLib::DeliveryMethod::Unreliable{4u};
constexpr ::LiteNetLib::DeliveryMethod  ::LiteNetLib::DeliveryMethod::ReliableUnordered{0u};
constexpr ::LiteNetLib::DeliveryMethod  ::LiteNetLib::DeliveryMethod::Sequenced{1u};
constexpr ::LiteNetLib::DeliveryMethod  ::LiteNetLib::DeliveryMethod::ReliableOrdered{2u};
constexpr ::LiteNetLib::DeliveryMethod  ::LiteNetLib::DeliveryMethod::ReliableSequenced{3u};
} // end anonymous namespace
