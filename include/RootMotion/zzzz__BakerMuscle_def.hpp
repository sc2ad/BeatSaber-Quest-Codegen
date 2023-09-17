#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace RootMotion {
class BakerMuscle;
}
// Type: RootMotion::BakerMuscle
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12419))
// CS Name: RootMotion.BakerMuscle
class CORDL_TYPE BakerMuscle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BakerMuscle() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakerMuscle", modifiers: " const&", def_value: None }]
constexpr BakerMuscle(BakerMuscle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakerMuscle", modifiers: "&&", def_value: None }]
constexpr BakerMuscle(BakerMuscle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakerMuscle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BakerMuscle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakerMuscle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakerMuscle& operator=(BakerMuscle&& o) noexcept = default;
  constexpr BakerMuscle& operator=(BakerMuscle const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_curve, put=__set_curve))  curve;

constexpr void __set_curve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_curve() const;

 int32_t __declspec(property(get=__get_muscleIndex, put=__set_muscleIndex))  muscleIndex;

constexpr void __set_muscleIndex(int32_t value) ;

constexpr int32_t __get_muscleIndex() const;

 ::StringW __declspec(property(get=__get_propertyName, put=__set_propertyName))  propertyName;

constexpr void __set_propertyName(::StringW value) ;

constexpr ::StringW __get_propertyName() const;


// Methods

// Ctor Parameters [CppParam { name: "muscleIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit BakerMuscle(int32_t muscleIndex) ;

/// @brief Method .ctor addr 0x11a96a8 size 0x64 virtual false final false
 void _ctor(int32_t muscleIndex) ;

/// @brief Method MuscleNameToPropertyName addr 0x11a970c size 0xa34 virtual false final false
 ::StringW MuscleNameToPropertyName(::StringW n) ;

/// @brief Method MultiplyLength addr 0x11aa1a0 size 0xa8 virtual false final false
 void MultiplyLength(::UnityEngine::AnimationCurve curve, float_t mlp) ;

/// @brief Method SetCurves addr 0x11aa248 size 0xf4 virtual false final false
 void SetCurves(ByRef<::UnityEngine::AnimationClip> clip, float_t maxError, float_t lengthMlp) ;

/// @brief Method Reset addr 0x11aa140 size 0x60 virtual false final false
 void Reset() ;

/// @brief Method SetKeyframe addr 0x11aa33c size 0x3c virtual false final false
 void SetKeyframe(float_t time, ::ArrayW<float_t> muscles) ;

/// @brief Method SetLoopFrame addr 0x11aa378 size 0x8 virtual false final false
 void SetLoopFrame(float_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::BakerMuscle);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerMuscle, "RootMotion", "BakerMuscle");
