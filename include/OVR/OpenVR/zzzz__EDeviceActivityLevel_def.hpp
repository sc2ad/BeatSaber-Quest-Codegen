#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EDeviceActivityLevel;
}
// Type: OVR.OpenVR::EDeviceActivityLevel
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9375))
// CS Name: OVR.OpenVR.EDeviceActivityLevel
struct CORDL_TYPE EDeviceActivityLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EDeviceActivityLevel(int32_t value__) noexcept;


                    constexpr EDeviceActivityLevel(EDeviceActivityLevel const&) = default;
                    constexpr EDeviceActivityLevel(EDeviceActivityLevel&&) = default;
                    constexpr EDeviceActivityLevel& operator=(EDeviceActivityLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EDeviceActivityLevel& operator=(EDeviceActivityLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EDeviceActivityLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EDeviceActivityLevel_Unwrapped : int32_t {
__k_EDeviceActivityLevel_Unknown = -1,
__k_EDeviceActivityLevel_Idle = 0,
__k_EDeviceActivityLevel_UserInteraction = 1,
__k_EDeviceActivityLevel_UserInteraction_Timeout = 2,
__k_EDeviceActivityLevel_Standby = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EDeviceActivityLevel_Unwrapped () const noexcept {
return std::bit_cast<__EDeviceActivityLevel_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field k_EDeviceActivityLevel_Unknown offset 0
static OVR::OpenVR::EDeviceActivityLevel const k_EDeviceActivityLevel_Unknown;

/// @brief Field k_EDeviceActivityLevel_Idle offset 0
static OVR::OpenVR::EDeviceActivityLevel const k_EDeviceActivityLevel_Idle;

/// @brief Field k_EDeviceActivityLevel_UserInteraction offset 0
static OVR::OpenVR::EDeviceActivityLevel const k_EDeviceActivityLevel_UserInteraction;

/// @brief Field k_EDeviceActivityLevel_UserInteraction_Timeout offset 0
static OVR::OpenVR::EDeviceActivityLevel const k_EDeviceActivityLevel_UserInteraction_Timeout;

/// @brief Field k_EDeviceActivityLevel_Standby offset 0
static OVR::OpenVR::EDeviceActivityLevel const k_EDeviceActivityLevel_Standby;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EDeviceActivityLevel, "OVR.OpenVR", "EDeviceActivityLevel");
