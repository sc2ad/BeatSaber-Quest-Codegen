#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__Grounder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace RootMotion::FinalIK {
class VRIK;
}
namespace RootMotion::FinalIK {
struct RootMotion__FinalIK__IKSolverVR__PositionOffset;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__Grounding__Leg;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class GrounderVRIK;
}
// Type: RootMotion.FinalIK::GrounderVRIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12467))
// CS Name: RootMotion.FinalIK.GrounderVRIK
class CORDL_TYPE GrounderVRIK : public RootMotion::FinalIK::Grounder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GrounderVRIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "GrounderVRIK", modifiers: " const&", def_value: None }]
constexpr GrounderVRIK(GrounderVRIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GrounderVRIK", modifiers: "&&", def_value: None }]
constexpr GrounderVRIK(GrounderVRIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GrounderVRIK(void* ptr) noexcept : RootMotion::FinalIK::Grounder(ptr) {
}


  constexpr GrounderVRIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GrounderVRIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GrounderVRIK& operator=(GrounderVRIK&& o) noexcept = default;
  constexpr GrounderVRIK& operator=(GrounderVRIK const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::VRIK __declspec(property(get=__get_ik, put=__set_ik))  ik;

constexpr void __set_ik(RootMotion::FinalIK::VRIK value) ;

constexpr RootMotion::FinalIK::VRIK __get_ik() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_feet, put=__set_feet))  feet;

constexpr void __set_feet(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_feet() const;


// Methods

/// @brief Method OpenTutorial addr 0x11c0f20 size 0x44 virtual false final false
 void OpenTutorial() ;

/// @brief Method OpenUserManual addr 0x11c0f64 size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c0fa8 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method ResetPosition addr 0x11c0fec size 0x18 virtual true final false
 void ResetPosition() ;

/// @brief Method IsReadyToInitiate addr 0x11c1004 size 0x88 virtual false final false
 bool IsReadyToInitiate() ;

/// @brief Method Update addr 0x11c108c size 0x54 virtual false final false
 void Update() ;

/// @brief Method Initiate addr 0x11c10e0 size 0x238 virtual false final false
 void Initiate() ;

/// @brief Method OnSolverUpdate addr 0x11c1318 size 0x1f4 virtual false final false
 void OnSolverUpdate() ;

/// @brief Method SetLegIK addr 0x11c150c size 0x84 virtual false final false
 void SetLegIK(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__PositionOffset positionOffset, UnityEngine::Transform bone, RootMotion::FinalIK::RootMotion__FinalIK__Grounding__Leg leg) ;

/// @brief Method OnPostSolverUpdate addr 0x11c1590 size 0x29c virtual false final false
 void OnPostSolverUpdate() ;

/// @brief Method OnDrawGizmosSelected addr 0x11c182c size 0x134 virtual false final false
 void OnDrawGizmosSelected() ;

/// @brief Method OnDestroy addr 0x11c1960 size 0x198 virtual false final false
 void OnDestroy() ;

static RootMotion::FinalIK::GrounderVRIK New_ctor() ;

/// @brief Method .ctor addr 0x11c1af8 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::GrounderVRIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderVRIK, "RootMotion.FinalIK", "GrounderVRIK");
