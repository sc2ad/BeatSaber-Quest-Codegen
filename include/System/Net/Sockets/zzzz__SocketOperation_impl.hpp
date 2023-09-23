#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Sockets::SocketOperation::SocketOperation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Sockets::SocketOperation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Sockets::SocketOperation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Accept{0};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Connect{1};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Receive{2};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::ReceiveFrom{3};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Send{4};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::SendTo{5};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::RecvJustCallback{6};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::SendJustCallback{7};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::Disconnect{8};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::AcceptReceive{9};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::ReceiveGeneric{10};
constexpr System::Net::Sockets::SocketOperation  System::Net::Sockets::SocketOperation::SendGeneric{11};
