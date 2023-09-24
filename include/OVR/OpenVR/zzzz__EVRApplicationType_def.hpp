#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRApplicationType;
}
// Type: OVR.OpenVR::EVRApplicationType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9386))
// CS Name: OVR.OpenVR.EVRApplicationType
struct CORDL_TYPE EVRApplicationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRApplicationType(int32_t value__) noexcept;


                    constexpr EVRApplicationType(EVRApplicationType const&) = default;
                    constexpr EVRApplicationType(EVRApplicationType&&) = default;
                    constexpr EVRApplicationType& operator=(EVRApplicationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRApplicationType& operator=(EVRApplicationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRApplicationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRApplicationType_Unwrapped : int32_t {
__VRApplication_Other = 0,
__VRApplication_Scene = 1,
__VRApplication_Overlay = 2,
__VRApplication_Background = 3,
__VRApplication_Utility = 4,
__VRApplication_VRMonitor = 5,
__VRApplication_SteamWatchdog = 6,
__VRApplication_Bootstrapper = 7,
__VRApplication_Max = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRApplicationType_Unwrapped () const noexcept {
return std::bit_cast<__EVRApplicationType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field VRApplication_Other offset 0
static OVR::OpenVR::EVRApplicationType const VRApplication_Other;

/// @brief Field VRApplication_Scene offset 0
static OVR::OpenVR::EVRApplicationType const VRApplication_Scene;

/// @brief Field VRApplication_Overlay offset 0
static OVR::OpenVR::EVRApplicationType const VRApplication_Overlay;

/// @brief Field VRApplication_Background offset 0
static OVR::OpenVR::EVRApplicationType const VRApplication_Background;

/// @brief Field VRApplication_Utility offset 0
static OVR::OpenVR::EVRApplicationType const VRApplication_Utility;

/// @brief Field VRApplication_VRMonitor offset 0
static OVR::OpenVR::EVRApplicationType const VRApplication_VRMonitor;

/// @brief Field VRApplication_SteamWatchdog offset 0
static OVR::OpenVR::EVRApplicationType const VRApplication_SteamWatchdog;

/// @brief Field VRApplication_Bootstrapper offset 0
static OVR::OpenVR::EVRApplicationType const VRApplication_Bootstrapper;

/// @brief Field VRApplication_Max offset 0
static OVR::OpenVR::EVRApplicationType const VRApplication_Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRApplicationType, "OVR.OpenVR", "EVRApplicationType");
