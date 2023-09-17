#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Experimental::XR::Interaction {
class BasePoseProvider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
struct ____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType;
}
namespace UnityEngine::SpatialTracking {
struct ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose;
}
namespace UnityEngine::SpatialTracking {
struct ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType;
}
namespace UnityEngine::SpatialTracking {
struct ____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType;
}
namespace UnityEngine::SpatialTracking {
class TrackedPoseDriver;
}
// Type: ::DeviceType
namespace UnityEngine::SpatialTracking {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16018))
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriver::DeviceType
struct CORDL_TYPE ____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType(____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType const&) = default;
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType(____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType&&) = default;
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType& operator=(____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType& operator=(____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType_Unwrapped : int32_t {
__GenericXRDevice = 0,
__GenericXRController = 1,
__GenericXRRemote = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field GenericXRDevice offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType const GenericXRDevice;

/// @brief Field GenericXRController offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType const GenericXRController;

/// @brief Field GenericXRRemote offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType const GenericXRRemote;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::SpatialTracking
// Type: ::TrackedPose
namespace UnityEngine::SpatialTracking {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16019))
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriver::TrackedPose
struct CORDL_TYPE ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose(int32_t value__) noexcept;


                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose(____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const&) = default;
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose(____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose&&) = default;
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose& operator=(____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose& operator=(____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose_Unwrapped : int32_t {
__LeftEye = 0,
__RightEye = 1,
__Center = 2,
__Head = 3,
__LeftPose = 4,
__RightPose = 5,
__ColorCamera = 6,
__DepthCameraDeprecated = 7,
__FisheyeCameraDeprected = 8,
__DeviceDeprecated = 9,
__RemotePose = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LeftEye offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const LeftEye;

/// @brief Field RightEye offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const RightEye;

/// @brief Field Center offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const Center;

/// @brief Field Head offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const Head;

/// @brief Field LeftPose offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const LeftPose;

/// @brief Field RightPose offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const RightPose;

/// @brief Field ColorCamera offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const ColorCamera;

/// @brief Field DepthCameraDeprecated offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const DepthCameraDeprecated;

/// @brief Field FisheyeCameraDeprected offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const FisheyeCameraDeprected;

/// @brief Field DeviceDeprecated offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const DeviceDeprecated;

/// @brief Field RemotePose offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose const RemotePose;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::SpatialTracking
// Type: ::TrackingType
namespace UnityEngine::SpatialTracking {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16020))
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriver::TrackingType
struct CORDL_TYPE ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType(____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType const&) = default;
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType(____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType&&) = default;
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType& operator=(____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType& operator=(____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType_Unwrapped : int32_t {
__RotationAndPosition = 0,
__RotationOnly = 1,
__PositionOnly = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field RotationAndPosition offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType const RotationAndPosition;

/// @brief Field RotationOnly offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType const RotationOnly;

/// @brief Field PositionOnly offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType const PositionOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::SpatialTracking
// Type: ::UpdateType
namespace UnityEngine::SpatialTracking {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16021))
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriver::UpdateType
struct CORDL_TYPE ____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType(____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType const&) = default;
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType(____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType&&) = default;
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType& operator=(____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType& operator=(____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType_Unwrapped : int32_t {
__UpdateAndBeforeRender = 0,
__Update = 1,
__BeforeRender = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UpdateAndBeforeRender offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType const UpdateAndBeforeRender;

/// @brief Field Update offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType const Update;

/// @brief Field BeforeRender offset 0
static ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType const BeforeRender;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::SpatialTracking
// Type: UnityEngine.SpatialTracking::TrackedPoseDriver
namespace UnityEngine::SpatialTracking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16022))
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriver
class CORDL_TYPE TrackedPoseDriver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpdateType = ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType;

using TrackingType = ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType;

using TrackedPose = ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose;

using DeviceType = ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TrackedPoseDriver() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: " const&", def_value: None }]
constexpr TrackedPoseDriver(TrackedPoseDriver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "&&", def_value: None }]
constexpr TrackedPoseDriver(TrackedPoseDriver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackedPoseDriver(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TrackedPoseDriver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackedPoseDriver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackedPoseDriver& operator=(TrackedPoseDriver&& o) noexcept = default;
  constexpr TrackedPoseDriver& operator=(TrackedPoseDriver const& o) noexcept = default;
                


// Fields

 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType __declspec(property(get=__get_m_Device, put=__set_m_Device))  m_Device;

constexpr void __set_m_Device(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType value) ;

constexpr ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType __get_m_Device() const;

 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose __declspec(property(get=__get_m_PoseSource, put=__set_m_PoseSource))  m_PoseSource;

constexpr void __set_m_PoseSource(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose value) ;

constexpr ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose __get_m_PoseSource() const;

 ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider __declspec(property(get=__get_m_PoseProviderComponent, put=__set_m_PoseProviderComponent))  m_PoseProviderComponent;

constexpr void __set_m_PoseProviderComponent(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider value) ;

constexpr ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider __get_m_PoseProviderComponent() const;

 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType __declspec(property(get=__get_m_TrackingType, put=__set_m_TrackingType))  m_TrackingType;

constexpr void __set_m_TrackingType(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType value) ;

constexpr ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType __get_m_TrackingType() const;

 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType __declspec(property(get=__get_m_UpdateType, put=__set_m_UpdateType))  m_UpdateType;

constexpr void __set_m_UpdateType(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType value) ;

constexpr ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType __get_m_UpdateType() const;

 bool __declspec(property(get=__get_m_UseRelativeTransform, put=__set_m_UseRelativeTransform))  m_UseRelativeTransform;

constexpr void __set_m_UseRelativeTransform(bool value) ;

constexpr bool __get_m_UseRelativeTransform() const;

 ::UnityEngine::Pose __declspec(property(get=__get_m_OriginPose, put=__set_m_OriginPose))  m_OriginPose;

constexpr void __set_m_OriginPose(::UnityEngine::Pose value) ;

constexpr ::UnityEngine::Pose __get_m_OriginPose() const;


// Properties

 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType __declspec(property(get=get_deviceType, put=set_deviceType))  deviceType;

 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose __declspec(property(get=get_poseSource, put=set_poseSource))  poseSource;

 ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider __declspec(property(get=get_poseProviderComponent, put=set_poseProviderComponent))  poseProviderComponent;

 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType __declspec(property(get=get_trackingType, put=set_trackingType))  trackingType;

 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType __declspec(property(get=get_updateType, put=set_updateType))  updateType;

 bool __declspec(property(get=get_UseRelativeTransform, put=set_UseRelativeTransform))  UseRelativeTransform;

 ::UnityEngine::Pose __declspec(property(get=get_originPose, put=set_originPose))  originPose;


// Methods

/// @brief Method get_deviceType addr 0x2ba2760 size 0x8 virtual false final false
 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType get_deviceType() ;

/// @brief Method set_deviceType addr 0x2ba2768 size 0x8 virtual false final false
 void set_deviceType(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType value) ;

/// @brief Method get_poseSource addr 0x2ba2770 size 0x8 virtual false final false
 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose get_poseSource() ;

/// @brief Method set_poseSource addr 0x2ba2778 size 0x8 virtual false final false
 void set_poseSource(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose value) ;

/// @brief Method SetPoseSource addr 0x2ba2780 size 0x144 virtual false final false
 bool SetPoseSource(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType deviceType, ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose pose) ;

/// @brief Method get_poseProviderComponent addr 0x2ba28c4 size 0x8 virtual false final false
 ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider get_poseProviderComponent() ;

/// @brief Method set_poseProviderComponent addr 0x2ba28cc size 0x8 virtual false final false
 void set_poseProviderComponent(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider value) ;

/// @brief Method GetPoseData addr 0x2ba28d4 size 0xcc virtual false final false
 ::UnityEngine::SpatialTracking::PoseDataFlags GetPoseData(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType device, ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose poseSource, ByRef<::UnityEngine::Pose> resultPose) ;

/// @brief Method get_trackingType addr 0x2ba29a0 size 0x8 virtual false final false
 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType get_trackingType() ;

/// @brief Method set_trackingType addr 0x2ba29a8 size 0x8 virtual false final false
 void set_trackingType(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType value) ;

/// @brief Method get_updateType addr 0x2ba29b0 size 0x8 virtual false final false
 ::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType get_updateType() ;

/// @brief Method set_updateType addr 0x2ba29b8 size 0x8 virtual false final false
 void set_updateType(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType value) ;

/// @brief Method get_UseRelativeTransform addr 0x2ba29c0 size 0x8 virtual false final false
 bool get_UseRelativeTransform() ;

/// @brief Method set_UseRelativeTransform addr 0x2ba29c8 size 0xc virtual false final false
 void set_UseRelativeTransform(bool value) ;

/// @brief Method get_originPose addr 0x2ba29d4 size 0x14 virtual false final false
 ::UnityEngine::Pose get_originPose() ;

/// @brief Method set_originPose addr 0x2ba29e8 size 0x1c virtual false final false
 void set_originPose(::UnityEngine::Pose value) ;

/// @brief Method CacheLocalPosition addr 0x2ba2a04 size 0x50 virtual false final false
 void CacheLocalPosition() ;

/// @brief Method ResetToCachedLocalPosition addr 0x2ba2a54 size 0x20 virtual false final false
 void ResetToCachedLocalPosition() ;

/// @brief Method Awake addr 0x2ba2a74 size 0x4 virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2ba2a78 size 0x4 virtual true final false
 void OnDestroy() ;

/// @brief Method OnEnable addr 0x2ba2a7c size 0x74 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2ba2af0 size 0x7c virtual true final false
 void OnDisable() ;

/// @brief Method FixedUpdate addr 0x2ba2b6c size 0x1c virtual true final false
 void FixedUpdate() ;

/// @brief Method Update addr 0x2ba2b88 size 0x1c virtual true final false
 void Update() ;

/// @brief Method OnBeforeRender addr 0x2ba2ba4 size 0x20 virtual true final false
 void OnBeforeRender() ;

/// @brief Method SetLocalTransform addr 0x2ba2bc4 size 0xe4 virtual true final false
 void SetLocalTransform(::UnityEngine::Vector3 newPosition, ::UnityEngine::Quaternion newRotation, ::UnityEngine::SpatialTracking::PoseDataFlags poseFlags) ;

/// @brief Method TransformPoseByOriginIfNeeded addr 0x2ba2ca8 size 0x64 virtual false final false
 ::UnityEngine::Pose TransformPoseByOriginIfNeeded(::UnityEngine::Pose pose) ;

/// @brief Method HasStereoCamera addr 0x2ba2d0c size 0xb8 virtual false final false
 bool HasStereoCamera() ;

/// @brief Method PerformUpdate addr 0x2ba2dc4 size 0xc4 virtual true final false
 void PerformUpdate() ;

// Ctor Parameters []
explicit TrackedPoseDriver() ;

/// @brief Method .ctor addr 0x2ba2e88 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SpatialTracking
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType, "UnityEngine.SpatialTracking", "TrackedPoseDriver/DeviceType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose, "UnityEngine.SpatialTracking", "TrackedPoseDriver/TrackedPose");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType, "UnityEngine.SpatialTracking", "TrackedPoseDriver/TrackingType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType, "UnityEngine.SpatialTracking", "TrackedPoseDriver/UpdateType");
NEED_NO_BOX(::UnityEngine::SpatialTracking::TrackedPoseDriver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::TrackedPoseDriver, "UnityEngine.SpatialTracking", "TrackedPoseDriver");
