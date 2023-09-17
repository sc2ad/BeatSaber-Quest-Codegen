#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
struct NetSyncDisconnectReason;
}
// Type: Oculus.Platform::NetSyncDisconnectReason
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13300))
// CS Name: Oculus.Platform.NetSyncDisconnectReason
struct CORDL_TYPE NetSyncDisconnectReason : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetSyncDisconnectReason(int32_t value__) noexcept;


                    constexpr NetSyncDisconnectReason(NetSyncDisconnectReason const&) = default;
                    constexpr NetSyncDisconnectReason(NetSyncDisconnectReason&&) = default;
                    constexpr NetSyncDisconnectReason& operator=(NetSyncDisconnectReason const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NetSyncDisconnectReason& operator=(NetSyncDisconnectReason&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NetSyncDisconnectReason(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NetSyncDisconnectReason_Unwrapped : int32_t {
__Unknown = 0,
__LocalTerminated = 1,
__ServerTerminated = 2,
__Failed = 3,
__Lost = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetSyncDisconnectReason_Unwrapped () const noexcept {
return std::bit_cast<__NetSyncDisconnectReason_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::NetSyncDisconnectReason const Unknown;

/// @brief Field LocalTerminated offset 0
static ::Oculus::Platform::NetSyncDisconnectReason const LocalTerminated;

/// @brief Field ServerTerminated offset 0
static ::Oculus::Platform::NetSyncDisconnectReason const ServerTerminated;

/// @brief Field Failed offset 0
static ::Oculus::Platform::NetSyncDisconnectReason const Failed;

/// @brief Field Lost offset 0
static ::Oculus::Platform::NetSyncDisconnectReason const Lost;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSyncDisconnectReason, "Oculus.Platform", "NetSyncDisconnectReason");
