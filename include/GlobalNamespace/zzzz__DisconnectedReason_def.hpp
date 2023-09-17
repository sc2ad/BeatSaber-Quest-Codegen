#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct DisconnectedReason;
}
// Type: ::DisconnectedReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12662))
// CS Name: DisconnectedReason
struct CORDL_TYPE DisconnectedReason : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DisconnectedReason(int32_t value__) noexcept;


                    constexpr DisconnectedReason(DisconnectedReason const&) = default;
                    constexpr DisconnectedReason(DisconnectedReason&&) = default;
                    constexpr DisconnectedReason& operator=(DisconnectedReason const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DisconnectedReason& operator=(DisconnectedReason&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DisconnectedReason(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DisconnectedReason_Unwrapped : int32_t {
__Unknown = 1,
__UserInitiated = 2,
__Timeout = 3,
__Kicked = 4,
__ServerAtCapacity = 5,
__ServerConnectionClosed = 6,
__MasterServerUnreachable = 7,
__ClientConnectionClosed = 8,
__NetworkDisconnected = 9,
__ServerTerminated = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DisconnectedReason_Unwrapped () const noexcept {
return std::bit_cast<__DisconnectedReason_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::GlobalNamespace::DisconnectedReason const Unknown;

/// @brief Field UserInitiated offset 0
static ::GlobalNamespace::DisconnectedReason const UserInitiated;

/// @brief Field Timeout offset 0
static ::GlobalNamespace::DisconnectedReason const Timeout;

/// @brief Field Kicked offset 0
static ::GlobalNamespace::DisconnectedReason const Kicked;

/// @brief Field ServerAtCapacity offset 0
static ::GlobalNamespace::DisconnectedReason const ServerAtCapacity;

/// @brief Field ServerConnectionClosed offset 0
static ::GlobalNamespace::DisconnectedReason const ServerConnectionClosed;

/// @brief Field MasterServerUnreachable offset 0
static ::GlobalNamespace::DisconnectedReason const MasterServerUnreachable;

/// @brief Field ClientConnectionClosed offset 0
static ::GlobalNamespace::DisconnectedReason const ClientConnectionClosed;

/// @brief Field NetworkDisconnected offset 0
static ::GlobalNamespace::DisconnectedReason const NetworkDisconnected;

/// @brief Field ServerTerminated offset 0
static ::GlobalNamespace::DisconnectedReason const ServerTerminated;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisconnectedReason, "", "DisconnectedReason");
