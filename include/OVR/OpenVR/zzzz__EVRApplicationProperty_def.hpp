#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVRApplicationProperty;
}
// Type: OVR.OpenVR::EVRApplicationProperty
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9400))
// CS Name: OVR.OpenVR.EVRApplicationProperty
struct CORDL_TYPE EVRApplicationProperty : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRApplicationProperty(int32_t value__) noexcept;


                    constexpr EVRApplicationProperty(EVRApplicationProperty const&) = default;
                    constexpr EVRApplicationProperty(EVRApplicationProperty&&) = default;
                    constexpr EVRApplicationProperty& operator=(EVRApplicationProperty const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRApplicationProperty& operator=(EVRApplicationProperty&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRApplicationProperty(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRApplicationProperty_Unwrapped : int32_t {
__Name_String = 0,
__LaunchType_String = 11,
__WorkingDirectory_String = 12,
__BinaryPath_String = 13,
__Arguments_String = 14,
__URL_String = 15,
__Description_String = 50,
__NewsURL_String = 51,
__ImagePath_String = 52,
__Source_String = 53,
__ActionManifestURL_String = 54,
__IsDashboardOverlay_Bool = 60,
__IsTemplate_Bool = 61,
__IsInstanced_Bool = 62,
__IsInternal_Bool = 63,
__WantsCompositorPauseInStandby_Bool = 64,
__LastLaunchTime_Uint64 = 70,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRApplicationProperty_Unwrapped () const noexcept {
return std::bit_cast<__EVRApplicationProperty_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Name_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const Name_String;

/// @brief Field LaunchType_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const LaunchType_String;

/// @brief Field WorkingDirectory_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const WorkingDirectory_String;

/// @brief Field BinaryPath_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const BinaryPath_String;

/// @brief Field Arguments_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const Arguments_String;

/// @brief Field URL_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const URL_String;

/// @brief Field Description_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const Description_String;

/// @brief Field NewsURL_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const NewsURL_String;

/// @brief Field ImagePath_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const ImagePath_String;

/// @brief Field Source_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const Source_String;

/// @brief Field ActionManifestURL_String offset 0
static ::OVR::OpenVR::EVRApplicationProperty const ActionManifestURL_String;

/// @brief Field IsDashboardOverlay_Bool offset 0
static ::OVR::OpenVR::EVRApplicationProperty const IsDashboardOverlay_Bool;

/// @brief Field IsTemplate_Bool offset 0
static ::OVR::OpenVR::EVRApplicationProperty const IsTemplate_Bool;

/// @brief Field IsInstanced_Bool offset 0
static ::OVR::OpenVR::EVRApplicationProperty const IsInstanced_Bool;

/// @brief Field IsInternal_Bool offset 0
static ::OVR::OpenVR::EVRApplicationProperty const IsInternal_Bool;

/// @brief Field WantsCompositorPauseInStandby_Bool offset 0
static ::OVR::OpenVR::EVRApplicationProperty const WantsCompositorPauseInStandby_Bool;

/// @brief Field LastLaunchTime_Uint64 offset 0
static ::OVR::OpenVR::EVRApplicationProperty const LastLaunchTime_Uint64;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRApplicationProperty, "OVR.OpenVR", "EVRApplicationProperty");
