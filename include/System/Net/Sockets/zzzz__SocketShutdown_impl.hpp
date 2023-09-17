#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/Sockets/zzzz__SocketShutdown_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketShutdown::SocketShutdown(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::Sockets::SocketShutdown::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::SocketShutdown::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::Sockets::SocketShutdown  ::System::Net::Sockets::SocketShutdown::Receive{0};
constexpr ::System::Net::Sockets::SocketShutdown  ::System::Net::Sockets::SocketShutdown::Send{1};
constexpr ::System::Net::Sockets::SocketShutdown  ::System::Net::Sockets::SocketShutdown::Both{2};
} // end anonymous namespace
