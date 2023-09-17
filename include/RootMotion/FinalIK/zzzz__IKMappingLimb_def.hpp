#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKMapping_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class ____RootMotion__FinalIK__IKMapping__BoneMap;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct ____RootMotion__FinalIK__IKMappingLimb__BoneMapType;
}
namespace RootMotion::FinalIK {
class IKMappingLimb;
}
// Type: ::BoneMapType
namespace RootMotion::FinalIK {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12498))
// CS Name: RootMotion.FinalIK.IKMappingLimb::BoneMapType
struct CORDL_TYPE ____RootMotion__FinalIK__IKMappingLimb__BoneMapType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____RootMotion__FinalIK__IKMappingLimb__BoneMapType(int32_t value__) noexcept;


                    constexpr ____RootMotion__FinalIK__IKMappingLimb__BoneMapType(____RootMotion__FinalIK__IKMappingLimb__BoneMapType const&) = default;
                    constexpr ____RootMotion__FinalIK__IKMappingLimb__BoneMapType(____RootMotion__FinalIK__IKMappingLimb__BoneMapType&&) = default;
                    constexpr ____RootMotion__FinalIK__IKMappingLimb__BoneMapType& operator=(____RootMotion__FinalIK__IKMappingLimb__BoneMapType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____RootMotion__FinalIK__IKMappingLimb__BoneMapType& operator=(____RootMotion__FinalIK__IKMappingLimb__BoneMapType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____RootMotion__FinalIK__IKMappingLimb__BoneMapType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______RootMotion__FinalIK__IKMappingLimb__BoneMapType_Unwrapped : int32_t {
__Parent = 0,
__Bone1 = 1,
__Bone2 = 2,
__Bone3 = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______RootMotion__FinalIK__IKMappingLimb__BoneMapType_Unwrapped () const noexcept {
return std::bit_cast<______RootMotion__FinalIK__IKMappingLimb__BoneMapType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Parent offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMappingLimb__BoneMapType const Parent;

/// @brief Field Bone1 offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMappingLimb__BoneMapType const Bone1;

/// @brief Field Bone2 offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMappingLimb__BoneMapType const Bone2;

/// @brief Field Bone3 offset 0
static ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMappingLimb__BoneMapType const Bone3;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
// Type: RootMotion.FinalIK::IKMappingLimb
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12496))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12499))
// CS Name: RootMotion.FinalIK.IKMappingLimb
class CORDL_TYPE IKMappingLimb : public ::RootMotion::FinalIK::IKMapping {
public:
// Declarations
using BoneMapType = ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMappingLimb__BoneMapType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~IKMappingLimb() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKMappingLimb", modifiers: " const&", def_value: None }]
constexpr IKMappingLimb(IKMappingLimb const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKMappingLimb", modifiers: "&&", def_value: None }]
constexpr IKMappingLimb(IKMappingLimb&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKMappingLimb(void* ptr) noexcept : ::RootMotion::FinalIK::IKMapping(ptr) {
}


  constexpr IKMappingLimb& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKMappingLimb& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKMappingLimb& operator=(IKMappingLimb&& o) noexcept = default;
  constexpr IKMappingLimb& operator=(IKMappingLimb const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_parentBone, put=__set_parentBone))  parentBone;

constexpr void __set_parentBone(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_parentBone() const;

 ::UnityEngine::Transform __declspec(property(get=__get_bone1, put=__set_bone1))  bone1;

constexpr void __set_bone1(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bone1() const;

 ::UnityEngine::Transform __declspec(property(get=__get_bone2, put=__set_bone2))  bone2;

constexpr void __set_bone2(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bone2() const;

 ::UnityEngine::Transform __declspec(property(get=__get_bone3, put=__set_bone3))  bone3;

constexpr void __set_bone3(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_bone3() const;

 float_t __declspec(property(get=__get_maintainRotationWeight, put=__set_maintainRotationWeight))  maintainRotationWeight;

constexpr void __set_maintainRotationWeight(float_t value) ;

constexpr float_t __get_maintainRotationWeight() const;

 float_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(float_t value) ;

constexpr float_t __get_weight() const;

 bool __declspec(property(get=__get_updatePlaneRotations, put=__set_updatePlaneRotations))  updatePlaneRotations;

constexpr void __set_updatePlaneRotations(bool value) ;

constexpr bool __get_updatePlaneRotations() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap __declspec(property(get=__get_boneMapParent, put=__set_boneMapParent))  boneMapParent;

constexpr void __set_boneMapParent(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap __get_boneMapParent() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap __declspec(property(get=__get_boneMap1, put=__set_boneMap1))  boneMap1;

constexpr void __set_boneMap1(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap __get_boneMap1() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap __declspec(property(get=__get_boneMap2, put=__set_boneMap2))  boneMap2;

constexpr void __set_boneMap2(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap __get_boneMap2() const;

 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap __declspec(property(get=__get_boneMap3, put=__set_boneMap3))  boneMap3;

constexpr void __set_boneMap3(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap value) ;

constexpr ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap __get_boneMap3() const;


// Methods

/// @brief Method IsValid addr 0x11d1144 size 0x74 virtual true final false
 bool IsValid(::RootMotion::FinalIK::IKSolver solver, ByRef<::StringW> message) ;

/// @brief Method GetBoneMap addr 0x11d11b8 size 0xc8 virtual false final false
 ::RootMotion::FinalIK::____RootMotion__FinalIK__IKMapping__BoneMap GetBoneMap(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMappingLimb__BoneMapType boneMap) ;

/// @brief Method SetLimbOrientation addr 0x11d1280 size 0x2b8 virtual false final false
 void SetLimbOrientation(::UnityEngine::Vector3 upper, ::UnityEngine::Vector3 lower) ;

// Ctor Parameters []
explicit IKMappingLimb() ;

/// @brief Method .ctor addr 0x11d1538 size 0x11c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bone1", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "bone2", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "bone3", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "parentBone", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }]
explicit IKMappingLimb(::UnityEngine::Transform bone1, ::UnityEngine::Transform bone2, ::UnityEngine::Transform bone3, ::UnityEngine::Transform parentBone) ;

/// @brief Method .ctor addr 0x11d1654 size 0x148 virtual false final false
 void _ctor(::UnityEngine::Transform bone1, ::UnityEngine::Transform bone2, ::UnityEngine::Transform bone3, ::UnityEngine::Transform parentBone) ;

/// @brief Method SetBones addr 0x11d179c size 0xc virtual false final false
 void SetBones(::UnityEngine::Transform bone1, ::UnityEngine::Transform bone2, ::UnityEngine::Transform bone3, ::UnityEngine::Transform parentBone) ;

/// @brief Method StoreDefaultLocalState addr 0x11d17a8 size 0x98 virtual false final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11d1840 size 0xa8 virtual false final false
 void FixTransforms() ;

/// @brief Method Initiate addr 0x11d18e8 size 0x25c virtual true final false
 void Initiate(::RootMotion::FinalIK::IKSolverFullBody solver) ;

/// @brief Method ReadPose addr 0x11d1b44 size 0x60 virtual false final false
 void ReadPose() ;

/// @brief Method WritePose addr 0x11d1ba4 size 0x144 virtual false final false
 void WritePose(::RootMotion::FinalIK::IKSolverFullBody solver, bool fullBody) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::____RootMotion__FinalIK__IKMappingLimb__BoneMapType, "RootMotion.FinalIK", "IKMappingLimb/BoneMapType");
NEED_NO_BOX(::RootMotion::FinalIK::IKMappingLimb);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMappingLimb, "RootMotion.FinalIK", "IKMappingLimb");
