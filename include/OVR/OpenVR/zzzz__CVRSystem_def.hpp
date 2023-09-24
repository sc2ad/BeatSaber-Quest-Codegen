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
namespace OVR::OpenVR {
class OVR__OpenVR__CVRSystem___PollNextEventPacked;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion;
}
namespace OVR::OpenVR {
struct ETrackedDeviceClass;
}
namespace OVR::OpenVR {
struct ETrackedPropertyError;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct HiddenAreaMesh_t;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
class OVR__OpenVR__CVRSystem___GetControllerStatePacked;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct OVR__OpenVR__CVRSystem__PollNextEventUnion;
}
namespace OVR::OpenVR {
struct ETrackedControllerRole;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace OVR::OpenVR {
struct IVRSystem;
}
namespace OVR::OpenVR {
struct EVREventType;
}
namespace OVR::OpenVR {
struct EHiddenAreaMeshType;
}
namespace OVR::OpenVR {
struct EVRControllerAxisType;
}
namespace OVR::OpenVR {
struct EVRButtonId;
}
namespace OVR::OpenVR {
struct EVRFirmwareError;
}
namespace OVR::OpenVR {
struct EDeviceActivityLevel;
}
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
namespace OVR::OpenVR {
class OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked;
}
namespace OVR::OpenVR {
struct DistortionCoordinates_t;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
namespace OVR::OpenVR {
struct OVR__OpenVR__CVRSystem__GetControllerStateUnion;
}
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
struct VRControllerState_t_Packed;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
struct VREvent_t_Packed;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetControllerState;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___GetControllerStateWithPose;
}
namespace OVR::OpenVR {
class OVR__OpenVR__IVRSystem___PollNextEvent;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRSystem;
}
namespace OVR::OpenVR {
class OVR__OpenVR__CVRSystem___GetControllerStatePacked;
}
namespace OVR::OpenVR {
class OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked;
}
namespace OVR::OpenVR {
class OVR__OpenVR__CVRSystem___PollNextEventPacked;
}
namespace OVR::OpenVR {
struct OVR__OpenVR__CVRSystem__GetControllerStateUnion;
}
namespace OVR::OpenVR {
struct OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion;
}
namespace OVR::OpenVR {
struct OVR__OpenVR__CVRSystem__PollNextEventUnion;
}
// Type: ::_PollNextEventPacked
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9335))
// CS Name: OVR.OpenVR.CVRSystem::_PollNextEventPacked
class CORDL_TYPE OVR__OpenVR__CVRSystem___PollNextEventPacked : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__CVRSystem___PollNextEventPacked() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__CVRSystem___PollNextEventPacked", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__CVRSystem___PollNextEventPacked(OVR__OpenVR__CVRSystem___PollNextEventPacked const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__CVRSystem___PollNextEventPacked", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__CVRSystem___PollNextEventPacked(OVR__OpenVR__CVRSystem___PollNextEventPacked&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__CVRSystem___PollNextEventPacked(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__CVRSystem___PollNextEventPacked& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__CVRSystem___PollNextEventPacked& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__CVRSystem___PollNextEventPacked& operator=(OVR__OpenVR__CVRSystem___PollNextEventPacked&& o) noexcept = default;
  constexpr OVR__OpenVR__CVRSystem___PollNextEventPacked& operator=(OVR__OpenVR__CVRSystem___PollNextEventPacked const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2663f80 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2664058 size 0x14 virtual true final false
 bool Invoke(ByRef<OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent) ;

/// @brief Method BeginInvoke addr 0x266406c size 0xb8 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2664124 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VREvent_t_Packed> pEvent, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::PollNextEventUnion
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9336))
// CS Name: OVR.OpenVR.CVRSystem::PollNextEventUnion
struct CORDL_TYPE OVR__OpenVR__CVRSystem__PollNextEventUnion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pPollNextEvent", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent", modifiers: "", def_value: None }, CppParam { name: "pPollNextEventPacked", ty: "OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked", modifiers: "", def_value: None }]
constexpr OVR__OpenVR__CVRSystem__PollNextEventUnion(OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent pPollNextEvent, OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked pPollNextEventPacked) noexcept;


                    constexpr OVR__OpenVR__CVRSystem__PollNextEventUnion(OVR__OpenVR__CVRSystem__PollNextEventUnion const&) = default;
                    constexpr OVR__OpenVR__CVRSystem__PollNextEventUnion(OVR__OpenVR__CVRSystem__PollNextEventUnion&&) = default;
                    constexpr OVR__OpenVR__CVRSystem__PollNextEventUnion& operator=(OVR__OpenVR__CVRSystem__PollNextEventUnion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVR__OpenVR__CVRSystem__PollNextEventUnion& operator=(OVR__OpenVR__CVRSystem__PollNextEventUnion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__CVRSystem__PollNextEventUnion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent __declspec(property(get=__get_pPollNextEvent, put=__set_pPollNextEvent))  pPollNextEvent;

constexpr void __set_pPollNextEvent(OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___PollNextEvent __get_pPollNextEvent() const;

 OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked __declspec(property(get=__get_pPollNextEventPacked, put=__set_pPollNextEventPacked))  pPollNextEventPacked;

constexpr void __set_pPollNextEventPacked(OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked value) ;

constexpr OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked __get_pPollNextEventPacked() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetControllerStatePacked
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9337))
// CS Name: OVR.OpenVR.CVRSystem::_GetControllerStatePacked
class CORDL_TYPE OVR__OpenVR__CVRSystem___GetControllerStatePacked : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__CVRSystem___GetControllerStatePacked() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__CVRSystem___GetControllerStatePacked", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__CVRSystem___GetControllerStatePacked(OVR__OpenVR__CVRSystem___GetControllerStatePacked const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__CVRSystem___GetControllerStatePacked", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__CVRSystem___GetControllerStatePacked(OVR__OpenVR__CVRSystem___GetControllerStatePacked&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__CVRSystem___GetControllerStatePacked(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__CVRSystem___GetControllerStatePacked& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__CVRSystem___GetControllerStatePacked& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__CVRSystem___GetControllerStatePacked& operator=(OVR__OpenVR__CVRSystem___GetControllerStatePacked&& o) noexcept = default;
  constexpr OVR__OpenVR__CVRSystem___GetControllerStatePacked& operator=(OVR__OpenVR__CVRSystem___GetControllerStatePacked const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2664150 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2664214 size 0x14 virtual true final false
 bool Invoke(uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize) ;

/// @brief Method BeginInvoke addr 0x2664228 size 0xcc virtual true final false
 System::IAsyncResult BeginInvoke(uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x26642f4 size 0x2c virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::GetControllerStateUnion
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9338))
// CS Name: OVR.OpenVR.CVRSystem::GetControllerStateUnion
struct CORDL_TYPE OVR__OpenVR__CVRSystem__GetControllerStateUnion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pGetControllerState", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState", modifiers: "", def_value: None }, CppParam { name: "pGetControllerStatePacked", ty: "OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked", modifiers: "", def_value: None }]
constexpr OVR__OpenVR__CVRSystem__GetControllerStateUnion(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState pGetControllerState, OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked pGetControllerStatePacked) noexcept;


                    constexpr OVR__OpenVR__CVRSystem__GetControllerStateUnion(OVR__OpenVR__CVRSystem__GetControllerStateUnion const&) = default;
                    constexpr OVR__OpenVR__CVRSystem__GetControllerStateUnion(OVR__OpenVR__CVRSystem__GetControllerStateUnion&&) = default;
                    constexpr OVR__OpenVR__CVRSystem__GetControllerStateUnion& operator=(OVR__OpenVR__CVRSystem__GetControllerStateUnion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVR__OpenVR__CVRSystem__GetControllerStateUnion& operator=(OVR__OpenVR__CVRSystem__GetControllerStateUnion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__CVRSystem__GetControllerStateUnion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState __declspec(property(get=__get_pGetControllerState, put=__set_pGetControllerState))  pGetControllerState;

constexpr void __set_pGetControllerState(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerState __get_pGetControllerState() const;

 OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked __declspec(property(get=__get_pGetControllerStatePacked, put=__set_pGetControllerStatePacked))  pGetControllerStatePacked;

constexpr void __set_pGetControllerStatePacked(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked value) ;

constexpr OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked __get_pGetControllerStatePacked() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::_GetControllerStateWithPosePacked
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9339))
// CS Name: OVR.OpenVR.CVRSystem::_GetControllerStateWithPosePacked
class CORDL_TYPE OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked", modifiers: " const&", def_value: None }]
constexpr OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked(OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked", modifiers: "&&", def_value: None }]
constexpr OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked(OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked& operator=(OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked&& o) noexcept = default;
  constexpr OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked& operator=(OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked const& o) noexcept = default;
                


// Methods

static OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2664320 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x26643e4 size 0x14 virtual true final false
 bool Invoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) ;

/// @brief Method BeginInvoke addr 0x26643f8 size 0x134 virtual true final false
 System::IAsyncResult BeginInvoke(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, uint32_t unControllerStateSize, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x266452c size 0x34 virtual true final false
 bool EndInvoke(ByRef<OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: ::GetControllerStateWithPoseUnion
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9340))
// CS Name: OVR.OpenVR.CVRSystem::GetControllerStateWithPoseUnion
struct CORDL_TYPE OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "pGetControllerStateWithPose", ty: "OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose", modifiers: "", def_value: None }, CppParam { name: "pGetControllerStateWithPosePacked", ty: "OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked", modifiers: "", def_value: None }]
constexpr OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose pGetControllerStateWithPose, OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked pGetControllerStateWithPosePacked) noexcept;


                    constexpr OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion(OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion const&) = default;
                    constexpr OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion(OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion&&) = default;
                    constexpr OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion& operator=(OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion& operator=(OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose __declspec(property(get=__get_pGetControllerStateWithPose, put=__set_pGetControllerStateWithPose))  pGetControllerStateWithPose;

constexpr void __set_pGetControllerStateWithPose(OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose value) ;

constexpr OVR::OpenVR::OVR__OpenVR__IVRSystem___GetControllerStateWithPose __get_pGetControllerStateWithPose() const;

 OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked __declspec(property(get=__get_pGetControllerStateWithPosePacked, put=__set_pGetControllerStateWithPosePacked))  pGetControllerStateWithPosePacked;

constexpr void __set_pGetControllerStateWithPosePacked(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked value) ;

constexpr OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked __get_pGetControllerStateWithPosePacked() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::CVRSystem
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9341))
// CS Name: OVR.OpenVR.CVRSystem
class CORDL_TYPE CVRSystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using GetControllerStateWithPoseUnion = OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion;

using _GetControllerStateWithPosePacked = OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked;

using GetControllerStateUnion = OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateUnion;

using _GetControllerStatePacked = OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked;

using PollNextEventUnion = OVR::OpenVR::OVR__OpenVR__CVRSystem__PollNextEventUnion;

using _PollNextEventPacked = OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x188};

virtual ~CVRSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRSystem", modifiers: " const&", def_value: None }]
constexpr CVRSystem(CVRSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CVRSystem", modifiers: "&&", def_value: None }]
constexpr CVRSystem(CVRSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CVRSystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CVRSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CVRSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CVRSystem& operator=(CVRSystem&& o) noexcept = default;
  constexpr CVRSystem& operator=(CVRSystem const& o) noexcept = default;
                


// Fields

 OVR::OpenVR::IVRSystem __declspec(property(get=__get_FnTable, put=__set_FnTable))  FnTable;

constexpr void __set_FnTable(OVR::OpenVR::IVRSystem value) ;

constexpr OVR::OpenVR::IVRSystem __get_FnTable() const;


// Methods

static OVR::OpenVR::CVRSystem New_ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method .ctor addr 0x266303c size 0x114 virtual false final false
 void _ctor(::cordl_internals::intptr_t pInterface) ;

/// @brief Method GetRecommendedRenderTargetSize addr 0x2663150 size 0x2c virtual false final false
 void GetRecommendedRenderTargetSize(ByRef<uint32_t> pnWidth, ByRef<uint32_t> pnHeight) ;

/// @brief Method GetProjectionMatrix addr 0x266317c size 0x48 virtual false final false
 OVR::OpenVR::HmdMatrix44_t GetProjectionMatrix(OVR::OpenVR::EVREye eEye, float_t fNearZ, float_t fFarZ) ;

/// @brief Method GetProjectionRaw addr 0x26631c4 size 0x34 virtual false final false
 void GetProjectionRaw(OVR::OpenVR::EVREye eEye, ByRef<float_t> pfLeft, ByRef<float_t> pfRight, ByRef<float_t> pfTop, ByRef<float_t> pfBottom) ;

/// @brief Method ComputeDistortion addr 0x26631f8 size 0x24 virtual false final false
 bool ComputeDistortion(OVR::OpenVR::EVREye eEye, float_t fU, float_t fV, ByRef<OVR::OpenVR::DistortionCoordinates_t> pDistortionCoordinates) ;

/// @brief Method GetEyeToHeadTransform addr 0x266321c size 0x48 virtual false final false
 OVR::OpenVR::HmdMatrix34_t GetEyeToHeadTransform(OVR::OpenVR::EVREye eEye) ;

/// @brief Method GetTimeSinceLastVsync addr 0x2663264 size 0x2c virtual false final false
 bool GetTimeSinceLastVsync(ByRef<float_t> pfSecondsSinceLastVsync, ByRef<uint64_t> pulFrameCounter) ;

/// @brief Method GetD3D9AdapterIndex addr 0x2663290 size 0x24 virtual false final false
 int32_t GetD3D9AdapterIndex() ;

/// @brief Method GetDXGIOutputInfo addr 0x26632b4 size 0x28 virtual false final false
 void GetDXGIOutputInfo(ByRef<int32_t> pnAdapterIndex) ;

/// @brief Method GetOutputDevice addr 0x26632dc size 0x28 virtual false final false
 void GetOutputDevice(ByRef<uint64_t> pnDevice, OVR::OpenVR::ETextureType textureType, ::cordl_internals::intptr_t pInstance) ;

/// @brief Method IsDisplayOnDesktop addr 0x2663304 size 0x24 virtual false final false
 bool IsDisplayOnDesktop() ;

/// @brief Method SetDisplayVisibility addr 0x2663328 size 0x28 virtual false final false
 bool SetDisplayVisibility(bool bIsVisibleOnDesktop) ;

/// @brief Method GetDeviceToAbsoluteTrackingPose addr 0x2663350 size 0x2c virtual false final false
 void GetDeviceToAbsoluteTrackingPose(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float_t fPredictedSecondsToPhotonsFromNow, ::ArrayW<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePoseArray) ;

/// @brief Method ResetSeatedZeroPose addr 0x266337c size 0x24 virtual false final false
 void ResetSeatedZeroPose() ;

/// @brief Method GetSeatedZeroPoseToStandingAbsoluteTrackingPose addr 0x26633a0 size 0x48 virtual false final false
 OVR::OpenVR::HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose() ;

/// @brief Method GetRawZeroPoseToStandingAbsoluteTrackingPose addr 0x26633e8 size 0x48 virtual false final false
 OVR::OpenVR::HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose() ;

/// @brief Method GetSortedTrackedDeviceIndicesOfClass addr 0x2663430 size 0x30 virtual false final false
 uint32_t GetSortedTrackedDeviceIndicesOfClass(OVR::OpenVR::ETrackedDeviceClass eTrackedDeviceClass, ::ArrayW<uint32_t> punTrackedDeviceIndexArray, uint32_t unRelativeToTrackedDeviceIndex) ;

/// @brief Method GetTrackedDeviceActivityLevel addr 0x2663460 size 0x24 virtual false final false
 OVR::OpenVR::EDeviceActivityLevel GetTrackedDeviceActivityLevel(uint32_t unDeviceId) ;

/// @brief Method ApplyTransform addr 0x2663484 size 0x24 virtual false final false
 void ApplyTransform(ByRef<OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose, ByRef<OVR::OpenVR::HmdMatrix34_t> pTransform) ;

/// @brief Method GetTrackedDeviceIndexForControllerRole addr 0x26634a8 size 0x24 virtual false final false
 uint32_t GetTrackedDeviceIndexForControllerRole(OVR::OpenVR::ETrackedControllerRole unDeviceType) ;

/// @brief Method GetControllerRoleForTrackedDeviceIndex addr 0x26634cc size 0x24 virtual false final false
 OVR::OpenVR::ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(uint32_t unDeviceIndex) ;

/// @brief Method GetTrackedDeviceClass addr 0x26634f0 size 0x24 virtual false final false
 OVR::OpenVR::ETrackedDeviceClass GetTrackedDeviceClass(uint32_t unDeviceIndex) ;

/// @brief Method IsTrackedDeviceConnected addr 0x2663514 size 0x24 virtual false final false
 bool IsTrackedDeviceConnected(uint32_t unDeviceIndex) ;

/// @brief Method GetBoolTrackedDeviceProperty addr 0x2663538 size 0x24 virtual false final false
 bool GetBoolTrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method GetFloatTrackedDeviceProperty addr 0x266355c size 0x24 virtual false final false
 float_t GetFloatTrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method GetInt32TrackedDeviceProperty addr 0x2663580 size 0x24 virtual false final false
 int32_t GetInt32TrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method GetUint64TrackedDeviceProperty addr 0x26635a4 size 0x24 virtual false final false
 uint64_t GetUint64TrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method GetMatrix34TrackedDeviceProperty addr 0x26635c8 size 0x48 virtual false final false
 OVR::OpenVR::HmdMatrix34_t GetMatrix34TrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method GetArrayTrackedDeviceProperty addr 0x2663610 size 0x24 virtual false final false
 uint32_t GetArrayTrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t propType, ::cordl_internals::intptr_t pBuffer, uint32_t unBufferSize, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method GetStringTrackedDeviceProperty addr 0x2663634 size 0x24 virtual false final false
 uint32_t GetStringTrackedDeviceProperty(uint32_t unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, System::Text::StringBuilder pchValue, uint32_t unBufferSize, ByRef<OVR::OpenVR::ETrackedPropertyError> pError) ;

/// @brief Method GetPropErrorNameFromEnum addr 0x2663658 size 0x84 virtual false final false
 ::StringW GetPropErrorNameFromEnum(OVR::OpenVR::ETrackedPropertyError error) ;

/// @brief Method PollNextEvent addr 0x26636dc size 0x174 virtual false final false
 bool PollNextEvent(ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) ;

/// @brief Method PollNextEventWithPose addr 0x2663870 size 0x24 virtual false final false
 bool PollNextEventWithPose(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ByRef<OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) ;

/// @brief Method GetEventTypeNameFromEnum addr 0x2663894 size 0x84 virtual false final false
 ::StringW GetEventTypeNameFromEnum(OVR::OpenVR::EVREventType eType) ;

/// @brief Method GetHiddenAreaMesh addr 0x2663918 size 0x24 virtual false final false
 OVR::OpenVR::HiddenAreaMesh_t GetHiddenAreaMesh(OVR::OpenVR::EVREye eEye, OVR::OpenVR::EHiddenAreaMeshType type) ;

/// @brief Method GetControllerState addr 0x266393c size 0x1ac virtual false final false
 bool GetControllerState(uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize) ;

/// @brief Method GetControllerStateWithPose addr 0x2663b68 size 0x1cc virtual false final false
 bool GetControllerStateWithPose(OVR::OpenVR::ETrackingUniverseOrigin eOrigin, uint32_t unControllerDeviceIndex, ByRef<OVR::OpenVR::VRControllerState_t> pControllerState, uint32_t unControllerStateSize, ByRef<OVR::OpenVR::TrackedDevicePose_t> pTrackedDevicePose) ;

/// @brief Method TriggerHapticPulse addr 0x2663d34 size 0x24 virtual false final false
 void TriggerHapticPulse(uint32_t unControllerDeviceIndex, uint32_t unAxisId, uint16_t usDurationMicroSec) ;

/// @brief Method GetButtonIdNameFromEnum addr 0x2663d58 size 0x84 virtual false final false
 ::StringW GetButtonIdNameFromEnum(OVR::OpenVR::EVRButtonId eButtonId) ;

/// @brief Method GetControllerAxisTypeNameFromEnum addr 0x2663ddc size 0x84 virtual false final false
 ::StringW GetControllerAxisTypeNameFromEnum(OVR::OpenVR::EVRControllerAxisType eAxisType) ;

/// @brief Method IsInputAvailable addr 0x2663e60 size 0x24 virtual false final false
 bool IsInputAvailable() ;

/// @brief Method IsSteamVRDrawingControllers addr 0x2663e84 size 0x24 virtual false final false
 bool IsSteamVRDrawingControllers() ;

/// @brief Method ShouldApplicationPause addr 0x2663ea8 size 0x24 virtual false final false
 bool ShouldApplicationPause() ;

/// @brief Method ShouldApplicationReduceRenderingWork addr 0x2663ecc size 0x24 virtual false final false
 bool ShouldApplicationReduceRenderingWork() ;

/// @brief Method DriverDebugRequest addr 0x2663ef0 size 0x24 virtual false final false
 uint32_t DriverDebugRequest(uint32_t unDeviceIndex, ::StringW pchRequest, System::Text::StringBuilder pchResponseBuffer, uint32_t unResponseBufferSize) ;

/// @brief Method PerformFirmwareUpdate addr 0x2663f14 size 0x24 virtual false final false
 OVR::OpenVR::EVRFirmwareError PerformFirmwareUpdate(uint32_t unDeviceIndex) ;

/// @brief Method AcknowledgeQuit_Exiting addr 0x2663f38 size 0x24 virtual false final false
 void AcknowledgeQuit_Exiting() ;

/// @brief Method AcknowledgeQuit_UserPrompt addr 0x2663f5c size 0x24 virtual false final false
 void AcknowledgeQuit_UserPrompt() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
NEED_NO_BOX(OVR::OpenVR::CVRSystem);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRSystem, "OVR.OpenVR", "CVRSystem");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStatePacked, "OVR.OpenVR", "CVRSystem/_GetControllerStatePacked");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__CVRSystem___GetControllerStateWithPosePacked, "OVR.OpenVR", "CVRSystem/_GetControllerStateWithPosePacked");
NEED_NO_BOX(OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked);
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__CVRSystem___PollNextEventPacked, "OVR.OpenVR", "CVRSystem/_PollNextEventPacked");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateUnion, "OVR.OpenVR", "CVRSystem/GetControllerStateUnion");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__CVRSystem__GetControllerStateWithPoseUnion, "OVR.OpenVR", "CVRSystem/GetControllerStateWithPoseUnion");
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OVR__OpenVR__CVRSystem__PollNextEventUnion, "OVR.OpenVR", "CVRSystem/PollNextEventUnion");
