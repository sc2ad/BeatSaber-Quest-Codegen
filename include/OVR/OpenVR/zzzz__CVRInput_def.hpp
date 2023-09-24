#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace OVR::OpenVR {
struct EVRInputError;
}
namespace OVR::OpenVR {
struct VRBoneTransform_t;
}
namespace OVR::OpenVR {
struct VRActiveActionSet_t;
}
namespace OVR::OpenVR {
struct EVRSkeletalMotionRange;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct IVRInput;
}
namespace OVR::OpenVR {
struct InputAnalogActionData_t;
}
namespace OVR::OpenVR {
struct InputDigitalActionData_t;
}
namespace OVR::OpenVR {
struct InputPoseActionData_t;
}
namespace OVR::OpenVR {
struct InputOriginInfo_t;
}
namespace OVR::OpenVR {
struct InputSkeletalActionData_t;
}
namespace OVR::OpenVR {
struct EVRSkeletalTransformSpace;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRInput;
}
// Type: OVR.OpenVR::CVRInput
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9359))
// CS Name: OVR.OpenVR.CVRInput
class CORDL_TYPE CVRInput : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~CVRInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRInput", modifiers: " const&", def_value: None }]
constexpr CVRInput(CVRInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRInput", modifiers: "&&", def_value: None }]
constexpr CVRInput(CVRInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRInput(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRInput& operator=(CVRInput&& o) noexcept = default;
  constexpr CVRInput& operator=(CVRInput const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::IVRInput __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(OVR::OpenVR::IVRInput value) ;

constexpr OVR::OpenVR::IVRInput __get_FnTable() const;


// Methods

static OVR::OpenVR::CVRInput New_ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x26681f8 size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method SetActionManifestPath addr 0x266830c size 0x24 virtual false final false
 OVR::OpenVR::EVRInputError SetActionManifestPath(::StringW pchActionManifestPath) ;

/// @brief Method GetActionSetHandle addr 0x2668330 size 0x28 virtual false final false
 OVR::OpenVR::EVRInputError GetActionSetHandle(::StringW pchActionSetName, ByRef<uint64_t> pHandle) ;

/// @brief Method GetActionHandle addr 0x2668358 size 0x28 virtual false final false
 OVR::OpenVR::EVRInputError GetActionHandle(::StringW pchActionName, ByRef<uint64_t> pHandle) ;

/// @brief Method GetInputSourceHandle addr 0x2668380 size 0x28 virtual false final false
 OVR::OpenVR::EVRInputError GetInputSourceHandle(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle) ;

/// @brief Method UpdateActionState addr 0x26683a8 size 0x2c virtual false final false
 OVR::OpenVR::EVRInputError UpdateActionState(::ArrayW<OVR::OpenVR::VRActiveActionSet_t> pSets, uint32_t unSizeOfVRSelectedActionSet_t) ;

/// @brief Method GetDigitalActionData addr 0x26683d4 size 0x24 virtual false final false
 OVR::OpenVR::EVRInputError GetDigitalActionData(uint64_t action, ByRef<OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice) ;

/// @brief Method GetAnalogActionData addr 0x26683f8 size 0x24 virtual false final false
 OVR::OpenVR::EVRInputError GetAnalogActionData(uint64_t action, ByRef<OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice) ;

/// @brief Method GetPoseActionData addr 0x266841c size 0x24 virtual false final false
 OVR::OpenVR::EVRInputError GetPoseActionData(uint64_t action, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow, ByRef<OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice) ;

/// @brief Method GetSkeletalActionData addr 0x2668440 size 0x24 virtual false final false
 OVR::OpenVR::EVRInputError GetSkeletalActionData(uint64_t action, ByRef<OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice) ;

/// @brief Method GetSkeletalBoneData addr 0x2668464 size 0x30 virtual false final false
 OVR::OpenVR::EVRInputError GetSkeletalBoneData(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::ArrayW<OVR::OpenVR::VRBoneTransform_t> pTransformArray, uint64_t ulRestrictToDevice) ;

/// @brief Method GetSkeletalBoneDataCompressed addr 0x2668494 size 0x2c virtual false final false
 OVR::OpenVR::EVRInputError GetSkeletalBoneDataCompressed(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::cordl_internals::intptr_t pvCompressedData, uint32_t unCompressedSize, ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice) ;

/// @brief Method DecompressSkeletalBoneData addr 0x26684c0 size 0x2c virtual false final false
 OVR::OpenVR::EVRInputError DecompressSkeletalBoneData(::cordl_internals::intptr_t pvCompressedBuffer, uint32_t unCompressedBufferSize, ByRef<OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ::ArrayW<OVR::OpenVR::VRBoneTransform_t> pTransformArray) ;

/// @brief Method TriggerHapticVibrationAction addr 0x26684ec size 0x24 virtual false final false
 OVR::OpenVR::EVRInputError TriggerHapticVibrationAction(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude, uint64_t ulRestrictToDevice) ;

/// @brief Method GetActionOrigins addr 0x2668510 size 0x2c virtual false final false
 OVR::OpenVR::EVRInputError GetActionOrigins(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::ArrayW<uint64_t> originsOut) ;

/// @brief Method GetOriginLocalizedName addr 0x266853c size 0x24 virtual false final false
 OVR::OpenVR::EVRInputError GetOriginLocalizedName(uint64_t origin, System::Text::StringBuilder pchNameArray, uint32_t unNameArraySize) ;

/// @brief Method GetOriginTrackedDeviceInfo addr 0x2668560 size 0x24 virtual false final false
 OVR::OpenVR::EVRInputError GetOriginTrackedDeviceInfo(uint64_t origin, ByRef<OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize) ;

/// @brief Method ShowActionOrigins addr 0x2668584 size 0x24 virtual false final false
 OVR::OpenVR::EVRInputError ShowActionOrigins(uint64_t actionSetHandle, uint64_t ulActionHandle) ;

/// @brief Method ShowBindingsForActionSet addr 0x26685a8 size 0x30 virtual false final false
 OVR::OpenVR::EVRInputError ShowBindingsForActionSet(::ArrayW<OVR::OpenVR::VRActiveActionSet_t> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint64_t originToHighlight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::CVRInput);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRInput, "OVR.OpenVR", "CVRInput");
