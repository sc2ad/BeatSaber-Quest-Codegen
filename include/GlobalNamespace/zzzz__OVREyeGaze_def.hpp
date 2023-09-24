#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__EyeGazesState;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVREyeGaze__EyeTrackingMode;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPermissionsRequester__Permission;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVREyeGaze__EyeId;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVREyeGaze__EyeId;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVREyeGaze__EyeTrackingMode;
}
namespace GlobalNamespace {
class OVREyeGaze;
}
// Type: ::EyeId
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8461))
// CS Name: OVREyeGaze::EyeId
struct CORDL_TYPE GlobalNamespace__OVREyeGaze__EyeId : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVREyeGaze__EyeId(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVREyeGaze__EyeId(GlobalNamespace__OVREyeGaze__EyeId const&) = default;
                    constexpr GlobalNamespace__OVREyeGaze__EyeId(GlobalNamespace__OVREyeGaze__EyeId&&) = default;
                    constexpr GlobalNamespace__OVREyeGaze__EyeId& operator=(GlobalNamespace__OVREyeGaze__EyeId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVREyeGaze__EyeId& operator=(GlobalNamespace__OVREyeGaze__EyeId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVREyeGaze__EyeId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVREyeGaze__EyeId_Unwrapped : int32_t {
__Left = 0,
__Right = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVREyeGaze__EyeId_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVREyeGaze__EyeId_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId const Left;

/// @brief Field Right offset 0
static GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId const Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EyeTrackingMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8462))
// CS Name: OVREyeGaze::EyeTrackingMode
struct CORDL_TYPE GlobalNamespace__OVREyeGaze__EyeTrackingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVREyeGaze__EyeTrackingMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVREyeGaze__EyeTrackingMode(GlobalNamespace__OVREyeGaze__EyeTrackingMode const&) = default;
                    constexpr GlobalNamespace__OVREyeGaze__EyeTrackingMode(GlobalNamespace__OVREyeGaze__EyeTrackingMode&&) = default;
                    constexpr GlobalNamespace__OVREyeGaze__EyeTrackingMode& operator=(GlobalNamespace__OVREyeGaze__EyeTrackingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVREyeGaze__EyeTrackingMode& operator=(GlobalNamespace__OVREyeGaze__EyeTrackingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVREyeGaze__EyeTrackingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVREyeGaze__EyeTrackingMode_Unwrapped : int32_t {
__HeadSpace = 0,
__WorldSpace = 1,
__TrackingSpace = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVREyeGaze__EyeTrackingMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVREyeGaze__EyeTrackingMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HeadSpace offset 0
static GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode const HeadSpace;

/// @brief Field WorldSpace offset 0
static GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode const WorldSpace;

/// @brief Field TrackingSpace offset 0
static GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode const TrackingSpace;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVREyeGaze
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8463))
// CS Name: OVREyeGaze
class CORDL_TYPE OVREyeGaze : public UnityEngine::MonoBehaviour {
public:
// Declarations
using EyeTrackingMode = GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode;

using EyeId = GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~OVREyeGaze() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVREyeGaze", modifiers: " const&", def_value: None }]
constexpr OVREyeGaze(OVREyeGaze const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVREyeGaze", modifiers: "&&", def_value: None }]
constexpr OVREyeGaze(OVREyeGaze&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVREyeGaze(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVREyeGaze& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVREyeGaze& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVREyeGaze& operator=(OVREyeGaze&& o) noexcept = default;
  constexpr OVREyeGaze& operator=(OVREyeGaze const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId __declspec(property(get=__get_Eye, put=__set_Eye))  Eye;

constexpr void __set_Eye(GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId value) ;

constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId __get_Eye() const;

 float_t __declspec(property(get=__get__Confidence_k__BackingField, put=__set__Confidence_k__BackingField))  _Confidence_k__BackingField;

constexpr void __set__Confidence_k__BackingField(float_t value) ;

constexpr float_t __get__Confidence_k__BackingField() const;

 float_t __declspec(property(get=__get_ConfidenceThreshold, put=__set_ConfidenceThreshold))  ConfidenceThreshold;

constexpr void __set_ConfidenceThreshold(float_t value) ;

constexpr float_t __get_ConfidenceThreshold() const;

 bool __declspec(property(get=__get_ApplyPosition, put=__set_ApplyPosition))  ApplyPosition;

constexpr void __set_ApplyPosition(bool value) ;

constexpr bool __get_ApplyPosition() const;

 bool __declspec(property(get=__get_ApplyRotation, put=__set_ApplyRotation))  ApplyRotation;

constexpr void __set_ApplyRotation(bool value) ;

constexpr bool __get_ApplyRotation() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__EyeGazesState __declspec(property(get=__get__currentEyeGazesState, put=__set__currentEyeGazesState))  _currentEyeGazesState;

constexpr void __set__currentEyeGazesState(GlobalNamespace::GlobalNamespace__OVRPlugin__EyeGazesState value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__EyeGazesState __get__currentEyeGazesState() const;

 UnityEngine::Transform __declspec(property(get=__get_ReferenceFrame, put=__set_ReferenceFrame))  ReferenceFrame;

constexpr void __set_ReferenceFrame(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_ReferenceFrame() const;

 GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode __declspec(property(get=__get_TrackingMode, put=__set_TrackingMode))  TrackingMode;

constexpr void __set_TrackingMode(GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode value) ;

constexpr GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode __get_TrackingMode() const;

 UnityEngine::Quaternion __declspec(property(get=__get__initialRotationOffset, put=__set__initialRotationOffset))  _initialRotationOffset;

constexpr void __set__initialRotationOffset(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__initialRotationOffset() const;

 UnityEngine::Transform __declspec(property(get=__get__viewTransform, put=__set__viewTransform))  _viewTransform;

constexpr void __set__viewTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__viewTransform() const;

/// @brief Field EyeTrackingPermission offset 0
static GlobalNamespace::GlobalNamespace__OVRPermissionsRequester__Permission const EyeTrackingPermission;

 System::Action_1<::StringW> __declspec(property(get=__get__onPermissionGranted, put=__set__onPermissionGranted))  _onPermissionGranted;

constexpr void __set__onPermissionGranted(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get__onPermissionGranted() const;

static int32_t __declspec(property(get=__get__trackingInstanceCount, put=__set__trackingInstanceCount))  _trackingInstanceCount;

static void __set__trackingInstanceCount(int32_t value) ;

static int32_t __get__trackingInstanceCount() ;


// Properties

 bool __declspec(property(get=get_EyeTrackingEnabled))  EyeTrackingEnabled;

 float_t __declspec(property(get=get_Confidence, put=set_Confidence))  Confidence;


// Methods

/// @brief Method get_EyeTrackingEnabled addr 0x25af474 size 0x50 virtual false final false
 bool get_EyeTrackingEnabled() ;

/// @brief Method get_Confidence addr 0x25af4c4 size 0x8 virtual false final false
 float_t get_Confidence() ;

/// @brief Method set_Confidence addr 0x25af4cc size 0x8 virtual false final false
 void set_Confidence(float_t value) ;

/// @brief Method Awake addr 0x25af4d4 size 0x7c virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x25af550 size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x25af7d8 size 0x78 virtual false final false
 void OnEnable() ;

/// @brief Method OnPermissionGranted addr 0x25af928 size 0x60 virtual false final false
 void OnPermissionGranted(::StringW permissionId) ;

/// @brief Method StartEyeTracking addr 0x25af850 size 0xd8 virtual false final false
 bool StartEyeTracking() ;

/// @brief Method OnDisable addr 0x25af988 size 0x88 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x25afa10 size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x25afa1c size 0x200 virtual false final false
 void Update() ;

/// @brief Method CalculateEyeRotation addr 0x25afc1c size 0x1c0 virtual false final false
 UnityEngine::Quaternion CalculateEyeRotation(UnityEngine::Quaternion eyeRotation) ;

/// @brief Method PrepareHeadDirection addr 0x25af554 size 0x284 virtual false final false
 void PrepareHeadDirection() ;

static GlobalNamespace::OVREyeGaze New_ctor() ;

/// @brief Method .ctor addr 0x25afddc size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeId, "", "OVREyeGaze/EyeId");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVREyeGaze__EyeTrackingMode, "", "OVREyeGaze/EyeTrackingMode");
NEED_NO_BOX(GlobalNamespace::OVREyeGaze);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVREyeGaze, "", "OVREyeGaze");
