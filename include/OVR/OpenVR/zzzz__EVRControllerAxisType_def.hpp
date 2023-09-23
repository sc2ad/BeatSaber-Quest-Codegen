#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRControllerAxisType;
}
// Type: OVR.OpenVR::EVRControllerAxisType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9382))
// CS Name: OVR.OpenVR.EVRControllerAxisType
struct CORDL_TYPE EVRControllerAxisType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRControllerAxisType(int32_t value__) noexcept;


                    constexpr EVRControllerAxisType(EVRControllerAxisType const&) = default;
                    constexpr EVRControllerAxisType(EVRControllerAxisType&&) = default;
                    constexpr EVRControllerAxisType& operator=(EVRControllerAxisType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRControllerAxisType& operator=(EVRControllerAxisType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRControllerAxisType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRControllerAxisType_Unwrapped : int32_t {
__k_eControllerAxis_None = 0,
__k_eControllerAxis_TrackPad = 1,
__k_eControllerAxis_Joystick = 2,
__k_eControllerAxis_Trigger = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRControllerAxisType_Unwrapped () const noexcept {
return std::bit_cast<__EVRControllerAxisType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field k_eControllerAxis_None offset 0
static OVR::OpenVR::EVRControllerAxisType const k_eControllerAxis_None;

/// @brief Field k_eControllerAxis_TrackPad offset 0
static OVR::OpenVR::EVRControllerAxisType const k_eControllerAxis_TrackPad;

/// @brief Field k_eControllerAxis_Joystick offset 0
static OVR::OpenVR::EVRControllerAxisType const k_eControllerAxis_Joystick;

/// @brief Field k_eControllerAxis_Trigger offset 0
static OVR::OpenVR::EVRControllerAxisType const k_eControllerAxis_Trigger;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRControllerAxisType, "OVR.OpenVR", "EVRControllerAxisType");
