#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/Sockets/zzzz__ProtocolType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::ProtocolType::ProtocolType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::Sockets::ProtocolType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::ProtocolType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IP{0};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IPv6HopByHopOptions{0};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Icmp{1};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Igmp{2};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Ggp{3};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IPv4{4};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Tcp{6};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Pup{12};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Udp{17};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Idp{22};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IPv6{41};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IPv6RoutingHeader{43};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IPv6FragmentHeader{44};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IPSecEncapsulatingSecurityPayload{50};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IPSecAuthenticationHeader{51};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IcmpV6{58};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IPv6NoNextHeader{59};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::IPv6DestinationOptions{60};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::ND{77};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Raw{255};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Unspecified{0};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Ipx{1000};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Spx{1256};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::SpxII{1257};
constexpr ::System::Net::Sockets::ProtocolType  ::System::Net::Sockets::ProtocolType::Unknown{-1};
} // end anonymous namespace
