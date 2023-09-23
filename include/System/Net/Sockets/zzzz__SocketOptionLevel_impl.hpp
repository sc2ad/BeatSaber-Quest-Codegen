#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketOptionLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Sockets::SocketOptionLevel::SocketOptionLevel(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Sockets::SocketOptionLevel::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketOptionLevel::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Sockets::SocketOptionLevel  System::Net::Sockets::SocketOptionLevel::Socket{65535};
constexpr System::Net::Sockets::SocketOptionLevel  System::Net::Sockets::SocketOptionLevel::IP{0};
constexpr System::Net::Sockets::SocketOptionLevel  System::Net::Sockets::SocketOptionLevel::IPv6{41};
constexpr System::Net::Sockets::SocketOptionLevel  System::Net::Sockets::SocketOptionLevel::Tcp{6};
constexpr System::Net::Sockets::SocketOptionLevel  System::Net::Sockets::SocketOptionLevel::Udp{17};
