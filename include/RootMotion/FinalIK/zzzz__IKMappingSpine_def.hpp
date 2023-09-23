#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKMapping_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKMapping__BoneMap;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKMappingSpine;
}
// Type: RootMotion.FinalIK::IKMappingSpine
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12496))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12500))
// CS Name: RootMotion.FinalIK.IKMappingSpine
class CORDL_TYPE IKMappingSpine : public RootMotion::FinalIK::IKMapping {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~IKMappingSpine() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKMappingSpine", modifiers: " const&", def_value: None }]
constexpr IKMappingSpine(IKMappingSpine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKMappingSpine", modifiers: "&&", def_value: None }]
constexpr IKMappingSpine(IKMappingSpine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKMappingSpine(void* ptr) noexcept : RootMotion::FinalIK::IKMapping(ptr) {
}


  constexpr IKMappingSpine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKMappingSpine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKMappingSpine& operator=(IKMappingSpine&& o) noexcept = default;
  constexpr IKMappingSpine& operator=(IKMappingSpine const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get_spineBones, put=__set_spineBones))  spineBones;

constexpr void __set_spineBones(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get_spineBones() const;

 UnityEngine::Transform __declspec(property(get=__get_leftUpperArmBone, put=__set_leftUpperArmBone))  leftUpperArmBone;

constexpr void __set_leftUpperArmBone(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_leftUpperArmBone() const;

 UnityEngine::Transform __declspec(property(get=__get_rightUpperArmBone, put=__set_rightUpperArmBone))  rightUpperArmBone;

constexpr void __set_rightUpperArmBone(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rightUpperArmBone() const;

 UnityEngine::Transform __declspec(property(get=__get_leftThighBone, put=__set_leftThighBone))  leftThighBone;

constexpr void __set_leftThighBone(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_leftThighBone() const;

 UnityEngine::Transform __declspec(property(get=__get_rightThighBone, put=__set_rightThighBone))  rightThighBone;

constexpr void __set_rightThighBone(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_rightThighBone() const;

 int32_t __declspec(property(get=__get_iterations, put=__set_iterations))  iterations;

constexpr void __set_iterations(int32_t value) ;

constexpr int32_t __get_iterations() const;

 float_t __declspec(property(get=__get_twistWeight, put=__set_twistWeight))  twistWeight;

constexpr void __set_twistWeight(float_t value) ;

constexpr float_t __get_twistWeight() const;

 int32_t __declspec(property(get=__get_rootNodeIndex, put=__set_rootNodeIndex))  rootNodeIndex;

constexpr void __set_rootNodeIndex(int32_t value) ;

constexpr int32_t __get_rootNodeIndex() const;

 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap> __declspec(property(get=__get_spine, put=__set_spine))  spine;

constexpr void __set_spine(::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap> value) ;

constexpr ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap> __get_spine() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap __declspec(property(get=__get_leftUpperArm, put=__set_leftUpperArm))  leftUpperArm;

constexpr void __set_leftUpperArm(RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap __get_leftUpperArm() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap __declspec(property(get=__get_rightUpperArm, put=__set_rightUpperArm))  rightUpperArm;

constexpr void __set_rightUpperArm(RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap __get_rightUpperArm() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap __declspec(property(get=__get_leftThigh, put=__set_leftThigh))  leftThigh;

constexpr void __set_leftThigh(RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap __get_leftThigh() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap __declspec(property(get=__get_rightThigh, put=__set_rightThigh))  rightThigh;

constexpr void __set_rightThigh(RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKMapping__BoneMap __get_rightThigh() const;

 bool __declspec(property(get=__get_useFABRIK, put=__set_useFABRIK))  useFABRIK;

constexpr void __set_useFABRIK(bool value) ;

constexpr bool __get_useFABRIK() const;


// Methods

/// @brief Method IsValid addr 0x11d1ce8 size 0x320 virtual true final false
 bool IsValid(RootMotion::FinalIK::IKSolver solver, ByRef<::StringW> message) ;

// Ctor Parameters []
explicit IKMappingSpine() ;

/// @brief Method .ctor addr 0x11d2008 size 0x13c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "spineBones", ty: "::ArrayW<UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "leftUpperArmBone", ty: "UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "rightUpperArmBone", ty: "UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "leftThighBone", ty: "UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "rightThighBone", ty: "UnityEngine::Transform", modifiers: "", def_value: None }]
explicit IKMappingSpine(::ArrayW<UnityEngine::Transform> spineBones, UnityEngine::Transform leftUpperArmBone, UnityEngine::Transform rightUpperArmBone, UnityEngine::Transform leftThighBone, UnityEngine::Transform rightThighBone) ;

/// @brief Method .ctor addr 0x11d2144 size 0x170 virtual false final false
 void _ctor(::ArrayW<UnityEngine::Transform> spineBones, UnityEngine::Transform leftUpperArmBone, UnityEngine::Transform rightUpperArmBone, UnityEngine::Transform leftThighBone, UnityEngine::Transform rightThighBone) ;

/// @brief Method SetBones addr 0x11d22b4 size 0x10 virtual false final false
 void SetBones(::ArrayW<UnityEngine::Transform> spineBones, UnityEngine::Transform leftUpperArmBone, UnityEngine::Transform rightUpperArmBone, UnityEngine::Transform leftThighBone, UnityEngine::Transform rightThighBone) ;

/// @brief Method StoreDefaultLocalState addr 0x11d22c4 size 0x5c virtual false final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11d2320 size 0x78 virtual false final false
 void FixTransforms() ;

/// @brief Method Initiate addr 0x11d2398 size 0x614 virtual true final false
 void Initiate(RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method UseFABRIK addr 0x11d29ac size 0x38 virtual false final false
 bool UseFABRIK() ;

/// @brief Method ReadPose addr 0x11d29e4 size 0x264 virtual false final false
 void ReadPose() ;

/// @brief Method WritePose addr 0x11d2c48 size 0x320 virtual false final false
 void WritePose(RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method ForwardReach addr 0x11d2f68 size 0xe0 virtual false final false
 void ForwardReach(UnityEngine::Vector3 position) ;

/// @brief Method BackwardReach addr 0x11d3048 size 0xb4 virtual false final false
 void BackwardReach(UnityEngine::Vector3 position) ;

/// @brief Method MapToSolverPositions addr 0x11d30fc size 0x23c virtual false final false
 void MapToSolverPositions(RootMotion::FinalIK::IKSolverFullBody solver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKMappingSpine);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKMappingSpine, "RootMotion.FinalIK", "IKMappingSpine");
