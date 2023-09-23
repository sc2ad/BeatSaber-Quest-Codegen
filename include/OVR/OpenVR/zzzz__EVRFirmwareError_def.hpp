#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRFirmwareError;
}
// Type: OVR.OpenVR::EVRFirmwareError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9387))
// CS Name: OVR.OpenVR.EVRFirmwareError
struct CORDL_TYPE EVRFirmwareError : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRFirmwareError(int32_t value__) noexcept;


                    constexpr EVRFirmwareError(EVRFirmwareError const&) = default;
                    constexpr EVRFirmwareError(EVRFirmwareError&&) = default;
                    constexpr EVRFirmwareError& operator=(EVRFirmwareError const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRFirmwareError& operator=(EVRFirmwareError&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRFirmwareError(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRFirmwareError_Unwrapped : int32_t {
__None = 0,
__Success = 1,
__Fail = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRFirmwareError_Unwrapped () const noexcept {
return std::bit_cast<__EVRFirmwareError_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static OVR::OpenVR::EVRFirmwareError const None;

/// @brief Field Success offset 0
static OVR::OpenVR::EVRFirmwareError const Success;

/// @brief Field Fail offset 0
static OVR::OpenVR::EVRFirmwareError const Fail;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRFirmwareError, "OVR.OpenVR", "EVRFirmwareError");
