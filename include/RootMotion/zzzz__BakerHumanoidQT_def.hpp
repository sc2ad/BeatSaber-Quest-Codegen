#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class BakerHumanoidQT;
}
// Type: RootMotion::BakerHumanoidQT
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12418))
// CS Name: RootMotion.BakerHumanoidQT
class CORDL_TYPE BakerHumanoidQT : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~BakerHumanoidQT() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakerHumanoidQT", modifiers: " const&", def_value: None }]
constexpr BakerHumanoidQT(BakerHumanoidQT const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakerHumanoidQT", modifiers: "&&", def_value: None }]
constexpr BakerHumanoidQT(BakerHumanoidQT&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakerHumanoidQT(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BakerHumanoidQT& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakerHumanoidQT& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakerHumanoidQT& operator=(BakerHumanoidQT&& o) noexcept = default;
  constexpr BakerHumanoidQT& operator=(BakerHumanoidQT const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_transform() const;

 ::StringW __declspec(property(get=__get_Qx, put=__set_Qx))  Qx;

constexpr void __set_Qx(::StringW value) ;

constexpr ::StringW __get_Qx() const;

 ::StringW __declspec(property(get=__get_Qy, put=__set_Qy))  Qy;

constexpr void __set_Qy(::StringW value) ;

constexpr ::StringW __get_Qy() const;

 ::StringW __declspec(property(get=__get_Qz, put=__set_Qz))  Qz;

constexpr void __set_Qz(::StringW value) ;

constexpr ::StringW __get_Qz() const;

 ::StringW __declspec(property(get=__get_Qw, put=__set_Qw))  Qw;

constexpr void __set_Qw(::StringW value) ;

constexpr ::StringW __get_Qw() const;

 ::StringW __declspec(property(get=__get_Tx, put=__set_Tx))  Tx;

constexpr void __set_Tx(::StringW value) ;

constexpr ::StringW __get_Tx() const;

 ::StringW __declspec(property(get=__get_Ty, put=__set_Ty))  Ty;

constexpr void __set_Ty(::StringW value) ;

constexpr ::StringW __get_Ty() const;

 ::StringW __declspec(property(get=__get_Tz, put=__set_Tz))  Tz;

constexpr void __set_Tz(::StringW value) ;

constexpr ::StringW __get_Tz() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_rotX, put=__set_rotX))  rotX;

constexpr void __set_rotX(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_rotX() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_rotY, put=__set_rotY))  rotY;

constexpr void __set_rotY(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_rotY() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_rotZ, put=__set_rotZ))  rotZ;

constexpr void __set_rotZ(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_rotZ() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_rotW, put=__set_rotW))  rotW;

constexpr void __set_rotW(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_rotW() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_posX, put=__set_posX))  posX;

constexpr void __set_posX(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_posX() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_posY, put=__set_posY))  posY;

constexpr void __set_posY(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_posY() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_posZ, put=__set_posZ))  posZ;

constexpr void __set_posZ(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_posZ() const;

 ::UnityEngine::AvatarIKGoal __declspec(property(get=__get_goal, put=__set_goal))  goal;

constexpr void __set_goal(::UnityEngine::AvatarIKGoal value) ;

constexpr ::UnityEngine::AvatarIKGoal __get_goal() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_lastQ, put=__set_lastQ))  lastQ;

constexpr void __set_lastQ(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_lastQ() const;

 bool __declspec(property(get=__get_lastQSet, put=__set_lastQSet))  lastQSet;

constexpr void __set_lastQSet(bool value) ;

constexpr bool __get_lastQSet() const;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit BakerHumanoidQT(::StringW name) ;

/// @brief Method .ctor addr 0x11a8a60 size 0x178 virtual false final false
 void _ctor(::StringW name) ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "goal", ty: "::UnityEngine::AvatarIKGoal", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit BakerHumanoidQT(::UnityEngine::Transform transform, ::UnityEngine::AvatarIKGoal goal, ::StringW name) ;

/// @brief Method .ctor addr 0x11a8d1c size 0x188 virtual false final false
 void _ctor(::UnityEngine::Transform transform, ::UnityEngine::AvatarIKGoal goal, ::StringW name) ;

/// @brief Method Reset addr 0x11a8bd8 size 0x144 virtual false final false
 void Reset() ;

/// @brief Method SetIKKeyframes addr 0x11a8ea4 size 0x234 virtual false final false
 void SetIKKeyframes(float_t time, ::UnityEngine::Avatar avatar, float_t humanScale, ::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation) ;

/// @brief Method SetKeyframes addr 0x11a90d8 size 0xf0 virtual false final false
 void SetKeyframes(float_t time, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot) ;

/// @brief Method MoveLastKeyframes addr 0x11a91c8 size 0x68 virtual false final false
 void MoveLastKeyframes(float_t time) ;

/// @brief Method SetLoopFrame addr 0x11a92ac size 0x68 virtual false final false
 void SetLoopFrame(float_t time) ;

/// @brief Method MoveLastKeyframe addr 0x11a9230 size 0x7c virtual false final false
 void MoveLastKeyframe(float_t time, ::UnityEngine::AnimationCurve curve) ;

/// @brief Method MultiplyLength addr 0x11a9314 size 0xa8 virtual false final false
 void MultiplyLength(::UnityEngine::AnimationCurve curve, float_t mlp) ;

/// @brief Method SetCurves addr 0x11a93bc size 0x2ec virtual false final false
 void SetCurves(ByRef<::UnityEngine::AnimationClip> clip, float_t maxError, float_t lengthMlp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::BakerHumanoidQT);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerHumanoidQT, "RootMotion", "BakerHumanoidQT");
