#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__Point;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class FABRIKChain;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverFABRIKRoot;
}
// Type: RootMotion.FinalIK::IKSolverFABRIKRoot
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12511))
// CS Name: RootMotion.FinalIK.IKSolverFABRIKRoot
class CORDL_TYPE IKSolverFABRIKRoot : public RootMotion::FinalIK::IKSolver {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~IKSolverFABRIKRoot() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverFABRIKRoot", modifiers: " const&", def_value: None }]
constexpr IKSolverFABRIKRoot(IKSolverFABRIKRoot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverFABRIKRoot", modifiers: "&&", def_value: None }]
constexpr IKSolverFABRIKRoot(IKSolverFABRIKRoot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverFABRIKRoot(void* ptr) noexcept : RootMotion::FinalIK::IKSolver(ptr) {
}


  constexpr IKSolverFABRIKRoot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverFABRIKRoot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverFABRIKRoot& operator=(IKSolverFABRIKRoot&& o) noexcept = default;
  constexpr IKSolverFABRIKRoot& operator=(IKSolverFABRIKRoot const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_iterations, put=__set_iterations))  iterations;

constexpr void __set_iterations(int32_t value) ;

constexpr int32_t __get_iterations() const;

 float_t __declspec(property(get=__get_rootPin, put=__set_rootPin))  rootPin;

constexpr void __set_rootPin(float_t value) ;

constexpr float_t __get_rootPin() const;

 ::ArrayW<RootMotion::FinalIK::FABRIKChain> __declspec(property(get=__get_chains, put=__set_chains))  chains;

constexpr void __set_chains(::ArrayW<RootMotion::FinalIK::FABRIKChain> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::FABRIKChain> __get_chains() const;

 bool __declspec(property(get=__get_zeroWeightApplied, put=__set_zeroWeightApplied))  zeroWeightApplied;

constexpr void __set_zeroWeightApplied(bool value) ;

constexpr bool __get_zeroWeightApplied() const;

 ::ArrayW<bool> __declspec(property(get=__get_isRoot, put=__set_isRoot))  isRoot;

constexpr void __set_isRoot(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_isRoot() const;

 UnityEngine::Vector3 __declspec(property(get=__get_rootDefaultPosition, put=__set_rootDefaultPosition))  rootDefaultPosition;

constexpr void __set_rootDefaultPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_rootDefaultPosition() const;


// Methods

/// @brief Method IsValid addr 0x11d9efc size 0x654 virtual true final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method StoreDefaultLocalState addr 0x11da550 size 0x8c virtual true final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11da5dc size 0x94 virtual true final false
 void FixTransforms() ;

/// @brief Method OnInitiate addr 0x11da670 size 0xe8 virtual true final false
 void OnInitiate() ;

/// @brief Method IsRoot addr 0x11da758 size 0x90 virtual false final false
 bool IsRoot(int32_t index) ;

/// @brief Method OnUpdate addr 0x11da7e8 size 0x1d8 virtual true final false
 void OnUpdate() ;

/// @brief Method GetPoints addr 0x11dabe8 size 0xa0 virtual true final false
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> GetPoints() ;

/// @brief Method GetPoint addr 0x11dadc0 size 0x84 virtual true final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point GetPoint(UnityEngine::Transform transform) ;

/// @brief Method AddPointsToArray addr 0x11dac88 size 0x138 virtual false final false
 void AddPointsToArray(ByRef<::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point>> array, RootMotion::FinalIK::FABRIKChain chain) ;

/// @brief Method GetCentroid addr 0x11da9c0 size 0x228 virtual false final false
 UnityEngine::Vector3 GetCentroid() ;

static RootMotion::FinalIK::IKSolverFABRIKRoot New_ctor() ;

/// @brief Method .ctor addr 0x11dae44 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKSolverFABRIKRoot);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverFABRIKRoot, "RootMotion.FinalIK", "IKSolverFABRIKRoot");
