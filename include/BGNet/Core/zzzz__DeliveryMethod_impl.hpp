#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::DeliveryMethod::DeliveryMethod(uint8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::BGNet::Core::DeliveryMethod::__set_value__(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::BGNet::Core::DeliveryMethod::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr ::BGNet::Core::DeliveryMethod  ::BGNet::Core::DeliveryMethod::Unreliable{0u};
constexpr ::BGNet::Core::DeliveryMethod  ::BGNet::Core::DeliveryMethod::ReliableOrdered{1u};
} // end anonymous namespace
