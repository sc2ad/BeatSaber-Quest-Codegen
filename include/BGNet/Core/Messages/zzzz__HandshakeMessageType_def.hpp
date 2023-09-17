#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace BGNet::Core::Messages {
struct HandshakeMessageType;
}
namespace {
// Type: BGNet.Core.Messages::HandshakeMessageType
namespace BGNet::Core::Messages {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12965))
// CS Name: BGNet.Core.Messages.HandshakeMessageType
struct CORDL_TYPE HandshakeMessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HandshakeMessageType(int32_t value__) noexcept;


                    constexpr HandshakeMessageType(HandshakeMessageType const&) = default;
                    constexpr HandshakeMessageType(HandshakeMessageType&&) = default;
                    constexpr HandshakeMessageType& operator=(HandshakeMessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HandshakeMessageType& operator=(HandshakeMessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HandshakeMessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HandshakeMessageType_Unwrapped : int32_t {
__ClientHelloRequest = 0,
__HelloVerifyRequest = 1,
__ClientHelloWithCookieRequest = 2,
__ServerHelloRequest = 3,
__ServerCertificateRequest = 4,
__ClientKeyExchangeRequest = 6,
__ChangeCipherSpecRequest = 7,
__MessageReceivedAcknowledge = 8,
__MultipartMessage = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandshakeMessageType_Unwrapped () const noexcept {
return std::bit_cast<__HandshakeMessageType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ClientHelloRequest offset 0
static BGNet::Core::Messages::HandshakeMessageType const ClientHelloRequest;

/// @brief Field HelloVerifyRequest offset 0
static BGNet::Core::Messages::HandshakeMessageType const HelloVerifyRequest;

/// @brief Field ClientHelloWithCookieRequest offset 0
static BGNet::Core::Messages::HandshakeMessageType const ClientHelloWithCookieRequest;

/// @brief Field ServerHelloRequest offset 0
static BGNet::Core::Messages::HandshakeMessageType const ServerHelloRequest;

/// @brief Field ServerCertificateRequest offset 0
static BGNet::Core::Messages::HandshakeMessageType const ServerCertificateRequest;

/// @brief Field ClientKeyExchangeRequest offset 0
static BGNet::Core::Messages::HandshakeMessageType const ClientKeyExchangeRequest;

/// @brief Field ChangeCipherSpecRequest offset 0
static BGNet::Core::Messages::HandshakeMessageType const ChangeCipherSpecRequest;

/// @brief Field MessageReceivedAcknowledge offset 0
static BGNet::Core::Messages::HandshakeMessageType const MessageReceivedAcknowledge;

/// @brief Field MultipartMessage offset 0
static BGNet::Core::Messages::HandshakeMessageType const MultipartMessage;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::HandshakeMessageType, "BGNet.Core.Messages", "HandshakeMessageType");
} // end anonymous namespace
