#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsArpHardware_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::NetworkInformation::MacOsArpHardware::MacOsArpHardware(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::NetworkInformation::MacOsArpHardware::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::NetworkInformation::MacOsArpHardware::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::ETHER{6};
constexpr System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::ATM{37};
constexpr System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::SLIP{28};
constexpr System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::PPP{23};
constexpr System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::LOOPBACK{24};
constexpr System::Net::NetworkInformation::MacOsArpHardware  System::Net::NetworkInformation::MacOsArpHardware::FDDI{15};
