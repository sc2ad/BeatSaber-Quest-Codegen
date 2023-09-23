#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace ENet {
struct PeerState;
}
// Type: ENet::PeerState
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15255))
// CS Name: ENet.PeerState
struct CORDL_TYPE PeerState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeerState(int32_t value__) noexcept;


                    constexpr PeerState(PeerState const&) = default;
                    constexpr PeerState(PeerState&&) = default;
                    constexpr PeerState& operator=(PeerState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PeerState& operator=(PeerState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PeerState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PeerState_Unwrapped : int32_t {
__Uninitialized = -1,
__Disconnected = 0,
__Connecting = 1,
__AcknowledgingConnect = 2,
__ConnectionPending = 3,
__ConnectionSucceeded = 4,
__Connected = 5,
__DisconnectLater = 6,
__Disconnecting = 7,
__AcknowledgingDisconnect = 8,
__Zombie = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeerState_Unwrapped () const noexcept {
return std::bit_cast<__PeerState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Uninitialized offset 0
static ENet::PeerState const Uninitialized;

/// @brief Field Disconnected offset 0
static ENet::PeerState const Disconnected;

/// @brief Field Connecting offset 0
static ENet::PeerState const Connecting;

/// @brief Field AcknowledgingConnect offset 0
static ENet::PeerState const AcknowledgingConnect;

/// @brief Field ConnectionPending offset 0
static ENet::PeerState const ConnectionPending;

/// @brief Field ConnectionSucceeded offset 0
static ENet::PeerState const ConnectionSucceeded;

/// @brief Field Connected offset 0
static ENet::PeerState const Connected;

/// @brief Field DisconnectLater offset 0
static ENet::PeerState const DisconnectLater;

/// @brief Field Disconnecting offset 0
static ENet::PeerState const Disconnecting;

/// @brief Field AcknowledgingDisconnect offset 0
static ENet::PeerState const AcknowledgingDisconnect;

/// @brief Field Zombie offset 0
static ENet::PeerState const Zombie;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(ENet::PeerState, "ENet", "PeerState");
