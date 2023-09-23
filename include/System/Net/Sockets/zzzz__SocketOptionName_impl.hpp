#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketOptionName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Sockets::SocketOptionName::SocketOptionName(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Sockets::SocketOptionName::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketOptionName::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Debug{1};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::AcceptConnection{2};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ReuseAddress{4};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::KeepAlive{8};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::DontRoute{16};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Broadcast{32};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::UseLoopback{64};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Linger{128};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::OutOfBandInline{256};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::DontLinger{-129};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ExclusiveAddressUse{-5};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::SendBuffer{4097};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ReceiveBuffer{4098};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::SendLowWater{4099};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ReceiveLowWater{4100};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::SendTimeout{4101};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ReceiveTimeout{4102};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Error{4103};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Type{4104};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ReuseUnicastPort{12295};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::MaxConnections{2147483647};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::IPOptions{1};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::HeaderIncluded{2};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::TypeOfService{3};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::IpTimeToLive{4};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::MulticastInterface{9};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::MulticastTimeToLive{10};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::MulticastLoopback{11};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::AddMembership{12};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::DropMembership{13};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::DontFragment{14};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::AddSourceMembership{15};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::DropSourceMembership{16};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::BlockSource{17};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::UnblockSource{18};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::PacketInformation{19};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::HopLimit{21};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::IPProtectionLevel{23};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::IPv6Only{27};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::NoDelay{1};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::BsdUrgent{2};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::Expedited{2};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::NoChecksum{1};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::ChecksumCoverage{20};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::UpdateAcceptContext{28683};
constexpr System::Net::Sockets::SocketOptionName  System::Net::Sockets::SocketOptionName::UpdateConnectContext{28688};
