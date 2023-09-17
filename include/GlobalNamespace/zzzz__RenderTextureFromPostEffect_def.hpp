#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class RenderTextureFromPostEffect;
}
// Type: ::RenderTextureFromPostEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15320))
// CS Name: RenderTextureFromPostEffect
class CORDL_TYPE RenderTextureFromPostEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RenderTextureFromPostEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderTextureFromPostEffect", modifiers: " const&", def_value: None }]
constexpr RenderTextureFromPostEffect(RenderTextureFromPostEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderTextureFromPostEffect", modifiers: "&&", def_value: None }]
constexpr RenderTextureFromPostEffect(RenderTextureFromPostEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RenderTextureFromPostEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RenderTextureFromPostEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RenderTextureFromPostEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RenderTextureFromPostEffect& operator=(RenderTextureFromPostEffect&& o) noexcept = default;
  constexpr RenderTextureFromPostEffect& operator=(RenderTextureFromPostEffect const& o) noexcept = default;
                


// Fields

 ::UnityEngine::RenderTexture __declspec(property(get=__get__targetTexture, put=__set__targetTexture))  _targetTexture;

constexpr void __set__targetTexture(::UnityEngine::RenderTexture value) ;

constexpr ::UnityEngine::RenderTexture __get__targetTexture() const;

 ::UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(::UnityEngine::Camera value) ;

constexpr ::UnityEngine::Camera __get__camera() const;


// Properties

 ::UnityEngine::RenderTexture __declspec(property(get=get_targetTexture))  targetTexture;


// Methods

/// @brief Method get_targetTexture addr 0x26797c0 size 0x8 virtual false final false
 ::UnityEngine::RenderTexture get_targetTexture() ;

/// @brief Method Awake addr 0x26797c8 size 0x50 virtual false final false
 void Awake() ;

/// @brief Method OnRenderImage addr 0x2679818 size 0x1f8 virtual false final false
 void OnRenderImage(::UnityEngine::RenderTexture src, ::UnityEngine::RenderTexture dst) ;

// Ctor Parameters []
explicit RenderTextureFromPostEffect() ;

/// @brief Method .ctor addr 0x2679a10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RenderTextureFromPostEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RenderTextureFromPostEffect, "", "RenderTextureFromPostEffect");
