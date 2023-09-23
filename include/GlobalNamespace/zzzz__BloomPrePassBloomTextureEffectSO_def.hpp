#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
struct ToneMapping;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
struct GlobalNamespace__PyramidBloomRendererSO__Pass;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBloomTextureEffectSO;
}
// Type: ::BloomPrePassBloomTextureEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14631))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15333))
// CS Name: BloomPrePassBloomTextureEffectSO
class CORDL_TYPE BloomPrePassBloomTextureEffectSO : public GlobalNamespace::BloomPrePassEffectSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~BloomPrePassBloomTextureEffectSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBloomTextureEffectSO", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBloomTextureEffectSO(BloomPrePassBloomTextureEffectSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBloomTextureEffectSO", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBloomTextureEffectSO(BloomPrePassBloomTextureEffectSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBloomTextureEffectSO(void* ptr) noexcept : GlobalNamespace::BloomPrePassEffectSO(ptr) {
}


  constexpr BloomPrePassBloomTextureEffectSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBloomTextureEffectSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBloomTextureEffectSO& operator=(BloomPrePassBloomTextureEffectSO&& o) noexcept = default;
  constexpr BloomPrePassBloomTextureEffectSO& operator=(BloomPrePassBloomTextureEffectSO const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__radius, put=__set__radius))  _radius;

constexpr void __set__radius(float_t value) ;

constexpr float_t __get__radius() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__downBloomIntensityOffset, put=__set__downBloomIntensityOffset))  _downBloomIntensityOffset;

constexpr void __set__downBloomIntensityOffset(float_t value) ;

constexpr float_t __get__downBloomIntensityOffset() const;

 bool __declspec(property(get=__get__uniformPyramidWeights, put=__set__uniformPyramidWeights))  _uniformPyramidWeights;

constexpr void __set__uniformPyramidWeights(bool value) ;

constexpr bool __get__uniformPyramidWeights() const;

 float_t __declspec(property(get=__get__pyramidWeightsParam, put=__set__pyramidWeightsParam))  _pyramidWeightsParam;

constexpr void __set__pyramidWeightsParam(float_t value) ;

constexpr float_t __get__pyramidWeightsParam() const;

 float_t __declspec(property(get=__get__firstUpsampleBrightness, put=__set__firstUpsampleBrightness))  _firstUpsampleBrightness;

constexpr void __set__firstUpsampleBrightness(float_t value) ;

constexpr float_t __get__firstUpsampleBrightness() const;

 float_t __declspec(property(get=__get__finalUpsampleBrightness, put=__set__finalUpsampleBrightness))  _finalUpsampleBrightness;

constexpr void __set__finalUpsampleBrightness(float_t value) ;

constexpr float_t __get__finalUpsampleBrightness() const;

 GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __declspec(property(get=__get__prefilterPass, put=__set__prefilterPass))  _prefilterPass;

constexpr void __set__prefilterPass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value) ;

constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __get__prefilterPass() const;

 GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __declspec(property(get=__get__downsamplePass, put=__set__downsamplePass))  _downsamplePass;

constexpr void __set__downsamplePass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value) ;

constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __get__downsamplePass() const;

 GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __declspec(property(get=__get__upsamplePass, put=__set__upsamplePass))  _upsamplePass;

constexpr void __set__upsamplePass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value) ;

constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __get__upsamplePass() const;

 GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __declspec(property(get=__get__finalUpsamplePass, put=__set__finalUpsamplePass))  _finalUpsamplePass;

constexpr void __set__finalUpsamplePass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value) ;

constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __get__finalUpsamplePass() const;

 GlobalNamespace::PyramidBloomRendererSO __declspec(property(get=__get__bloomRenderer, put=__set__bloomRenderer))  _bloomRenderer;

constexpr void __set__bloomRenderer(GlobalNamespace::PyramidBloomRendererSO value) ;

constexpr GlobalNamespace::PyramidBloomRendererSO __get__bloomRenderer() const;

 GlobalNamespace::BloomFogSO __declspec(property(get=__get__bloomFog, put=__set__bloomFog))  _bloomFog;

constexpr void __set__bloomFog(GlobalNamespace::BloomFogSO value) ;

constexpr GlobalNamespace::BloomFogSO __get__bloomFog() const;


// Properties

 GlobalNamespace::ToneMapping __declspec(property(get=get_toneMapping))  toneMapping;


// Methods

/// @brief Method get_toneMapping addr 0x267ac78 size 0x20 virtual true final false
 GlobalNamespace::ToneMapping get_toneMapping() ;

/// @brief Method Render addr 0x267ac98 size 0x64 virtual true final false
 void Render(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest) ;

// Ctor Parameters []
explicit BloomPrePassBloomTextureEffectSO() ;

/// @brief Method .ctor addr 0x267acfc size 0x3c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassBloomTextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBloomTextureEffectSO, "", "BloomPrePassBloomTextureEffectSO");
