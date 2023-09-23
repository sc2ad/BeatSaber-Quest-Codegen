#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackedControllerRole;
}
// Type: OVR.OpenVR::ETrackedControllerRole
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9368))
// CS Name: OVR.OpenVR.ETrackedControllerRole
struct CORDL_TYPE ETrackedControllerRole : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ETrackedControllerRole(int32_t value__) noexcept;


                    constexpr ETrackedControllerRole(ETrackedControllerRole const&) = default;
                    constexpr ETrackedControllerRole(ETrackedControllerRole&&) = default;
                    constexpr ETrackedControllerRole& operator=(ETrackedControllerRole const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ETrackedControllerRole& operator=(ETrackedControllerRole&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ETrackedControllerRole(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ETrackedControllerRole_Unwrapped : int32_t {
__Invalid = 0,
__LeftHand = 1,
__RightHand = 2,
__OptOut = 3,
__Max = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ETrackedControllerRole_Unwrapped () const noexcept {
return std::bit_cast<__ETrackedControllerRole_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Invalid offset 0
static OVR::OpenVR::ETrackedControllerRole const Invalid;

/// @brief Field LeftHand offset 0
static OVR::OpenVR::ETrackedControllerRole const LeftHand;

/// @brief Field RightHand offset 0
static OVR::OpenVR::ETrackedControllerRole const RightHand;

/// @brief Field OptOut offset 0
static OVR::OpenVR::ETrackedControllerRole const OptOut;

/// @brief Field Max offset 0
static OVR::OpenVR::ETrackedControllerRole const Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::ETrackedControllerRole, "OVR.OpenVR", "ETrackedControllerRole");
