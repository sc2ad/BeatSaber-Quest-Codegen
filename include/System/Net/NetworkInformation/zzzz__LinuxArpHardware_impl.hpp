#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/NetworkInformation/zzzz__LinuxArpHardware_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::NetworkInformation::LinuxArpHardware::LinuxArpHardware(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::NetworkInformation::LinuxArpHardware::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::NetworkInformation::LinuxArpHardware::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::ETHER{1};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::EETHER{2};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::PRONET{4};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::ATM{19};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::SLIP{256};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::CSLIP{257};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::SLIP6{258};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::CSLIP6{259};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::PPP{512};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::LOOPBACK{772};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::FDDI{774};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::TUNNEL{768};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::TUNNEL6{769};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::SIT{776};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::IPDDP{777};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::IPGRE{778};
constexpr ::System::Net::NetworkInformation::LinuxArpHardware  ::System::Net::NetworkInformation::LinuxArpHardware::IP6GRE{823};
} // end anonymous namespace
