#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace LiteNetLib {
struct ConnectionState;
}
// Type: LiteNetLib::ConnectionState
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14454))
// CS Name: LiteNetLib.ConnectionState
struct CORDL_TYPE ConnectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ConnectionState(uint8_t value__) noexcept;


                    constexpr ConnectionState(ConnectionState const&) = default;
                    constexpr ConnectionState(ConnectionState&&) = default;
                    constexpr ConnectionState& operator=(ConnectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConnectionState& operator=(ConnectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConnectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConnectionState_Unwrapped : uint8_t {
__Outgoing = 2u,
__Connected = 4u,
__ShutdownRequested = 8u,
__Disconnected = 16u,
__Any = 14u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionState_Unwrapped () const noexcept {
return std::bit_cast<__ConnectionState_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Outgoing offset 0
static LiteNetLib::ConnectionState const Outgoing;

/// @brief Field Connected offset 0
static LiteNetLib::ConnectionState const Connected;

/// @brief Field ShutdownRequested offset 0
static LiteNetLib::ConnectionState const ShutdownRequested;

/// @brief Field Disconnected offset 0
static LiteNetLib::ConnectionState const Disconnected;

/// @brief Field Any offset 0
static LiteNetLib::ConnectionState const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::ConnectionState, "LiteNetLib", "ConnectionState");
