#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Sockets::AddressFamily::AddressFamily(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Sockets::AddressFamily::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::AddressFamily::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Unknown{-1};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Unspecified{0};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Unix{1};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::InterNetwork{2};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::ImpLink{3};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Pup{4};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Chaos{5};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::NS{6};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Ipx{6};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Iso{7};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Osi{7};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Ecma{8};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::DataKit{9};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Ccitt{10};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Sna{11};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::DecNet{12};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::DataLink{13};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Lat{14};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::HyperChannel{15};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::AppleTalk{16};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::NetBios{17};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::VoiceView{18};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::FireFox{19};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Banyan{21};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Atm{22};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::InterNetworkV6{23};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Cluster{24};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Ieee12844{25};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Irda{26};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::NetworkDesigners{28};
constexpr System::Net::Sockets::AddressFamily  System::Net::Sockets::AddressFamily::Max{29};
