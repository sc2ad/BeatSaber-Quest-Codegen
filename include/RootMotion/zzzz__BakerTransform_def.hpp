#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace RootMotion {
class BakerTransform;
}
// Type: RootMotion::BakerTransform
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12420))
// CS Name: RootMotion.BakerTransform
class CORDL_TYPE BakerTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BakerTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakerTransform", modifiers: " const&", def_value: None }]
constexpr BakerTransform(BakerTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakerTransform", modifiers: "&&", def_value: None }]
constexpr BakerTransform(BakerTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakerTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BakerTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakerTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakerTransform& operator=(BakerTransform&& o) noexcept = default;
  constexpr BakerTransform& operator=(BakerTransform const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_transform() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_posX, put=__set_posX))  posX;

constexpr void __set_posX(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_posX() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_posY, put=__set_posY))  posY;

constexpr void __set_posY(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_posY() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_posZ, put=__set_posZ))  posZ;

constexpr void __set_posZ(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_posZ() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_rotX, put=__set_rotX))  rotX;

constexpr void __set_rotX(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_rotX() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_rotY, put=__set_rotY))  rotY;

constexpr void __set_rotY(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_rotY() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_rotZ, put=__set_rotZ))  rotZ;

constexpr void __set_rotZ(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_rotZ() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get_rotW, put=__set_rotW))  rotW;

constexpr void __set_rotW(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get_rotW() const;

 ::StringW __declspec(property(get=__get_relativePath, put=__set_relativePath))  relativePath;

constexpr void __set_relativePath(::StringW value) ;

constexpr ::StringW __get_relativePath() const;

 bool __declspec(property(get=__get_recordPosition, put=__set_recordPosition))  recordPosition;

constexpr void __set_recordPosition(bool value) ;

constexpr bool __get_recordPosition() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_relativePosition, put=__set_relativePosition))  relativePosition;

constexpr void __set_relativePosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_relativePosition() const;

 bool __declspec(property(get=__get_isRootNode, put=__set_isRootNode))  isRootNode;

constexpr void __set_isRootNode(bool value) ;

constexpr bool __get_isRootNode() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get_relativeRotation, put=__set_relativeRotation))  relativeRotation;

constexpr void __set_relativeRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get_relativeRotation() const;


// Methods

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "root", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "recordPosition", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isRootNode", ty: "bool", modifiers: "", def_value: None }]
explicit BakerTransform(::UnityEngine::Transform transform, ::UnityEngine::Transform root, bool recordPosition, bool isRootNode) ;

/// @brief Method .ctor addr 0x11a6f18 size 0x94 virtual false final false
 void _ctor(::UnityEngine::Transform transform, ::UnityEngine::Transform root, bool recordPosition, bool isRootNode) ;

/// @brief Method SetRelativeSpace addr 0x11a718c size 0x14 virtual false final false
 void SetRelativeSpace(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) ;

/// @brief Method SetCurves addr 0x11a7468 size 0x2b4 virtual false final false
 void SetCurves(ByRef<::UnityEngine::AnimationClip> clip) ;

/// @brief Method AddRootMotionCurves addr 0x11aa380 size 0x288 virtual false final false
 void AddRootMotionCurves(ByRef<::UnityEngine::AnimationClip> clip) ;

/// @brief Method Reset addr 0x11a7084 size 0x108 virtual false final false
 void Reset() ;

/// @brief Method ReduceKeyframes addr 0x11aa608 size 0x68 virtual false final false
 void ReduceKeyframes(float_t maxError) ;

/// @brief Method SetKeyframes addr 0x11a7788 size 0x1f4 virtual false final false
 void SetKeyframes(float_t time) ;

/// @brief Method AddLoopFrame addr 0x11a720c size 0x1f8 virtual false final false
 void AddLoopFrame(float_t time) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::BakerTransform);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerTransform, "RootMotion", "BakerTransform");
