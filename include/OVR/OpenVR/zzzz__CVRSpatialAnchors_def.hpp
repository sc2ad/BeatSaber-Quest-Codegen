#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct EVRSpatialAnchorError;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct SpatialAnchorPose_t;
}
namespace OVR::OpenVR {
struct IVRSpatialAnchors;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRSpatialAnchors;
}
// Type: OVR.OpenVR::CVRSpatialAnchors
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9361))
// CS Name: OVR.OpenVR.CVRSpatialAnchors
class CORDL_TYPE CVRSpatialAnchors : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CVRSpatialAnchors() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRSpatialAnchors", modifiers: " const&", def_value: None }]
constexpr CVRSpatialAnchors(CVRSpatialAnchors const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRSpatialAnchors", modifiers: "&&", def_value: None }]
constexpr CVRSpatialAnchors(CVRSpatialAnchors&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRSpatialAnchors(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRSpatialAnchors& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRSpatialAnchors& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRSpatialAnchors& operator=(CVRSpatialAnchors&& o) noexcept = default;
  constexpr CVRSpatialAnchors& operator=(CVRSpatialAnchors const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::IVRSpatialAnchors __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(OVR::OpenVR::IVRSpatialAnchors value) ;

constexpr OVR::OpenVR::IVRSpatialAnchors __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRSpatialAnchors(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x26687a8 size 0x10c virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method CreateSpatialAnchorFromDescriptor addr 0x26688b4 size 0x28 virtual false final false
 OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromDescriptor(::StringW pchDescriptor, ByRef<uint32_t> pHandleOut) ;

/// @brief Method CreateSpatialAnchorFromPose addr 0x26688dc size 0x28 virtual false final false
 OVR::OpenVR::EVRSpatialAnchorError CreateSpatialAnchorFromPose(uint32_t unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::SpatialAnchorPose_t> pPose, ByRef<uint32_t> pHandleOut) ;

/// @brief Method GetSpatialAnchorPose addr 0x2668904 size 0x24 virtual false final false
 OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorPose(uint32_t unHandle, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::SpatialAnchorPose_t> pPoseOut) ;

/// @brief Method GetSpatialAnchorDescriptor addr 0x2668928 size 0x28 virtual false final false
 OVR::OpenVR::EVRSpatialAnchorError GetSpatialAnchorDescriptor(uint32_t unHandle, System::Text::StringBuilder pchDescriptorOut, ByRef<uint32_t> punDescriptorBufferLenInOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::CVRSpatialAnchors);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSpatialAnchors, "OVR.OpenVR", "CVRSpatialAnchors");
