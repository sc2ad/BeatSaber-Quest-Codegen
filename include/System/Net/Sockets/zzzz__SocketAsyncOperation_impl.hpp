#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketAsyncOperation::SocketAsyncOperation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::Sockets::SocketAsyncOperation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::SocketAsyncOperation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::Sockets::SocketAsyncOperation  ::System::Net::Sockets::SocketAsyncOperation::None{0};
constexpr ::System::Net::Sockets::SocketAsyncOperation  ::System::Net::Sockets::SocketAsyncOperation::Accept{1};
constexpr ::System::Net::Sockets::SocketAsyncOperation  ::System::Net::Sockets::SocketAsyncOperation::Connect{2};
constexpr ::System::Net::Sockets::SocketAsyncOperation  ::System::Net::Sockets::SocketAsyncOperation::Disconnect{3};
constexpr ::System::Net::Sockets::SocketAsyncOperation  ::System::Net::Sockets::SocketAsyncOperation::Receive{4};
constexpr ::System::Net::Sockets::SocketAsyncOperation  ::System::Net::Sockets::SocketAsyncOperation::ReceiveFrom{5};
constexpr ::System::Net::Sockets::SocketAsyncOperation  ::System::Net::Sockets::SocketAsyncOperation::ReceiveMessageFrom{6};
constexpr ::System::Net::Sockets::SocketAsyncOperation  ::System::Net::Sockets::SocketAsyncOperation::Send{7};
constexpr ::System::Net::Sockets::SocketAsyncOperation  ::System::Net::Sockets::SocketAsyncOperation::SendPackets{8};
constexpr ::System::Net::Sockets::SocketAsyncOperation  ::System::Net::Sockets::SocketAsyncOperation::SendTo{9};
} // end anonymous namespace
