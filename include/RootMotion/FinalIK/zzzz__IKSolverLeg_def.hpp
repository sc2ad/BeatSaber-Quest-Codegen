#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverVR__Leg;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__Point;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverLeg;
}
// Type: RootMotion.FinalIK::IKSolverLeg
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12517))
// CS Name: RootMotion.FinalIK.IKSolverLeg
class CORDL_TYPE IKSolverLeg : public RootMotion::FinalIK::IKSolver {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~IKSolverLeg() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverLeg", modifiers: " const&", def_value: None }]
constexpr IKSolverLeg(IKSolverLeg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverLeg", modifiers: "&&", def_value: None }]
constexpr IKSolverLeg(IKSolverLeg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverLeg(void* ptr) noexcept : RootMotion::FinalIK::IKSolver(ptr) {
}


  constexpr IKSolverLeg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverLeg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverLeg& operator=(IKSolverLeg&& o) noexcept = default;
  constexpr IKSolverLeg& operator=(IKSolverLeg const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_IKRotationWeight, put=__set_IKRotationWeight))  IKRotationWeight;

constexpr void __set_IKRotationWeight(float_t value) ;

constexpr float_t __get_IKRotationWeight() const;

 UnityEngine::Quaternion __declspec(property(get=__get_IKRotation, put=__set_IKRotation))  IKRotation;

constexpr void __set_IKRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_IKRotation() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_pelvis, put=__set_pelvis))  pelvis;

constexpr void __set_pelvis(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __get_pelvis() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_thigh, put=__set_thigh))  thigh;

constexpr void __set_thigh(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __get_thigh() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_calf, put=__set_calf))  calf;

constexpr void __set_calf(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __get_calf() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_foot, put=__set_foot))  foot;

constexpr void __set_foot(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __get_foot() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_toe, put=__set_toe))  toe;

constexpr void __set_toe(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __get_toe() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg __declspec(property(get=__get_leg, put=__set_leg))  leg;

constexpr void __set_leg(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Leg __get_leg() const;

 UnityEngine::Vector3 __declspec(property(get=__get_heelOffset, put=__set_heelOffset))  heelOffset;

constexpr void __set_heelOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_heelOffset() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_positions, put=__set_positions))  positions;

constexpr void __set_positions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_positions() const;

 ::ArrayW<UnityEngine::Quaternion> __declspec(property(get=__get_rotations, put=__set_rotations))  rotations;

constexpr void __set_rotations(::ArrayW<UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<UnityEngine::Quaternion> __get_rotations() const;


// Methods

/// @brief Method IsValid addr 0x11df628 size 0x35c virtual true final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method SetChain addr 0x11df984 size 0x64 virtual false final false
 bool SetChain(UnityEngine::Transform pelvis, UnityEngine::Transform thigh, UnityEngine::Transform calf, UnityEngine::Transform foot, UnityEngine::Transform toe, UnityEngine::Transform root) ;

/// @brief Method GetPoints addr 0x11df9e8 size 0x144 virtual true final false
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> GetPoints() ;

/// @brief Method GetPoint addr 0x11dfb2c size 0x160 virtual true final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point GetPoint(UnityEngine::Transform transform) ;

/// @brief Method StoreDefaultLocalState addr 0x11dfc8c size 0x50 virtual true final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11dfcdc size 0x60 virtual true final false
 void FixTransforms() ;

/// @brief Method OnInitiate addr 0x11dfd3c size 0x58 virtual true final false
 void OnInitiate() ;

/// @brief Method OnUpdate addr 0x11e0098 size 0x20 virtual true final false
 void OnUpdate() ;

/// @brief Method Solve addr 0x11e00b8 size 0x84 virtual false final false
 void Solve() ;

/// @brief Method Read addr 0x11dfd94 size 0x304 virtual false final false
 void Read() ;

/// @brief Method Write addr 0x11e013c size 0x178 virtual false final false
 void Write() ;

// Ctor Parameters []
explicit IKSolverLeg() ;

/// @brief Method .ctor addr 0x11e051c size 0x194 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKSolverLeg);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverLeg, "RootMotion.FinalIK", "IKSolverLeg");
