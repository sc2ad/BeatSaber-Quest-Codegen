#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class IK;
}
namespace RootMotion::FinalIK {
class Grounding;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Rigidbody;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__Grounding__Leg;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderQuadruped;
}
namespace RootMotion::FinalIK {
struct ____RootMotion__FinalIK__GrounderQuadruped__Foot;
}
// Type: ::Foot
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12465))
// CS Name: RootMotion.FinalIK.GrounderQuadruped::Foot
struct CORDL_TYPE ____RootMotion__FinalIK__GrounderQuadruped__Foot : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "solver", ty: "::RootMotion::FinalIK::IKSolver", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "leg", ty: "::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg", modifiers: "", def_value: None }]
constexpr ____RootMotion__FinalIK__GrounderQuadruped__Foot(::RootMotion::FinalIK::IKSolver solver, ::UnityEngine::Transform transform, ::UnityEngine::Quaternion rotation, ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg leg) noexcept;


                    constexpr ____RootMotion__FinalIK__GrounderQuadruped__Foot(____RootMotion__FinalIK__GrounderQuadruped__Foot const&) = default;
                    constexpr ____RootMotion__FinalIK__GrounderQuadruped__Foot(____RootMotion__FinalIK__GrounderQuadruped__Foot&&) = default;
                    constexpr ____RootMotion__FinalIK__GrounderQuadruped__Foot& operator=(____RootMotion__FinalIK__GrounderQuadruped__Foot const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____RootMotion__FinalIK__GrounderQuadruped__Foot& operator=(____RootMotion__FinalIK__GrounderQuadruped__Foot&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__GrounderQuadruped__Foot(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::RootMotion::FinalIK::IKSolver __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(::RootMotion::FinalIK::IKSolver value) ;

constexpr ::RootMotion::FinalIK::IKSolver __get_solver() const;

 ::UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_transform() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_rotation() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg __declspec(property(get=__get_leg, put=__set_leg))  leg;

constexpr void __set_leg(::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__Grounding__Leg __get_leg() const;


// Methods

/// @brief Method .ctor addr 0x11bf8e4 size 0x34 virtual false final false
 void _ctor(::RootMotion::FinalIK::IKSolver solver, ::UnityEngine::Transform transform) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::GrounderQuadruped
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12466))
// CS Name: RootMotion.FinalIK.GrounderQuadruped
class CORDL_TYPE GrounderQuadruped : public ::RootMotion::FinalIK::Grounder {
public:
// Declarations
using Foot = ::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x140};

virtual ~GrounderQuadruped() = default;

// Ctor Parameters [CppParam { name: "", ty: "GrounderQuadruped", modifiers: " const&", def_value: None }]
constexpr GrounderQuadruped(GrounderQuadruped const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GrounderQuadruped", modifiers: "&&", def_value: None }]
constexpr GrounderQuadruped(GrounderQuadruped&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GrounderQuadruped(void* ptr) noexcept : ::RootMotion::FinalIK::Grounder(ptr) {
}


  constexpr GrounderQuadruped& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GrounderQuadruped& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GrounderQuadruped& operator=(GrounderQuadruped&& o) noexcept = default;
  constexpr GrounderQuadruped& operator=(GrounderQuadruped const& o) noexcept = default;
                


// Fields

 ::RootMotion::FinalIK::Grounding __declspec(property(get=__get_forelegSolver, put=__set_forelegSolver))  forelegSolver;

constexpr void __set_forelegSolver(::RootMotion::FinalIK::Grounding value) ;

constexpr ::RootMotion::FinalIK::Grounding __get_forelegSolver() const;

 float_t __declspec(property(get=__get_rootRotationWeight, put=__set_rootRotationWeight))  rootRotationWeight;

constexpr void __set_rootRotationWeight(float_t value) ;

constexpr float_t __get_rootRotationWeight() const;

 float_t __declspec(property(get=__get_minRootRotation, put=__set_minRootRotation))  minRootRotation;

constexpr void __set_minRootRotation(float_t value) ;

constexpr float_t __get_minRootRotation() const;

 float_t __declspec(property(get=__get_maxRootRotation, put=__set_maxRootRotation))  maxRootRotation;

constexpr void __set_maxRootRotation(float_t value) ;

constexpr float_t __get_maxRootRotation() const;

 float_t __declspec(property(get=__get_rootRotationSpeed, put=__set_rootRotationSpeed))  rootRotationSpeed;

constexpr void __set_rootRotationSpeed(float_t value) ;

constexpr float_t __get_rootRotationSpeed() const;

 float_t __declspec(property(get=__get_maxLegOffset, put=__set_maxLegOffset))  maxLegOffset;

constexpr void __set_maxLegOffset(float_t value) ;

constexpr float_t __get_maxLegOffset() const;

 float_t __declspec(property(get=__get_maxForeLegOffset, put=__set_maxForeLegOffset))  maxForeLegOffset;

constexpr void __set_maxForeLegOffset(float_t value) ;

constexpr float_t __get_maxForeLegOffset() const;

 float_t __declspec(property(get=__get_maintainHeadRotationWeight, put=__set_maintainHeadRotationWeight))  maintainHeadRotationWeight;

constexpr void __set_maintainHeadRotationWeight(float_t value) ;

constexpr float_t __get_maintainHeadRotationWeight() const;

 ::UnityEngine::Transform __declspec(property(get=__get_characterRoot, put=__set_characterRoot))  characterRoot;

constexpr void __set_characterRoot(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_characterRoot() const;

 ::UnityEngine::Transform __declspec(property(get=__get_pelvis, put=__set_pelvis))  pelvis;

constexpr void __set_pelvis(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_pelvis() const;

 ::UnityEngine::Transform __declspec(property(get=__get_lastSpineBone, put=__set_lastSpineBone))  lastSpineBone;

constexpr void __set_lastSpineBone(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_lastSpineBone() const;

 ::UnityEngine::Transform __declspec(property(get=__get_head, put=__set_head))  head;

constexpr void __set_head(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_head() const;

 ::ArrayW<::RootMotion::FinalIK::IK> __declspec(property(get=__get_legs, put=__set_legs))  legs;

constexpr void __set_legs(::ArrayW<::RootMotion::FinalIK::IK> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::IK> __get_legs() const;

 ::ArrayW<::RootMotion::FinalIK::IK> __declspec(property(get=__get_forelegs, put=__set_forelegs))  forelegs;

constexpr void __set_forelegs(::ArrayW<::RootMotion::FinalIK::IK> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::IK> __get_forelegs() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_gravity, put=__set_gravity))  gravity;

constexpr void __set_gravity(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_gravity() const;

 ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot> __declspec(property(get=__get_feet, put=__set_feet))  feet;

constexpr void __set_feet(::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot> value) ;

constexpr ::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot> __get_feet() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_animatedPelvisLocalPosition, put=__set_animatedPelvisLocalPosition))  animatedPelvisLocalPosition;

constexpr void __set_animatedPelvisLocalPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_animatedPelvisLocalPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_animatedPelvisLocalRotation, put=__set_animatedPelvisLocalRotation))  animatedPelvisLocalRotation;

constexpr void __set_animatedPelvisLocalRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_animatedPelvisLocalRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_animatedHeadLocalRotation, put=__set_animatedHeadLocalRotation))  animatedHeadLocalRotation;

constexpr void __set_animatedHeadLocalRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_animatedHeadLocalRotation() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_solvedPelvisLocalPosition, put=__set_solvedPelvisLocalPosition))  solvedPelvisLocalPosition;

constexpr void __set_solvedPelvisLocalPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_solvedPelvisLocalPosition() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_solvedPelvisLocalRotation, put=__set_solvedPelvisLocalRotation))  solvedPelvisLocalRotation;

constexpr void __set_solvedPelvisLocalRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_solvedPelvisLocalRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_solvedHeadLocalRotation, put=__set_solvedHeadLocalRotation))  solvedHeadLocalRotation;

constexpr void __set_solvedHeadLocalRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_solvedHeadLocalRotation() const;

 int32_t __declspec(property(get=__get_solvedFeet, put=__set_solvedFeet))  solvedFeet;

constexpr void __set_solvedFeet(int32_t value) ;

constexpr int32_t __get_solvedFeet() const;

 bool __declspec(property(get=__get_solved, put=__set_solved))  solved;

constexpr void __set_solved(bool value) ;

constexpr bool __get_solved() const;

 float_t __declspec(property(get=__get_angle, put=__set_angle))  angle;

constexpr void __set_angle(float_t value) ;

constexpr float_t __get_angle() const;

 ::UnityEngine::Transform __declspec(property(get=__get_forefeetRoot, put=__set_forefeetRoot))  forefeetRoot;

constexpr void __set_forefeetRoot(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_forefeetRoot() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_headRotation, put=__set_headRotation))  headRotation;

constexpr void __set_headRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_headRotation() const;

 float_t __declspec(property(get=__get_lastWeight, put=__set_lastWeight))  lastWeight;

constexpr void __set_lastWeight(float_t value) ;

constexpr float_t __get_lastWeight() const;

 ::UnityEngine::Rigidbody __declspec(property(get=__get_characterRootRigidbody, put=__set_characterRootRigidbody))  characterRootRigidbody;

constexpr void __set_characterRootRigidbody(::UnityEngine::Rigidbody value) ;

constexpr ::UnityEngine::Rigidbody __get_characterRootRigidbody() const;


// Methods

/// @brief Method OpenUserManual addr 0x11bee28 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11bee6c size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method ResetPosition addr 0x11beeb0 size 0x28 virtual true final false
 void ResetPosition() ;

/// @brief Method IsReadyToInitiate addr 0x11beed8 size 0x104 virtual false final false
 bool IsReadyToInitiate() ;

/// @brief Method IsReadyToInitiateLegs addr 0x11befdc size 0x1e4 virtual false final false
 bool IsReadyToInitiateLegs(::ArrayW<::RootMotion::FinalIK::IK> ikComponents) ;

/// @brief Method OnDisable addr 0x11bf1c0 size 0x64 virtual false final false
 void OnDisable() ;

/// @brief Method Update addr 0x11bf224 size 0x58 virtual false final false
 void Update() ;

/// @brief Method Initiate addr 0x11bf27c size 0x314 virtual false final false
 void Initiate() ;

/// @brief Method InitiateFeet addr 0x11bf590 size 0x354 virtual false final false
 ::ArrayW<::UnityEngine::Transform> InitiateFeet(::ArrayW<::RootMotion::FinalIK::IK> ikComponents, ByRef<::ArrayW<::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot>> f, int32_t indexOffset) ;

/// @brief Method LateUpdate addr 0x11bf918 size 0x90 virtual false final false
 void LateUpdate() ;

/// @brief Method RootRotation addr 0x11bf9a8 size 0x450 virtual false final false
 void RootRotation() ;

/// @brief Method OnSolverUpdate addr 0x11bfdf8 size 0x6c0 virtual false final false
 void OnSolverUpdate() ;

/// @brief Method UpdateForefeetRoot addr 0x11c04b8 size 0x2b8 virtual false final false
 void UpdateForefeetRoot() ;

/// @brief Method SetFootIK addr 0x11c0770 size 0x134 virtual false final false
 void SetFootIK(::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot foot, float_t maxOffset) ;

/// @brief Method OnPostSolverUpdate addr 0x11c08a4 size 0x2c8 virtual false final false
 void OnPostSolverUpdate() ;

/// @brief Method OnDestroy addr 0x11c0b6c size 0x30 virtual false final false
 void OnDestroy() ;

/// @brief Method DestroyLegs addr 0x11c0b9c size 0x1fc virtual false final false
 void DestroyLegs(::ArrayW<::RootMotion::FinalIK::IK> ikComponents) ;

// Ctor Parameters []
explicit GrounderQuadruped() ;

/// @brief Method .ctor addr 0x11c0d98 size 0x134 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::GrounderQuadruped);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::GrounderQuadruped, "RootMotion.FinalIK", "GrounderQuadruped");
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__GrounderQuadruped__Foot, "RootMotion.FinalIK", "GrounderQuadruped/Foot");
