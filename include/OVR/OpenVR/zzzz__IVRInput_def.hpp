#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct EVRInputError;
}
namespace OVR::OpenVR {
struct EVRSkeletalTransformSpace;
}
namespace OVR::OpenVR {
struct VRBoneTransform_t;
}
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
struct InputAnalogActionData_t;
}
namespace OVR::OpenVR {
struct InputDigitalActionData_t;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct InputOriginInfo_t;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct InputPoseActionData_t;
}
namespace OVR::OpenVR {
struct InputSkeletalActionData_t;
}
namespace OVR::OpenVR {
struct EVRSkeletalMotionRange;
}
namespace OVR::OpenVR {
struct VRActiveActionSet_t;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___ShowBindingsForActionSet;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetPoseActionData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetSkeletalBoneData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___SetActionManifestPath;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___DecompressSkeletalBoneData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___TriggerHapticVibrationAction;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetActionSetHandle;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetDigitalActionData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetActionOrigins;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetInputSourceHandle;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetAnalogActionData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetSkeletalActionData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetActionHandle;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___UpdateActionState;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetOriginLocalizedName;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___ShowActionOrigins;
}
// Forward declare root types
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___DecompressSkeletalBoneData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetActionHandle;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetActionOrigins;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetActionSetHandle;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetAnalogActionData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetDigitalActionData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetInputSourceHandle;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetOriginLocalizedName;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetPoseActionData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetSkeletalActionData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetSkeletalBoneData;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___SetActionManifestPath;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___ShowActionOrigins;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___ShowBindingsForActionSet;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___TriggerHapticVibrationAction;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRInput___UpdateActionState;
}
namespace OVR::OpenVR {
struct IVRInput;
}
// Type: ::_SetActionManifestPath
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9305))
// CS Name: OVR.OpenVR.IVRInput::_SetActionManifestPath
class CORDL_TYPE OVR__OpenVR__IVRInput___SetActionManifestPath : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___SetActionManifestPath() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___SetActionManifestPath", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___SetActionManifestPath(OVR__OpenVR__IVRInput___SetActionManifestPath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___SetActionManifestPath", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___SetActionManifestPath(OVR__OpenVR__IVRInput___SetActionManifestPath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___SetActionManifestPath(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___SetActionManifestPath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___SetActionManifestPath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___SetActionManifestPath& operator=(OVR__OpenVR__IVRInput___SetActionManifestPath&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___SetActionManifestPath& operator=(OVR__OpenVR__IVRInput___SetActionManifestPath const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___SetActionManifestPath New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265fdcc size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265fea0 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(::StringW pchActionManifestPath) ;

/// @brief Method BeginInvoke addr 0x265feb4 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchActionManifestPath, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x265fed4 size 0x28 virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetActionSetHandle
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9306))
// CS Name: OVR.OpenVR.IVRInput::_GetActionSetHandle
class CORDL_TYPE OVR__OpenVR__IVRInput___GetActionSetHandle : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetActionSetHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetActionSetHandle", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetActionSetHandle(OVR__OpenVR__IVRInput___GetActionSetHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetActionSetHandle", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetActionSetHandle(OVR__OpenVR__IVRInput___GetActionSetHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetActionSetHandle(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetActionSetHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetActionSetHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetActionSetHandle& operator=(OVR__OpenVR__IVRInput___GetActionSetHandle&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetActionSetHandle& operator=(OVR__OpenVR__IVRInput___GetActionSetHandle const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionSetHandle New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x265fefc size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x265ffd4 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(::StringW pchActionSetName, ByRef<uint64_t> pHandle) ;

/// @brief Method BeginInvoke addr 0x265ffe8 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchActionSetName, ByRef<uint64_t> pHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x266007c size 0x2c virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint64_t> pHandle, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetActionHandle
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9307))
// CS Name: OVR.OpenVR.IVRInput::_GetActionHandle
class CORDL_TYPE OVR__OpenVR__IVRInput___GetActionHandle : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetActionHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetActionHandle", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetActionHandle(OVR__OpenVR__IVRInput___GetActionHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetActionHandle", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetActionHandle(OVR__OpenVR__IVRInput___GetActionHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetActionHandle(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetActionHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetActionHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetActionHandle& operator=(OVR__OpenVR__IVRInput___GetActionHandle&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetActionHandle& operator=(OVR__OpenVR__IVRInput___GetActionHandle const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionHandle New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26600a8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2660180 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(::StringW pchActionName, ByRef<uint64_t> pHandle) ;

/// @brief Method BeginInvoke addr 0x2660194 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchActionName, ByRef<uint64_t> pHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2660228 size 0x2c virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint64_t> pHandle, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetInputSourceHandle
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9308))
// CS Name: OVR.OpenVR.IVRInput::_GetInputSourceHandle
class CORDL_TYPE OVR__OpenVR__IVRInput___GetInputSourceHandle : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetInputSourceHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetInputSourceHandle", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetInputSourceHandle(OVR__OpenVR__IVRInput___GetInputSourceHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetInputSourceHandle", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetInputSourceHandle(OVR__OpenVR__IVRInput___GetInputSourceHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetInputSourceHandle(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetInputSourceHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetInputSourceHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetInputSourceHandle& operator=(OVR__OpenVR__IVRInput___GetInputSourceHandle&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetInputSourceHandle& operator=(OVR__OpenVR__IVRInput___GetInputSourceHandle const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetInputSourceHandle New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2660254 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x266032c size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle) ;

/// @brief Method BeginInvoke addr 0x2660340 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26603d4 size 0x2c virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint64_t> pHandle, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_UpdateActionState
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9309))
// CS Name: OVR.OpenVR.IVRInput::_UpdateActionState
class CORDL_TYPE OVR__OpenVR__IVRInput___UpdateActionState : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___UpdateActionState() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___UpdateActionState", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___UpdateActionState(OVR__OpenVR__IVRInput___UpdateActionState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___UpdateActionState", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___UpdateActionState(OVR__OpenVR__IVRInput___UpdateActionState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___UpdateActionState(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___UpdateActionState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___UpdateActionState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___UpdateActionState& operator=(OVR__OpenVR__IVRInput___UpdateActionState&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___UpdateActionState& operator=(OVR__OpenVR__IVRInput___UpdateActionState const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___UpdateActionState New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2660400 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26604d8 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(ByRef<::ArrayW<OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount) ;

/// @brief Method BeginInvoke addr 0x26604ec size 0xa8 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2660594 size 0x28 virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetDigitalActionData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9310))
// CS Name: OVR.OpenVR.IVRInput::_GetDigitalActionData
class CORDL_TYPE OVR__OpenVR__IVRInput___GetDigitalActionData : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetDigitalActionData() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetDigitalActionData", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetDigitalActionData(OVR__OpenVR__IVRInput___GetDigitalActionData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetDigitalActionData", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetDigitalActionData(OVR__OpenVR__IVRInput___GetDigitalActionData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetDigitalActionData(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetDigitalActionData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetDigitalActionData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetDigitalActionData& operator=(OVR__OpenVR__IVRInput___GetDigitalActionData&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetDigitalActionData& operator=(OVR__OpenVR__IVRInput___GetDigitalActionData const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetDigitalActionData New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26605bc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2660680 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t action, ByRef<OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x2660694 size 0x100 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t action, ByRef<OVR::OpenVR::InputDigitalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2660794 size 0x2c virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(ByRef<OVR::OpenVR::InputDigitalActionData_t> pActionData, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetAnalogActionData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9311))
// CS Name: OVR.OpenVR.IVRInput::_GetAnalogActionData
class CORDL_TYPE OVR__OpenVR__IVRInput___GetAnalogActionData : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetAnalogActionData() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetAnalogActionData", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetAnalogActionData(OVR__OpenVR__IVRInput___GetAnalogActionData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetAnalogActionData", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetAnalogActionData(OVR__OpenVR__IVRInput___GetAnalogActionData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetAnalogActionData(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetAnalogActionData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetAnalogActionData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetAnalogActionData& operator=(OVR__OpenVR__IVRInput___GetAnalogActionData&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetAnalogActionData& operator=(OVR__OpenVR__IVRInput___GetAnalogActionData const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetAnalogActionData New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26607c0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2660884 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t action, ByRef<OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x2660898 size 0x100 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t action, ByRef<OVR::OpenVR::InputAnalogActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2660998 size 0x2c virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(ByRef<OVR::OpenVR::InputAnalogActionData_t> pActionData, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetPoseActionData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9312))
// CS Name: OVR.OpenVR.IVRInput::_GetPoseActionData
class CORDL_TYPE OVR__OpenVR__IVRInput___GetPoseActionData : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetPoseActionData() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetPoseActionData", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetPoseActionData(OVR__OpenVR__IVRInput___GetPoseActionData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetPoseActionData", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetPoseActionData(OVR__OpenVR__IVRInput___GetPoseActionData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetPoseActionData(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetPoseActionData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetPoseActionData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetPoseActionData& operator=(OVR__OpenVR__IVRInput___GetPoseActionData&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetPoseActionData& operator=(OVR__OpenVR__IVRInput___GetPoseActionData const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetPoseActionData New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26609c4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2660a88 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t action, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow, ByRef<OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x2660a9c size 0x160 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t action, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsFromNow, ByRef<OVR::OpenVR::InputPoseActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2660bfc size 0x2c virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(ByRef<OVR::OpenVR::InputPoseActionData_t> pActionData, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetSkeletalActionData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9313))
// CS Name: OVR.OpenVR.IVRInput::_GetSkeletalActionData
class CORDL_TYPE OVR__OpenVR__IVRInput___GetSkeletalActionData : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetSkeletalActionData() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetSkeletalActionData", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetSkeletalActionData(OVR__OpenVR__IVRInput___GetSkeletalActionData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetSkeletalActionData", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetSkeletalActionData(OVR__OpenVR__IVRInput___GetSkeletalActionData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetSkeletalActionData(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetSkeletalActionData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetSkeletalActionData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetSkeletalActionData& operator=(OVR__OpenVR__IVRInput___GetSkeletalActionData&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetSkeletalActionData& operator=(OVR__OpenVR__IVRInput___GetSkeletalActionData const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalActionData New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2660c28 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2660cec size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t action, ByRef<OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x2660d00 size 0x100 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t action, ByRef<OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2660e00 size 0x2c virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(ByRef<OVR::OpenVR::InputSkeletalActionData_t> pActionData, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetSkeletalBoneData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9314))
// CS Name: OVR.OpenVR.IVRInput::_GetSkeletalBoneData
class CORDL_TYPE OVR__OpenVR__IVRInput___GetSkeletalBoneData : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetSkeletalBoneData() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetSkeletalBoneData", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneData(OVR__OpenVR__IVRInput___GetSkeletalBoneData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetSkeletalBoneData", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneData(OVR__OpenVR__IVRInput___GetSkeletalBoneData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetSkeletalBoneData(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneData& operator=(OVR__OpenVR__IVRInput___GetSkeletalBoneData&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneData& operator=(OVR__OpenVR__IVRInput___GetSkeletalBoneData const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneData New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2660e2c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2660ef0 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ByRef<::ArrayW<OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount, uint64_t ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x2660f04 size 0x130 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ByRef<::ArrayW<OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount, uint64_t ulRestrictToDevice, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2661034 size 0x28 virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetSkeletalBoneDataCompressed
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9315))
// CS Name: OVR.OpenVR.IVRInput::_GetSkeletalBoneDataCompressed
class CORDL_TYPE OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed(OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed(OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed& operator=(OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed& operator=(OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x266105c size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2661120 size 0x18 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::cordl_internals::intptr_t pvCompressedData, uint32_t unCompressedSize, ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x2661138 size 0x170 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::cordl_internals::intptr_t pvCompressedData, uint32_t unCompressedSize, ByRef<uint32_t> punRequiredCompressedSize, uint64_t ulRestrictToDevice, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26612a8 size 0x2c virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(ByRef<uint32_t> punRequiredCompressedSize, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_DecompressSkeletalBoneData
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9316))
// CS Name: OVR.OpenVR.IVRInput::_DecompressSkeletalBoneData
class CORDL_TYPE OVR__OpenVR__IVRInput___DecompressSkeletalBoneData : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___DecompressSkeletalBoneData() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___DecompressSkeletalBoneData", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___DecompressSkeletalBoneData(OVR__OpenVR__IVRInput___DecompressSkeletalBoneData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___DecompressSkeletalBoneData", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___DecompressSkeletalBoneData(OVR__OpenVR__IVRInput___DecompressSkeletalBoneData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___DecompressSkeletalBoneData(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___DecompressSkeletalBoneData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___DecompressSkeletalBoneData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___DecompressSkeletalBoneData& operator=(OVR__OpenVR__IVRInput___DecompressSkeletalBoneData&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___DecompressSkeletalBoneData& operator=(OVR__OpenVR__IVRInput___DecompressSkeletalBoneData const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___DecompressSkeletalBoneData New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26612d4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2661398 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(::cordl_internals::intptr_t pvCompressedBuffer, uint32_t unCompressedBufferSize, ByRef<OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ByRef<::ArrayW<OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount) ;

/// @brief Method BeginInvoke addr 0x26613ac size 0x104 virtual true final false
 System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t pvCompressedBuffer, uint32_t unCompressedBufferSize, ByRef<OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ByRef<::ArrayW<OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint32_t unTransformArrayCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26614b0 size 0x2c virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(ByRef<OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_TriggerHapticVibrationAction
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9317))
// CS Name: OVR.OpenVR.IVRInput::_TriggerHapticVibrationAction
class CORDL_TYPE OVR__OpenVR__IVRInput___TriggerHapticVibrationAction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___TriggerHapticVibrationAction() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___TriggerHapticVibrationAction", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___TriggerHapticVibrationAction(OVR__OpenVR__IVRInput___TriggerHapticVibrationAction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___TriggerHapticVibrationAction", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___TriggerHapticVibrationAction(OVR__OpenVR__IVRInput___TriggerHapticVibrationAction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___TriggerHapticVibrationAction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___TriggerHapticVibrationAction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___TriggerHapticVibrationAction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___TriggerHapticVibrationAction& operator=(OVR__OpenVR__IVRInput___TriggerHapticVibrationAction&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___TriggerHapticVibrationAction& operator=(OVR__OpenVR__IVRInput___TriggerHapticVibrationAction const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___TriggerHapticVibrationAction New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26614dc size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26615a0 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude, uint64_t ulRestrictToDevice) ;

/// @brief Method BeginInvoke addr 0x26615b4 size 0x10c virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t action, float_t fStartSecondsFromNow, float_t fDurationSeconds, float_t fFrequency, float_t fAmplitude, uint64_t ulRestrictToDevice, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26616c0 size 0x28 virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetActionOrigins
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9318))
// CS Name: OVR.OpenVR.IVRInput::_GetActionOrigins
class CORDL_TYPE OVR__OpenVR__IVRInput___GetActionOrigins : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetActionOrigins() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetActionOrigins", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetActionOrigins(OVR__OpenVR__IVRInput___GetActionOrigins const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetActionOrigins", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetActionOrigins(OVR__OpenVR__IVRInput___GetActionOrigins&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetActionOrigins(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetActionOrigins& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetActionOrigins& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetActionOrigins& operator=(OVR__OpenVR__IVRInput___GetActionOrigins&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetActionOrigins& operator=(OVR__OpenVR__IVRInput___GetActionOrigins const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionOrigins New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26616e8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26617ac size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ByRef<::ArrayW<uint64_t>> originsOut, uint32_t originOutCount) ;

/// @brief Method BeginInvoke addr 0x26617c0 size 0xd0 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t actionSetHandle, uint64_t digitalActionHandle, ByRef<::ArrayW<uint64_t>> originsOut, uint32_t originOutCount, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2661890 size 0x28 virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOriginLocalizedName
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9319))
// CS Name: OVR.OpenVR.IVRInput::_GetOriginLocalizedName
class CORDL_TYPE OVR__OpenVR__IVRInput___GetOriginLocalizedName : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetOriginLocalizedName() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetOriginLocalizedName", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetOriginLocalizedName(OVR__OpenVR__IVRInput___GetOriginLocalizedName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetOriginLocalizedName", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetOriginLocalizedName(OVR__OpenVR__IVRInput___GetOriginLocalizedName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetOriginLocalizedName(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetOriginLocalizedName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetOriginLocalizedName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetOriginLocalizedName& operator=(OVR__OpenVR__IVRInput___GetOriginLocalizedName&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetOriginLocalizedName& operator=(OVR__OpenVR__IVRInput___GetOriginLocalizedName const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginLocalizedName New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x26618b8 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x266197c size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t origin, System::Text::StringBuilder pchNameArray, uint32_t unNameArraySize) ;

/// @brief Method BeginInvoke addr 0x2661990 size 0xbc virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t origin, System::Text::StringBuilder pchNameArray, uint32_t unNameArraySize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2661a4c size 0x28 virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetOriginTrackedDeviceInfo
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9320))
// CS Name: OVR.OpenVR.IVRInput::_GetOriginTrackedDeviceInfo
class CORDL_TYPE OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo(OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo(OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo& operator=(OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo& operator=(OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2661a74 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2661b38 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t origin, ByRef<OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize) ;

/// @brief Method BeginInvoke addr 0x2661b4c size 0xe8 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t origin, ByRef<OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint32_t unOriginInfoSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2661c34 size 0x2c virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(ByRef<OVR::OpenVR::InputOriginInfo_t> pOriginInfo, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShowActionOrigins
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9321))
// CS Name: OVR.OpenVR.IVRInput::_ShowActionOrigins
class CORDL_TYPE OVR__OpenVR__IVRInput___ShowActionOrigins : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___ShowActionOrigins() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___ShowActionOrigins", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___ShowActionOrigins(OVR__OpenVR__IVRInput___ShowActionOrigins const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___ShowActionOrigins", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___ShowActionOrigins(OVR__OpenVR__IVRInput___ShowActionOrigins&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___ShowActionOrigins(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___ShowActionOrigins& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___ShowActionOrigins& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___ShowActionOrigins& operator=(OVR__OpenVR__IVRInput___ShowActionOrigins&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___ShowActionOrigins& operator=(OVR__OpenVR__IVRInput___ShowActionOrigins const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___ShowActionOrigins New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2661c60 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2661d24 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(uint64_t actionSetHandle, uint64_t ulActionHandle) ;

/// @brief Method BeginInvoke addr 0x2661d38 size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(uint64_t actionSetHandle, uint64_t ulActionHandle, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2661dd0 size 0x28 virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_ShowBindingsForActionSet
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9322))
// CS Name: OVR.OpenVR.IVRInput::_ShowBindingsForActionSet
class CORDL_TYPE OVR__OpenVR__IVRInput___ShowBindingsForActionSet : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__IVRInput___ShowBindingsForActionSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___ShowBindingsForActionSet", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___ShowBindingsForActionSet(OVR__OpenVR__IVRInput___ShowBindingsForActionSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__IVRInput___ShowBindingsForActionSet", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__IVRInput___ShowBindingsForActionSet(OVR__OpenVR__IVRInput___ShowBindingsForActionSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__IVRInput___ShowBindingsForActionSet(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__IVRInput___ShowBindingsForActionSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___ShowBindingsForActionSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__IVRInput___ShowBindingsForActionSet& operator=(OVR__OpenVR__IVRInput___ShowBindingsForActionSet&& o) noexcept = default;
  constexpr OVR__OpenVR__IVRInput___ShowBindingsForActionSet& operator=(OVR__OpenVR__IVRInput___ShowBindingsForActionSet const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__IVRInput___ShowBindingsForActionSet New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2661df8 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2661ed0 size 0x14 virtual true final false
 OVR::OpenVR::EVRInputError Invoke(ByRef<::ArrayW<OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight) ;

/// @brief Method BeginInvoke addr 0x2661ee4 size 0xd4 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<OVR::OpenVR::VRActiveActionSet_t>> pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2661fb8 size 0x28 virtual true final false
 OVR::OpenVR::EVRInputError EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRInput
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9323))
// CS Name: OVR.OpenVR.IVRInput
struct CORDL_TYPE IVRInput : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _ShowBindingsForActionSet = OVR::OpenVR::OVR__OpenVR__IVRInput___ShowBindingsForActionSet;

using _ShowActionOrigins = OVR::OpenVR::OVR__OpenVR__IVRInput___ShowActionOrigins;

using _GetOriginTrackedDeviceInfo = OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo;

using _GetOriginLocalizedName = OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginLocalizedName;

using _GetActionOrigins = OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionOrigins;

using _TriggerHapticVibrationAction = OVR::OpenVR::OVR__OpenVR__IVRInput___TriggerHapticVibrationAction;

using _DecompressSkeletalBoneData = OVR::OpenVR::OVR__OpenVR__IVRInput___DecompressSkeletalBoneData;

using _GetSkeletalBoneDataCompressed = OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed;

using _GetSkeletalBoneData = OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneData;

using _GetSkeletalActionData = OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalActionData;

using _GetPoseActionData = OVR::OpenVR::OVR__OpenVR__IVRInput___GetPoseActionData;

using _GetAnalogActionData = OVR::OpenVR::OVR__OpenVR__IVRInput___GetAnalogActionData;

using _GetDigitalActionData = OVR::OpenVR::OVR__OpenVR__IVRInput___GetDigitalActionData;

using _UpdateActionState = OVR::OpenVR::OVR__OpenVR__IVRInput___UpdateActionState;

using _GetInputSourceHandle = OVR::OpenVR::OVR__OpenVR__IVRInput___GetInputSourceHandle;

using _GetActionHandle = OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionHandle;

using _GetActionSetHandle = OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionSetHandle;

using _SetActionManifestPath = OVR::OpenVR::OVR__OpenVR__IVRInput___SetActionManifestPath;

// Ctor Parameters [CppParam { name: "SetActionManifestPath", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___SetActionManifestPath", modifiers: "", def_value: None }, CppParam { name: "GetActionSetHandle", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionSetHandle", modifiers: "", def_value: None }, CppParam { name: "GetActionHandle", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionHandle", modifiers: "", def_value: None }, CppParam { name: "GetInputSourceHandle", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetInputSourceHandle", modifiers: "", def_value: None }, CppParam { name: "UpdateActionState", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___UpdateActionState", modifiers: "", def_value: None }, CppParam { name: "GetDigitalActionData", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetDigitalActionData", modifiers: "", def_value: None }, CppParam { name: "GetAnalogActionData", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetAnalogActionData", modifiers: "", def_value: None }, CppParam { name: "GetPoseActionData", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetPoseActionData", modifiers: "", def_value: None }, CppParam { name: "GetSkeletalActionData", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalActionData", modifiers: "", def_value: None }, CppParam { name: "GetSkeletalBoneData", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneData", modifiers: "", def_value: None }, CppParam { name: "GetSkeletalBoneDataCompressed", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed", modifiers: "", def_value: None }, CppParam { name: "DecompressSkeletalBoneData", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___DecompressSkeletalBoneData", modifiers: "", def_value: None }, CppParam { name: "TriggerHapticVibrationAction", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___TriggerHapticVibrationAction", modifiers: "", def_value: None }, CppParam { name: "GetActionOrigins", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionOrigins", modifiers: "", def_value: None }, CppParam { name: "GetOriginLocalizedName", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginLocalizedName", modifiers: "", def_value: None }, CppParam { name: "GetOriginTrackedDeviceInfo", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo", modifiers: "", def_value: None }, CppParam { name: "ShowActionOrigins", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___ShowActionOrigins", modifiers: "", def_value: None }, CppParam { name: "ShowBindingsForActionSet", ty: "OVR::OpenVR::OVR__OpenVR__IVRInput___ShowBindingsForActionSet", modifiers: "", def_value: None }]
constexpr IVRInput(OVR::OpenVR::OVR__OpenVR__IVRInput___SetActionManifestPath SetActionManifestPath, OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionSetHandle GetActionSetHandle, OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionHandle GetActionHandle, OVR::OpenVR::OVR__OpenVR__IVRInput___GetInputSourceHandle GetInputSourceHandle, OVR::OpenVR::OVR__OpenVR__IVRInput___UpdateActionState UpdateActionState, OVR::OpenVR::OVR__OpenVR__IVRInput___GetDigitalActionData GetDigitalActionData, OVR::OpenVR::OVR__OpenVR__IVRInput___GetAnalogActionData GetAnalogActionData, OVR::OpenVR::OVR__OpenVR__IVRInput___GetPoseActionData GetPoseActionData, OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalActionData GetSkeletalActionData, OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneData GetSkeletalBoneData, OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed GetSkeletalBoneDataCompressed, OVR::OpenVR::OVR__OpenVR__IVRInput___DecompressSkeletalBoneData DecompressSkeletalBoneData, OVR::OpenVR::OVR__OpenVR__IVRInput___TriggerHapticVibrationAction TriggerHapticVibrationAction, OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionOrigins GetActionOrigins, OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginLocalizedName GetOriginLocalizedName, OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo GetOriginTrackedDeviceInfo, OVR::OpenVR::OVR__OpenVR__IVRInput___ShowActionOrigins ShowActionOrigins, OVR::OpenVR::OVR__OpenVR__IVRInput___ShowBindingsForActionSet ShowBindingsForActionSet) noexcept;


                    constexpr IVRInput(IVRInput const&) = default;
                    constexpr IVRInput(IVRInput&&) = default;
                    constexpr IVRInput& operator=(IVRInput const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IVRInput& operator=(IVRInput&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x90};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IVRInput(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRInput___SetActionManifestPath __declspec(property(get=__get_SetActionManifestPath, put=__set_SetActionManifestPath))  SetActionManifestPath;

constexpr void __set_SetActionManifestPath(OVR::OpenVR::OVR__OpenVR__IVRInput___SetActionManifestPath value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___SetActionManifestPath __get_SetActionManifestPath() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionSetHandle __declspec(property(get=__get_GetActionSetHandle, put=__set_GetActionSetHandle))  GetActionSetHandle;

constexpr void __set_GetActionSetHandle(OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionSetHandle value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionSetHandle __get_GetActionSetHandle() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionHandle __declspec(property(get=__get_GetActionHandle, put=__set_GetActionHandle))  GetActionHandle;

constexpr void __set_GetActionHandle(OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionHandle value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionHandle __get_GetActionHandle() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetInputSourceHandle __declspec(property(get=__get_GetInputSourceHandle, put=__set_GetInputSourceHandle))  GetInputSourceHandle;

constexpr void __set_GetInputSourceHandle(OVR::OpenVR::OVR__OpenVR__IVRInput___GetInputSourceHandle value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetInputSourceHandle __get_GetInputSourceHandle() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___UpdateActionState __declspec(property(get=__get_UpdateActionState, put=__set_UpdateActionState))  UpdateActionState;

constexpr void __set_UpdateActionState(OVR::OpenVR::OVR__OpenVR__IVRInput___UpdateActionState value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___UpdateActionState __get_UpdateActionState() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetDigitalActionData __declspec(property(get=__get_GetDigitalActionData, put=__set_GetDigitalActionData))  GetDigitalActionData;

constexpr void __set_GetDigitalActionData(OVR::OpenVR::OVR__OpenVR__IVRInput___GetDigitalActionData value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetDigitalActionData __get_GetDigitalActionData() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetAnalogActionData __declspec(property(get=__get_GetAnalogActionData, put=__set_GetAnalogActionData))  GetAnalogActionData;

constexpr void __set_GetAnalogActionData(OVR::OpenVR::OVR__OpenVR__IVRInput___GetAnalogActionData value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetAnalogActionData __get_GetAnalogActionData() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetPoseActionData __declspec(property(get=__get_GetPoseActionData, put=__set_GetPoseActionData))  GetPoseActionData;

constexpr void __set_GetPoseActionData(OVR::OpenVR::OVR__OpenVR__IVRInput___GetPoseActionData value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetPoseActionData __get_GetPoseActionData() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalActionData __declspec(property(get=__get_GetSkeletalActionData, put=__set_GetSkeletalActionData))  GetSkeletalActionData;

constexpr void __set_GetSkeletalActionData(OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalActionData value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalActionData __get_GetSkeletalActionData() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneData __declspec(property(get=__get_GetSkeletalBoneData, put=__set_GetSkeletalBoneData))  GetSkeletalBoneData;

constexpr void __set_GetSkeletalBoneData(OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneData value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneData __get_GetSkeletalBoneData() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed __declspec(property(get=__get_GetSkeletalBoneDataCompressed, put=__set_GetSkeletalBoneDataCompressed))  GetSkeletalBoneDataCompressed;

constexpr void __set_GetSkeletalBoneDataCompressed(OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed __get_GetSkeletalBoneDataCompressed() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___DecompressSkeletalBoneData __declspec(property(get=__get_DecompressSkeletalBoneData, put=__set_DecompressSkeletalBoneData))  DecompressSkeletalBoneData;

constexpr void __set_DecompressSkeletalBoneData(OVR::OpenVR::OVR__OpenVR__IVRInput___DecompressSkeletalBoneData value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___DecompressSkeletalBoneData __get_DecompressSkeletalBoneData() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___TriggerHapticVibrationAction __declspec(property(get=__get_TriggerHapticVibrationAction, put=__set_TriggerHapticVibrationAction))  TriggerHapticVibrationAction;

constexpr void __set_TriggerHapticVibrationAction(OVR::OpenVR::OVR__OpenVR__IVRInput___TriggerHapticVibrationAction value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___TriggerHapticVibrationAction __get_TriggerHapticVibrationAction() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionOrigins __declspec(property(get=__get_GetActionOrigins, put=__set_GetActionOrigins))  GetActionOrigins;

constexpr void __set_GetActionOrigins(OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionOrigins value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionOrigins __get_GetActionOrigins() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginLocalizedName __declspec(property(get=__get_GetOriginLocalizedName, put=__set_GetOriginLocalizedName))  GetOriginLocalizedName;

constexpr void __set_GetOriginLocalizedName(OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginLocalizedName value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginLocalizedName __get_GetOriginLocalizedName() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo __declspec(property(get=__get_GetOriginTrackedDeviceInfo, put=__set_GetOriginTrackedDeviceInfo))  GetOriginTrackedDeviceInfo;

constexpr void __set_GetOriginTrackedDeviceInfo(OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo __get_GetOriginTrackedDeviceInfo() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___ShowActionOrigins __declspec(property(get=__get_ShowActionOrigins, put=__set_ShowActionOrigins))  ShowActionOrigins;

constexpr void __set_ShowActionOrigins(OVR::OpenVR::OVR__OpenVR__IVRInput___ShowActionOrigins value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___ShowActionOrigins __get_ShowActionOrigins() const;

 OVR::OpenVR::OVR__OpenVR__IVRInput___ShowBindingsForActionSet __declspec(property(get=__get_ShowBindingsForActionSet, put=__set_ShowBindingsForActionSet))  ShowBindingsForActionSet;

constexpr void __set_ShowBindingsForActionSet(OVR::OpenVR::OVR__OpenVR__IVRInput___ShowBindingsForActionSet value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRInput___ShowBindingsForActionSet __get_ShowBindingsForActionSet() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___DecompressSkeletalBoneData);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___DecompressSkeletalBoneData, "OVR.OpenVR", "IVRInput/_DecompressSkeletalBoneData");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionHandle);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionHandle, "OVR.OpenVR", "IVRInput/_GetActionHandle");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionOrigins);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionOrigins, "OVR.OpenVR", "IVRInput/_GetActionOrigins");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionSetHandle);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetActionSetHandle, "OVR.OpenVR", "IVRInput/_GetActionSetHandle");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetAnalogActionData);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetAnalogActionData, "OVR.OpenVR", "IVRInput/_GetAnalogActionData");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetDigitalActionData);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetDigitalActionData, "OVR.OpenVR", "IVRInput/_GetDigitalActionData");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetInputSourceHandle);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetInputSourceHandle, "OVR.OpenVR", "IVRInput/_GetInputSourceHandle");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginLocalizedName);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginLocalizedName, "OVR.OpenVR", "IVRInput/_GetOriginLocalizedName");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetOriginTrackedDeviceInfo, "OVR.OpenVR", "IVRInput/_GetOriginTrackedDeviceInfo");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetPoseActionData);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetPoseActionData, "OVR.OpenVR", "IVRInput/_GetPoseActionData");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalActionData);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalActionData, "OVR.OpenVR", "IVRInput/_GetSkeletalActionData");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneData);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneData, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneData");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___GetSkeletalBoneDataCompressed, "OVR.OpenVR", "IVRInput/_GetSkeletalBoneDataCompressed");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___SetActionManifestPath);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___SetActionManifestPath, "OVR.OpenVR", "IVRInput/_SetActionManifestPath");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___ShowActionOrigins);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___ShowActionOrigins, "OVR.OpenVR", "IVRInput/_ShowActionOrigins");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___ShowBindingsForActionSet);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___ShowBindingsForActionSet, "OVR.OpenVR", "IVRInput/_ShowBindingsForActionSet");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___TriggerHapticVibrationAction);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___TriggerHapticVibrationAction, "OVR.OpenVR", "IVRInput/_TriggerHapticVibrationAction");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__IVRInput___UpdateActionState);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__IVRInput___UpdateActionState, "OVR.OpenVR", "IVRInput/_UpdateActionState");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRInput, "OVR.OpenVR", "IVRInput");
