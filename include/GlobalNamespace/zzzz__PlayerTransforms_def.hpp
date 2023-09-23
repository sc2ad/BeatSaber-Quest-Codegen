#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerTransforms;
}
// Type: ::PlayerTransforms
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5367))
// CS Name: PlayerTransforms
class CORDL_TYPE PlayerTransforms : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~PlayerTransforms() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTransforms", modifiers: " const&", def_value: None }]
constexpr PlayerTransforms(PlayerTransforms const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTransforms", modifiers: "&&", def_value: None }]
constexpr PlayerTransforms(PlayerTransforms&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerTransforms(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayerTransforms& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerTransforms& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerTransforms& operator=(PlayerTransforms&& o) noexcept = default;
  constexpr PlayerTransforms& operator=(PlayerTransforms const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__headTransform, put=__set__headTransform))  _headTransform;

constexpr void __set__headTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__headTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__originTransform, put=__set__originTransform))  _originTransform;

constexpr void __set__originTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__originTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__leftHandTransform, put=__set__leftHandTransform))  _leftHandTransform;

constexpr void __set__leftHandTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__leftHandTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__rightHandTransform, put=__set__rightHandTransform))  _rightHandTransform;

constexpr void __set__rightHandTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__rightHandTransform() const;

 bool __declspec(property(get=__get__overrideHeadPos, put=__set__overrideHeadPos))  _overrideHeadPos;

constexpr void __set__overrideHeadPos(bool value) ;

constexpr bool __get__overrideHeadPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__overriddenHeadPos, put=__set__overriddenHeadPos))  _overriddenHeadPos;

constexpr void __set__overriddenHeadPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__overriddenHeadPos() const;

 UnityEngine::Vector3 __declspec(property(get=__get__headWorldPos, put=__set__headWorldPos))  _headWorldPos;

constexpr void __set__headWorldPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__headWorldPos() const;

 UnityEngine::Quaternion __declspec(property(get=__get__headWorldRot, put=__set__headWorldRot))  _headWorldRot;

constexpr void __set__headWorldRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__headWorldRot() const;

 UnityEngine::Vector3 __declspec(property(get=__get__headPseudoLocalPos, put=__set__headPseudoLocalPos))  _headPseudoLocalPos;

constexpr void __set__headPseudoLocalPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__headPseudoLocalPos() const;

 UnityEngine::Quaternion __declspec(property(get=__get__headPseudoLocalRot, put=__set__headPseudoLocalRot))  _headPseudoLocalRot;

constexpr void __set__headPseudoLocalRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__headPseudoLocalRot() const;

 UnityEngine::Vector3 __declspec(property(get=__get__leftHandPseudoLocalPos, put=__set__leftHandPseudoLocalPos))  _leftHandPseudoLocalPos;

constexpr void __set__leftHandPseudoLocalPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__leftHandPseudoLocalPos() const;

 UnityEngine::Quaternion __declspec(property(get=__get__leftHandPseudoLocalRot, put=__set__leftHandPseudoLocalRot))  _leftHandPseudoLocalRot;

constexpr void __set__leftHandPseudoLocalRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__leftHandPseudoLocalRot() const;

 UnityEngine::Vector3 __declspec(property(get=__get__rightHandPseudoLocalPos, put=__set__rightHandPseudoLocalPos))  _rightHandPseudoLocalPos;

constexpr void __set__rightHandPseudoLocalPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__rightHandPseudoLocalPos() const;

 UnityEngine::Quaternion __declspec(property(get=__get__rightHandPseudoLocalRot, put=__set__rightHandPseudoLocalRot))  _rightHandPseudoLocalRot;

constexpr void __set__rightHandPseudoLocalRot(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get__rightHandPseudoLocalRot() const;

 UnityEngine::Transform __declspec(property(get=__get__originParentTransform, put=__set__originParentTransform))  _originParentTransform;

constexpr void __set__originParentTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__originParentTransform() const;

 bool __declspec(property(get=__get__useOriginParentTransformForPseudoLocalCalculations, put=__set__useOriginParentTransformForPseudoLocalCalculations))  _useOriginParentTransformForPseudoLocalCalculations;

constexpr void __set__useOriginParentTransformForPseudoLocalCalculations(bool value) ;

constexpr bool __get__useOriginParentTransformForPseudoLocalCalculations() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_headWorldPos))  headWorldPos;

 UnityEngine::Quaternion __declspec(property(get=get_headWorldRot))  headWorldRot;

 UnityEngine::Vector3 __declspec(property(get=get_headPseudoLocalPos))  headPseudoLocalPos;

 UnityEngine::Quaternion __declspec(property(get=get_headPseudoLocalRot))  headPseudoLocalRot;

 UnityEngine::Vector3 __declspec(property(get=get_leftHandPseudoLocalPos))  leftHandPseudoLocalPos;

 UnityEngine::Quaternion __declspec(property(get=get_leftHandPseudoLocalRot))  leftHandPseudoLocalRot;

 UnityEngine::Vector3 __declspec(property(get=get_rightHandPseudoLocalPos))  rightHandPseudoLocalPos;

 UnityEngine::Quaternion __declspec(property(get=get_rightHandPseudoLocalRot))  rightHandPseudoLocalRot;


// Methods

/// @brief Method get_headWorldPos addr 0x2108fa4 size 0xc virtual false final false
 UnityEngine::Vector3 get_headWorldPos() ;

/// @brief Method get_headWorldRot addr 0x2108fb0 size 0xc virtual false final false
 UnityEngine::Quaternion get_headWorldRot() ;

/// @brief Method get_headPseudoLocalPos addr 0x2108fbc size 0xc virtual false final false
 UnityEngine::Vector3 get_headPseudoLocalPos() ;

/// @brief Method get_headPseudoLocalRot addr 0x2108fc8 size 0xc virtual false final false
 UnityEngine::Quaternion get_headPseudoLocalRot() ;

/// @brief Method get_leftHandPseudoLocalPos addr 0x2108fd4 size 0xc virtual false final false
 UnityEngine::Vector3 get_leftHandPseudoLocalPos() ;

/// @brief Method get_leftHandPseudoLocalRot addr 0x2108fe0 size 0xc virtual false final false
 UnityEngine::Quaternion get_leftHandPseudoLocalRot() ;

/// @brief Method get_rightHandPseudoLocalPos addr 0x2108fec size 0xc virtual false final false
 UnityEngine::Vector3 get_rightHandPseudoLocalPos() ;

/// @brief Method get_rightHandPseudoLocalRot addr 0x2108ff8 size 0xc virtual false final false
 UnityEngine::Quaternion get_rightHandPseudoLocalRot() ;

/// @brief Method Awake addr 0x2109004 size 0x84 virtual false final false
 void Awake() ;

/// @brief Method OverrideHeadPos addr 0x2109088 size 0x1c virtual false final false
 void OverrideHeadPos(UnityEngine::Vector3 pos) ;

/// @brief Method Update addr 0x21090a4 size 0x1d8 virtual false final false
 void Update() ;

/// @brief Method MoveTowardsHead addr 0x210927c size 0x74 virtual false final false
 float_t MoveTowardsHead(float_t start, float_t end, UnityEngine::Quaternion noteInverseWorldRotation, float_t t) ;

/// @brief Method GetZPosOffsetByHeadPosAtTime addr 0x2109338 size 0x2c virtual false final false
 float_t GetZPosOffsetByHeadPosAtTime(float_t start, float_t end, float_t t) ;

/// @brief Method GetZPos addr 0x2109310 size 0x28 virtual false final false
 float_t GetZPos(float_t start, float_t end, float_t headOffsetZ, float_t t) ;

/// @brief Method HeadOffsetZ addr 0x21092f0 size 0x20 virtual false final false
 float_t HeadOffsetZ(UnityEngine::Quaternion noteInverseWorldRotation) ;

// Ctor Parameters []
explicit PlayerTransforms() ;

/// @brief Method .ctor addr 0x2109364 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerTransforms);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerTransforms, "", "PlayerTransforms");
