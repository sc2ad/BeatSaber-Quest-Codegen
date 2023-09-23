#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayFlags;
}
// Type: OVR.OpenVR::VROverlayFlags
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9409))
// CS Name: OVR.OpenVR.VROverlayFlags
struct CORDL_TYPE VROverlayFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VROverlayFlags(int32_t value__) noexcept;


                    constexpr VROverlayFlags(VROverlayFlags const&) = default;
                    constexpr VROverlayFlags(VROverlayFlags&&) = default;
                    constexpr VROverlayFlags& operator=(VROverlayFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VROverlayFlags& operator=(VROverlayFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VROverlayFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VROverlayFlags_Unwrapped : int32_t {
__None = 0,
__Curved = 1,
__RGSS4X = 2,
__NoDashboardTab = 3,
__AcceptsGamepadEvents = 4,
__ShowGamepadFocus = 5,
__SendVRScrollEvents = 6,
__SendVRTouchpadEvents = 7,
__ShowTouchPadScrollWheel = 8,
__TransferOwnershipToInternalProcess = 9,
__SideBySide_Parallel = 10,
__SideBySide_Crossed = 11,
__Panorama = 12,
__StereoPanorama = 13,
__SortWithNonSceneOverlays = 14,
__VisibleInDashboard = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VROverlayFlags_Unwrapped () const noexcept {
return std::bit_cast<__VROverlayFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static OVR::OpenVR::VROverlayFlags const None;

/// @brief Field Curved offset 0
static OVR::OpenVR::VROverlayFlags const Curved;

/// @brief Field RGSS4X offset 0
static OVR::OpenVR::VROverlayFlags const RGSS4X;

/// @brief Field NoDashboardTab offset 0
static OVR::OpenVR::VROverlayFlags const NoDashboardTab;

/// @brief Field AcceptsGamepadEvents offset 0
static OVR::OpenVR::VROverlayFlags const AcceptsGamepadEvents;

/// @brief Field ShowGamepadFocus offset 0
static OVR::OpenVR::VROverlayFlags const ShowGamepadFocus;

/// @brief Field SendVRScrollEvents offset 0
static OVR::OpenVR::VROverlayFlags const SendVRScrollEvents;

/// @brief Field SendVRTouchpadEvents offset 0
static OVR::OpenVR::VROverlayFlags const SendVRTouchpadEvents;

/// @brief Field ShowTouchPadScrollWheel offset 0
static OVR::OpenVR::VROverlayFlags const ShowTouchPadScrollWheel;

/// @brief Field TransferOwnershipToInternalProcess offset 0
static OVR::OpenVR::VROverlayFlags const TransferOwnershipToInternalProcess;

/// @brief Field SideBySide_Parallel offset 0
static OVR::OpenVR::VROverlayFlags const SideBySide_Parallel;

/// @brief Field SideBySide_Crossed offset 0
static OVR::OpenVR::VROverlayFlags const SideBySide_Crossed;

/// @brief Field Panorama offset 0
static OVR::OpenVR::VROverlayFlags const Panorama;

/// @brief Field StereoPanorama offset 0
static OVR::OpenVR::VROverlayFlags const StereoPanorama;

/// @brief Field SortWithNonSceneOverlays offset 0
static OVR::OpenVR::VROverlayFlags const SortWithNonSceneOverlays;

/// @brief Field VisibleInDashboard offset 0
static OVR::OpenVR::VROverlayFlags const VisibleInDashboard;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VROverlayFlags, "OVR.OpenVR", "VROverlayFlags");
