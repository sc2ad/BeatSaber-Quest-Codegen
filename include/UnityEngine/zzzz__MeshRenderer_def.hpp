#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
namespace {
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshRenderer;
}
// Type: UnityEngine::MeshRenderer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10009))
// CS Name: UnityEngine.MeshRenderer
class CORDL_TYPE MeshRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MeshRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshRenderer", modifiers: " const&", def_value: None }]
constexpr MeshRenderer(MeshRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshRenderer", modifiers: "&&", def_value: None }]
constexpr MeshRenderer(MeshRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshRenderer(void* ptr) noexcept : ::UnityEngine::Renderer(ptr) {
}


  constexpr MeshRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshRenderer& operator=(MeshRenderer&& o) noexcept = default;
  constexpr MeshRenderer& operator=(MeshRenderer const& o) noexcept = default;
                


// Properties

 ::UnityEngine::Mesh __declspec(property(get=get_additionalVertexStreams))  additionalVertexStreams;


// Methods

/// @brief Method DontStripMeshRenderer addr 0x2b2e550 size 0x4 virtual false final false
 void DontStripMeshRenderer() ;

/// @brief Method get_additionalVertexStreams addr 0x2b2e554 size 0x3c virtual false final false
 ::UnityEngine::Mesh get_additionalVertexStreams() ;

// Ctor Parameters []
explicit MeshRenderer() ;

/// @brief Method .ctor addr 0x2b2e590 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::MeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshRenderer, "UnityEngine", "MeshRenderer");
