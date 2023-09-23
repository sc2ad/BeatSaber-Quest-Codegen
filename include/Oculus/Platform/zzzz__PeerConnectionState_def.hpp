#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct PeerConnectionState;
}
// Type: Oculus.Platform::PeerConnectionState
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13307))
// CS Name: Oculus.Platform.PeerConnectionState
struct CORDL_TYPE PeerConnectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeerConnectionState(int32_t value__) noexcept;


                    constexpr PeerConnectionState(PeerConnectionState const&) = default;
                    constexpr PeerConnectionState(PeerConnectionState&&) = default;
                    constexpr PeerConnectionState& operator=(PeerConnectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PeerConnectionState& operator=(PeerConnectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PeerConnectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PeerConnectionState_Unwrapped : int32_t {
__Unknown = 0,
__Connected = 1,
__Timeout = 2,
__Closed = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeerConnectionState_Unwrapped () const noexcept {
return std::bit_cast<__PeerConnectionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::PeerConnectionState const Unknown;

/// @brief Field Connected offset 0
static Oculus::Platform::PeerConnectionState const Connected;

/// @brief Field Timeout offset 0
static Oculus::Platform::PeerConnectionState const Timeout;

/// @brief Field Closed offset 0
static Oculus::Platform::PeerConnectionState const Closed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PeerConnectionState, "Oculus.Platform", "PeerConnectionState");
