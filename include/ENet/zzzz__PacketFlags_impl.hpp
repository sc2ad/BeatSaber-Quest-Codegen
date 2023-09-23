#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "ENet/zzzz__PacketFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ENet::PacketFlags::PacketFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ENet::PacketFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ENet::PacketFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ENet::PacketFlags  ENet::PacketFlags::None{0};
constexpr ENet::PacketFlags  ENet::PacketFlags::Reliable{1};
constexpr ENet::PacketFlags  ENet::PacketFlags::Unsequenced{2};
constexpr ENet::PacketFlags  ENet::PacketFlags::NoAllocate{4};
constexpr ENet::PacketFlags  ENet::PacketFlags::UnreliableFragmented{8};
constexpr ENet::PacketFlags  ENet::PacketFlags::Instant{16};
constexpr ENet::PacketFlags  ENet::PacketFlags::Unthrottled{32};
constexpr ENet::PacketFlags  ENet::PacketFlags::Sent{256};
