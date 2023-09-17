#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LiteNetLib {
struct PacketProperty;
}
// Type: LiteNetLib::PacketProperty
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14449))
// CS Name: LiteNetLib.PacketProperty
struct CORDL_TYPE PacketProperty : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr PacketProperty(uint8_t value__) noexcept;


                    constexpr PacketProperty(PacketProperty const&) = default;
                    constexpr PacketProperty(PacketProperty&&) = default;
                    constexpr PacketProperty& operator=(PacketProperty const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PacketProperty& operator=(PacketProperty&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PacketProperty(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PacketProperty_Unwrapped : uint8_t {
__Unreliable = 0u,
__Channeled = 1u,
__Ack = 2u,
__Ping = 3u,
__Pong = 4u,
__ConnectRequest = 5u,
__ConnectAccept = 6u,
__Disconnect = 7u,
__UnconnectedMessage = 8u,
__MtuCheck = 9u,
__MtuOk = 10u,
__Broadcast = 11u,
__Merged = 12u,
__ShutdownOk = 13u,
__PeerNotFound = 14u,
__InvalidProtocol = 15u,
__NatMessage = 16u,
__Empty = 17u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PacketProperty_Unwrapped () const noexcept {
return std::bit_cast<__PacketProperty_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Unreliable offset 0
static ::LiteNetLib::PacketProperty const Unreliable;

/// @brief Field Channeled offset 0
static ::LiteNetLib::PacketProperty const Channeled;

/// @brief Field Ack offset 0
static ::LiteNetLib::PacketProperty const Ack;

/// @brief Field Ping offset 0
static ::LiteNetLib::PacketProperty const Ping;

/// @brief Field Pong offset 0
static ::LiteNetLib::PacketProperty const Pong;

/// @brief Field ConnectRequest offset 0
static ::LiteNetLib::PacketProperty const ConnectRequest;

/// @brief Field ConnectAccept offset 0
static ::LiteNetLib::PacketProperty const ConnectAccept;

/// @brief Field Disconnect offset 0
static ::LiteNetLib::PacketProperty const Disconnect;

/// @brief Field UnconnectedMessage offset 0
static ::LiteNetLib::PacketProperty const UnconnectedMessage;

/// @brief Field MtuCheck offset 0
static ::LiteNetLib::PacketProperty const MtuCheck;

/// @brief Field MtuOk offset 0
static ::LiteNetLib::PacketProperty const MtuOk;

/// @brief Field Broadcast offset 0
static ::LiteNetLib::PacketProperty const Broadcast;

/// @brief Field Merged offset 0
static ::LiteNetLib::PacketProperty const Merged;

/// @brief Field ShutdownOk offset 0
static ::LiteNetLib::PacketProperty const ShutdownOk;

/// @brief Field PeerNotFound offset 0
static ::LiteNetLib::PacketProperty const PeerNotFound;

/// @brief Field InvalidProtocol offset 0
static ::LiteNetLib::PacketProperty const InvalidProtocol;

/// @brief Field NatMessage offset 0
static ::LiteNetLib::PacketProperty const NatMessage;

/// @brief Field Empty offset 0
static ::LiteNetLib::PacketProperty const Empty;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::PacketProperty, "LiteNetLib", "PacketProperty");
