#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmitParams;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BombExplosionEffect;
}
// Type: ::BombExplosionEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4953))
// CS Name: BombExplosionEffect
class CORDL_TYPE BombExplosionEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x150};

virtual ~BombExplosionEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "BombExplosionEffect", modifiers: " const&", def_value: None }]
constexpr BombExplosionEffect(BombExplosionEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BombExplosionEffect", modifiers: "&&", def_value: None }]
constexpr BombExplosionEffect(BombExplosionEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BombExplosionEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BombExplosionEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BombExplosionEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BombExplosionEffect& operator=(BombExplosionEffect&& o) noexcept = default;
  constexpr BombExplosionEffect& operator=(BombExplosionEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__debrisPS, put=__set__debrisPS))  _debrisPS;

constexpr void __set__debrisPS(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__debrisPS() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__explosionPS, put=__set__explosionPS))  _explosionPS;

constexpr void __set__explosionPS(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__explosionPS() const;

 int32_t __declspec(property(get=__get__debrisCount, put=__set__debrisCount))  _debrisCount;

constexpr void __set__debrisCount(int32_t value) ;

constexpr int32_t __get__debrisCount() const;

 int32_t __declspec(property(get=__get__explosionParticlesCount, put=__set__explosionParticlesCount))  _explosionParticlesCount;

constexpr void __set__explosionParticlesCount(int32_t value) ;

constexpr int32_t __get__explosionParticlesCount() const;

 UnityEngine::UnityEngine__ParticleSystem__EmitParams __declspec(property(get=__get__emitParams, put=__set__emitParams))  _emitParams;

constexpr void __set__emitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams __get__emitParams() const;

 UnityEngine::UnityEngine__ParticleSystem__EmitParams __declspec(property(get=__get__explosionPSEmitParams, put=__set__explosionPSEmitParams))  _explosionPSEmitParams;

constexpr void __set__explosionPSEmitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams __get__explosionPSEmitParams() const;


// Methods

/// @brief Method Awake addr 0x224da98 size 0x2c virtual false final false
 void Awake() ;

/// @brief Method SpawnExplosion addr 0x224dac4 size 0xbc virtual false final false
 void SpawnExplosion(UnityEngine::Vector3 pos) ;

// Ctor Parameters []
explicit BombExplosionEffect() ;

/// @brief Method .ctor addr 0x224db80 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BombExplosionEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombExplosionEffect, "", "BombExplosionEffect");
