#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct NetSyncConnectionStatus;
}
// Type: Oculus.Platform::NetSyncConnectionStatus
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13299))
// CS Name: Oculus.Platform.NetSyncConnectionStatus
struct CORDL_TYPE NetSyncConnectionStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetSyncConnectionStatus(int32_t value__) noexcept;


                    constexpr NetSyncConnectionStatus(NetSyncConnectionStatus const&) = default;
                    constexpr NetSyncConnectionStatus(NetSyncConnectionStatus&&) = default;
                    constexpr NetSyncConnectionStatus& operator=(NetSyncConnectionStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NetSyncConnectionStatus& operator=(NetSyncConnectionStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NetSyncConnectionStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NetSyncConnectionStatus_Unwrapped : int32_t {
__Unknown = 0,
__Connecting = 1,
__Disconnected = 2,
__Connected = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetSyncConnectionStatus_Unwrapped () const noexcept {
return std::bit_cast<__NetSyncConnectionStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::NetSyncConnectionStatus const Unknown;

/// @brief Field Connecting offset 0
static Oculus::Platform::NetSyncConnectionStatus const Connecting;

/// @brief Field Disconnected offset 0
static Oculus::Platform::NetSyncConnectionStatus const Disconnected;

/// @brief Field Connected offset 0
static Oculus::Platform::NetSyncConnectionStatus const Connected;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSyncConnectionStatus, "Oculus.Platform", "NetSyncConnectionStatus");
