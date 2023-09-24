#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct UnityEngine__ParticleSystem__MinMaxCurve;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__MainModule;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmitParams;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__ShapeModule;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutParticlesEffect;
}
// Type: ::NoteCutParticlesEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4984))
// CS Name: NoteCutParticlesEffect
class CORDL_TYPE NoteCutParticlesEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x230};

virtual ~NoteCutParticlesEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutParticlesEffect", modifiers: " const&", def_value: None }]
constexpr NoteCutParticlesEffect(NoteCutParticlesEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutParticlesEffect", modifiers: "&&", def_value: None }]
constexpr NoteCutParticlesEffect(NoteCutParticlesEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutParticlesEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteCutParticlesEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutParticlesEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutParticlesEffect& operator=(NoteCutParticlesEffect&& o) noexcept = default;
  constexpr NoteCutParticlesEffect& operator=(NoteCutParticlesEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__sparklesPS, put=__set__sparklesPS))  _sparklesPS;

constexpr void __set__sparklesPS(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__sparklesPS() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__explosionPS, put=__set__explosionPS))  _explosionPS;

constexpr void __set__explosionPS(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__explosionPS() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__explosionCorePS, put=__set__explosionCorePS))  _explosionCorePS;

constexpr void __set__explosionCorePS(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__explosionCorePS() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__explosionPrePassBloomPS, put=__set__explosionPrePassBloomPS))  _explosionPrePassBloomPS;

constexpr void __set__explosionPrePassBloomPS(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__explosionPrePassBloomPS() const;

 UnityEngine::UnityEngine__ParticleSystem__EmitParams __declspec(property(get=__get__sparklesPSEmitParams, put=__set__sparklesPSEmitParams))  _sparklesPSEmitParams;

constexpr void __set__sparklesPSEmitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams __get__sparklesPSEmitParams() const;

 UnityEngine::UnityEngine__ParticleSystem__MainModule __declspec(property(get=__get__sparklesPSMainModule, put=__set__sparklesPSMainModule))  _sparklesPSMainModule;

constexpr void __set__sparklesPSMainModule(UnityEngine::UnityEngine__ParticleSystem__MainModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__MainModule __get__sparklesPSMainModule() const;

 UnityEngine::UnityEngine__ParticleSystem__ShapeModule __declspec(property(get=__get__sparklesPSShapeModule, put=__set__sparklesPSShapeModule))  _sparklesPSShapeModule;

constexpr void __set__sparklesPSShapeModule(UnityEngine::UnityEngine__ParticleSystem__ShapeModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__ShapeModule __get__sparklesPSShapeModule() const;

 UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve __declspec(property(get=__get__sparklesLifetimeMinMaxCurve, put=__set__sparklesLifetimeMinMaxCurve))  _sparklesLifetimeMinMaxCurve;

constexpr void __set__sparklesLifetimeMinMaxCurve(UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__MinMaxCurve __get__sparklesLifetimeMinMaxCurve() const;

 UnityEngine::UnityEngine__ParticleSystem__EmitParams __declspec(property(get=__get__explosionPSEmitParams, put=__set__explosionPSEmitParams))  _explosionPSEmitParams;

constexpr void __set__explosionPSEmitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams __get__explosionPSEmitParams() const;

 UnityEngine::UnityEngine__ParticleSystem__EmitParams __declspec(property(get=__get__explosionCorePSEmitParams, put=__set__explosionCorePSEmitParams))  _explosionCorePSEmitParams;

constexpr void __set__explosionCorePSEmitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams __get__explosionCorePSEmitParams() const;

 UnityEngine::UnityEngine__ParticleSystem__MainModule __declspec(property(get=__get__explosionCorePSMainModule, put=__set__explosionCorePSMainModule))  _explosionCorePSMainModule;

constexpr void __set__explosionCorePSMainModule(UnityEngine::UnityEngine__ParticleSystem__MainModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__MainModule __get__explosionCorePSMainModule() const;

 UnityEngine::UnityEngine__ParticleSystem__ShapeModule __declspec(property(get=__get__explosionCorePSShapeModule, put=__set__explosionCorePSShapeModule))  _explosionCorePSShapeModule;

constexpr void __set__explosionCorePSShapeModule(UnityEngine::UnityEngine__ParticleSystem__ShapeModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__ShapeModule __get__explosionCorePSShapeModule() const;

 UnityEngine::UnityEngine__ParticleSystem__ShapeModule __declspec(property(get=__get__explosionPrePassBloomPSShapeModule, put=__set__explosionPrePassBloomPSShapeModule))  _explosionPrePassBloomPSShapeModule;

constexpr void __set__explosionPrePassBloomPSShapeModule(UnityEngine::UnityEngine__ParticleSystem__ShapeModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__ShapeModule __get__explosionPrePassBloomPSShapeModule() const;


// Methods

/// @brief Method Awake addr 0x2252790 size 0x148 virtual false final false
 void Awake() ;

/// @brief Method SpawnParticles addr 0x22528d8 size 0x4b0 virtual false final false
 void SpawnParticles(UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, UnityEngine::Vector3 saberDir, float_t saberSpeed, UnityEngine::Vector3 noteMovementVec, UnityEngine::Color32 color, int32_t sparkleParticlesCount, int32_t explosionParticlesCount, float_t lifetimeMultiplier) ;

static GlobalNamespace::NoteCutParticlesEffect New_ctor() ;

/// @brief Method .ctor addr 0x2252d88 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteCutParticlesEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutParticlesEffect, "", "NoteCutParticlesEffect");
