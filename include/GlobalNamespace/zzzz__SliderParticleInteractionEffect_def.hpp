#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SliderInteractionEffect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace GlobalNamespace {
class SaberManager;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class Saber;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderParticleInteractionEffect;
}
// Type: ::SliderParticleInteractionEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4934))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4940))
// CS Name: SliderParticleInteractionEffect
class CORDL_TYPE SliderParticleInteractionEffect : public GlobalNamespace::SliderInteractionEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SliderParticleInteractionEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderParticleInteractionEffect", modifiers: " const&", def_value: None }]
constexpr SliderParticleInteractionEffect(SliderParticleInteractionEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderParticleInteractionEffect", modifiers: "&&", def_value: None }]
constexpr SliderParticleInteractionEffect(SliderParticleInteractionEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderParticleInteractionEffect(void* ptr) noexcept : GlobalNamespace::SliderInteractionEffect(ptr) {
}


  constexpr SliderParticleInteractionEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderParticleInteractionEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderParticleInteractionEffect& operator=(SliderParticleInteractionEffect&& o) noexcept = default;
  constexpr SliderParticleInteractionEffect& operator=(SliderParticleInteractionEffect const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::ParticleSystem> __declspec(property(get=__get__particleSystems, put=__set__particleSystems))  _particleSystems;

constexpr void __set__particleSystems(::ArrayW<UnityEngine::ParticleSystem> value) ;

constexpr ::ArrayW<UnityEngine::ParticleSystem> __get__particleSystems() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(GlobalNamespace::SaberManager value) ;

constexpr GlobalNamespace::SaberManager __get__saberManager() const;

 UnityEngine::Color __declspec(property(get=__get__startColor, put=__set__startColor))  _startColor;

constexpr void __set__startColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__startColor() const;

 GlobalNamespace::Saber __declspec(property(get=__get__saber, put=__set__saber))  _saber;

constexpr void __set__saber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__saber() const;


// Methods

/// @brief Method Start addr 0x224c2d4 size 0x98 virtual true final false
 void Start() ;

/// @brief Method Update addr 0x224c440 size 0x6c virtual false final false
 void Update() ;

/// @brief Method SetPSStartColor addr 0x224c36c size 0xd4 virtual false final false
 void SetPSStartColor(UnityEngine::Color color) ;

/// @brief Method StartEffect addr 0x224c4ac size 0xb8 virtual true final false
 void StartEffect(float_t saberInteractionParam) ;

/// @brief Method EndEffect addr 0x224c564 size 0x94 virtual true final false
 void EndEffect() ;

// Ctor Parameters []
explicit SliderParticleInteractionEffect() ;

/// @brief Method .ctor addr 0x224c5f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SliderParticleInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderParticleInteractionEffect, "", "SliderParticleInteractionEffect");
