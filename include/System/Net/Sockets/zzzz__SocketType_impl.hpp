#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Sockets::SocketType::SocketType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Sockets::SocketType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Stream{1};
constexpr System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Dgram{2};
constexpr System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Raw{3};
constexpr System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Rdm{4};
constexpr System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Seqpacket{5};
constexpr System::Net::Sockets::SocketType  System::Net::Sockets::SocketType::Unknown{-1};
