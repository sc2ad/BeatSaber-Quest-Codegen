#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "BGNet/Core/Messages/zzzz__HandshakeMessageType_def.hpp"
namespace {
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::HandshakeMessageType::HandshakeMessageType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BGNet::Core::Messages::HandshakeMessageType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::HandshakeMessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr BGNet::Core::Messages::HandshakeMessageType  BGNet::Core::Messages::HandshakeMessageType::ClientHelloRequest{0};
constexpr BGNet::Core::Messages::HandshakeMessageType  BGNet::Core::Messages::HandshakeMessageType::HelloVerifyRequest{1};
constexpr BGNet::Core::Messages::HandshakeMessageType  BGNet::Core::Messages::HandshakeMessageType::ClientHelloWithCookieRequest{2};
constexpr BGNet::Core::Messages::HandshakeMessageType  BGNet::Core::Messages::HandshakeMessageType::ServerHelloRequest{3};
constexpr BGNet::Core::Messages::HandshakeMessageType  BGNet::Core::Messages::HandshakeMessageType::ServerCertificateRequest{4};
constexpr BGNet::Core::Messages::HandshakeMessageType  BGNet::Core::Messages::HandshakeMessageType::ClientKeyExchangeRequest{6};
constexpr BGNet::Core::Messages::HandshakeMessageType  BGNet::Core::Messages::HandshakeMessageType::ChangeCipherSpecRequest{7};
constexpr BGNet::Core::Messages::HandshakeMessageType  BGNet::Core::Messages::HandshakeMessageType::MessageReceivedAcknowledge{8};
constexpr BGNet::Core::Messages::HandshakeMessageType  BGNet::Core::Messages::HandshakeMessageType::MultipartMessage{9};
} // end anonymous namespace
