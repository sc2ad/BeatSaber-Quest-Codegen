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
class OVRBoneCapsule;
}
namespace GlobalNamespace {
class OVRBone;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Skeleton2;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Quatf;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Posef;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSkeleton__BoneId;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSkeleton__SkeletonType;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSkeleton__SkeletonPoseData;
}
// Type: ::IOVRSkeletonDataProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8955))
// CS Name: OVRSkeleton::IOVRSkeletonDataProvider
class CORDL_TYPE ____GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~____GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_enabled))  enabled;


// Methods

/// @brief Method GetSkeletonType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType GetSkeletonType() ;

/// @brief Method GetSkeletonPoseData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonPoseData GetSkeletonPoseData() ;

/// @brief Method get_enabled addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_enabled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SkeletonPoseData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8956))
// CS Name: OVRSkeleton::SkeletonPoseData
struct CORDL_TYPE ____GlobalNamespace__OVRSkeleton__SkeletonPoseData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_RootPose_k__BackingField", ty: "::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef", modifiers: "", def_value: None }, CppParam { name: "_RootScale_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_BoneRotations_k__BackingField", ty: "::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf>", modifiers: "", def_value: None }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_BoneTranslations_k__BackingField", ty: "::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "_SkeletonChangedCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRSkeleton__SkeletonPoseData(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef _RootPose_k__BackingField, float_t _RootScale_k__BackingField, ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf> _BoneRotations_k__BackingField, bool _IsDataValid_k__BackingField, bool _IsDataHighConfidence_k__BackingField, ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> _BoneTranslations_k__BackingField, int32_t _SkeletonChangedCount_k__BackingField) noexcept;


                    constexpr ____GlobalNamespace__OVRSkeleton__SkeletonPoseData(____GlobalNamespace__OVRSkeleton__SkeletonPoseData const&) = default;
                    constexpr ____GlobalNamespace__OVRSkeleton__SkeletonPoseData(____GlobalNamespace__OVRSkeleton__SkeletonPoseData&&) = default;
                    constexpr ____GlobalNamespace__OVRSkeleton__SkeletonPoseData& operator=(____GlobalNamespace__OVRSkeleton__SkeletonPoseData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRSkeleton__SkeletonPoseData& operator=(____GlobalNamespace__OVRSkeleton__SkeletonPoseData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSkeleton__SkeletonPoseData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef __declspec(property(get=__get__RootPose_k__BackingField, put=__set__RootPose_k__BackingField))  _RootPose_k__BackingField;

constexpr void __set__RootPose_k__BackingField(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef __get__RootPose_k__BackingField() const;

 float_t __declspec(property(get=__get__RootScale_k__BackingField, put=__set__RootScale_k__BackingField))  _RootScale_k__BackingField;

constexpr void __set__RootScale_k__BackingField(float_t value) ;

constexpr float_t __get__RootScale_k__BackingField() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf> __declspec(property(get=__get__BoneRotations_k__BackingField, put=__set__BoneRotations_k__BackingField))  _BoneRotations_k__BackingField;

constexpr void __set__BoneRotations_k__BackingField(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf> __get__BoneRotations_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField))  _IsDataValid_k__BackingField;

constexpr void __set__IsDataValid_k__BackingField(bool value) ;

constexpr bool __get__IsDataValid_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField))  _IsDataHighConfidence_k__BackingField;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool value) ;

constexpr bool __get__IsDataHighConfidence_k__BackingField() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> __declspec(property(get=__get__BoneTranslations_k__BackingField, put=__set__BoneTranslations_k__BackingField))  _BoneTranslations_k__BackingField;

constexpr void __set__BoneTranslations_k__BackingField(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> __get__BoneTranslations_k__BackingField() const;

 int32_t __declspec(property(get=__get__SkeletonChangedCount_k__BackingField, put=__set__SkeletonChangedCount_k__BackingField))  _SkeletonChangedCount_k__BackingField;

constexpr void __set__SkeletonChangedCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__SkeletonChangedCount_k__BackingField() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef __declspec(property(get=get_RootPose, put=set_RootPose))  RootPose;

 float_t __declspec(property(get=get_RootScale, put=set_RootScale))  RootScale;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf> __declspec(property(get=get_BoneRotations, put=set_BoneRotations))  BoneRotations;

 bool __declspec(property(get=get_IsDataValid, put=set_IsDataValid))  IsDataValid;

 bool __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence))  IsDataHighConfidence;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> __declspec(property(get=get_BoneTranslations, put=set_BoneTranslations))  BoneTranslations;

 int32_t __declspec(property(get=get_SkeletonChangedCount, put=set_SkeletonChangedCount))  SkeletonChangedCount;


// Methods

/// @brief Method get_RootPose addr 0x263360c size 0x14 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef get_RootPose() ;

/// @brief Method set_RootPose addr 0x2633620 size 0x1c virtual false final false
 void set_RootPose(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Posef value) ;

/// @brief Method get_RootScale addr 0x263363c size 0x8 virtual false final false
 float_t get_RootScale() ;

/// @brief Method set_RootScale addr 0x2633644 size 0x8 virtual false final false
 void set_RootScale(float_t value) ;

/// @brief Method get_BoneRotations addr 0x263364c size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf> get_BoneRotations() ;

/// @brief Method set_BoneRotations addr 0x2633654 size 0x8 virtual false final false
 void set_BoneRotations(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Quatf> value) ;

/// @brief Method get_IsDataValid addr 0x263365c size 0x8 virtual false final false
 bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x2633664 size 0xc virtual false final false
 void set_IsDataValid(bool value) ;

/// @brief Method get_IsDataHighConfidence addr 0x2633670 size 0x8 virtual false final false
 bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x2633678 size 0xc virtual false final false
 void set_IsDataHighConfidence(bool value) ;

/// @brief Method get_BoneTranslations addr 0x2633684 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> get_BoneTranslations() ;

/// @brief Method set_BoneTranslations addr 0x263368c size 0x8 virtual false final false
 void set_BoneTranslations(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> value) ;

/// @brief Method get_SkeletonChangedCount addr 0x2633694 size 0x8 virtual false final false
 int32_t get_SkeletonChangedCount() ;

/// @brief Method set_SkeletonChangedCount addr 0x263369c size 0x8 virtual false final false
 void set_SkeletonChangedCount(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SkeletonType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8957))
// CS Name: OVRSkeleton::SkeletonType
struct CORDL_TYPE ____GlobalNamespace__OVRSkeleton__SkeletonType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRSkeleton__SkeletonType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRSkeleton__SkeletonType(____GlobalNamespace__OVRSkeleton__SkeletonType const&) = default;
                    constexpr ____GlobalNamespace__OVRSkeleton__SkeletonType(____GlobalNamespace__OVRSkeleton__SkeletonType&&) = default;
                    constexpr ____GlobalNamespace__OVRSkeleton__SkeletonType& operator=(____GlobalNamespace__OVRSkeleton__SkeletonType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRSkeleton__SkeletonType& operator=(____GlobalNamespace__OVRSkeleton__SkeletonType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSkeleton__SkeletonType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRSkeleton__SkeletonType_Unwrapped : int32_t {
__None = -1,
__HandLeft = 0,
__HandRight = 1,
__Body = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRSkeleton__SkeletonType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRSkeleton__SkeletonType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType const None;

/// @brief Field HandLeft offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType const HandLeft;

/// @brief Field HandRight offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType const HandRight;

/// @brief Field Body offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType const Body;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BoneId
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8958))
// CS Name: OVRSkeleton::BoneId
struct CORDL_TYPE ____GlobalNamespace__OVRSkeleton__BoneId : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRSkeleton__BoneId(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRSkeleton__BoneId(____GlobalNamespace__OVRSkeleton__BoneId const&) = default;
                    constexpr ____GlobalNamespace__OVRSkeleton__BoneId(____GlobalNamespace__OVRSkeleton__BoneId&&) = default;
                    constexpr ____GlobalNamespace__OVRSkeleton__BoneId& operator=(____GlobalNamespace__OVRSkeleton__BoneId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRSkeleton__BoneId& operator=(____GlobalNamespace__OVRSkeleton__BoneId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSkeleton__BoneId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRSkeleton__BoneId_Unwrapped : int32_t {
__Invalid = -1,
__Hand_Start = 0,
__Hand_WristRoot = 0,
__Hand_ForearmStub = 1,
__Hand_Thumb0 = 2,
__Hand_Thumb1 = 3,
__Hand_Thumb2 = 4,
__Hand_Thumb3 = 5,
__Hand_Index1 = 6,
__Hand_Index2 = 7,
__Hand_Index3 = 8,
__Hand_Middle1 = 9,
__Hand_Middle2 = 10,
__Hand_Middle3 = 11,
__Hand_Ring1 = 12,
__Hand_Ring2 = 13,
__Hand_Ring3 = 14,
__Hand_Pinky0 = 15,
__Hand_Pinky1 = 16,
__Hand_Pinky2 = 17,
__Hand_Pinky3 = 18,
__Hand_MaxSkinnable = 19,
__Hand_ThumbTip = 19,
__Hand_IndexTip = 20,
__Hand_MiddleTip = 21,
__Hand_RingTip = 22,
__Hand_PinkyTip = 23,
__Hand_End = 24,
__Body_Start = 0,
__Body_Root = 0,
__Body_Hips = 1,
__Body_SpineLower = 2,
__Body_SpineMiddle = 3,
__Body_SpineUpper = 4,
__Body_Chest = 5,
__Body_Neck = 6,
__Body_Head = 7,
__Body_LeftShoulder = 8,
__Body_LeftScapula = 9,
__Body_LeftArmUpper = 10,
__Body_LeftArmLower = 11,
__Body_LeftHandWristTwist = 12,
__Body_RightShoulder = 13,
__Body_RightScapula = 14,
__Body_RightArmUpper = 15,
__Body_RightArmLower = 16,
__Body_RightHandWristTwist = 17,
__Body_LeftHandPalm = 18,
__Body_LeftHandWrist = 19,
__Body_LeftHandThumbMetacarpal = 20,
__Body_LeftHandThumbProximal = 21,
__Body_LeftHandThumbDistal = 22,
__Body_LeftHandThumbTip = 23,
__Body_LeftHandIndexMetacarpal = 24,
__Body_LeftHandIndexProximal = 25,
__Body_LeftHandIndexIntermediate = 26,
__Body_LeftHandIndexDistal = 27,
__Body_LeftHandIndexTip = 28,
__Body_LeftHandMiddleMetacarpal = 29,
__Body_LeftHandMiddleProximal = 30,
__Body_LeftHandMiddleIntermediate = 31,
__Body_LeftHandMiddleDistal = 32,
__Body_LeftHandMiddleTip = 33,
__Body_LeftHandRingMetacarpal = 34,
__Body_LeftHandRingProximal = 35,
__Body_LeftHandRingIntermediate = 36,
__Body_LeftHandRingDistal = 37,
__Body_LeftHandRingTip = 38,
__Body_LeftHandLittleMetacarpal = 39,
__Body_LeftHandLittleProximal = 40,
__Body_LeftHandLittleIntermediate = 41,
__Body_LeftHandLittleDistal = 42,
__Body_LeftHandLittleTip = 43,
__Body_RightHandPalm = 44,
__Body_RightHandWrist = 45,
__Body_RightHandThumbMetacarpal = 46,
__Body_RightHandThumbProximal = 47,
__Body_RightHandThumbDistal = 48,
__Body_RightHandThumbTip = 49,
__Body_RightHandIndexMetacarpal = 50,
__Body_RightHandIndexProximal = 51,
__Body_RightHandIndexIntermediate = 52,
__Body_RightHandIndexDistal = 53,
__Body_RightHandIndexTip = 54,
__Body_RightHandMiddleMetacarpal = 55,
__Body_RightHandMiddleProximal = 56,
__Body_RightHandMiddleIntermediate = 57,
__Body_RightHandMiddleDistal = 58,
__Body_RightHandMiddleTip = 59,
__Body_RightHandRingMetacarpal = 60,
__Body_RightHandRingProximal = 61,
__Body_RightHandRingIntermediate = 62,
__Body_RightHandRingDistal = 63,
__Body_RightHandRingTip = 64,
__Body_RightHandLittleMetacarpal = 65,
__Body_RightHandLittleProximal = 66,
__Body_RightHandLittleIntermediate = 67,
__Body_RightHandLittleDistal = 68,
__Body_RightHandLittleTip = 69,
__Body_End = 70,
__Max = 70,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRSkeleton__BoneId_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRSkeleton__BoneId_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Invalid offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Invalid;

/// @brief Field Hand_Start offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Start;

/// @brief Field Hand_WristRoot offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_WristRoot;

/// @brief Field Hand_ForearmStub offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_ForearmStub;

/// @brief Field Hand_Thumb0 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Thumb0;

/// @brief Field Hand_Thumb1 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Thumb1;

/// @brief Field Hand_Thumb2 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Thumb2;

/// @brief Field Hand_Thumb3 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Thumb3;

/// @brief Field Hand_Index1 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Index1;

/// @brief Field Hand_Index2 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Index2;

/// @brief Field Hand_Index3 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Index3;

/// @brief Field Hand_Middle1 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Middle1;

/// @brief Field Hand_Middle2 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Middle2;

/// @brief Field Hand_Middle3 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Middle3;

/// @brief Field Hand_Ring1 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Ring1;

/// @brief Field Hand_Ring2 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Ring2;

/// @brief Field Hand_Ring3 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Ring3;

/// @brief Field Hand_Pinky0 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Pinky0;

/// @brief Field Hand_Pinky1 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Pinky1;

/// @brief Field Hand_Pinky2 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Pinky2;

/// @brief Field Hand_Pinky3 offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_Pinky3;

/// @brief Field Hand_MaxSkinnable offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_MaxSkinnable;

/// @brief Field Hand_ThumbTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_ThumbTip;

/// @brief Field Hand_IndexTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_IndexTip;

/// @brief Field Hand_MiddleTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_MiddleTip;

/// @brief Field Hand_RingTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_RingTip;

/// @brief Field Hand_PinkyTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_PinkyTip;

/// @brief Field Hand_End offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Hand_End;

/// @brief Field Body_Start offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_Start;

/// @brief Field Body_Root offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_Root;

/// @brief Field Body_Hips offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_Hips;

/// @brief Field Body_SpineLower offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_SpineLower;

/// @brief Field Body_SpineMiddle offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_SpineMiddle;

/// @brief Field Body_SpineUpper offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_SpineUpper;

/// @brief Field Body_Chest offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_Chest;

/// @brief Field Body_Neck offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_Neck;

/// @brief Field Body_Head offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_Head;

/// @brief Field Body_LeftShoulder offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftShoulder;

/// @brief Field Body_LeftScapula offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftScapula;

/// @brief Field Body_LeftArmUpper offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftArmUpper;

/// @brief Field Body_LeftArmLower offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftArmLower;

/// @brief Field Body_LeftHandWristTwist offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandWristTwist;

/// @brief Field Body_RightShoulder offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightShoulder;

/// @brief Field Body_RightScapula offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightScapula;

/// @brief Field Body_RightArmUpper offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightArmUpper;

/// @brief Field Body_RightArmLower offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightArmLower;

/// @brief Field Body_RightHandWristTwist offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandWristTwist;

/// @brief Field Body_LeftHandPalm offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandPalm;

/// @brief Field Body_LeftHandWrist offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandWrist;

/// @brief Field Body_LeftHandThumbMetacarpal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandThumbMetacarpal;

/// @brief Field Body_LeftHandThumbProximal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandThumbProximal;

/// @brief Field Body_LeftHandThumbDistal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandThumbDistal;

/// @brief Field Body_LeftHandThumbTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandThumbTip;

/// @brief Field Body_LeftHandIndexMetacarpal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandIndexMetacarpal;

/// @brief Field Body_LeftHandIndexProximal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandIndexProximal;

/// @brief Field Body_LeftHandIndexIntermediate offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandIndexIntermediate;

/// @brief Field Body_LeftHandIndexDistal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandIndexDistal;

/// @brief Field Body_LeftHandIndexTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandIndexTip;

/// @brief Field Body_LeftHandMiddleMetacarpal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandMiddleMetacarpal;

/// @brief Field Body_LeftHandMiddleProximal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandMiddleProximal;

/// @brief Field Body_LeftHandMiddleIntermediate offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandMiddleIntermediate;

/// @brief Field Body_LeftHandMiddleDistal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandMiddleDistal;

/// @brief Field Body_LeftHandMiddleTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandMiddleTip;

/// @brief Field Body_LeftHandRingMetacarpal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandRingMetacarpal;

/// @brief Field Body_LeftHandRingProximal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandRingProximal;

/// @brief Field Body_LeftHandRingIntermediate offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandRingIntermediate;

/// @brief Field Body_LeftHandRingDistal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandRingDistal;

/// @brief Field Body_LeftHandRingTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandRingTip;

/// @brief Field Body_LeftHandLittleMetacarpal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandLittleMetacarpal;

/// @brief Field Body_LeftHandLittleProximal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandLittleProximal;

/// @brief Field Body_LeftHandLittleIntermediate offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandLittleIntermediate;

/// @brief Field Body_LeftHandLittleDistal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandLittleDistal;

/// @brief Field Body_LeftHandLittleTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_LeftHandLittleTip;

/// @brief Field Body_RightHandPalm offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandPalm;

/// @brief Field Body_RightHandWrist offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandWrist;

/// @brief Field Body_RightHandThumbMetacarpal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandThumbMetacarpal;

/// @brief Field Body_RightHandThumbProximal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandThumbProximal;

/// @brief Field Body_RightHandThumbDistal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandThumbDistal;

/// @brief Field Body_RightHandThumbTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandThumbTip;

/// @brief Field Body_RightHandIndexMetacarpal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandIndexMetacarpal;

/// @brief Field Body_RightHandIndexProximal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandIndexProximal;

/// @brief Field Body_RightHandIndexIntermediate offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandIndexIntermediate;

/// @brief Field Body_RightHandIndexDistal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandIndexDistal;

/// @brief Field Body_RightHandIndexTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandIndexTip;

/// @brief Field Body_RightHandMiddleMetacarpal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandMiddleMetacarpal;

/// @brief Field Body_RightHandMiddleProximal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandMiddleProximal;

/// @brief Field Body_RightHandMiddleIntermediate offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandMiddleIntermediate;

/// @brief Field Body_RightHandMiddleDistal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandMiddleDistal;

/// @brief Field Body_RightHandMiddleTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandMiddleTip;

/// @brief Field Body_RightHandRingMetacarpal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandRingMetacarpal;

/// @brief Field Body_RightHandRingProximal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandRingProximal;

/// @brief Field Body_RightHandRingIntermediate offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandRingIntermediate;

/// @brief Field Body_RightHandRingDistal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandRingDistal;

/// @brief Field Body_RightHandRingTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandRingTip;

/// @brief Field Body_RightHandLittleMetacarpal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandLittleMetacarpal;

/// @brief Field Body_RightHandLittleProximal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandLittleProximal;

/// @brief Field Body_RightHandLittleIntermediate offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandLittleIntermediate;

/// @brief Field Body_RightHandLittleDistal offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandLittleDistal;

/// @brief Field Body_RightHandLittleTip offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_RightHandLittleTip;

/// @brief Field Body_End offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Body_End;

/// @brief Field Max offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId const Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSkeleton
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8959))
// CS Name: OVRSkeleton
class CORDL_TYPE OVRSkeleton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BoneId = ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId;

using SkeletonType = ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType;

using SkeletonPoseData = ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonPoseData;

using IOVRSkeletonDataProvider = ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~OVRSkeleton() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeleton", modifiers: " const&", def_value: None }]
constexpr OVRSkeleton(OVRSkeleton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeleton", modifiers: "&&", def_value: None }]
constexpr OVRSkeleton(OVRSkeleton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSkeleton(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSkeleton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSkeleton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSkeleton& operator=(OVRSkeleton&& o) noexcept = default;
  constexpr OVRSkeleton& operator=(OVRSkeleton const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType __declspec(property(get=__get__skeletonType, put=__set__skeletonType))  _skeletonType;

constexpr void __set__skeletonType(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType __get__skeletonType() const;

 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider __declspec(property(get=__get__dataProvider, put=__set__dataProvider))  _dataProvider;

constexpr void __set__dataProvider(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider __get__dataProvider() const;

 bool __declspec(property(get=__get__updateRootPose, put=__set__updateRootPose))  _updateRootPose;

constexpr void __set__updateRootPose(bool value) ;

constexpr bool __get__updateRootPose() const;

 bool __declspec(property(get=__get__updateRootScale, put=__set__updateRootScale))  _updateRootScale;

constexpr void __set__updateRootScale(bool value) ;

constexpr bool __get__updateRootScale() const;

 bool __declspec(property(get=__get__enablePhysicsCapsules, put=__set__enablePhysicsCapsules))  _enablePhysicsCapsules;

constexpr void __set__enablePhysicsCapsules(bool value) ;

constexpr bool __get__enablePhysicsCapsules() const;

 bool __declspec(property(get=__get__applyBoneTranslations, put=__set__applyBoneTranslations))  _applyBoneTranslations;

constexpr void __set__applyBoneTranslations(bool value) ;

constexpr bool __get__applyBoneTranslations() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__bonesGO, put=__set__bonesGO))  _bonesGO;

constexpr void __set__bonesGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__bonesGO() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__bindPosesGO, put=__set__bindPosesGO))  _bindPosesGO;

constexpr void __set__bindPosesGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__bindPosesGO() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__capsulesGO, put=__set__capsulesGO))  _capsulesGO;

constexpr void __set__capsulesGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__capsulesGO() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone> __declspec(property(get=__get__bones, put=__set__bones))  _bones;

constexpr void __set__bones(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone> __get__bones() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone> __declspec(property(get=__get__bindPoses, put=__set__bindPoses))  _bindPoses;

constexpr void __set__bindPoses(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone> __get__bindPoses() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule> __declspec(property(get=__get__capsules, put=__set__capsules))  _capsules;

constexpr void __set__capsules(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule> __get__capsules() const;

 ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Skeleton2 __declspec(property(get=__get__skeleton, put=__set__skeleton))  _skeleton;

constexpr void __set__skeleton(::GlobalNamespace::____GlobalNamespace__OVRPlugin__Skeleton2 value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRPlugin__Skeleton2 __get__skeleton() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_wristFixupRotation, put=__set_wristFixupRotation))  wristFixupRotation;

constexpr void __set_wristFixupRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_wristFixupRotation() const;

 bool __declspec(property(get=__get__IsInitialized_k__BackingField, put=__set__IsInitialized_k__BackingField))  _IsInitialized_k__BackingField;

constexpr void __set__IsInitialized_k__BackingField(bool value) ;

constexpr bool __get__IsInitialized_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField))  _IsDataValid_k__BackingField;

constexpr void __set__IsDataValid_k__BackingField(bool value) ;

constexpr bool __get__IsDataValid_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField))  _IsDataHighConfidence_k__BackingField;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool value) ;

constexpr bool __get__IsDataHighConfidence_k__BackingField() const;

 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> __declspec(property(get=__get__Bones_k__BackingField, put=__set__Bones_k__BackingField))  _Bones_k__BackingField;

constexpr void __set__Bones_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> value) ;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> __get__Bones_k__BackingField() const;

 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> __declspec(property(get=__get__BindPoses_k__BackingField, put=__set__BindPoses_k__BackingField))  _BindPoses_k__BackingField;

constexpr void __set__BindPoses_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> value) ;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> __get__BindPoses_k__BackingField() const;

 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule> __declspec(property(get=__get__Capsules_k__BackingField, put=__set__Capsules_k__BackingField))  _Capsules_k__BackingField;

constexpr void __set__Capsules_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule> value) ;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule> __get__Capsules_k__BackingField() const;

 int32_t __declspec(property(get=__get__SkeletonChangedCount_k__BackingField, put=__set__SkeletonChangedCount_k__BackingField))  _SkeletonChangedCount_k__BackingField;

constexpr void __set__SkeletonChangedCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__SkeletonChangedCount_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsInitialized, put=set_IsInitialized))  IsInitialized;

 bool __declspec(property(get=get_IsDataValid, put=set_IsDataValid))  IsDataValid;

 bool __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence))  IsDataHighConfidence;

 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> __declspec(property(get=get_Bones, put=set_Bones))  Bones;

 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> __declspec(property(get=get_BindPoses, put=set_BindPoses))  BindPoses;

 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule> __declspec(property(get=get_Capsules, put=set_Capsules))  Capsules;

 int32_t __declspec(property(get=get_SkeletonChangedCount, put=set_SkeletonChangedCount))  SkeletonChangedCount;


// Methods

/// @brief Method get_IsInitialized addr 0x263129c size 0x8 virtual false final false
 bool get_IsInitialized() ;

/// @brief Method set_IsInitialized addr 0x26312a4 size 0xc virtual false final false
 void set_IsInitialized(bool value) ;

/// @brief Method get_IsDataValid addr 0x26312b0 size 0x8 virtual false final false
 bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x26312b8 size 0xc virtual false final false
 void set_IsDataValid(bool value) ;

/// @brief Method get_IsDataHighConfidence addr 0x26312c4 size 0x8 virtual false final false
 bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x26312cc size 0xc virtual false final false
 void set_IsDataHighConfidence(bool value) ;

/// @brief Method get_Bones addr 0x26312d8 size 0x8 virtual false final false
 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> get_Bones() ;

/// @brief Method set_Bones addr 0x26312e0 size 0x8 virtual false final false
 void set_Bones(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> value) ;

/// @brief Method get_BindPoses addr 0x26312e8 size 0x8 virtual false final false
 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> get_BindPoses() ;

/// @brief Method set_BindPoses addr 0x26312f0 size 0x8 virtual false final false
 void set_BindPoses(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone> value) ;

/// @brief Method get_Capsules addr 0x26312f8 size 0x8 virtual false final false
 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule> get_Capsules() ;

/// @brief Method set_Capsules addr 0x2631300 size 0x8 virtual false final false
 void set_Capsules(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule> value) ;

/// @brief Method GetSkeletonType addr 0x2631308 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType GetSkeletonType() ;

/// @brief Method get_SkeletonChangedCount addr 0x2631310 size 0x8 virtual false final false
 int32_t get_SkeletonChangedCount() ;

/// @brief Method set_SkeletonChangedCount addr 0x2631318 size 0x8 virtual false final false
 void set_SkeletonChangedCount(int32_t value) ;

/// @brief Method Awake addr 0x2631320 size 0x160 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2631480 size 0x24 virtual false final false
 void Start() ;

/// @brief Method ShouldInitialize addr 0x26314a4 size 0xc4 virtual false final false
 bool ShouldInitialize() ;

/// @brief Method Initialize addr 0x2631568 size 0x94 virtual false final false
 void Initialize() ;

/// @brief Method GetBoneTransform addr 0x26323cc size 0x8 virtual true final false
 ::UnityEngine::Transform GetBoneTransform(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId boneId) ;

/// @brief Method InitializeBones addr 0x26323d4 size 0x58c virtual true final false
 void InitializeBones() ;

/// @brief Method InitializeBindPose addr 0x26315fc size 0x500 virtual false final false
 void InitializeBindPose() ;

/// @brief Method InitializeCapsules addr 0x2631afc size 0x8d0 virtual false final false
 void InitializeCapsules() ;

/// @brief Method Update addr 0x2632e88 size 0x420 virtual false final false
 void Update() ;

/// @brief Method FixedUpdate addr 0x26332a8 size 0x2a0 virtual false final false
 void FixedUpdate() ;

/// @brief Method GetCurrentStartBoneId addr 0x2633548 size 0x10 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId GetCurrentStartBoneId() ;

/// @brief Method GetCurrentEndBoneId addr 0x2633558 size 0x24 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId GetCurrentEndBoneId() ;

/// @brief Method GetCurrentMaxSkinnableBoneId addr 0x263357c size 0x24 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId GetCurrentMaxSkinnableBoneId() ;

/// @brief Method GetCurrentNumBones addr 0x26335a0 size 0x24 virtual false final false
 int32_t GetCurrentNumBones() ;

/// @brief Method GetCurrentNumSkinnableBones addr 0x26335c4 size 0x24 virtual false final false
 int32_t GetCurrentNumSkinnableBones() ;

/// @brief Method BoneLabelFromBoneId addr 0x2632968 size 0x518 virtual false final false
static ::StringW BoneLabelFromBoneId(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType skeletonType, ::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId boneId) ;

// Ctor Parameters []
explicit OVRSkeleton() ;

/// @brief Method .ctor addr 0x26335e8 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__BoneId, "", "OVRSkeleton/BoneId");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonType, "", "OVRSkeleton/SkeletonType");
NEED_NO_BOX(::GlobalNamespace::OVRSkeleton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton, "", "OVRSkeleton");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider, "", "OVRSkeleton/IOVRSkeletonDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSkeleton__SkeletonPoseData, "", "OVRSkeleton/SkeletonPoseData");
