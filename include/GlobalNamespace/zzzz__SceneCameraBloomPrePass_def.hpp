#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneCameraBloomPrePass;
}
// Type: ::SceneCameraBloomPrePass
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14650))
// CS Name: SceneCameraBloomPrePass
class CORDL_TYPE SceneCameraBloomPrePass : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SceneCameraBloomPrePass() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneCameraBloomPrePass", modifiers: " const&", def_value: None }]
constexpr SceneCameraBloomPrePass(SceneCameraBloomPrePass const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneCameraBloomPrePass", modifiers: "&&", def_value: None }]
constexpr SceneCameraBloomPrePass(SceneCameraBloomPrePass&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneCameraBloomPrePass(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SceneCameraBloomPrePass& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneCameraBloomPrePass& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneCameraBloomPrePass& operator=(SceneCameraBloomPrePass&& o) noexcept = default;
  constexpr SceneCameraBloomPrePass& operator=(SceneCameraBloomPrePass const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomPrePassRendererSO __declspec(property(get=__get__bloomPrepassRenderer, put=__set__bloomPrepassRenderer))  _bloomPrepassRenderer;

constexpr void __set__bloomPrepassRenderer(GlobalNamespace::BloomPrePassRendererSO value) ;

constexpr GlobalNamespace::BloomPrePassRendererSO __get__bloomPrepassRenderer() const;

 GlobalNamespace::BloomPrePassEffectContainerSO __declspec(property(get=__get__bloomPrePassEffectContainer, put=__set__bloomPrePassEffectContainer))  _bloomPrePassEffectContainer;

constexpr void __set__bloomPrePassEffectContainer(GlobalNamespace::BloomPrePassEffectContainerSO value) ;

constexpr GlobalNamespace::BloomPrePassEffectContainerSO __get__bloomPrePassEffectContainer() const;

 UnityEngine::RenderTexture __declspec(property(get=__get__bloomPrepassRenderTexture, put=__set__bloomPrepassRenderTexture))  _bloomPrepassRenderTexture;

constexpr void __set__bloomPrepassRenderTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get__bloomPrepassRenderTexture() const;


// Methods

// Ctor Parameters []
explicit SceneCameraBloomPrePass() ;

/// @brief Method .ctor addr 0x1f97584 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SceneCameraBloomPrePass);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneCameraBloomPrePass, "", "SceneCameraBloomPrePass");
