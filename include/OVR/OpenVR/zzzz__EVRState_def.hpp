#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRState;
}
// Type: OVR.OpenVR::EVRState
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9373))
// CS Name: OVR.OpenVR.EVRState
struct CORDL_TYPE EVRState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRState(int32_t value__) noexcept;


                    constexpr EVRState(EVRState const&) = default;
                    constexpr EVRState(EVRState&&) = default;
                    constexpr EVRState& operator=(EVRState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRState& operator=(EVRState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRState_Unwrapped : int32_t {
__Undefined = -1,
__Off = 0,
__Searching = 1,
__Searching_Alert = 2,
__Ready = 3,
__Ready_Alert = 4,
__NotReady = 5,
__Standby = 6,
__Ready_Alert_Low = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRState_Unwrapped () const noexcept {
return std::bit_cast<__EVRState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Undefined offset 0
static OVR::OpenVR::EVRState const Undefined;

/// @brief Field Off offset 0
static OVR::OpenVR::EVRState const Off;

/// @brief Field Searching offset 0
static OVR::OpenVR::EVRState const Searching;

/// @brief Field Searching_Alert offset 0
static OVR::OpenVR::EVRState const Searching_Alert;

/// @brief Field Ready offset 0
static OVR::OpenVR::EVRState const Ready;

/// @brief Field Ready_Alert offset 0
static OVR::OpenVR::EVRState const Ready_Alert;

/// @brief Field NotReady offset 0
static OVR::OpenVR::EVRState const NotReady;

/// @brief Field Standby offset 0
static OVR::OpenVR::EVRState const Standby;

/// @brief Field Ready_Alert_Low offset 0
static OVR::OpenVR::EVRState const Ready_Alert_Low;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRState, "OVR.OpenVR", "EVRState");
