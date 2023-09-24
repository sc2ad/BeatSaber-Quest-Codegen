#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__Recoil__Handedness;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class AimIK;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Recoil__RecoilOffset;
}
namespace GlobalNamespace {
class RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__Recoil__Handedness;
}
namespace GlobalNamespace {
class RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink;
}
namespace RootMotion::FinalIK {
class Recoil;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Recoil__RecoilOffset;
}
// Type: ::EffectorLink
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12606))
// CS Name: RootMotion.FinalIK.Recoil::RecoilOffset::EffectorLink
class CORDL_TYPE RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink(RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink(RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink& operator=(RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink&& o) noexcept = default;
  constexpr RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink& operator=(RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::FullBodyBipedEffector __declspec(property(get=__get_effector, put=__set_effector))  effector;

constexpr void __set_effector(RootMotion::FinalIK::FullBodyBipedEffector value) ;

constexpr RootMotion::FinalIK::FullBodyBipedEffector __get_effector() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;


// Methods

static GlobalNamespace::RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink New_ctor() ;

/// @brief Method .ctor addr 0x120d0e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RecoilOffset
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12607))
// CS Name: RootMotion.FinalIK.Recoil::RecoilOffset
class CORDL_TYPE RootMotion__FinalIK__Recoil__RecoilOffset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EffectorLink = GlobalNamespace::RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RootMotion__FinalIK__Recoil__RecoilOffset() = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Recoil__RecoilOffset", modifiers: " const&", def_value: None }]
constexpr RootMotion__FinalIK__Recoil__RecoilOffset(RootMotion__FinalIK__Recoil__RecoilOffset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RootMotion__FinalIK__Recoil__RecoilOffset", modifiers: "&&", def_value: None }]
constexpr RootMotion__FinalIK__Recoil__RecoilOffset(RootMotion__FinalIK__Recoil__RecoilOffset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Recoil__RecoilOffset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RootMotion__FinalIK__Recoil__RecoilOffset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RootMotion__FinalIK__Recoil__RecoilOffset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RootMotion__FinalIK__Recoil__RecoilOffset& operator=(RootMotion__FinalIK__Recoil__RecoilOffset&& o) noexcept = default;
  constexpr RootMotion__FinalIK__Recoil__RecoilOffset& operator=(RootMotion__FinalIK__Recoil__RecoilOffset const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_offset() const;

 float_t __declspec(property(get=__get_additivity, put=__set_additivity))  additivity;

constexpr void __set_additivity(float_t value) ;

constexpr float_t __get_additivity() const;

 float_t __declspec(property(get=__get_maxAdditiveOffsetMag, put=__set_maxAdditiveOffsetMag))  maxAdditiveOffsetMag;

constexpr void __set_maxAdditiveOffsetMag(float_t value) ;

constexpr float_t __get_maxAdditiveOffsetMag() const;

 ::ArrayW<GlobalNamespace::RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink> __declspec(property(get=__get_effectorLinks, put=__set_effectorLinks))  effectorLinks;

constexpr void __set_effectorLinks(::ArrayW<GlobalNamespace::RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink> value) ;

constexpr ::ArrayW<GlobalNamespace::RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink> __get_effectorLinks() const;

 UnityEngine::Vector3 __declspec(property(get=__get_additiveOffset, put=__set_additiveOffset))  additiveOffset;

constexpr void __set_additiveOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_additiveOffset() const;

 UnityEngine::Vector3 __declspec(property(get=__get_lastOffset, put=__set_lastOffset))  lastOffset;

constexpr void __set_lastOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_lastOffset() const;


// Methods

/// @brief Method Start addr 0x120bf34 size 0xd4 virtual false final false
 void Start() ;

/// @brief Method Apply addr 0x120ca90 size 0x1cc virtual false final false
 void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped solver, UnityEngine::Quaternion rotation, float_t masterWeight, float_t length, float_t timeLeft) ;

static RootMotion::FinalIK::RootMotion__FinalIK__Recoil__RecoilOffset New_ctor() ;

/// @brief Method .ctor addr 0x120d0d0 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: ::Handedness
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12608))
// CS Name: RootMotion.FinalIK.Recoil::Handedness
struct CORDL_TYPE RootMotion__FinalIK__Recoil__Handedness : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RootMotion__FinalIK__Recoil__Handedness(int32_t value__) noexcept;


                    constexpr RootMotion__FinalIK__Recoil__Handedness(RootMotion__FinalIK__Recoil__Handedness const&) = default;
                    constexpr RootMotion__FinalIK__Recoil__Handedness(RootMotion__FinalIK__Recoil__Handedness&&) = default;
                    constexpr RootMotion__FinalIK__Recoil__Handedness& operator=(RootMotion__FinalIK__Recoil__Handedness const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RootMotion__FinalIK__Recoil__Handedness& operator=(RootMotion__FinalIK__Recoil__Handedness&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RootMotion__FinalIK__Recoil__Handedness(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RootMotion__FinalIK__Recoil__Handedness_Unwrapped : int32_t {
__Right = 0,
__Left = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RootMotion__FinalIK__Recoil__Handedness_Unwrapped () const noexcept {
return std::bit_cast<__RootMotion__FinalIK__Recoil__Handedness_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Right offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__Recoil__Handedness const Right;

/// @brief Field Left offset 0
static RootMotion::FinalIK::RootMotion__FinalIK__Recoil__Handedness const Left;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::Recoil
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12598))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12609))
// CS Name: RootMotion.FinalIK.Recoil
class CORDL_TYPE Recoil : public RootMotion::FinalIK::OffsetModifier {
public:
// Declarations
using Handedness = RootMotion::FinalIK::RootMotion__FinalIK__Recoil__Handedness;

using RecoilOffset = RootMotion::FinalIK::RootMotion__FinalIK__Recoil__RecoilOffset;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~Recoil() = default;

// Ctor Parameters [CppParam { name: "", ty: "Recoil", modifiers: " const&", def_value: None }]
constexpr Recoil(Recoil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Recoil", modifiers: "&&", def_value: None }]
constexpr Recoil(Recoil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Recoil(void* ptr) noexcept : RootMotion::FinalIK::OffsetModifier(ptr) {
}


  constexpr Recoil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Recoil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Recoil& operator=(Recoil&& o) noexcept = default;
  constexpr Recoil& operator=(Recoil const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::AimIK __declspec(property(get=__get_aimIK, put=__set_aimIK))  aimIK;

constexpr void __set_aimIK(RootMotion::FinalIK::AimIK value) ;

constexpr RootMotion::FinalIK::AimIK __get_aimIK() const;

 bool __declspec(property(get=__get_aimIKSolvedLast, put=__set_aimIKSolvedLast))  aimIKSolvedLast;

constexpr void __set_aimIKSolvedLast(bool value) ;

constexpr bool __get_aimIKSolvedLast() const;

 RootMotion::FinalIK::RootMotion__FinalIK__Recoil__Handedness __declspec(property(get=__get_handedness, put=__set_handedness))  handedness;

constexpr void __set_handedness(RootMotion::FinalIK::RootMotion__FinalIK__Recoil__Handedness value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__Recoil__Handedness __get_handedness() const;

 bool __declspec(property(get=__get_twoHanded, put=__set_twoHanded))  twoHanded;

constexpr void __set_twoHanded(bool value) ;

constexpr bool __get_twoHanded() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get_recoilWeight, put=__set_recoilWeight))  recoilWeight;

constexpr void __set_recoilWeight(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get_recoilWeight() const;

 float_t __declspec(property(get=__get_magnitudeRandom, put=__set_magnitudeRandom))  magnitudeRandom;

constexpr void __set_magnitudeRandom(float_t value) ;

constexpr float_t __get_magnitudeRandom() const;

 UnityEngine::Vector3 __declspec(property(get=__get_rotationRandom, put=__set_rotationRandom))  rotationRandom;

constexpr void __set_rotationRandom(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_rotationRandom() const;

 UnityEngine::Vector3 __declspec(property(get=__get_handRotationOffset, put=__set_handRotationOffset))  handRotationOffset;

constexpr void __set_handRotationOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_handRotationOffset() const;

 float_t __declspec(property(get=__get_blendTime, put=__set_blendTime))  blendTime;

constexpr void __set_blendTime(float_t value) ;

constexpr float_t __get_blendTime() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Recoil__RecoilOffset> __declspec(property(get=__get_offsets, put=__set_offsets))  offsets;

constexpr void __set_offsets(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Recoil__RecoilOffset> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__Recoil__RecoilOffset> __get_offsets() const;

 UnityEngine::Quaternion __declspec(property(get=__get_rotationOffset, put=__set_rotationOffset))  rotationOffset;

constexpr void __set_rotationOffset(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_rotationOffset() const;

 float_t __declspec(property(get=__get_magnitudeMlp, put=__set_magnitudeMlp))  magnitudeMlp;

constexpr void __set_magnitudeMlp(float_t value) ;

constexpr float_t __get_magnitudeMlp() const;

 float_t __declspec(property(get=__get_endTime, put=__set_endTime))  endTime;

constexpr void __set_endTime(float_t value) ;

constexpr float_t __get_endTime() const;

 UnityEngine::Quaternion __declspec(property(get=__get_handRotation, put=__set_handRotation))  handRotation;

constexpr void __set_handRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_handRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_secondaryHandRelativeRotation, put=__set_secondaryHandRelativeRotation))  secondaryHandRelativeRotation;

constexpr void __set_secondaryHandRelativeRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_secondaryHandRelativeRotation() const;

 UnityEngine::Quaternion __declspec(property(get=__get_randomRotation, put=__set_randomRotation))  randomRotation;

constexpr void __set_randomRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_randomRotation() const;

 float_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(float_t value) ;

constexpr float_t __get_length() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;

 float_t __declspec(property(get=__get_blendWeight, put=__set_blendWeight))  blendWeight;

constexpr void __set_blendWeight(float_t value) ;

constexpr float_t __get_blendWeight() const;

 float_t __declspec(property(get=__get_w, put=__set_w))  w;

constexpr void __set_w(float_t value) ;

constexpr float_t __get_w() const;

 UnityEngine::Quaternion __declspec(property(get=__get_primaryHandRotation, put=__set_primaryHandRotation))  primaryHandRotation;

constexpr void __set_primaryHandRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_primaryHandRotation() const;

 bool __declspec(property(get=__get_handRotationsSet, put=__set_handRotationsSet))  handRotationsSet;

constexpr void __set_handRotationsSet(bool value) ;

constexpr bool __get_handRotationsSet() const;

 UnityEngine::Vector3 __declspec(property(get=__get_aimIKAxis, put=__set_aimIKAxis))  aimIKAxis;

constexpr void __set_aimIKAxis(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_aimIKAxis() const;


// Properties

 bool __declspec(property(get=get_isFinished))  isFinished;

 RootMotion::FinalIK::IKEffector __declspec(property(get=get_primaryHandEffector))  primaryHandEffector;

 RootMotion::FinalIK::IKEffector __declspec(property(get=get_secondaryHandEffector))  secondaryHandEffector;

 UnityEngine::Transform __declspec(property(get=get_primaryHand))  primaryHand;

 UnityEngine::Transform __declspec(property(get=get_secondaryHand))  secondaryHand;


// Methods

/// @brief Method get_isFinished addr 0x120bd98 size 0x24 virtual false final false
 bool get_isFinished() ;

/// @brief Method SetHandRotations addr 0x120bdbc size 0x2c virtual false final false
 void SetHandRotations(UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation) ;

/// @brief Method Fire addr 0x120bde8 size 0x14c virtual false final false
 void Fire(float_t magnitude) ;

/// @brief Method OnModifyOffset addr 0x120c008 size 0xa88 virtual true final false
 void OnModifyOffset() ;

/// @brief Method AfterFBBIK addr 0x120cd0c size 0x118 virtual false final false
 void AfterFBBIK() ;

/// @brief Method AfterAimIK addr 0x120ce24 size 0x50 virtual false final false
 void AfterAimIK() ;

/// @brief Method get_primaryHandEffector addr 0x120cc94 size 0x3c virtual false final false
 RootMotion::FinalIK::IKEffector get_primaryHandEffector() ;

/// @brief Method get_secondaryHandEffector addr 0x120ccd0 size 0x3c virtual false final false
 RootMotion::FinalIK::IKEffector get_secondaryHandEffector() ;

/// @brief Method get_primaryHand addr 0x120cc5c size 0x1c virtual false final false
 UnityEngine::Transform get_primaryHand() ;

/// @brief Method get_secondaryHand addr 0x120cc78 size 0x1c virtual false final false
 UnityEngine::Transform get_secondaryHand() ;

/// @brief Method OnDestroy addr 0x120ce74 size 0x1d0 virtual true final false
 void OnDestroy() ;

static RootMotion::FinalIK::Recoil New_ctor() ;

/// @brief Method .ctor addr 0x120d044 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__Recoil__Handedness, "RootMotion.FinalIK", "Recoil/Handedness");
NEED_NO_BOX(GlobalNamespace::RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RootMotion__FinalIK__Recoil__RecoilOffset__EffectorLink, "RootMotion.FinalIK", "Recoil/RecoilOffset/EffectorLink");
NEED_NO_BOX(RootMotion::FinalIK::Recoil);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Recoil, "RootMotion.FinalIK", "Recoil");
NEED_NO_BOX(RootMotion::FinalIK::RootMotion__FinalIK__Recoil__RecoilOffset);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::RootMotion__FinalIK__Recoil__RecoilOffset, "RootMotion.FinalIK", "Recoil/RecoilOffset");
