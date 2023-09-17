#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverFullBody_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace RootMotion {
class BipedReferences;
}
namespace RootMotion::FinalIK {
class IKConstraintBend;
}
namespace RootMotion::FinalIK {
class IKMappingLimb;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
class IKMappingSpine;
}
namespace RootMotion {
class BipedLimbOrientations;
}
namespace RootMotion {
class ____RootMotion__BipedLimbOrientations__LimbOrientation;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class IKMappingBone;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedChain;
}
namespace RootMotion::FinalIK {
class FBIKChain;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
// Type: RootMotion.FinalIK::IKSolverFullBodyBiped
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12512))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12515))
// CS Name: RootMotion.FinalIK.IKSolverFullBodyBiped
class CORDL_TYPE IKSolverFullBodyBiped : public ::RootMotion::FinalIK::IKSolverFullBody {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~IKSolverFullBodyBiped() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverFullBodyBiped", modifiers: " const&", def_value: None }]
constexpr IKSolverFullBodyBiped(IKSolverFullBodyBiped const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverFullBodyBiped", modifiers: "&&", def_value: None }]
constexpr IKSolverFullBodyBiped(IKSolverFullBodyBiped&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverFullBodyBiped(void* ptr) noexcept : ::RootMotion::FinalIK::IKSolverFullBody(ptr) {
}


  constexpr IKSolverFullBodyBiped& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverFullBodyBiped& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverFullBodyBiped& operator=(IKSolverFullBodyBiped&& o) noexcept = default;
  constexpr IKSolverFullBodyBiped& operator=(IKSolverFullBodyBiped const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_rootNode, put=__set_rootNode))  rootNode;

constexpr void __set_rootNode(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_rootNode() const;

 float_t __declspec(property(get=__get_spineStiffness, put=__set_spineStiffness))  spineStiffness;

constexpr void __set_spineStiffness(float_t value) ;

constexpr float_t __get_spineStiffness() const;

 float_t __declspec(property(get=__get_pullBodyVertical, put=__set_pullBodyVertical))  pullBodyVertical;

constexpr void __set_pullBodyVertical(float_t value) ;

constexpr float_t __get_pullBodyVertical() const;

 float_t __declspec(property(get=__get_pullBodyHorizontal, put=__set_pullBodyHorizontal))  pullBodyHorizontal;

constexpr void __set_pullBodyHorizontal(float_t value) ;

constexpr float_t __get_pullBodyHorizontal() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__pullBodyOffset_k__BackingField, put=__set__pullBodyOffset_k__BackingField))  _pullBodyOffset_k__BackingField;

constexpr void __set__pullBodyOffset_k__BackingField(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__pullBodyOffset_k__BackingField() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_offset() const;


// Properties

 ::RootMotion::FinalIK::IKEffector __declspec(property(get=get_bodyEffector))  bodyEffector;

 ::RootMotion::FinalIK::IKEffector __declspec(property(get=get_leftShoulderEffector))  leftShoulderEffector;

 ::RootMotion::FinalIK::IKEffector __declspec(property(get=get_rightShoulderEffector))  rightShoulderEffector;

 ::RootMotion::FinalIK::IKEffector __declspec(property(get=get_leftThighEffector))  leftThighEffector;

 ::RootMotion::FinalIK::IKEffector __declspec(property(get=get_rightThighEffector))  rightThighEffector;

 ::RootMotion::FinalIK::IKEffector __declspec(property(get=get_leftHandEffector))  leftHandEffector;

 ::RootMotion::FinalIK::IKEffector __declspec(property(get=get_rightHandEffector))  rightHandEffector;

 ::RootMotion::FinalIK::IKEffector __declspec(property(get=get_leftFootEffector))  leftFootEffector;

 ::RootMotion::FinalIK::IKEffector __declspec(property(get=get_rightFootEffector))  rightFootEffector;

 ::RootMotion::FinalIK::FBIKChain __declspec(property(get=get_leftArmChain))  leftArmChain;

 ::RootMotion::FinalIK::FBIKChain __declspec(property(get=get_rightArmChain))  rightArmChain;

 ::RootMotion::FinalIK::FBIKChain __declspec(property(get=get_leftLegChain))  leftLegChain;

 ::RootMotion::FinalIK::FBIKChain __declspec(property(get=get_rightLegChain))  rightLegChain;

 ::RootMotion::FinalIK::IKMappingLimb __declspec(property(get=get_leftArmMapping))  leftArmMapping;

 ::RootMotion::FinalIK::IKMappingLimb __declspec(property(get=get_rightArmMapping))  rightArmMapping;

 ::RootMotion::FinalIK::IKMappingLimb __declspec(property(get=get_leftLegMapping))  leftLegMapping;

 ::RootMotion::FinalIK::IKMappingLimb __declspec(property(get=get_rightLegMapping))  rightLegMapping;

 ::RootMotion::FinalIK::IKMappingBone __declspec(property(get=get_headMapping))  headMapping;

 ::UnityEngine::Vector3 __declspec(property(get=get_pullBodyOffset, put=set_pullBodyOffset))  pullBodyOffset;


// Methods

/// @brief Method get_bodyEffector addr 0x11dc1a0 size 0x8 virtual false final false
 ::RootMotion::FinalIK::IKEffector get_bodyEffector() ;

/// @brief Method get_leftShoulderEffector addr 0x11dc2e0 size 0x8 virtual false final false
 ::RootMotion::FinalIK::IKEffector get_leftShoulderEffector() ;

/// @brief Method get_rightShoulderEffector addr 0x11dc2e8 size 0x8 virtual false final false
 ::RootMotion::FinalIK::IKEffector get_rightShoulderEffector() ;

/// @brief Method get_leftThighEffector addr 0x11dc2f0 size 0x8 virtual false final false
 ::RootMotion::FinalIK::IKEffector get_leftThighEffector() ;

/// @brief Method get_rightThighEffector addr 0x11dc2f8 size 0x8 virtual false final false
 ::RootMotion::FinalIK::IKEffector get_rightThighEffector() ;

/// @brief Method get_leftHandEffector addr 0x11dc300 size 0x8 virtual false final false
 ::RootMotion::FinalIK::IKEffector get_leftHandEffector() ;

/// @brief Method get_rightHandEffector addr 0x11dc308 size 0x8 virtual false final false
 ::RootMotion::FinalIK::IKEffector get_rightHandEffector() ;

/// @brief Method get_leftFootEffector addr 0x11dc310 size 0x8 virtual false final false
 ::RootMotion::FinalIK::IKEffector get_leftFootEffector() ;

/// @brief Method get_rightFootEffector addr 0x11dc318 size 0x8 virtual false final false
 ::RootMotion::FinalIK::IKEffector get_rightFootEffector() ;

/// @brief Method get_leftArmChain addr 0x11dc320 size 0x2c virtual false final false
 ::RootMotion::FinalIK::FBIKChain get_leftArmChain() ;

/// @brief Method get_rightArmChain addr 0x11dc34c size 0x2c virtual false final false
 ::RootMotion::FinalIK::FBIKChain get_rightArmChain() ;

/// @brief Method get_leftLegChain addr 0x11dc378 size 0x2c virtual false final false
 ::RootMotion::FinalIK::FBIKChain get_leftLegChain() ;

/// @brief Method get_rightLegChain addr 0x11dc3a4 size 0x2c virtual false final false
 ::RootMotion::FinalIK::FBIKChain get_rightLegChain() ;

/// @brief Method get_leftArmMapping addr 0x11dc3d0 size 0x28 virtual false final false
 ::RootMotion::FinalIK::IKMappingLimb get_leftArmMapping() ;

/// @brief Method get_rightArmMapping addr 0x11dc3f8 size 0x2c virtual false final false
 ::RootMotion::FinalIK::IKMappingLimb get_rightArmMapping() ;

/// @brief Method get_leftLegMapping addr 0x11dc424 size 0x2c virtual false final false
 ::RootMotion::FinalIK::IKMappingLimb get_leftLegMapping() ;

/// @brief Method get_rightLegMapping addr 0x11dc450 size 0x2c virtual false final false
 ::RootMotion::FinalIK::IKMappingLimb get_rightLegMapping() ;

/// @brief Method get_headMapping addr 0x11dc47c size 0x28 virtual false final false
 ::RootMotion::FinalIK::IKMappingBone get_headMapping() ;

/// @brief Method SetChainWeights addr 0x11dc4a4 size 0x50 virtual false final false
 void SetChainWeights(::RootMotion::FinalIK::FullBodyBipedChain c, float_t pull, float_t reach) ;

/// @brief Method SetEffectorWeights addr 0x11dc5a4 size 0x78 virtual false final false
 void SetEffectorWeights(::RootMotion::FinalIK::FullBodyBipedEffector effector, float_t positionWeight, float_t rotationWeight) ;

/// @brief Method GetChain addr 0x11dc4f4 size 0xb0 virtual false final false
 ::RootMotion::FinalIK::FBIKChain GetChain(::RootMotion::FinalIK::FullBodyBipedChain c) ;

/// @brief Method GetChain addr 0x11dc61c size 0xc8 virtual false final false
 ::RootMotion::FinalIK::FBIKChain GetChain(::RootMotion::FinalIK::FullBodyBipedEffector effector) ;

/// @brief Method GetEffector addr 0x11dc1a8 size 0x138 virtual false final false
 ::RootMotion::FinalIK::IKEffector GetEffector(::RootMotion::FinalIK::FullBodyBipedEffector effector) ;

/// @brief Method GetEndEffector addr 0x11dc6e4 size 0xb0 virtual false final false
 ::RootMotion::FinalIK::IKEffector GetEndEffector(::RootMotion::FinalIK::FullBodyBipedChain c) ;

/// @brief Method GetLimbMapping addr 0x11dc794 size 0xac virtual false final false
 ::RootMotion::FinalIK::IKMappingLimb GetLimbMapping(::RootMotion::FinalIK::FullBodyBipedChain chain) ;

/// @brief Method GetLimbMapping addr 0x11dc840 size 0xac virtual false final false
 ::RootMotion::FinalIK::IKMappingLimb GetLimbMapping(::RootMotion::FinalIK::FullBodyBipedEffector effector) ;

/// @brief Method GetSpineMapping addr 0x11dc8ec size 0x8 virtual false final false
 ::RootMotion::FinalIK::IKMappingSpine GetSpineMapping() ;

/// @brief Method GetHeadMapping addr 0x11dc8f4 size 0x28 virtual false final false
 ::RootMotion::FinalIK::IKMappingBone GetHeadMapping() ;

/// @brief Method GetBendConstraint addr 0x11dc91c size 0xc0 virtual false final false
 ::RootMotion::FinalIK::IKConstraintBend GetBendConstraint(::RootMotion::FinalIK::FullBodyBipedChain limb) ;

/// @brief Method IsValid addr 0x11dc9dc size 0x190 virtual true final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method SetToReferences addr 0x11dcb6c size 0xf80 virtual false final false
 void SetToReferences(::RootMotion::BipedReferences references, ::UnityEngine::Transform rootNode) ;

/// @brief Method DetectRootNodeBone addr 0x11ddaec size 0x450 virtual false final false
static ::UnityEngine::Transform DetectRootNodeBone(::RootMotion::BipedReferences references) ;

/// @brief Method SetLimbOrientations addr 0x11de09c size 0x5c virtual false final false
 void SetLimbOrientations(::RootMotion::BipedLimbOrientations o) ;

/// @brief Method get_pullBodyOffset addr 0x11de1f0 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_pullBodyOffset() ;

/// @brief Method set_pullBodyOffset addr 0x11de1fc size 0xc virtual false final false
 void set_pullBodyOffset(::UnityEngine::Vector3 value) ;

/// @brief Method SetLimbOrientation addr 0x11de0f8 size 0xf8 virtual false final false
 void SetLimbOrientation(::RootMotion::FinalIK::FullBodyBipedChain chain, ::RootMotion::____RootMotion__BipedLimbOrientations__LimbOrientation limbOrientation) ;

/// @brief Method GetLeftClavicle addr 0x11ddf3c size 0xb0 virtual false final false
static ::UnityEngine::Transform GetLeftClavicle(::RootMotion::BipedReferences references) ;

/// @brief Method GetRightClavicle addr 0x11ddfec size 0xb0 virtual false final false
static ::UnityEngine::Transform GetRightClavicle(::RootMotion::BipedReferences references) ;

/// @brief Method Contains addr 0x11de208 size 0xc4 virtual false final false
static bool Contains(::ArrayW<::UnityEngine::Transform> array, ::UnityEngine::Transform transform) ;

/// @brief Method ReadPose addr 0x11de2cc size 0xcc virtual true final false
 void ReadPose() ;

/// @brief Method PullBody addr 0x11de398 size 0x11c virtual false final false
 void PullBody() ;

/// @brief Method GetBodyOffset addr 0x11de4b4 size 0x190 virtual false final false
 ::UnityEngine::Vector3 GetBodyOffset() ;

/// @brief Method GetHandBodyPull addr 0x11de644 size 0x178 virtual false final false
 ::UnityEngine::Vector3 GetHandBodyPull(::RootMotion::FinalIK::IKEffector effector, ::RootMotion::FinalIK::FBIKChain arm, ::UnityEngine::Vector3 offset) ;

/// @brief Method ApplyBendConstraints addr 0x11de7bc size 0x25c virtual true final false
 void ApplyBendConstraints() ;

/// @brief Method WritePose addr 0x11dea18 size 0x78 virtual true final false
 void WritePose() ;

// Ctor Parameters []
explicit IKSolverFullBodyBiped() ;

/// @brief Method .ctor addr 0x11dea90 size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverFullBodyBiped);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverFullBodyBiped, "RootMotion.FinalIK", "IKSolverFullBodyBiped");
