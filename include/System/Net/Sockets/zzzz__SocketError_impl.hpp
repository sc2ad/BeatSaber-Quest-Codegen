#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::SocketError::SocketError(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::Sockets::SocketError::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::Sockets::SocketError::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::Success{0};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::SocketError{-1};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::Interrupted{10004};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::AccessDenied{10013};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::Fault{10014};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::InvalidArgument{10022};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::TooManyOpenSockets{10024};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::WouldBlock{10035};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::InProgress{10036};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::AlreadyInProgress{10037};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::NotSocket{10038};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::DestinationAddressRequired{10039};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::MessageSize{10040};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::ProtocolType{10041};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::ProtocolOption{10042};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::ProtocolNotSupported{10043};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::SocketNotSupported{10044};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::OperationNotSupported{10045};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::ProtocolFamilyNotSupported{10046};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::AddressFamilyNotSupported{10047};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::AddressAlreadyInUse{10048};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::AddressNotAvailable{10049};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::NetworkDown{10050};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::NetworkUnreachable{10051};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::NetworkReset{10052};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::ConnectionAborted{10053};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::ConnectionReset{10054};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::NoBufferSpaceAvailable{10055};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::IsConnected{10056};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::NotConnected{10057};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::Shutdown{10058};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::TimedOut{10060};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::ConnectionRefused{10061};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::HostDown{10064};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::HostUnreachable{10065};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::ProcessLimit{10067};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::SystemNotReady{10091};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::VersionNotSupported{10092};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::NotInitialized{10093};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::Disconnecting{10101};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::TypeNotFound{10109};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::HostNotFound{11001};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::TryAgain{11002};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::NoRecovery{11003};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::NoData{11004};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::IOPending{997};
constexpr ::System::Net::Sockets::SocketError  ::System::Net::Sockets::SocketError::OperationAborted{995};
} // end anonymous namespace
