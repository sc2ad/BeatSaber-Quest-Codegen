#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class OVRFaceExpressions;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRFaceExpressions__FaceExpression;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRFace;
}
// Type: ::OVRFace
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8903))
// CS Name: OVRFace
class CORDL_TYPE OVRFace : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OVRFace() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRFace", modifiers: " const&", def_value: None }]
constexpr OVRFace(OVRFace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRFace", modifiers: "&&", def_value: None }]
constexpr OVRFace(OVRFace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRFace(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRFace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRFace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRFace& operator=(OVRFace&& o) noexcept = default;
  constexpr OVRFace& operator=(OVRFace const& o) noexcept = default;
                


// Fields

 GlobalNamespace::OVRFaceExpressions __declspec(property(get=__get__faceExpressions, put=__set__faceExpressions))  _faceExpressions;

constexpr void __set__faceExpressions(GlobalNamespace::OVRFaceExpressions value) ;

constexpr GlobalNamespace::OVRFaceExpressions __get__faceExpressions() const;

 float_t __declspec(property(get=__get__blendShapeStrengthMultiplier, put=__set__blendShapeStrengthMultiplier))  _blendShapeStrengthMultiplier;

constexpr void __set__blendShapeStrengthMultiplier(float_t value) ;

constexpr float_t __get__blendShapeStrengthMultiplier() const;

 UnityEngine::SkinnedMeshRenderer __declspec(property(get=__get__skinnedMeshRenderer, put=__set__skinnedMeshRenderer))  _skinnedMeshRenderer;

constexpr void __set__skinnedMeshRenderer(UnityEngine::SkinnedMeshRenderer value) ;

constexpr UnityEngine::SkinnedMeshRenderer __get__skinnedMeshRenderer() const;


// Properties

 GlobalNamespace::OVRFaceExpressions __declspec(property(get=get_FaceExpressions, put=set_FaceExpressions))  FaceExpressions;

 float_t __declspec(property(get=get_BlendShapeStrengthMultiplier, put=set_BlendShapeStrengthMultiplier))  BlendShapeStrengthMultiplier;


// Methods

/// @brief Method get_FaceExpressions addr 0x262045c size 0x8 virtual false final false
 GlobalNamespace::OVRFaceExpressions get_FaceExpressions() ;

/// @brief Method set_FaceExpressions addr 0x2620464 size 0x8 virtual false final false
 void set_FaceExpressions(GlobalNamespace::OVRFaceExpressions value) ;

/// @brief Method get_BlendShapeStrengthMultiplier addr 0x262046c size 0x8 virtual false final false
 float_t get_BlendShapeStrengthMultiplier() ;

/// @brief Method set_BlendShapeStrengthMultiplier addr 0x2620474 size 0x8 virtual false final false
 void set_BlendShapeStrengthMultiplier(float_t value) ;

/// @brief Method Start addr 0x261ec8c size 0x50 virtual true final false
 void Start() ;

/// @brief Method Update addr 0x262047c size 0xd8 virtual true final false
 void Update() ;

/// @brief Method GetFaceExpression addr 0x2620554 size 0x8 virtual true final false
 GlobalNamespace::GlobalNamespace__OVRFaceExpressions__FaceExpression GetFaceExpression(int32_t blendShapeIndex) ;

static GlobalNamespace::OVRFace New_ctor() ;

/// @brief Method .ctor addr 0x261ed1c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRFace);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRFace, "", "OVRFace");
