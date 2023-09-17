#pragma once
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
namespace {
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableResponse
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator BGNet::Core::Messages::IUnconnectedReliableResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableResponse(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedReliableRequest
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator BGNet::Core::Messages::IUnconnectedReliableRequest() const noexcept {
return BGNet::Core::Messages::IUnconnectedReliableRequest(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator BGNet::Core::Messages::IUnconnectedMessage() const noexcept {
return BGNet::Core::Messages::IUnconnectedMessage(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator LiteNetLib::Utils::INetSerializable() const noexcept {
return LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator GlobalNamespace::IPoolablePacket() const noexcept {
return GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedResponse
constexpr  BGNet::Core::Messages::IUnconnectedAuthenticateRequest::operator BGNet::Core::Messages::IUnconnectedResponse() const noexcept {
return BGNet::Core::Messages::IUnconnectedResponse(::bs_hook::Il2CppWrapperType::instance);
}
} // end anonymous namespace
