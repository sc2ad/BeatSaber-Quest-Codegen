#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystemRenderer;
}
// Type: UnityEngine::ParticleSystemRenderer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10006))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15775))
// CS Name: UnityEngine.ParticleSystemRenderer
class CORDL_TYPE ParticleSystemRenderer : public UnityEngine::Renderer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ParticleSystemRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: " const&", def_value: None }]
constexpr ParticleSystemRenderer(ParticleSystemRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "&&", def_value: None }]
constexpr ParticleSystemRenderer(ParticleSystemRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleSystemRenderer(void* ptr) noexcept : UnityEngine::Renderer(ptr) {
}


  constexpr ParticleSystemRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleSystemRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleSystemRenderer& operator=(ParticleSystemRenderer&& o) noexcept = default;
  constexpr ParticleSystemRenderer& operator=(ParticleSystemRenderer const& o) noexcept = default;
                


// Methods

/// @brief Method GetMeshes addr 0x2b99844 size 0x44 virtual false final false
 int32_t GetMeshes(ByRef<::ArrayW<UnityEngine::Mesh>> meshes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ParticleSystemRenderer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemRenderer, "UnityEngine", "ParticleSystemRenderer");
