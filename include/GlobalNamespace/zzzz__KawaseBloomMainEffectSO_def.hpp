#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class KawaseBloomMainEffectSO;
}
// Type: ::KawaseBloomMainEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15314))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15310))
// CS Name: KawaseBloomMainEffectSO
class CORDL_TYPE KawaseBloomMainEffectSO : public GlobalNamespace::MainEffectSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~KawaseBloomMainEffectSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "KawaseBloomMainEffectSO", modifiers: " const&", def_value: None }]
constexpr KawaseBloomMainEffectSO(KawaseBloomMainEffectSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KawaseBloomMainEffectSO", modifiers: "&&", def_value: None }]
constexpr KawaseBloomMainEffectSO(KawaseBloomMainEffectSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KawaseBloomMainEffectSO(void* ptr) noexcept : GlobalNamespace::MainEffectSO(ptr) {
}


  constexpr KawaseBloomMainEffectSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KawaseBloomMainEffectSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KawaseBloomMainEffectSO& operator=(KawaseBloomMainEffectSO&& o) noexcept = default;
  constexpr KawaseBloomMainEffectSO& operator=(KawaseBloomMainEffectSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::KawaseBlurRendererSO __declspec(property(get=__get__kawaseBlurRenderer, put=__set__kawaseBlurRenderer))  _kawaseBlurRenderer;

constexpr void __set__kawaseBlurRenderer(GlobalNamespace::KawaseBlurRendererSO value) ;

constexpr GlobalNamespace::KawaseBlurRendererSO __get__kawaseBlurRenderer() const;

 UnityEngine::Shader __declspec(property(get=__get__mainEffectShader, put=__set__mainEffectShader))  _mainEffectShader;

constexpr void __set__mainEffectShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get__mainEffectShader() const;

 float_t __declspec(property(get=__get__bloomIntensity, put=__set__bloomIntensity))  _bloomIntensity;

constexpr void __set__bloomIntensity(float_t value) ;

constexpr float_t __get__bloomIntensity() const;

 int32_t __declspec(property(get=__get__bloomIterations, put=__set__bloomIterations))  _bloomIterations;

constexpr void __set__bloomIterations(int32_t value) ;

constexpr int32_t __get__bloomIterations() const;

 float_t __declspec(property(get=__get__bloomBoost, put=__set__bloomBoost))  _bloomBoost;

constexpr void __set__bloomBoost(float_t value) ;

constexpr float_t __get__bloomBoost() const;

 float_t __declspec(property(get=__get__bloomAlphaWeights, put=__set__bloomAlphaWeights))  _bloomAlphaWeights;

constexpr void __set__bloomAlphaWeights(float_t value) ;

constexpr float_t __get__bloomAlphaWeights() const;

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

 UnityEngine::Material __declspec(property(get=__get__mainEffectMaterial, put=__set__mainEffectMaterial))  _mainEffectMaterial;

constexpr void __set__mainEffectMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__mainEffectMaterial() const;


// Properties

 bool __declspec(property(get=get_hasPostProcessEffect))  hasPostProcessEffect;


// Methods

/// @brief Method get_hasPostProcessEffect addr 0x267688c size 0x8 virtual true final false
 bool get_hasPostProcessEffect() ;

/// @brief Method OnEnable addr 0x2676894 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x267696c size 0x20 virtual false final false
 void OnDisable() ;

/// @brief Method LazyInitializeMaterials addr 0x26768b0 size 0xbc virtual false final false
 void LazyInitializeMaterials() ;

/// @brief Method PreRender addr 0x267698c size 0x64 virtual true final false
 void PreRender() ;

/// @brief Method Render addr 0x2676a78 size 0x210 virtual true final false
 void Render(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, float_t fade) ;

// Ctor Parameters []
explicit KawaseBloomMainEffectSO() ;

/// @brief Method .ctor addr 0x2676c88 size 0x28 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::KawaseBloomMainEffectSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBloomMainEffectSO, "", "KawaseBloomMainEffectSO");
