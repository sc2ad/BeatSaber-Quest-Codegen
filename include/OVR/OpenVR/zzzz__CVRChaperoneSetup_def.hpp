#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace OVR::OpenVR {
struct HmdQuad_t;
}
namespace OVR::OpenVR {
struct EChaperoneConfigFile;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct IVRChaperoneSetup;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRChaperoneSetup;
}
// Type: OVR.OpenVR::CVRChaperoneSetup
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9346))
// CS Name: OVR.OpenVR.CVRChaperoneSetup
class CORDL_TYPE CVRChaperoneSetup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~CVRChaperoneSetup() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRChaperoneSetup", modifiers: " const&", def_value: None }]
constexpr CVRChaperoneSetup(CVRChaperoneSetup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRChaperoneSetup", modifiers: "&&", def_value: None }]
constexpr CVRChaperoneSetup(CVRChaperoneSetup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRChaperoneSetup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRChaperoneSetup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRChaperoneSetup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRChaperoneSetup& operator=(CVRChaperoneSetup&& o) noexcept = default;
  constexpr CVRChaperoneSetup& operator=(CVRChaperoneSetup const& o) noexcept = default;
                


// Fields

 ::OVR::OpenVR::IVRChaperoneSetup __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRChaperoneSetup value) ;

constexpr ::OVR::OpenVR::IVRChaperoneSetup __get_FnTable() const;


// Methods

// Ctor Parameters [CppParam { name: "pInterface", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CVRChaperoneSetup(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x26652cc size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method CommitWorkingCopy addr 0x26653e0 size 0x24 virtual false final false
 bool CommitWorkingCopy(::OVR::OpenVR::EChaperoneConfigFile configFile) ;

/// @brief Method RevertWorkingCopy addr 0x2665404 size 0x24 virtual false final false
 void RevertWorkingCopy() ;

/// @brief Method GetWorkingPlayAreaSize addr 0x2665428 size 0x2c virtual false final false
 bool GetWorkingPlayAreaSize(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ) ;

/// @brief Method GetWorkingPlayAreaRect addr 0x2665454 size 0x24 virtual false final false
 bool GetWorkingPlayAreaRect(ByRef<::OVR::OpenVR::HmdQuad_t> rect) ;

/// @brief Method GetWorkingCollisionBoundsInfo addr 0x2665478 size 0xa8 virtual false final false
 bool GetWorkingCollisionBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer) ;

/// @brief Method GetLiveCollisionBoundsInfo addr 0x2665520 size 0xa8 virtual false final false
 bool GetLiveCollisionBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer) ;

/// @brief Method GetWorkingSeatedZeroPoseToRawTrackingPose addr 0x26655c8 size 0x24 virtual false final false
 bool GetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose) ;

/// @brief Method GetWorkingStandingZeroPoseToRawTrackingPose addr 0x26655ec size 0x24 virtual false final false
 bool GetWorkingStandingZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose) ;

/// @brief Method SetWorkingPlayAreaSize addr 0x2665610 size 0x24 virtual false final false
 void SetWorkingPlayAreaSize(float_t sizeX, float_t sizeZ) ;

/// @brief Method SetWorkingCollisionBoundsInfo addr 0x2665634 size 0x2c virtual false final false
 void SetWorkingCollisionBoundsInfo(::ArrayW<::OVR::OpenVR::HmdQuad_t> pQuadsBuffer) ;

/// @brief Method SetWorkingSeatedZeroPoseToRawTrackingPose addr 0x2665660 size 0x24 virtual false final false
 void SetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose) ;

/// @brief Method SetWorkingStandingZeroPoseToRawTrackingPose addr 0x2665684 size 0x24 virtual false final false
 void SetWorkingStandingZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose) ;

/// @brief Method ReloadFromDisk addr 0x26656a8 size 0x24 virtual false final false
 void ReloadFromDisk(::OVR::OpenVR::EChaperoneConfigFile configFile) ;

/// @brief Method GetLiveSeatedZeroPoseToRawTrackingPose addr 0x26656cc size 0x24 virtual false final false
 bool GetLiveSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose) ;

/// @brief Method SetWorkingCollisionBoundsTagsInfo addr 0x26656f0 size 0x2c virtual false final false
 void SetWorkingCollisionBoundsTagsInfo(::ArrayW<uint8_t> pTagsBuffer) ;

/// @brief Method GetLiveCollisionBoundsTagsInfo addr 0x266571c size 0xa8 virtual false final false
 bool GetLiveCollisionBoundsTagsInfo(ByRef<::ArrayW<uint8_t>> pTagsBuffer) ;

/// @brief Method SetWorkingPhysicalBoundsInfo addr 0x26657c4 size 0x2c virtual false final false
 bool SetWorkingPhysicalBoundsInfo(::ArrayW<::OVR::OpenVR::HmdQuad_t> pQuadsBuffer) ;

/// @brief Method GetLivePhysicalBoundsInfo addr 0x26657f0 size 0xa8 virtual false final false
 bool GetLivePhysicalBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer) ;

/// @brief Method ExportLiveToBuffer addr 0x2665898 size 0x28 virtual false final false
 bool ExportLiveToBuffer(::System::Text::StringBuilder pBuffer, ByRef<uint32_t> pnBufferLength) ;

/// @brief Method ImportFromBufferToWorking addr 0x26658c0 size 0x24 virtual false final false
 bool ImportFromBufferToWorking(::StringW pBuffer, uint32_t nImportFlags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
NEED_NO_BOX(::OVR::OpenVR::CVRChaperoneSetup);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRChaperoneSetup, "OVR.OpenVR", "CVRChaperoneSetup");
