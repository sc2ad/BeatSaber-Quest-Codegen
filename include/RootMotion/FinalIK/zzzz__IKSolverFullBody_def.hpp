#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace RootMotion::FinalIK {
class FBIKChain;
}
namespace RootMotion::FinalIK {
class IKMappingSpine;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__UpdateDelegate;
}
namespace RootMotion::FinalIK {
class IKMappingBone;
}
namespace RootMotion::FinalIK {
class IKMappingLimb;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__Node;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__Point;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__IterationDelegate;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
// Type: RootMotion.FinalIK::IKSolverFullBody
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12512))
// CS Name: RootMotion.FinalIK.IKSolverFullBody
class CORDL_TYPE IKSolverFullBody : public RootMotion::FinalIK::IKSolver {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~IKSolverFullBody() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverFullBody", modifiers: " const&", def_value: None }]
constexpr IKSolverFullBody(IKSolverFullBody const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverFullBody", modifiers: "&&", def_value: None }]
constexpr IKSolverFullBody(IKSolverFullBody&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverFullBody(void* ptr) noexcept : RootMotion::FinalIK::IKSolver(ptr) {
}


  constexpr IKSolverFullBody& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverFullBody& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverFullBody& operator=(IKSolverFullBody&& o) noexcept = default;
  constexpr IKSolverFullBody& operator=(IKSolverFullBody const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_iterations, put=__set_iterations))  iterations;

constexpr void __set_iterations(int32_t value) ;

constexpr int32_t __get_iterations() const;

 ::ArrayW<RootMotion::FinalIK::FBIKChain> __declspec(property(get=__get_chain, put=__set_chain))  chain;

constexpr void __set_chain(::ArrayW<RootMotion::FinalIK::FBIKChain> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::FBIKChain> __get_chain() const;

 ::ArrayW<RootMotion::FinalIK::IKEffector> __declspec(property(get=__get_effectors, put=__set_effectors))  effectors;

constexpr void __set_effectors(::ArrayW<RootMotion::FinalIK::IKEffector> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::IKEffector> __get_effectors() const;

 RootMotion::FinalIK::IKMappingSpine __declspec(property(get=__get_spineMapping, put=__set_spineMapping))  spineMapping;

constexpr void __set_spineMapping(RootMotion::FinalIK::IKMappingSpine value) ;

constexpr RootMotion::FinalIK::IKMappingSpine __get_spineMapping() const;

 ::ArrayW<RootMotion::FinalIK::IKMappingBone> __declspec(property(get=__get_boneMappings, put=__set_boneMappings))  boneMappings;

constexpr void __set_boneMappings(::ArrayW<RootMotion::FinalIK::IKMappingBone> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::IKMappingBone> __get_boneMappings() const;

 ::ArrayW<RootMotion::FinalIK::IKMappingLimb> __declspec(property(get=__get_limbMappings, put=__set_limbMappings))  limbMappings;

constexpr void __set_limbMappings(::ArrayW<RootMotion::FinalIK::IKMappingLimb> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::IKMappingLimb> __get_limbMappings() const;

 bool __declspec(property(get=__get_FABRIKPass, put=__set_FABRIKPass))  FABRIKPass;

constexpr void __set_FABRIKPass(bool value) ;

constexpr bool __get_FABRIKPass() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnPreRead, put=__set_OnPreRead))  OnPreRead;

constexpr void __set_OnPreRead(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnPreRead() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnPreSolve, put=__set_OnPreSolve))  OnPreSolve;

constexpr void __set_OnPreSolve(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnPreSolve() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate __declspec(property(get=__get_OnPreIteration, put=__set_OnPreIteration))  OnPreIteration;

constexpr void __set_OnPreIteration(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate __get_OnPreIteration() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate __declspec(property(get=__get_OnPostIteration, put=__set_OnPostIteration))  OnPostIteration;

constexpr void __set_OnPostIteration(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate __get_OnPostIteration() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnPreBend, put=__set_OnPreBend))  OnPreBend;

constexpr void __set_OnPreBend(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnPreBend() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnPostSolve, put=__set_OnPostSolve))  OnPostSolve;

constexpr void __set_OnPostSolve(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnPostSolve() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnStoreDefaultLocalState, put=__set_OnStoreDefaultLocalState))  OnStoreDefaultLocalState;

constexpr void __set_OnStoreDefaultLocalState(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnStoreDefaultLocalState() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __declspec(property(get=__get_OnFixTransforms, put=__set_OnFixTransforms))  OnFixTransforms;

constexpr void __set_OnFixTransforms(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__UpdateDelegate __get_OnFixTransforms() const;


// Methods

/// @brief Method GetEffector addr 0x11daeb4 size 0xdc virtual false final false
 RootMotion::FinalIK::IKEffector GetEffector(UnityEngine::Transform t) ;

/// @brief Method GetChain addr 0x11daf90 size 0x48 virtual false final false
 RootMotion::FinalIK::FBIKChain GetChain(UnityEngine::Transform transform) ;

/// @brief Method GetChainIndex addr 0x11dafd8 size 0x114 virtual false final false
 int32_t GetChainIndex(UnityEngine::Transform transform) ;

/// @brief Method GetNode addr 0x11cee64 size 0x50 virtual false final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Node GetNode(int32_t chainIndex, int32_t nodeIndex) ;

/// @brief Method GetChainAndNodeIndexes addr 0x11cecd8 size 0x74 virtual false final false
 void GetChainAndNodeIndexes(UnityEngine::Transform transform, ByRef<int32_t> chainIndex, ByRef<int32_t> nodeIndex) ;

/// @brief Method GetPoints addr 0x11db0ec size 0x198 virtual true final false
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> GetPoints() ;

/// @brief Method GetPoint addr 0x11db284 size 0x15c virtual true final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point GetPoint(UnityEngine::Transform transform) ;

/// @brief Method IsValid addr 0x11db3e0 size 0x1fc virtual true final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method StoreDefaultLocalState addr 0x11db5dc size 0xd0 virtual true final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11db6ac size 0xdc virtual true final false
 void FixTransforms() ;

/// @brief Method OnInitiate addr 0x11db788 size 0x15c virtual true final false
 void OnInitiate() ;

/// @brief Method OnUpdate addr 0x11db8e4 size 0x198 virtual true final false
 void OnUpdate() ;

/// @brief Method ReadPose addr 0x11dba7c size 0x22c virtual true final false
 void ReadPose() ;

/// @brief Method Solve addr 0x11dbca8 size 0x2d0 virtual true final false
 void Solve() ;

/// @brief Method ApplyBendConstraints addr 0x11dbf78 size 0x38 virtual true final false
 void ApplyBendConstraints() ;

/// @brief Method WritePose addr 0x11dbfb0 size 0xd8 virtual true final false
 void WritePose() ;

static RootMotion::FinalIK::IKSolverFullBody New_ctor() ;

/// @brief Method .ctor addr 0x11dc088 size 0x118 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKSolverFullBody);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverFullBody, "RootMotion.FinalIK", "IKSolverFullBody");
