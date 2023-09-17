#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class AvatarPoseController;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarPoseRestrictions;
}
// Type: ::AvatarPoseRestrictions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4078))
// CS Name: AvatarPoseRestrictions
class CORDL_TYPE AvatarPoseRestrictions : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~AvatarPoseRestrictions() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPoseRestrictions", modifiers: " const&", def_value: None }]
constexpr AvatarPoseRestrictions(AvatarPoseRestrictions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarPoseRestrictions", modifiers: "&&", def_value: None }]
constexpr AvatarPoseRestrictions(AvatarPoseRestrictions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarPoseRestrictions(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AvatarPoseRestrictions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarPoseRestrictions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarPoseRestrictions& operator=(AvatarPoseRestrictions&& o) noexcept = default;
  constexpr AvatarPoseRestrictions& operator=(AvatarPoseRestrictions const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__maxHeadSquareDistanceFromCenter, put=__set__maxHeadSquareDistanceFromCenter))  _maxHeadSquareDistanceFromCenter;

constexpr void __set__maxHeadSquareDistanceFromCenter(float_t value) ;

constexpr float_t __get__maxHeadSquareDistanceFromCenter() const;

 float_t __declspec(property(get=__get__minHeadYPos, put=__set__minHeadYPos))  _minHeadYPos;

constexpr void __set__minHeadYPos(float_t value) ;

constexpr float_t __get__minHeadYPos() const;

 float_t __declspec(property(get=__get__maxHeadYPos, put=__set__maxHeadYPos))  _maxHeadYPos;

constexpr void __set__maxHeadYPos(float_t value) ;

constexpr float_t __get__maxHeadYPos() const;

 float_t __declspec(property(get=__get__minHandXZSquareDistanceFromHeadCenter, put=__set__minHandXZSquareDistanceFromHeadCenter))  _minHandXZSquareDistanceFromHeadCenter;

constexpr void __set__minHandXZSquareDistanceFromHeadCenter(float_t value) ;

constexpr float_t __get__minHandXZSquareDistanceFromHeadCenter() const;

 float_t __declspec(property(get=__get__maxHandXZSquareDistanceFromHeadCenter, put=__set__maxHandXZSquareDistanceFromHeadCenter))  _maxHandXZSquareDistanceFromHeadCenter;

constexpr void __set__maxHandXZSquareDistanceFromHeadCenter(float_t value) ;

constexpr float_t __get__maxHandXZSquareDistanceFromHeadCenter() const;

 float_t __declspec(property(get=__get__minHandYDistanceFromHeadCenter, put=__set__minHandYDistanceFromHeadCenter))  _minHandYDistanceFromHeadCenter;

constexpr void __set__minHandYDistanceFromHeadCenter(float_t value) ;

constexpr float_t __get__minHandYDistanceFromHeadCenter() const;

 float_t __declspec(property(get=__get__maxHandYDistanceFromHeadCenter, put=__set__maxHandYDistanceFromHeadCenter))  _maxHandYDistanceFromHeadCenter;

constexpr void __set__maxHandYDistanceFromHeadCenter(float_t value) ;

constexpr float_t __get__maxHandYDistanceFromHeadCenter() const;

 bool __declspec(property(get=__get__forceHeadPosition, put=__set__forceHeadPosition))  _forceHeadPosition;

constexpr void __set__forceHeadPosition(bool value) ;

constexpr bool __get__forceHeadPosition() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__centerHeadOffset, put=__set__centerHeadOffset))  _centerHeadOffset;

constexpr void __set__centerHeadOffset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__centerHeadOffset() const;

 ::GlobalNamespace::AvatarPoseController __declspec(property(get=__get__avatarPoseController, put=__set__avatarPoseController))  _avatarPoseController;

constexpr void __set__avatarPoseController(::GlobalNamespace::AvatarPoseController value) ;

constexpr ::GlobalNamespace::AvatarPoseController __get__avatarPoseController() const;


// Methods

/// @brief Method Start addr 0x20c04d4 size 0x80 virtual false final false
 void Start() ;

/// @brief Method HandleAvatarPoseControllerPositionsWillBeSet addr 0x20c0554 size 0x1dc virtual false final false
 void HandleAvatarPoseControllerPositionsWillBeSet(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition, ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition, ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition) ;

/// @brief Method LimitHandPositionRelativeToHead addr 0x20c0730 size 0x90 virtual false final false
 ::UnityEngine::Vector3 LimitHandPositionRelativeToHead(::UnityEngine::Vector3 handPosition, ::UnityEngine::Vector3 headCenter) ;

// Ctor Parameters []
explicit AvatarPoseRestrictions() ;

/// @brief Method .ctor addr 0x20c07c0 size 0x3c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AvatarPoseRestrictions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarPoseRestrictions, "", "AvatarPoseRestrictions");
