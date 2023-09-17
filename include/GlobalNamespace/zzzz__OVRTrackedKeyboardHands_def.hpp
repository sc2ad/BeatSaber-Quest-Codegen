#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class OVRSkeletonRenderer;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class OVRMeshRenderer;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSkeleton__BoneId;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTrackedKeyboardHands;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent;
}
// Type: ::HandBoneMapping
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8869))
// CS Name: OVRTrackedKeyboardHands::HandBoneMapping
struct CORDL_TYPE ____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "LeftHandTransform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "LeftPresenceTransform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "RightHandTransform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "RightPresenceTransform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "BoneName", ty: "::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId", modifiers: "", def_value: None }, CppParam { name: "HandPresenceLeftBoneName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "HandPresenceRightBoneName", ty: "::StringW", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping(::UnityEngine::Transform LeftHandTransform, ::UnityEngine::Transform LeftPresenceTransform, ::UnityEngine::Transform RightHandTransform, ::UnityEngine::Transform RightPresenceTransform, ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId BoneName, ::StringW HandPresenceLeftBoneName, ::StringW HandPresenceRightBoneName) noexcept;


                    constexpr ____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping(____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping const&) = default;
                    constexpr ____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping(____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping&&) = default;
                    constexpr ____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping& operator=(____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping& operator=(____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_LeftHandTransform, put=__set_LeftHandTransform))  LeftHandTransform;

constexpr void __set_LeftHandTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_LeftHandTransform() const;

 ::UnityEngine::Transform __declspec(property(get=__get_LeftPresenceTransform, put=__set_LeftPresenceTransform))  LeftPresenceTransform;

constexpr void __set_LeftPresenceTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_LeftPresenceTransform() const;

 ::UnityEngine::Transform __declspec(property(get=__get_RightHandTransform, put=__set_RightHandTransform))  RightHandTransform;

constexpr void __set_RightHandTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_RightHandTransform() const;

 ::UnityEngine::Transform __declspec(property(get=__get_RightPresenceTransform, put=__set_RightPresenceTransform))  RightPresenceTransform;

constexpr void __set_RightPresenceTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_RightPresenceTransform() const;

 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId __declspec(property(get=__get_BoneName, put=__set_BoneName))  BoneName;

constexpr void __set_BoneName(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId __get_BoneName() const;

 ::StringW __declspec(property(get=__get_HandPresenceLeftBoneName, put=__set_HandPresenceLeftBoneName))  HandPresenceLeftBoneName;

constexpr void __set_HandPresenceLeftBoneName(::StringW value) ;

constexpr ::StringW __get_HandPresenceLeftBoneName() const;

 ::StringW __declspec(property(get=__get_HandPresenceRightBoneName, put=__set_HandPresenceRightBoneName))  HandPresenceRightBoneName;

constexpr void __set_HandPresenceRightBoneName(::StringW value) ;

constexpr ::StringW __get_HandPresenceRightBoneName() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrackedKeyboardHandsVisibilityChangedEvent
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8870))
// CS Name: OVRTrackedKeyboardHands::TrackedKeyboardHandsVisibilityChangedEvent
struct CORDL_TYPE ____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "leftVisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rightVisible", ty: "bool", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent(bool leftVisible, bool rightVisible) noexcept;


                    constexpr ____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent(____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent const&) = default;
                    constexpr ____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent(____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent&&) = default;
                    constexpr ____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent& operator=(____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent& operator=(____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_leftVisible, put=__set_leftVisible))  leftVisible;

constexpr void __set_leftVisible(bool value) ;

constexpr bool __get_leftVisible() const;

 bool __declspec(property(get=__get_rightVisible, put=__set_rightVisible))  rightVisible;

constexpr void __set_rightVisible(bool value) ;

constexpr bool __get_rightVisible() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRTrackedKeyboardHands
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8871))
// CS Name: OVRTrackedKeyboardHands
class CORDL_TYPE OVRTrackedKeyboardHands : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TrackedKeyboardHandsVisibilityChangedEvent = ::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent;

using HandBoneMapping = ::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~OVRTrackedKeyboardHands() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardHands", modifiers: " const&", def_value: None }]
constexpr OVRTrackedKeyboardHands(OVRTrackedKeyboardHands const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardHands", modifiers: "&&", def_value: None }]
constexpr OVRTrackedKeyboardHands(OVRTrackedKeyboardHands&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRTrackedKeyboardHands(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRTrackedKeyboardHands& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRTrackedKeyboardHands& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRTrackedKeyboardHands& operator=(OVRTrackedKeyboardHands&& o) noexcept = default;
  constexpr OVRTrackedKeyboardHands& operator=(OVRTrackedKeyboardHands const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get_LeftHandPresence, put=__set_LeftHandPresence))  LeftHandPresence;

constexpr void __set_LeftHandPresence(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_LeftHandPresence() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_RightHandPresence, put=__set_RightHandPresence))  RightHandPresence;

constexpr void __set_RightHandPresence(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_RightHandPresence() const;

 bool __declspec(property(get=__get_handPresenceInitialized_, put=__set_handPresenceInitialized_))  handPresenceInitialized_;

constexpr void __set_handPresenceInitialized_(bool value) ;

constexpr bool __get_handPresenceInitialized_() const;

 ::UnityEngine::Transform __declspec(property(get=__get_leftHandRoot_, put=__set_leftHandRoot_))  leftHandRoot_;

constexpr void __set_leftHandRoot_(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_leftHandRoot_() const;

 ::UnityEngine::Transform __declspec(property(get=__get_rightHandRoot_, put=__set_rightHandRoot_))  rightHandRoot_;

constexpr void __set_rightHandRoot_(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rightHandRoot_() const;

 ::GlobalNamespace::OVRTrackedKeyboard __declspec(property(get=__get_KeyboardTracker, put=__set_KeyboardTracker))  KeyboardTracker;

constexpr void __set_KeyboardTracker(::GlobalNamespace::OVRTrackedKeyboard value) ;

constexpr ::GlobalNamespace::OVRTrackedKeyboard __get_KeyboardTracker() const;

 ::GlobalNamespace::OVRCameraRig __declspec(property(get=__get_cameraRig_, put=__set_cameraRig_))  cameraRig_;

constexpr void __set_cameraRig_(::GlobalNamespace::OVRCameraRig value) ;

constexpr ::GlobalNamespace::OVRCameraRig __get_cameraRig_() const;

 ::GlobalNamespace::OVRHand __declspec(property(get=__get_leftHand_, put=__set_leftHand_))  leftHand_;

constexpr void __set_leftHand_(::GlobalNamespace::OVRHand value) ;

constexpr ::GlobalNamespace::OVRHand __get_leftHand_() const;

 ::GlobalNamespace::OVRSkeleton __declspec(property(get=__get_leftHandSkeleton_, put=__set_leftHandSkeleton_))  leftHandSkeleton_;

constexpr void __set_leftHandSkeleton_(::GlobalNamespace::OVRSkeleton value) ;

constexpr ::GlobalNamespace::OVRSkeleton __get_leftHandSkeleton_() const;

 ::GlobalNamespace::OVRSkeletonRenderer __declspec(property(get=__get_leftHandSkeletonRenderer_, put=__set_leftHandSkeletonRenderer_))  leftHandSkeletonRenderer_;

constexpr void __set_leftHandSkeletonRenderer_(::GlobalNamespace::OVRSkeletonRenderer value) ;

constexpr ::GlobalNamespace::OVRSkeletonRenderer __get_leftHandSkeletonRenderer_() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_leftHandSkeletonRendererGO_, put=__set_leftHandSkeletonRendererGO_))  leftHandSkeletonRendererGO_;

constexpr void __set_leftHandSkeletonRendererGO_(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_leftHandSkeletonRendererGO_() const;

 ::UnityEngine::SkinnedMeshRenderer __declspec(property(get=__get_leftHandSkinnedMeshRenderer_, put=__set_leftHandSkinnedMeshRenderer_))  leftHandSkinnedMeshRenderer_;

constexpr void __set_leftHandSkinnedMeshRenderer_(::UnityEngine::SkinnedMeshRenderer value) ;

constexpr ::UnityEngine::SkinnedMeshRenderer __get_leftHandSkinnedMeshRenderer_() const;

 ::GlobalNamespace::OVRMeshRenderer __declspec(property(get=__get_leftHandMeshRenderer_, put=__set_leftHandMeshRenderer_))  leftHandMeshRenderer_;

constexpr void __set_leftHandMeshRenderer_(::GlobalNamespace::OVRMeshRenderer value) ;

constexpr ::GlobalNamespace::OVRMeshRenderer __get_leftHandMeshRenderer_() const;

 ::GlobalNamespace::OVRHand __declspec(property(get=__get_rightHand_, put=__set_rightHand_))  rightHand_;

constexpr void __set_rightHand_(::GlobalNamespace::OVRHand value) ;

constexpr ::GlobalNamespace::OVRHand __get_rightHand_() const;

 ::GlobalNamespace::OVRSkeleton __declspec(property(get=__get_rightHandSkeleton_, put=__set_rightHandSkeleton_))  rightHandSkeleton_;

constexpr void __set_rightHandSkeleton_(::GlobalNamespace::OVRSkeleton value) ;

constexpr ::GlobalNamespace::OVRSkeleton __get_rightHandSkeleton_() const;

 ::GlobalNamespace::OVRSkeletonRenderer __declspec(property(get=__get_rightHandSkeletonRenderer_, put=__set_rightHandSkeletonRenderer_))  rightHandSkeletonRenderer_;

constexpr void __set_rightHandSkeletonRenderer_(::GlobalNamespace::OVRSkeletonRenderer value) ;

constexpr ::GlobalNamespace::OVRSkeletonRenderer __get_rightHandSkeletonRenderer_() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_rightHandSkeletonRendererGO_, put=__set_rightHandSkeletonRendererGO_))  rightHandSkeletonRendererGO_;

constexpr void __set_rightHandSkeletonRendererGO_(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_rightHandSkeletonRendererGO_() const;

 ::GlobalNamespace::OVRMeshRenderer __declspec(property(get=__get_rightHandMeshRenderer_, put=__set_rightHandMeshRenderer_))  rightHandMeshRenderer_;

constexpr void __set_rightHandMeshRenderer_(::GlobalNamespace::OVRMeshRenderer value) ;

constexpr ::GlobalNamespace::OVRMeshRenderer __get_rightHandMeshRenderer_() const;

 ::UnityEngine::SkinnedMeshRenderer __declspec(property(get=__get_rightHandSkinnedMeshRenderer_, put=__set_rightHandSkinnedMeshRenderer_))  rightHandSkinnedMeshRenderer_;

constexpr void __set_rightHandSkinnedMeshRenderer_(::UnityEngine::SkinnedMeshRenderer value) ;

constexpr ::UnityEngine::SkinnedMeshRenderer __get_rightHandSkinnedMeshRenderer_() const;

 bool __declspec(property(get=__get__RightHandOverKeyboard_k__BackingField, put=__set__RightHandOverKeyboard_k__BackingField))  _RightHandOverKeyboard_k__BackingField;

constexpr void __set__RightHandOverKeyboard_k__BackingField(bool value) ;

constexpr bool __get__RightHandOverKeyboard_k__BackingField() const;

 bool __declspec(property(get=__get__LeftHandOverKeyboard_k__BackingField, put=__set__LeftHandOverKeyboard_k__BackingField))  _LeftHandOverKeyboard_k__BackingField;

constexpr void __set__LeftHandOverKeyboard_k__BackingField(bool value) ;

constexpr bool __get__LeftHandOverKeyboard_k__BackingField() const;

static float_t __declspec(property(get=__get_handInnerAlphaThreshold_, put=__set_handInnerAlphaThreshold_))  handInnerAlphaThreshold_;

static void __set_handInnerAlphaThreshold_(float_t value) ;

static float_t __get_handInnerAlphaThreshold_() ;

static float_t __declspec(property(get=__get_handOuterAlphaThreshold_, put=__set_handOuterAlphaThreshold_))  handOuterAlphaThreshold_;

static void __set_handOuterAlphaThreshold_(float_t value) ;

static float_t __get_handOuterAlphaThreshold_() ;

static float_t __declspec(property(get=__get_maximumPassthroughHandsDistance_, put=__set_maximumPassthroughHandsDistance_))  maximumPassthroughHandsDistance_;

static void __set_maximumPassthroughHandsDistance_(float_t value) ;

static float_t __get_maximumPassthroughHandsDistance_() ;

static float_t __declspec(property(get=__get_minimumModelHandsDistance_, put=__set_minimumModelHandsDistance_))  minimumModelHandsDistance_;

static void __set_minimumModelHandsDistance_(float_t value) ;

static float_t __get_minimumModelHandsDistance_() ;

 ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> __declspec(property(get=__get_lastVisibilityEvent_, put=__set_lastVisibilityEvent_))  lastVisibilityEvent_;

constexpr void __set_lastVisibilityEvent_(::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> value) ;

constexpr ::System::Nullable_1<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> __get_lastVisibilityEvent_() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping> __declspec(property(get=__get_boneMappings_, put=__set_boneMappings_))  boneMappings_;

constexpr void __set_boneMappings_(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping> __get_boneMappings_() const;

 ::UnityEngine::Material __declspec(property(get=__get_HandsMaterial, put=__set_HandsMaterial))  HandsMaterial;

constexpr void __set_HandsMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_HandsMaterial() const;

/// @brief Field XSCALE offset 0
static constexpr float_t  XSCALE{0.73};

/// @brief Field YSCALE offset 0
static constexpr float_t  YSCALE{0.8};

/// @brief Field FORWARD_OFFSET offset 0
static constexpr float_t  FORWARD_OFFSET{-0.02};

 int32_t __declspec(property(get=__get_keyboardPositionID_, put=__set_keyboardPositionID_))  keyboardPositionID_;

constexpr void __set_keyboardPositionID_(int32_t value) ;

constexpr int32_t __get_keyboardPositionID_() const;

 int32_t __declspec(property(get=__get_keyboardRotationID_, put=__set_keyboardRotationID_))  keyboardRotationID_;

constexpr void __set_keyboardRotationID_(int32_t value) ;

constexpr int32_t __get_keyboardRotationID_() const;

 int32_t __declspec(property(get=__get_keyboardScaleID_, put=__set_keyboardScaleID_))  keyboardScaleID_;

constexpr void __set_keyboardScaleID_(int32_t value) ;

constexpr int32_t __get_keyboardScaleID_() const;


// Properties

 bool __declspec(property(get=get_RightHandOverKeyboard, put=set_RightHandOverKeyboard))  RightHandOverKeyboard;

 bool __declspec(property(get=get_LeftHandOverKeyboard, put=set_LeftHandOverKeyboard))  LeftHandOverKeyboard;

 bool __declspec(property(get=get_AreControllersActive))  AreControllersActive;


// Methods

/// @brief Method get_RightHandOverKeyboard addr 0x26160e8 size 0x8 virtual false final false
 bool get_RightHandOverKeyboard() ;

/// @brief Method set_RightHandOverKeyboard addr 0x26160f0 size 0xc virtual false final false
 void set_RightHandOverKeyboard(bool value) ;

/// @brief Method get_LeftHandOverKeyboard addr 0x26160fc size 0x8 virtual false final false
 bool get_LeftHandOverKeyboard() ;

/// @brief Method set_LeftHandOverKeyboard addr 0x2616104 size 0xc virtual false final false
 void set_LeftHandOverKeyboard(bool value) ;

/// @brief Method Awake addr 0x2616110 size 0x1e4 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x26162f4 size 0x290 virtual false final false
 void Start() ;

/// @brief Method get_AreControllersActive addr 0x26166f4 size 0x3c virtual false final false
 bool get_AreControllersActive() ;

/// @brief Method LateUpdate addr 0x2616730 size 0x7e0 virtual false final false
 void LateUpdate() ;

/// @brief Method ShouldEnablePassthrough addr 0x26172d8 size 0x6c virtual false final false
 bool ShouldEnablePassthrough(float_t distance) ;

/// @brief Method ShouldEnableModel addr 0x2617344 size 0x6c virtual false final false
 bool ShouldEnableModel(float_t distance) ;

/// @brief Method GetHandDistanceToKeyboard addr 0x2616ffc size 0x2dc virtual false final false
 float_t GetHandDistanceToKeyboard(::GlobalNamespace::OVRSkeleton handSkeleton) ;

/// @brief Method ComputeOpacity addr 0x26175b8 size 0x24 virtual false final false
 float_t ComputeOpacity(float_t distance, float_t innerThreshold, float_t outerThreshold) ;

/// @brief Method SetHandModelsEnabled addr 0x26173b0 size 0x208 virtual false final false
 void SetHandModelsEnabled(bool enableLeftModel, bool enableRightModel) ;

/// @brief Method RetargetHandTrackingToHandPresence addr 0x2616584 size 0x170 virtual false final false
 void RetargetHandTrackingToHandPresence() ;

/// @brief Method StopHandPresence addr 0x26175dc size 0x30 virtual false final false
 void StopHandPresence() ;

/// @brief Method DisableHandObjects addr 0x2616f10 size 0xec virtual false final false
 void DisableHandObjects() ;

/// @brief Method TrackedKeyboardActiveUpdated addr 0x261760c size 0xc virtual false final false
 void TrackedKeyboardActiveUpdated(::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent e) ;

/// @brief Method TrackedKeyboardVisibilityChanged addr 0x2617618 size 0x1b0 virtual false final false
 void TrackedKeyboardVisibilityChanged(::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent e) ;

// Ctor Parameters []
explicit OVRTrackedKeyboardHands() ;

/// @brief Method .ctor addr 0x26177c8 size 0x750 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboardHands);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboardHands, "", "OVRTrackedKeyboardHands");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__HandBoneMapping, "", "OVRTrackedKeyboardHands/HandBoneMapping");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent, "", "OVRTrackedKeyboardHands/TrackedKeyboardHandsVisibilityChangedEvent");
