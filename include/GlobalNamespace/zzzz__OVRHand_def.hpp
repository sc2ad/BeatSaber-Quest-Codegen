#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRSkeleton__SkeletonPoseData;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRMesh__IOVRMeshDataProvider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSkeleton__SkeletonType;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRMesh__MeshType;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__HandState;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Step;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRMeshRenderer__MeshRendererData;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRHand__Hand;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRHand__HandFinger;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRHand__TrackingConfidence;
}
namespace GlobalNamespace {
class OVRHand;
}
// Type: ::Hand
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8909))
// CS Name: OVRHand::Hand
struct CORDL_TYPE GlobalNamespace__OVRHand__Hand : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRHand__Hand(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRHand__Hand(GlobalNamespace__OVRHand__Hand const&) = default;
                    constexpr GlobalNamespace__OVRHand__Hand(GlobalNamespace__OVRHand__Hand&&) = default;
                    constexpr GlobalNamespace__OVRHand__Hand& operator=(GlobalNamespace__OVRHand__Hand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRHand__Hand& operator=(GlobalNamespace__OVRHand__Hand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRHand__Hand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRHand__Hand_Unwrapped : int32_t {
__None = -1,
__HandLeft = 0,
__HandRight = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRHand__Hand_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRHand__Hand_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__Hand const None;

/// @brief Field HandLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__Hand const HandLeft;

/// @brief Field HandRight offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__Hand const HandRight;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HandFinger
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8910))
// CS Name: OVRHand::HandFinger
struct CORDL_TYPE GlobalNamespace__OVRHand__HandFinger : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRHand__HandFinger(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRHand__HandFinger(GlobalNamespace__OVRHand__HandFinger const&) = default;
                    constexpr GlobalNamespace__OVRHand__HandFinger(GlobalNamespace__OVRHand__HandFinger&&) = default;
                    constexpr GlobalNamespace__OVRHand__HandFinger& operator=(GlobalNamespace__OVRHand__HandFinger const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRHand__HandFinger& operator=(GlobalNamespace__OVRHand__HandFinger&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRHand__HandFinger(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRHand__HandFinger_Unwrapped : int32_t {
__Thumb = 0,
__Index = 1,
__Middle = 2,
__Ring = 3,
__Pinky = 4,
__Max = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRHand__HandFinger_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRHand__HandFinger_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Thumb offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__HandFinger const Thumb;

/// @brief Field Index offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__HandFinger const Index;

/// @brief Field Middle offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__HandFinger const Middle;

/// @brief Field Ring offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__HandFinger const Ring;

/// @brief Field Pinky offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__HandFinger const Pinky;

/// @brief Field Max offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__HandFinger const Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrackingConfidence
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8911))
// CS Name: OVRHand::TrackingConfidence
struct CORDL_TYPE GlobalNamespace__OVRHand__TrackingConfidence : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRHand__TrackingConfidence(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRHand__TrackingConfidence(GlobalNamespace__OVRHand__TrackingConfidence const&) = default;
                    constexpr GlobalNamespace__OVRHand__TrackingConfidence(GlobalNamespace__OVRHand__TrackingConfidence&&) = default;
                    constexpr GlobalNamespace__OVRHand__TrackingConfidence& operator=(GlobalNamespace__OVRHand__TrackingConfidence const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRHand__TrackingConfidence& operator=(GlobalNamespace__OVRHand__TrackingConfidence&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRHand__TrackingConfidence(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRHand__TrackingConfidence_Unwrapped : int32_t {
__Low = 0,
__High = 1065353216,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRHand__TrackingConfidence_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRHand__TrackingConfidence_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Low offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence const Low;

/// @brief Field High offset 0
static GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence const High;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRHand
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8912))
// CS Name: OVRHand
class CORDL_TYPE OVRHand : public UnityEngine::MonoBehaviour {
public:
// Declarations
using TrackingConfidence = GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence;

using HandFinger = GlobalNamespace::GlobalNamespace__OVRHand__HandFinger;

using Hand = GlobalNamespace::GlobalNamespace__OVRHand__Hand;

/// @brief Convert operator to GlobalNamespace::GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider
constexpr operator  GlobalNamespace::GlobalNamespace__OVRSkeleton__IOVRSkeletonDataProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider
constexpr operator  GlobalNamespace::GlobalNamespace__OVRSkeletonRenderer__IOVRSkeletonRendererDataProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::GlobalNamespace__OVRMesh__IOVRMeshDataProvider
constexpr operator  GlobalNamespace::GlobalNamespace__OVRMesh__IOVRMeshDataProvider() const noexcept;

/// @brief Convert operator to GlobalNamespace::GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider
constexpr operator  GlobalNamespace::GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~OVRHand() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRHand", modifiers: " const&", def_value: None }]
constexpr OVRHand(OVRHand const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRHand", modifiers: "&&", def_value: None }]
constexpr OVRHand(OVRHand&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRHand(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRHand& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRHand& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRHand& operator=(OVRHand&& o) noexcept = default;
  constexpr OVRHand& operator=(OVRHand const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRHand__Hand __declspec(property(get=__get_HandType, put=__set_HandType))  HandType;

constexpr void __set_HandType(GlobalNamespace::GlobalNamespace__OVRHand__Hand value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRHand__Hand __get_HandType() const;

 UnityEngine::Transform __declspec(property(get=__get__pointerPoseRoot, put=__set__pointerPoseRoot))  _pointerPoseRoot;

constexpr void __set__pointerPoseRoot(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__pointerPoseRoot() const;

 UnityEngine::GameObject __declspec(property(get=__get__pointerPoseGO, put=__set__pointerPoseGO))  _pointerPoseGO;

constexpr void __set__pointerPoseGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__pointerPoseGO() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__HandState __declspec(property(get=__get__handState, put=__set__handState))  _handState;

constexpr void __set__handState(GlobalNamespace::GlobalNamespace__OVRPlugin__HandState value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__HandState __get__handState() const;

 bool __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField))  _IsDataValid_k__BackingField;

constexpr void __set__IsDataValid_k__BackingField(bool value) ;

constexpr bool __get__IsDataValid_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField))  _IsDataHighConfidence_k__BackingField;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool value) ;

constexpr bool __get__IsDataHighConfidence_k__BackingField() const;

 bool __declspec(property(get=__get__IsTracked_k__BackingField, put=__set__IsTracked_k__BackingField))  _IsTracked_k__BackingField;

constexpr void __set__IsTracked_k__BackingField(bool value) ;

constexpr bool __get__IsTracked_k__BackingField() const;

 bool __declspec(property(get=__get__IsSystemGestureInProgress_k__BackingField, put=__set__IsSystemGestureInProgress_k__BackingField))  _IsSystemGestureInProgress_k__BackingField;

constexpr void __set__IsSystemGestureInProgress_k__BackingField(bool value) ;

constexpr bool __get__IsSystemGestureInProgress_k__BackingField() const;

 bool __declspec(property(get=__get__IsPointerPoseValid_k__BackingField, put=__set__IsPointerPoseValid_k__BackingField))  _IsPointerPoseValid_k__BackingField;

constexpr void __set__IsPointerPoseValid_k__BackingField(bool value) ;

constexpr bool __get__IsPointerPoseValid_k__BackingField() const;

 UnityEngine::Transform __declspec(property(get=__get__PointerPose_k__BackingField, put=__set__PointerPose_k__BackingField))  _PointerPose_k__BackingField;

constexpr void __set__PointerPose_k__BackingField(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__PointerPose_k__BackingField() const;

 float_t __declspec(property(get=__get__HandScale_k__BackingField, put=__set__HandScale_k__BackingField))  _HandScale_k__BackingField;

constexpr void __set__HandScale_k__BackingField(float_t value) ;

constexpr float_t __get__HandScale_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence __declspec(property(get=__get__HandConfidence_k__BackingField, put=__set__HandConfidence_k__BackingField))  _HandConfidence_k__BackingField;

constexpr void __set__HandConfidence_k__BackingField(GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence __get__HandConfidence_k__BackingField() const;

 bool __declspec(property(get=__get__IsDominantHand_k__BackingField, put=__set__IsDominantHand_k__BackingField))  _IsDominantHand_k__BackingField;

constexpr void __set__IsDominantHand_k__BackingField(bool value) ;

constexpr bool __get__IsDominantHand_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsDataValid, put=set_IsDataValid))  IsDataValid;

 bool __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence))  IsDataHighConfidence;

 bool __declspec(property(get=get_IsTracked, put=set_IsTracked))  IsTracked;

 bool __declspec(property(get=get_IsSystemGestureInProgress, put=set_IsSystemGestureInProgress))  IsSystemGestureInProgress;

 bool __declspec(property(get=get_IsPointerPoseValid, put=set_IsPointerPoseValid))  IsPointerPoseValid;

 UnityEngine::Transform __declspec(property(get=get_PointerPose, put=set_PointerPose))  PointerPose;

 float_t __declspec(property(get=get_HandScale, put=set_HandScale))  HandScale;

 GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence __declspec(property(get=get_HandConfidence, put=set_HandConfidence))  HandConfidence;

 bool __declspec(property(get=get_IsDominantHand, put=set_IsDominantHand))  IsDominantHand;


// Methods

/// @brief Method get_IsDataValid addr 0x26235a4 size 0x8 virtual false final false
 bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x26235ac size 0xc virtual false final false
 void set_IsDataValid(bool value) ;

/// @brief Method get_IsDataHighConfidence addr 0x26235b8 size 0x8 virtual false final false
 bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x26235c0 size 0xc virtual false final false
 void set_IsDataHighConfidence(bool value) ;

/// @brief Method get_IsTracked addr 0x26235cc size 0x8 virtual false final false
 bool get_IsTracked() ;

/// @brief Method set_IsTracked addr 0x26235d4 size 0xc virtual false final false
 void set_IsTracked(bool value) ;

/// @brief Method get_IsSystemGestureInProgress addr 0x26235e0 size 0x8 virtual false final false
 bool get_IsSystemGestureInProgress() ;

/// @brief Method set_IsSystemGestureInProgress addr 0x26235e8 size 0xc virtual false final false
 void set_IsSystemGestureInProgress(bool value) ;

/// @brief Method get_IsPointerPoseValid addr 0x26235f4 size 0x8 virtual false final false
 bool get_IsPointerPoseValid() ;

/// @brief Method set_IsPointerPoseValid addr 0x26235fc size 0xc virtual false final false
 void set_IsPointerPoseValid(bool value) ;

/// @brief Method get_PointerPose addr 0x2623608 size 0x8 virtual false final false
 UnityEngine::Transform get_PointerPose() ;

/// @brief Method set_PointerPose addr 0x2623610 size 0x8 virtual false final false
 void set_PointerPose(UnityEngine::Transform value) ;

/// @brief Method get_HandScale addr 0x2623618 size 0x8 virtual false final false
 float_t get_HandScale() ;

/// @brief Method set_HandScale addr 0x2623620 size 0x8 virtual false final false
 void set_HandScale(float_t value) ;

/// @brief Method get_HandConfidence addr 0x2623628 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence get_HandConfidence() ;

/// @brief Method set_HandConfidence addr 0x2623630 size 0x8 virtual false final false
 void set_HandConfidence(GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence value) ;

/// @brief Method get_IsDominantHand addr 0x2623638 size 0x8 virtual false final false
 bool get_IsDominantHand() ;

/// @brief Method set_IsDominantHand addr 0x2623640 size 0xc virtual false final false
 void set_IsDominantHand(bool value) ;

/// @brief Method Awake addr 0x262364c size 0xcc virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x26238e8 size 0x8 virtual false final false
 void Update() ;

/// @brief Method FixedUpdate addr 0x26238f0 size 0x74 virtual false final false
 void FixedUpdate() ;

/// @brief Method GetHandState addr 0x2623718 size 0x1d0 virtual false final false
 void GetHandState(GlobalNamespace::GlobalNamespace__OVRPlugin__Step step) ;

/// @brief Method GetFingerIsPinching addr 0x2623964 size 0x28 virtual false final false
 bool GetFingerIsPinching(GlobalNamespace::GlobalNamespace__OVRHand__HandFinger finger) ;

/// @brief Method GetFingerPinchStrength addr 0x262398c size 0x40 virtual false final false
 float_t GetFingerPinchStrength(GlobalNamespace::GlobalNamespace__OVRHand__HandFinger finger) ;

/// @brief Method GetFingerConfidence addr 0x26239cc size 0x44 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence GetFingerConfidence(GlobalNamespace::GlobalNamespace__OVRHand__HandFinger finger) ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType addr 0x2623a10 size 0x18 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRSkeleton__SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData addr 0x2623a28 size 0x6c virtual true final true
 GlobalNamespace::GlobalNamespace__OVRSkeleton__SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData() ;

/// @brief Method OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData addr 0x2623a94 size 0x4c virtual true final true
 GlobalNamespace::GlobalNamespace__OVRSkeletonRenderer__SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData() ;

/// @brief Method OVRMesh.IOVRMeshDataProvider.GetMeshType addr 0x2623ae0 size 0x18 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRMesh__MeshType OVRMesh_IOVRMeshDataProvider_GetMeshType() ;

/// @brief Method OVRMeshRenderer.IOVRMeshRendererDataProvider.GetMeshRendererData addr 0x2623af8 size 0x50 virtual true final true
 GlobalNamespace::GlobalNamespace__OVRMeshRenderer__MeshRendererData OVRMeshRenderer_IOVRMeshRendererDataProvider_GetMeshRendererData() ;

// Ctor Parameters []
explicit OVRHand() ;

/// @brief Method .ctor addr 0x2623b48 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method OVRSkeleton.IOVRSkeletonDataProvider.get_enabled addr 0x2623b58 size 0x8 virtual true final true
 bool OVRSkeleton_IOVRSkeletonDataProvider_get_enabled() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRHand__Hand, "", "OVRHand/Hand");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRHand__HandFinger, "", "OVRHand/HandFinger");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRHand__TrackingConfidence, "", "OVRHand/TrackingConfidence");
NEED_NO_BOX(GlobalNamespace::OVRHand);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHand, "", "OVRHand");
