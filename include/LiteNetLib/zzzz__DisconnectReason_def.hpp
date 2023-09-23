#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace LiteNetLib {
struct DisconnectReason;
}
// Type: LiteNetLib::DisconnectReason
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14412))
// CS Name: LiteNetLib.DisconnectReason
struct CORDL_TYPE DisconnectReason : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DisconnectReason(int32_t value__) noexcept;


                    constexpr DisconnectReason(DisconnectReason const&) = default;
                    constexpr DisconnectReason(DisconnectReason&&) = default;
                    constexpr DisconnectReason& operator=(DisconnectReason const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DisconnectReason& operator=(DisconnectReason&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DisconnectReason(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DisconnectReason_Unwrapped : int32_t {
__ConnectionFailed = 0,
__Timeout = 1,
__HostUnreachable = 2,
__NetworkUnreachable = 3,
__RemoteConnectionClose = 4,
__DisconnectPeerCalled = 5,
__ConnectionRejected = 6,
__InvalidProtocol = 7,
__UnknownHost = 8,
__Reconnect = 9,
__PeerToPeerConnection = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DisconnectReason_Unwrapped () const noexcept {
return std::bit_cast<__DisconnectReason_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ConnectionFailed offset 0
static LiteNetLib::DisconnectReason const ConnectionFailed;

/// @brief Field Timeout offset 0
static LiteNetLib::DisconnectReason const Timeout;

/// @brief Field HostUnreachable offset 0
static LiteNetLib::DisconnectReason const HostUnreachable;

/// @brief Field NetworkUnreachable offset 0
static LiteNetLib::DisconnectReason const NetworkUnreachable;

/// @brief Field RemoteConnectionClose offset 0
static LiteNetLib::DisconnectReason const RemoteConnectionClose;

/// @brief Field DisconnectPeerCalled offset 0
static LiteNetLib::DisconnectReason const DisconnectPeerCalled;

/// @brief Field ConnectionRejected offset 0
static LiteNetLib::DisconnectReason const ConnectionRejected;

/// @brief Field InvalidProtocol offset 0
static LiteNetLib::DisconnectReason const InvalidProtocol;

/// @brief Field UnknownHost offset 0
static LiteNetLib::DisconnectReason const UnknownHost;

/// @brief Field Reconnect offset 0
static LiteNetLib::DisconnectReason const Reconnect;

/// @brief Field PeerToPeerConnection offset 0
static LiteNetLib::DisconnectReason const PeerToPeerConnection;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::DisconnectReason, "LiteNetLib", "DisconnectReason");
