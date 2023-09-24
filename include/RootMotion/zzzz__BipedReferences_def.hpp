#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
namespace RootMotion {
struct RootMotion__BipedReferences__AutoDetectParams;
}
namespace RootMotion {
struct RootMotion__BipedNaming__BoneSide;
}
namespace RootMotion {
struct RootMotion__BipedNaming__BoneType;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace RootMotion {
class BipedReferences;
}
namespace RootMotion {
struct RootMotion__BipedReferences__AutoDetectParams;
}
// Type: ::AutoDetectParams
namespace RootMotion {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12429))
// CS Name: RootMotion.BipedReferences::AutoDetectParams
struct CORDL_TYPE RootMotion__BipedReferences__AutoDetectParams : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "legsParentInSpine", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "includeEyes", ty: "bool", modifiers: "", def_value: None }]
constexpr RootMotion__BipedReferences__AutoDetectParams(bool legsParentInSpine, bool includeEyes) noexcept;


                    constexpr RootMotion__BipedReferences__AutoDetectParams(RootMotion__BipedReferences__AutoDetectParams const&) = default;
                    constexpr RootMotion__BipedReferences__AutoDetectParams(RootMotion__BipedReferences__AutoDetectParams&&) = default;
                    constexpr RootMotion__BipedReferences__AutoDetectParams& operator=(RootMotion__BipedReferences__AutoDetectParams const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__BipedReferences__AutoDetectParams& operator=(RootMotion__BipedReferences__AutoDetectParams&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__BipedReferences__AutoDetectParams(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_legsParentInSpine, put=__set_legsParentInSpine))  legsParentInSpine;

constexpr void __set_legsParentInSpine(bool value) ;

constexpr bool __get_legsParentInSpine() const;

 bool __declspec(property(get=__get_includeEyes, put=__set_includeEyes))  includeEyes;

constexpr void __set_includeEyes(bool value) ;

constexpr bool __get_includeEyes() const;


// Properties

static RootMotion::RootMotion__BipedReferences__AutoDetectParams __declspec(property(get=get_Default))  Default;


// Methods

/// @brief Method .ctor addr 0x11b2a2c size 0x14 virtual false final false
 void _ctor(bool legsParentInSpine, bool includeEyes) ;

/// @brief Method get_Default addr 0x11b2a40 size 0x8 virtual false final false
static RootMotion::RootMotion__BipedReferences__AutoDetectParams get_Default() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion
// Type: RootMotion::BipedReferences
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12430))
// CS Name: RootMotion.BipedReferences
class CORDL_TYPE BipedReferences : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AutoDetectParams = RootMotion::RootMotion__BipedReferences__AutoDetectParams;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~BipedReferences() = default;

// Ctor Parameters [CppParam { name: "", ty: "BipedReferences", modifiers: " const&", def_value: None }]
constexpr BipedReferences(BipedReferences const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BipedReferences", modifiers: "&&", def_value: None }]
constexpr BipedReferences(BipedReferences&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BipedReferences(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BipedReferences& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BipedReferences& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BipedReferences& operator=(BipedReferences&& o) noexcept = default;
  constexpr BipedReferences& operator=(BipedReferences const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_root, put=__set_root))  root;

constexpr void __set_root(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_root() const;

 UnityEngine::Transform __declspec(property(get=__get_pelvis, put=__set_pelvis))  pelvis;

constexpr void __set_pelvis(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_pelvis() const;

 UnityEngine::Transform __declspec(property(get=__get_leftThigh, put=__set_leftThigh))  leftThigh;

constexpr void __set_leftThigh(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_leftThigh() const;

 UnityEngine::Transform __declspec(property(get=__get_leftCalf, put=__set_leftCalf))  leftCalf;

constexpr void __set_leftCalf(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_leftCalf() const;

 UnityEngine::Transform __declspec(property(get=__get_leftFoot, put=__set_leftFoot))  leftFoot;

constexpr void __set_leftFoot(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_leftFoot() const;

 UnityEngine::Transform __declspec(property(get=__get_rightThigh, put=__set_rightThigh))  rightThigh;

constexpr void __set_rightThigh(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rightThigh() const;

 UnityEngine::Transform __declspec(property(get=__get_rightCalf, put=__set_rightCalf))  rightCalf;

constexpr void __set_rightCalf(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rightCalf() const;

 UnityEngine::Transform __declspec(property(get=__get_rightFoot, put=__set_rightFoot))  rightFoot;

constexpr void __set_rightFoot(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rightFoot() const;

 UnityEngine::Transform __declspec(property(get=__get_leftUpperArm, put=__set_leftUpperArm))  leftUpperArm;

constexpr void __set_leftUpperArm(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_leftUpperArm() const;

 UnityEngine::Transform __declspec(property(get=__get_leftForearm, put=__set_leftForearm))  leftForearm;

constexpr void __set_leftForearm(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_leftForearm() const;

 UnityEngine::Transform __declspec(property(get=__get_leftHand, put=__set_leftHand))  leftHand;

constexpr void __set_leftHand(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_leftHand() const;

 UnityEngine::Transform __declspec(property(get=__get_rightUpperArm, put=__set_rightUpperArm))  rightUpperArm;

constexpr void __set_rightUpperArm(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rightUpperArm() const;

 UnityEngine::Transform __declspec(property(get=__get_rightForearm, put=__set_rightForearm))  rightForearm;

constexpr void __set_rightForearm(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rightForearm() const;

 UnityEngine::Transform __declspec(property(get=__get_rightHand, put=__set_rightHand))  rightHand;

constexpr void __set_rightHand(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rightHand() const;

 UnityEngine::Transform __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_head() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_spine, put=__set_spine))  spine;

constexpr void __set_spine(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_spine() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_eyes, put=__set_eyes))  eyes;

constexpr void __set_eyes(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_eyes() const;


// Properties

 bool __declspec(property(get=get_isFilled))  isFilled;

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

/// @brief Method get_isFilled addr 0x11af124 size 0x35c virtual true final false
 bool get_isFilled() ;

/// @brief Method get_isEmpty addr 0x11af480 size 0x10 virtual false final false
 bool get_isEmpty() ;

/// @brief Method IsEmpty addr 0x11af490 size 0x38c virtual true final false
 bool IsEmpty(bool includeRoot) ;

/// @brief Method Contains addr 0x11af81c size 0x390 virtual true final false
 bool Contains(UnityEngine::Transform t, bool ignoreRoot) ;

/// @brief Method AutoDetectReferences addr 0x11afbac size 0x1f8 virtual false final false
static bool AutoDetectReferences(ByRef<RootMotion::BipedReferences> references, UnityEngine::Transform root, RootMotion::RootMotion__BipedReferences__AutoDetectParams autoDetectParams) ;

/// @brief Method DetectReferencesByNaming addr 0x11b01d0 size 0x748 virtual false final false
static void DetectReferencesByNaming(ByRef<RootMotion::BipedReferences> references, UnityEngine::Transform root, RootMotion::RootMotion__BipedReferences__AutoDetectParams autoDetectParams) ;

/// @brief Method AssignHumanoidReferences addr 0x11afe0c size 0x3c4 virtual false final false
static void AssignHumanoidReferences(ByRef<RootMotion::BipedReferences> references, UnityEngine::Animator animator, RootMotion::RootMotion__BipedReferences__AutoDetectParams autoDetectParams) ;

/// @brief Method SetupError addr 0x11b09cc size 0xe0 virtual false final false
static bool SetupError(RootMotion::BipedReferences references, ByRef<::StringW> errorMessage) ;

/// @brief Method SetupWarning addr 0x11b0aac size 0x9c virtual false final false
static bool SetupWarning(RootMotion::BipedReferences references, ByRef<::StringW> warningMessage) ;

/// @brief Method IsNeckBone addr 0x11b1524 size 0xe0 virtual false final false
static bool IsNeckBone(UnityEngine::Transform bone, UnityEngine::Transform leftUpperArm) ;

/// @brief Method AddBoneToEyes addr 0x11b1344 size 0xf4 virtual false final false
static bool AddBoneToEyes(UnityEngine::Transform bone, ByRef<RootMotion::BipedReferences> references, RootMotion::RootMotion__BipedReferences__AutoDetectParams autoDetectParams) ;

/// @brief Method AddBoneToSpine addr 0x11b10e4 size 0x150 virtual false final false
static bool AddBoneToSpine(UnityEngine::Transform bone, ByRef<RootMotion::BipedReferences> references, RootMotion::RootMotion__BipedReferences__AutoDetectParams autoDetectParams) ;

/// @brief Method DetectLimb addr 0x11b0b48 size 0xdc virtual false final false
static void DetectLimb(RootMotion::RootMotion__BipedNaming__BoneType boneType, RootMotion::RootMotion__BipedNaming__BoneSide boneSide, ByRef<UnityEngine::Transform> firstBone, ByRef<UnityEngine::Transform> secondBone, ByRef<UnityEngine::Transform> lastBone, ::ArrayW<UnityEngine::Transform> transforms) ;

/// @brief Method AddBoneToHierarchy addr 0x11b1438 size 0xec virtual false final false
static void AddBoneToHierarchy(ByRef<::ArrayW<UnityEngine::Transform>> bones, UnityEngine::Transform transform) ;

/// @brief Method LimbError addr 0x11b1604 size 0x580 virtual false final false
static bool LimbError(UnityEngine::Transform bone1, UnityEngine::Transform bone2, UnityEngine::Transform bone3, ByRef<::StringW> errorMessage) ;

/// @brief Method LimbWarning addr 0x11b20c4 size 0x2d4 virtual false final false
static bool LimbWarning(UnityEngine::Transform bone1, UnityEngine::Transform bone2, UnityEngine::Transform bone3, ByRef<::StringW> warningMessage) ;

/// @brief Method SpineError addr 0x11b1b84 size 0x354 virtual false final false
static bool SpineError(RootMotion::BipedReferences references, ByRef<::StringW> errorMessage) ;

/// @brief Method SpineWarning addr 0x11b2398 size 0x8 virtual false final false
static bool SpineWarning(RootMotion::BipedReferences references, ByRef<::StringW> warningMessage) ;

/// @brief Method EyesError addr 0x11b1ed8 size 0x1ec virtual false final false
static bool EyesError(RootMotion::BipedReferences references, ByRef<::StringW> errorMessage) ;

/// @brief Method EyesWarning addr 0x11b23a0 size 0x8 virtual false final false
static bool EyesWarning(RootMotion::BipedReferences references, ByRef<::StringW> warningMessage) ;

/// @brief Method RootHeightWarning addr 0x11b23a8 size 0x1b4 virtual false final false
static bool RootHeightWarning(RootMotion::BipedReferences references, ByRef<::StringW> warningMessage) ;

/// @brief Method FacingAxisWarning addr 0x11b255c size 0x2d8 virtual false final false
static bool FacingAxisWarning(RootMotion::BipedReferences references, ByRef<::StringW> warningMessage) ;

/// @brief Method GetVerticalOffset addr 0x11b29c4 size 0x68 virtual false final false
static float_t GetVerticalOffset(UnityEngine::Vector3 p1, UnityEngine::Vector3 p2, UnityEngine::Quaternion rotation) ;

static RootMotion::BipedReferences New_ctor() ;

/// @brief Method .ctor addr 0x11afda4 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::BipedReferences);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedReferences, "RootMotion", "BipedReferences");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::RootMotion__BipedReferences__AutoDetectParams, "RootMotion", "BipedReferences/AutoDetectParams");
