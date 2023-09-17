#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
namespace {
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRenderer;
}
// Type: ::BloomPrePassBackgroundNonLightRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14626))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14625))
// CS Name: BloomPrePassBackgroundNonLightRenderer
class CORDL_TYPE BloomPrePassBackgroundNonLightRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~BloomPrePassBackgroundNonLightRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRenderer", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundNonLightRenderer(BloomPrePassBackgroundNonLightRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightRenderer", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundNonLightRenderer(BloomPrePassBackgroundNonLightRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundNonLightRenderer(void* ptr) noexcept : ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore(ptr) {
}


  constexpr BloomPrePassBackgroundNonLightRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundNonLightRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundNonLightRenderer& operator=(BloomPrePassBackgroundNonLightRenderer&& o) noexcept = default;
  constexpr BloomPrePassBackgroundNonLightRenderer& operator=(BloomPrePassBackgroundNonLightRenderer const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Renderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(::UnityEngine::Renderer value) ;

constexpr ::UnityEngine::Renderer __get__renderer() const;

 ::UnityEngine::MeshFilter __declspec(property(get=__get__meshFilter, put=__set__meshFilter))  _meshFilter;

constexpr void __set__meshFilter(::UnityEngine::MeshFilter value) ;

constexpr ::UnityEngine::MeshFilter __get__meshFilter() const;

 bool __declspec(property(get=__get__isPartOfInstancedRendering, put=__set__isPartOfInstancedRendering))  _isPartOfInstancedRendering;

constexpr void __set__isPartOfInstancedRendering(bool value) ;

constexpr bool __get__isPartOfInstancedRendering() const;

 ::UnityEngine::Transform __declspec(property(get=__get__cachedTransform, put=__set__cachedTransform))  _cachedTransform;

constexpr void __set__cachedTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__cachedTransform() const;


// Properties

 ::UnityEngine::Renderer __declspec(property(get=get_renderer))  renderer;

 ::UnityEngine::MeshFilter __declspec(property(get=get_meshFilter))  meshFilter;

 ::UnityEngine::Transform __declspec(property(get=get_cachedTransform))  cachedTransform;

 bool __declspec(property(put=set_isPartOfInstancedRendering))  isPartOfInstancedRendering;


// Methods

/// @brief Method get_renderer addr 0x1f9371c size 0x8 virtual true final false
 ::UnityEngine::Renderer get_renderer() ;

/// @brief Method get_meshFilter addr 0x1f93724 size 0x8 virtual false final false
 ::UnityEngine::MeshFilter get_meshFilter() ;

/// @brief Method get_cachedTransform addr 0x1f9372c size 0x8 virtual false final false
 ::UnityEngine::Transform get_cachedTransform() ;

/// @brief Method set_isPartOfInstancedRendering addr 0x1f92bac size 0x30 virtual false final false
 void set_isPartOfInstancedRendering(bool value) ;

/// @brief Method Awake addr 0x1f93914 size 0x2c virtual true final false
 void Awake() ;

/// @brief Method OnEnable addr 0x1f9394c size 0x10 virtual true final false
 void OnEnable() ;

/// @brief Method OnValidate addr 0x1f93960 size 0x34 virtual true final false
 void OnValidate() ;

/// @brief Method InitIfNeeded addr 0x1f93994 size 0xc8 virtual true final false
 void InitIfNeeded() ;

// Ctor Parameters []
explicit BloomPrePassBackgroundNonLightRenderer() ;

/// @brief Method .ctor addr 0x1f93b10 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer, "", "BloomPrePassBackgroundNonLightRenderer");
