#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKMapping_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKMapping__BoneMap;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKMappingBone;
}
// Type: RootMotion.FinalIK::IKMappingBone
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12496))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12497))
// CS Name: RootMotion.FinalIK.IKMappingBone
class CORDL_TYPE IKMappingBone : public ::RootMotion::FinalIK::IKMapping {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~IKMappingBone() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKMappingBone", modifiers: " const&", def_value: None }]
constexpr IKMappingBone(IKMappingBone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKMappingBone", modifiers: "&&", def_value: None }]
constexpr IKMappingBone(IKMappingBone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKMappingBone(void* ptr) noexcept : ::RootMotion::FinalIK::IKMapping(ptr) {
}


  constexpr IKMappingBone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKMappingBone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKMappingBone& operator=(IKMappingBone&& o) noexcept = default;
  constexpr IKMappingBone& operator=(IKMappingBone const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_bone, put=__set_bone))  bone;

constexpr void __set_bone(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bone() const;

 float_t __declspec(property(get=__get_maintainRotationWeight, put=__set_maintainRotationWeight))  maintainRotationWeight;

constexpr void __set_maintainRotationWeight(float_t value) ;

constexpr float_t __get_maintainRotationWeight() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap __declspec(property(get=__get_boneMap, put=__set_boneMap))  boneMap;

constexpr void __set_boneMap(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap __get_boneMap() const;


// Methods

/// @brief Method IsValid addr 0x11d0e90 size 0x9c virtual true final false
 bool IsValid(::RootMotion::FinalIK::IKSolver solver, ByRef<::StringW> message) ;

// Ctor Parameters []
explicit IKMappingBone() ;

/// @brief Method .ctor addr 0x11d0f2c size 0x84 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bone", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit IKMappingBone(::UnityEngine::Transform bone) ;

/// @brief Method .ctor addr 0x11d0fb0 size 0x98 virtual false final false
 void _ctor(::UnityEngine::Transform bone) ;

/// @brief Method StoreDefaultLocalState addr 0x11d1048 size 0x18 virtual false final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11d1060 size 0x1c virtual false final false
 void FixTransforms() ;

/// @brief Method Initiate addr 0x11d107c size 0x8c virtual true final false
 void Initiate(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method ReadPose addr 0x11d1108 size 0x18 virtual false final false
 void ReadPose() ;

/// @brief Method WritePose addr 0x11d1120 size 0x24 virtual false final false
 void WritePose(float_t solverWeight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::FinalIK::IKMappingBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMappingBone, "RootMotion.FinalIK", "IKMappingBone");
