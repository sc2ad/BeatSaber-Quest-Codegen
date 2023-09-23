#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "ENet/zzzz__EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ENet::EventType::EventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ENet::EventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ENet::EventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ENet::EventType  ENet::EventType::None{0};
constexpr ENet::EventType  ENet::EventType::Connect{1};
constexpr ENet::EventType  ENet::EventType::Disconnect{2};
constexpr ENet::EventType  ENet::EventType::Receive{3};
constexpr ENet::EventType  ENet::EventType::Timeout{4};
