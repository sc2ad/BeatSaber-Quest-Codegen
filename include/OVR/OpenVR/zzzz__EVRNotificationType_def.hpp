#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRNotificationType;
}
// Type: OVR.OpenVR::EVRNotificationType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9417))
// CS Name: OVR.OpenVR.EVRNotificationType
struct CORDL_TYPE EVRNotificationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRNotificationType(int32_t value__) noexcept;


                    constexpr EVRNotificationType(EVRNotificationType const&) = default;
                    constexpr EVRNotificationType(EVRNotificationType&&) = default;
                    constexpr EVRNotificationType& operator=(EVRNotificationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRNotificationType& operator=(EVRNotificationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRNotificationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRNotificationType_Unwrapped : int32_t {
__Transient = 0,
__Persistent = 1,
__Transient_SystemWithUserValue = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRNotificationType_Unwrapped () const noexcept {
return std::bit_cast<__EVRNotificationType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Transient offset 0
static OVR::OpenVR::EVRNotificationType const Transient;

/// @brief Field Persistent offset 0
static OVR::OpenVR::EVRNotificationType const Persistent;

/// @brief Field Transient_SystemWithUserValue offset 0
static OVR::OpenVR::EVRNotificationType const Transient_SystemWithUserValue;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRNotificationType, "OVR.OpenVR", "EVRNotificationType");
