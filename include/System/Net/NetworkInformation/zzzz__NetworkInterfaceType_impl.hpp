#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::NetworkInformation::NetworkInterfaceType::NetworkInterfaceType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::NetworkInformation::NetworkInterfaceType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::NetworkInformation::NetworkInterfaceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Unknown{1};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Ethernet{6};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::TokenRing{9};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Fddi{15};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::BasicIsdn{20};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::PrimaryIsdn{21};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Ppp{23};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Loopback{24};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Ethernet3Megabit{26};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Slip{28};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Atm{37};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::GenericModem{48};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::FastEthernetT{62};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Isdn{63};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::FastEthernetFx{69};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Wireless80211{71};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::AsymmetricDsl{94};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::RateAdaptDsl{95};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::SymmetricDsl{96};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::VeryHighSpeedDsl{97};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::IPOverAtm{114};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::GigabitEthernet{117};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Tunnel{131};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::MultiRateSymmetricDsl{143};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::HighPerformanceSerialBus{144};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Wman{237};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Wwanpp{243};
constexpr System::Net::NetworkInformation::NetworkInterfaceType  System::Net::NetworkInformation::NetworkInterfaceType::Wwanpp2{244};
