#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__KawaseBlurRendererSO__KernelSize;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassDoubleKawaseBlurTextureEffectSO;
}
// Type: ::BloomPrePassDoubleKawaseBlurTextureEffectSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14631))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15334))
// CS Name: BloomPrePassDoubleKawaseBlurTextureEffectSO
class CORDL_TYPE BloomPrePassDoubleKawaseBlurTextureEffectSO : public GlobalNamespace::BloomPrePassEffectSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BloomPrePassDoubleKawaseBlurTextureEffectSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassDoubleKawaseBlurTextureEffectSO", modifiers: " const&", def_value: None }]
constexpr BloomPrePassDoubleKawaseBlurTextureEffectSO(BloomPrePassDoubleKawaseBlurTextureEffectSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassDoubleKawaseBlurTextureEffectSO", modifiers: "&&", def_value: None }]
constexpr BloomPrePassDoubleKawaseBlurTextureEffectSO(BloomPrePassDoubleKawaseBlurTextureEffectSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassDoubleKawaseBlurTextureEffectSO(void* ptr) noexcept : GlobalNamespace::BloomPrePassEffectSO(ptr) {
}


  constexpr BloomPrePassDoubleKawaseBlurTextureEffectSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassDoubleKawaseBlurTextureEffectSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassDoubleKawaseBlurTextureEffectSO& operator=(BloomPrePassDoubleKawaseBlurTextureEffectSO&& o) noexcept = default;
  constexpr BloomPrePassDoubleKawaseBlurTextureEffectSO& operator=(BloomPrePassDoubleKawaseBlurTextureEffectSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize __declspec(property(get=__get__bloom1KernelSize, put=__set__bloom1KernelSize))  _bloom1KernelSize;

constexpr void __set__bloom1KernelSize(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize value) ;

constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize __get__bloom1KernelSize() const;

 float_t __declspec(property(get=__get__bloom1Boost, put=__set__bloom1Boost))  _bloom1Boost;

constexpr void __set__bloom1Boost(float_t value) ;

constexpr float_t __get__bloom1Boost() const;

 GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize __declspec(property(get=__get__bloom2KernelSize, put=__set__bloom2KernelSize))  _bloom2KernelSize;

constexpr void __set__bloom2KernelSize(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize value) ;

constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize __get__bloom2KernelSize() const;

 float_t __declspec(property(get=__get__bloom2Boost, put=__set__bloom2Boost))  _bloom2Boost;

constexpr void __set__bloom2Boost(float_t value) ;

constexpr float_t __get__bloom2Boost() const;

 float_t __declspec(property(get=__get__bloom2Alpha, put=__set__bloom2Alpha))  _bloom2Alpha;

constexpr void __set__bloom2Alpha(float_t value) ;

constexpr float_t __get__bloom2Alpha() const;

 int32_t __declspec(property(get=__get__downsample, put=__set__downsample))  _downsample;

constexpr void __set__downsample(int32_t value) ;

constexpr int32_t __get__downsample() const;

 bool __declspec(property(get=__get__gammaCorrection, put=__set__gammaCorrection))  _gammaCorrection;

constexpr void __set__gammaCorrection(bool value) ;

constexpr bool __get__gammaCorrection() const;

 GlobalNamespace::KawaseBlurRendererSO __declspec(property(get=__get__kawaseBlurRenderer, put=__set__kawaseBlurRenderer))  _kawaseBlurRenderer;

constexpr void __set__kawaseBlurRenderer(GlobalNamespace::KawaseBlurRendererSO value) ;

constexpr GlobalNamespace::KawaseBlurRendererSO __get__kawaseBlurRenderer() const;


// Methods

/// @brief Method Render addr 0x267ad38 size 0x38 virtual true final false
 void Render(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest) ;

static GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO New_ctor() ;

/// @brief Method .ctor addr 0x267ad70 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO, "", "BloomPrePassDoubleKawaseBlurTextureEffectSO");
