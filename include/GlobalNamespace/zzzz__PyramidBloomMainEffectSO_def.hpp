#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
struct GlobalNamespace__PyramidBloomRendererSO__Pass;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class PyramidBloomMainEffectSO;
}
// Type: ::PyramidBloomMainEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15314))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15316))
// CS Name: PyramidBloomMainEffectSO
class CORDL_TYPE PyramidBloomMainEffectSO : public GlobalNamespace::MainEffectSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~PyramidBloomMainEffectSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PyramidBloomMainEffectSO", modifiers: " const&", def_value: None }]
constexpr PyramidBloomMainEffectSO(PyramidBloomMainEffectSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PyramidBloomMainEffectSO", modifiers: "&&", def_value: None }]
constexpr PyramidBloomMainEffectSO(PyramidBloomMainEffectSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PyramidBloomMainEffectSO(void* ptr) noexcept : GlobalNamespace::MainEffectSO(ptr) {
}


  constexpr PyramidBloomMainEffectSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PyramidBloomMainEffectSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PyramidBloomMainEffectSO& operator=(PyramidBloomMainEffectSO&& o) noexcept = default;
  constexpr PyramidBloomMainEffectSO& operator=(PyramidBloomMainEffectSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PyramidBloomRendererSO __declspec(property(get=__get__bloomRenderer, put=__set__bloomRenderer))  _bloomRenderer;

constexpr void __set__bloomRenderer(GlobalNamespace::PyramidBloomRendererSO value) ;

constexpr GlobalNamespace::PyramidBloomRendererSO __get__bloomRenderer() const;

 GlobalNamespace::BloomFogSO __declspec(property(get=__get__bloomFog, put=__set__bloomFog))  _bloomFog;

constexpr void __set__bloomFog(GlobalNamespace::BloomFogSO value) ;

constexpr GlobalNamespace::BloomFogSO __get__bloomFog() const;

 UnityEngine::Shader __declspec(property(get=__get__fadeShader, put=__set__fadeShader))  _fadeShader;

constexpr void __set__fadeShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get__fadeShader() const;

 UnityEngine::Shader __declspec(property(get=__get__mainEffectShader, put=__set__mainEffectShader))  _mainEffectShader;

constexpr void __set__mainEffectShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get__mainEffectShader() const;

 float_t __declspec(property(get=__get__bloomBlendFactor, put=__set__bloomBlendFactor))  _bloomBlendFactor;

constexpr void __set__bloomBlendFactor(float_t value) ;

constexpr float_t __get__bloomBlendFactor() const;

 float_t __declspec(property(get=__get__bloomRadius, put=__set__bloomRadius))  _bloomRadius;

constexpr void __set__bloomRadius(float_t value) ;

constexpr float_t __get__bloomRadius() const;

 float_t __declspec(property(get=__get__bloomIntensity, put=__set__bloomIntensity))  _bloomIntensity;

constexpr void __set__bloomIntensity(float_t value) ;

constexpr float_t __get__bloomIntensity() const;

 float_t __declspec(property(get=__get__downBloomIntensityOffset, put=__set__downBloomIntensityOffset))  _downBloomIntensityOffset;

constexpr void __set__downBloomIntensityOffset(float_t value) ;

constexpr float_t __get__downBloomIntensityOffset() const;

 float_t __declspec(property(get=__get__pyramidWeightsParam, put=__set__pyramidWeightsParam))  _pyramidWeightsParam;

constexpr void __set__pyramidWeightsParam(float_t value) ;

constexpr float_t __get__pyramidWeightsParam() const;

 float_t __declspec(property(get=__get__alphaWeights, put=__set__alphaWeights))  _alphaWeights;

constexpr void __set__alphaWeights(float_t value) ;

constexpr float_t __get__alphaWeights() const;

 GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __declspec(property(get=__get__preFilterPass, put=__set__preFilterPass))  _preFilterPass;

constexpr void __set__preFilterPass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value) ;

constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __get__preFilterPass() const;

 GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __declspec(property(get=__get__downsamplePass, put=__set__downsamplePass))  _downsamplePass;

constexpr void __set__downsamplePass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value) ;

constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __get__downsamplePass() const;

 GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __declspec(property(get=__get__upsamplePass, put=__set__upsamplePass))  _upsamplePass;

constexpr void __set__upsamplePass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value) ;

constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __get__upsamplePass() const;

 GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __declspec(property(get=__get__finalUpsamplePass, put=__set__finalUpsamplePass))  _finalUpsamplePass;

constexpr void __set__finalUpsamplePass(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass value) ;

constexpr GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass __get__finalUpsamplePass() const;

 int32_t __declspec(property(get=__get__bloomTextureWidth, put=__set__bloomTextureWidth))  _bloomTextureWidth;

constexpr void __set__bloomTextureWidth(int32_t value) ;

constexpr int32_t __get__bloomTextureWidth() const;

 float_t __declspec(property(get=__get__baseColorBoost, put=__set__baseColorBoost))  _baseColorBoost;

constexpr void __set__baseColorBoost(float_t value) ;

constexpr float_t __get__baseColorBoost() const;

 float_t __declspec(property(get=__get__baseColorBoostThreshold, put=__set__baseColorBoostThreshold))  _baseColorBoostThreshold;

constexpr void __set__baseColorBoostThreshold(float_t value) ;

constexpr float_t __get__baseColorBoostThreshold() const;

static int32_t __declspec(property(get=__get__bloomTexID, put=__set__bloomTexID))  _bloomTexID;

static void __set__bloomTexID(int32_t value) ;

static int32_t __get__bloomTexID() ;

static int32_t __declspec(property(get=__get__bloomIntensityID, put=__set__bloomIntensityID))  _bloomIntensityID;

static void __set__bloomIntensityID(int32_t value) ;

static int32_t __get__bloomIntensityID() ;

static int32_t __declspec(property(get=__get__fadeID, put=__set__fadeID))  _fadeID;

static void __set__fadeID(int32_t value) ;

static int32_t __get__fadeID() ;

 UnityEngine::Material __declspec(property(get=__get__fadeMaterial, put=__set__fadeMaterial))  _fadeMaterial;

constexpr void __set__fadeMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__fadeMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__mainEffectMaterial, put=__set__mainEffectMaterial))  _mainEffectMaterial;

constexpr void __set__mainEffectMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__mainEffectMaterial() const;


// Properties

 bool __declspec(property(get=get_hasPostProcessEffect))  hasPostProcessEffect;


// Methods

/// @brief Method get_hasPostProcessEffect addr 0x26776bc size 0x8 virtual true final false
 bool get_hasPostProcessEffect() ;

/// @brief Method OnEnable addr 0x26776c4 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2677804 size 0x30 virtual false final false
 void OnDisable() ;

/// @brief Method LazyInitializeMaterials addr 0x26776e0 size 0x124 virtual false final false
 void LazyInitializeMaterials() ;

/// @brief Method PreRender addr 0x2677834 size 0x64 virtual true final false
 void PreRender() ;

/// @brief Method Render addr 0x2677898 size 0x274 virtual true final false
 void Render(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, float_t fade) ;

static GlobalNamespace::PyramidBloomMainEffectSO New_ctor() ;

/// @brief Method .ctor addr 0x2677b0c size 0x3c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PyramidBloomMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PyramidBloomMainEffectSO, "", "PyramidBloomMainEffectSO");
