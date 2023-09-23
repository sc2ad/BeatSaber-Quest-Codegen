#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Sockets::SocketFlags::SocketFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Sockets::SocketFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::None{0};
constexpr System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::OutOfBand{1};
constexpr System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Peek{2};
constexpr System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::DontRoute{4};
constexpr System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::MaxIOVectorLength{16};
constexpr System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Truncated{256};
constexpr System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::ControlDataTruncated{512};
constexpr System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Broadcast{1024};
constexpr System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Multicast{2048};
constexpr System::Net::Sockets::SocketFlags  System::Net::Sockets::SocketFlags::Partial{32768};
