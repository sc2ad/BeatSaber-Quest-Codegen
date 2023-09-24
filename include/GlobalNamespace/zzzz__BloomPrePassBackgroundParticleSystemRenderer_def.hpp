#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundNonLightRendererCore_def.hpp"
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundParticleSystemRenderer;
}
// Type: ::BloomPrePassBackgroundParticleSystemRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14626))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14627))
// CS Name: BloomPrePassBackgroundParticleSystemRenderer
class CORDL_TYPE BloomPrePassBackgroundParticleSystemRenderer : public GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BloomPrePassBackgroundParticleSystemRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundParticleSystemRenderer", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundParticleSystemRenderer(BloomPrePassBackgroundParticleSystemRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundParticleSystemRenderer", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundParticleSystemRenderer(BloomPrePassBackgroundParticleSystemRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundParticleSystemRenderer(void* ptr) noexcept : GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore(ptr) {
}


  constexpr BloomPrePassBackgroundParticleSystemRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundParticleSystemRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundParticleSystemRenderer& operator=(BloomPrePassBackgroundParticleSystemRenderer&& o) noexcept = default;
  constexpr BloomPrePassBackgroundParticleSystemRenderer& operator=(BloomPrePassBackgroundParticleSystemRenderer const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem, put=__set__particleSystem))  _particleSystem;

constexpr void __set__particleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem() const;

 UnityEngine::Renderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(UnityEngine::Renderer value) ;

constexpr UnityEngine::Renderer __get__renderer() const;


// Properties

 UnityEngine::Renderer __declspec(property(get=get_renderer))  renderer;


// Methods

/// @brief Method get_renderer addr 0x1f93e6c size 0x8 virtual true final false
 UnityEngine::Renderer get_renderer() ;

/// @brief Method Awake addr 0x1f93e74 size 0x64 virtual true final false
 void Awake() ;

static GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer New_ctor() ;

/// @brief Method .ctor addr 0x1f93ed8 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundParticleSystemRenderer, "", "BloomPrePassBackgroundParticleSystemRenderer");
