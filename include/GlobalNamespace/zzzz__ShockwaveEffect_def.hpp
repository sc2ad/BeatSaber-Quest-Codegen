#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct ____UnityEngine__ParticleSystem__EmitParams;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class IntSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ShockwaveEffect;
}
// Type: ::ShockwaveEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4995))
// CS Name: ShockwaveEffect
class CORDL_TYPE ShockwaveEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~ShockwaveEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShockwaveEffect", modifiers: " const&", def_value: None }]
constexpr ShockwaveEffect(ShockwaveEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShockwaveEffect", modifiers: "&&", def_value: None }]
constexpr ShockwaveEffect(ShockwaveEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShockwaveEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ShockwaveEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShockwaveEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShockwaveEffect& operator=(ShockwaveEffect&& o) noexcept = default;
  constexpr ShockwaveEffect& operator=(ShockwaveEffect const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ParticleSystem __declspec(property(get=__get__shockwavePS, put=__set__shockwavePS))  _shockwavePS;

constexpr void __set__shockwavePS(::UnityEngine::ParticleSystem value) ;

constexpr ::UnityEngine::ParticleSystem __get__shockwavePS() const;

 ::GlobalNamespace::IntSO __declspec(property(get=__get__maxShockwaveParticles, put=__set__maxShockwaveParticles))  _maxShockwaveParticles;

constexpr void __set__maxShockwaveParticles(::GlobalNamespace::IntSO value) ;

constexpr ::GlobalNamespace::IntSO __get__maxShockwaveParticles() const;

 ::UnityEngine::____UnityEngine__ParticleSystem__EmitParams __declspec(property(get=__get__shockwavePSEmitParams, put=__set__shockwavePSEmitParams))  _shockwavePSEmitParams;

constexpr void __set__shockwavePSEmitParams(::UnityEngine::____UnityEngine__ParticleSystem__EmitParams value) ;

constexpr ::UnityEngine::____UnityEngine__ParticleSystem__EmitParams __get__shockwavePSEmitParams() const;

 float_t __declspec(property(get=__get__prevShockwaveParticleSpawnTime, put=__set__prevShockwaveParticleSpawnTime))  _prevShockwaveParticleSpawnTime;

constexpr void __set__prevShockwaveParticleSpawnTime(float_t value) ;

constexpr float_t __get__prevShockwaveParticleSpawnTime() const;


// Methods

/// @brief Method Start addr 0x2257910 size 0x11c virtual false final false
 void Start() ;

/// @brief Method SpawnShockwave addr 0x2257a2c size 0xd4 virtual false final false
 void SpawnShockwave(::UnityEngine::Vector3 pos) ;

// Ctor Parameters []
explicit ShockwaveEffect() ;

/// @brief Method .ctor addr 0x2257b00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ShockwaveEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShockwaveEffect, "", "ShockwaveEffect");
