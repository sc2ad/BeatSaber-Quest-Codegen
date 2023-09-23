#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace RootMotion::FinalIK {
class IK;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderIK;
}
// Type: RootMotion.FinalIK::GrounderIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12464))
// CS Name: RootMotion.FinalIK.GrounderIK
class CORDL_TYPE GrounderIK : public RootMotion::FinalIK::Grounder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~GrounderIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "GrounderIK", modifiers: " const&", def_value: None }]
constexpr GrounderIK(GrounderIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GrounderIK", modifiers: "&&", def_value: None }]
constexpr GrounderIK(GrounderIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GrounderIK(void* ptr) noexcept : RootMotion::FinalIK::Grounder(ptr) {
}


  constexpr GrounderIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GrounderIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GrounderIK& operator=(GrounderIK&& o) noexcept = default;
  constexpr GrounderIK& operator=(GrounderIK const& o) noexcept = default;
                


// Fields

 ::ArrayW<RootMotion::FinalIK::IK> __declspec(property(get=__get_legs, put=__set_legs))  legs;

constexpr void __set_legs(::ArrayW<RootMotion::FinalIK::IK> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::IK> __get_legs() const;

 UnityEngine::Transform __declspec(property(get=__get_pelvis, put=__set_pelvis))  pelvis;

constexpr void __set_pelvis(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_pelvis() const;

 UnityEngine::Transform __declspec(property(get=__get_characterRoot, put=__set_characterRoot))  characterRoot;

constexpr void __set_characterRoot(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_characterRoot() const;

 float_t __declspec(property(get=__get_rootRotationWeight, put=__set_rootRotationWeight))  rootRotationWeight;

constexpr void __set_rootRotationWeight(float_t value) ;

constexpr float_t __get_rootRotationWeight() const;

 float_t __declspec(property(get=__get_rootRotationSpeed, put=__set_rootRotationSpeed))  rootRotationSpeed;

constexpr void __set_rootRotationSpeed(float_t value) ;

constexpr float_t __get_rootRotationSpeed() const;

 float_t __declspec(property(get=__get_maxRootRotationAngle, put=__set_maxRootRotationAngle))  maxRootRotationAngle;

constexpr void __set_maxRootRotationAngle(float_t value) ;

constexpr float_t __get_maxRootRotationAngle() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_feet, put=__set_feet))  feet;

constexpr void __set_feet(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_feet() const;

 ::ArrayW<UnityEngine::Quaternion> __declspec(property(get=__get_footRotations, put=__set_footRotations))  footRotations;

constexpr void __set_footRotations(::ArrayW<UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<UnityEngine::Quaternion> __get_footRotations() const;

 UnityEngine::Vector3 __declspec(property(get=__get_animatedPelvisLocalPosition, put=__set_animatedPelvisLocalPosition))  animatedPelvisLocalPosition;

constexpr void __set_animatedPelvisLocalPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_animatedPelvisLocalPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get_solvedPelvisLocalPosition, put=__set_solvedPelvisLocalPosition))  solvedPelvisLocalPosition;

constexpr void __set_solvedPelvisLocalPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_solvedPelvisLocalPosition() const;

 int32_t __declspec(property(get=__get_solvedFeet, put=__set_solvedFeet))  solvedFeet;

constexpr void __set_solvedFeet(int32_t value) ;

constexpr int32_t __get_solvedFeet() const;

 bool __declspec(property(get=__get_solved, put=__set_solved))  solved;

constexpr void __set_solved(bool value) ;

constexpr bool __get_solved() const;

 float_t __declspec(property(get=__get_lastWeight, put=__set_lastWeight))  lastWeight;

constexpr void __set_lastWeight(float_t value) ;

constexpr float_t __get_lastWeight() const;

 UnityEngine::Rigidbody __declspec(property(get=__get_characterRootRigidbody, put=__set_characterRootRigidbody))  characterRootRigidbody;

constexpr void __set_characterRootRigidbody(UnityEngine::Rigidbody value) ;

constexpr UnityEngine::Rigidbody __get_characterRootRigidbody() const;


// Methods

/// @brief Method OpenUserManual addr 0x11bd5b8 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11bd5fc size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method ResetPosition addr 0x11bd640 size 0x18 virtual true final false
 void ResetPosition() ;

/// @brief Method IsReadyToInitiate addr 0x11bd658 size 0x20c virtual false final false
 bool IsReadyToInitiate() ;

/// @brief Method OnDisable addr 0x11bd864 size 0xe0 virtual false final false
 void OnDisable() ;

/// @brief Method Update addr 0x11bd944 size 0x56c virtual false final false
 void Update() ;

/// @brief Method Initiate addr 0x11be028 size 0x460 virtual false final false
 void Initiate() ;

/// @brief Method OnSolverUpdate addr 0x11be488 size 0x1ac virtual false final false
 void OnSolverUpdate() ;

/// @brief Method SetLegIK addr 0x11be634 size 0x388 virtual false final false
 void SetLegIK(int32_t index) ;

/// @brief Method OnPostSolverUpdate addr 0x11be9bc size 0x1d8 virtual false final false
 void OnPostSolverUpdate() ;

/// @brief Method OnDestroy addr 0x11beb94 size 0x204 virtual false final false
 void OnDestroy() ;

// Ctor Parameters []
explicit GrounderIK() ;

/// @brief Method .ctor addr 0x11bed98 size 0x90 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::GrounderIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderIK, "RootMotion.FinalIK", "GrounderIK");
