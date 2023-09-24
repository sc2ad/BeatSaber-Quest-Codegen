#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRApplicationTransitionState;
}
// Type: OVR.OpenVR::EVRApplicationTransitionState
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9401))
// CS Name: OVR.OpenVR.EVRApplicationTransitionState
struct CORDL_TYPE EVRApplicationTransitionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRApplicationTransitionState(int32_t value__) noexcept;


                    constexpr EVRApplicationTransitionState(EVRApplicationTransitionState const&) = default;
                    constexpr EVRApplicationTransitionState(EVRApplicationTransitionState&&) = default;
                    constexpr EVRApplicationTransitionState& operator=(EVRApplicationTransitionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRApplicationTransitionState& operator=(EVRApplicationTransitionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRApplicationTransitionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRApplicationTransitionState_Unwrapped : int32_t {
__VRApplicationTransition_None = 0,
__VRApplicationTransition_OldAppQuitSent = 10,
__VRApplicationTransition_WaitingForExternalLaunch = 11,
__VRApplicationTransition_NewAppLaunched = 20,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRApplicationTransitionState_Unwrapped () const noexcept {
return std::bit_cast<__EVRApplicationTransitionState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field VRApplicationTransition_None offset 0
static OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_None;

/// @brief Field VRApplicationTransition_OldAppQuitSent offset 0
static OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_OldAppQuitSent;

/// @brief Field VRApplicationTransition_WaitingForExternalLaunch offset 0
static OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_WaitingForExternalLaunch;

/// @brief Field VRApplicationTransition_NewAppLaunched offset 0
static OVR::OpenVR::EVRApplicationTransitionState const VRApplicationTransition_NewAppLaunched;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRApplicationTransitionState, "OVR.OpenVR", "EVRApplicationTransitionState");
