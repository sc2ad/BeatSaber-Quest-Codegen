#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/zzzz__SolverManager_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class Poser;
}
// Type: RootMotion.FinalIK::Poser
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12559))
// CS Name: RootMotion.FinalIK.Poser
class CORDL_TYPE Poser : public RootMotion::SolverManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Poser() = default;

// Ctor Parameters [CppParam { name: "", ty: "Poser", modifiers: " const&", def_value: None }]
constexpr Poser(Poser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Poser", modifiers: "&&", def_value: None }]
constexpr Poser(Poser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Poser(void* ptr) noexcept : RootMotion::SolverManager(ptr) {
}


  constexpr Poser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Poser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Poser& operator=(Poser&& o) noexcept = default;
  constexpr Poser& operator=(Poser const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get_poseRoot, put=__set_poseRoot))  poseRoot;

constexpr void __set_poseRoot(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_poseRoot() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 float_t __declspec(property(get=__get_localRotationWeight, put=__set_localRotationWeight))  localRotationWeight;

constexpr void __set_localRotationWeight(float_t value) ;

constexpr float_t __get_localRotationWeight() const;

 float_t __declspec(property(get=__get_localPositionWeight, put=__set_localPositionWeight))  localPositionWeight;

constexpr void __set_localPositionWeight(float_t value) ;

constexpr float_t __get_localPositionWeight() const;

 bool __declspec(property(get=__get_initiated, put=__set_initiated))  initiated;

constexpr void __set_initiated(bool value) ;

constexpr bool __get_initiated() const;


// Methods

/// @brief Method AutoMapping addr 0x0 size 0xffffffffffffffff virtual true final false
 void AutoMapping() ;

/// @brief Method UpdateManual addr 0x12011ec size 0xc virtual false final false
 void UpdateManual() ;

/// @brief Method InitiatePoser addr 0x0 size 0xffffffffffffffff virtual true final false
 void InitiatePoser() ;

/// @brief Method UpdatePoser addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdatePoser() ;

/// @brief Method FixPoserTransforms addr 0x0 size 0xffffffffffffffff virtual true final false
 void FixPoserTransforms() ;

/// @brief Method UpdateSolver addr 0x12011f8 size 0x44 virtual true final false
 void UpdateSolver() ;

/// @brief Method InitiateSolver addr 0x120123c size 0x2c virtual true final false
 void InitiateSolver() ;

/// @brief Method FixTransforms addr 0x1201268 size 0x18 virtual true final false
 void FixTransforms() ;

// Ctor Parameters []
explicit Poser() ;

/// @brief Method .ctor addr 0x1200b54 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::Poser);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Poser, "RootMotion.FinalIK", "Poser");
