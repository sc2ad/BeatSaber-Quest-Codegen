#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class ObstacleSaberSparkleEffectManager;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleSaberSoundEffect;
}
// Type: ::ObstacleSaberSoundEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4058))
// CS Name: ObstacleSaberSoundEffect
class CORDL_TYPE ObstacleSaberSoundEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ObstacleSaberSoundEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSoundEffect", modifiers: " const&", def_value: None }]
constexpr ObstacleSaberSoundEffect(ObstacleSaberSoundEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleSaberSoundEffect", modifiers: "&&", def_value: None }]
constexpr ObstacleSaberSoundEffect(ObstacleSaberSoundEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObstacleSaberSoundEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ObstacleSaberSoundEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObstacleSaberSoundEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObstacleSaberSoundEffect& operator=(ObstacleSaberSoundEffect&& o) noexcept = default;
  constexpr ObstacleSaberSoundEffect& operator=(ObstacleSaberSoundEffect const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ObstacleSaberSparkleEffectManager __declspec(property(get=__get__obstacleSaberSparkleEffectManager, put=__set__obstacleSaberSparkleEffectManager))  _obstacleSaberSparkleEffectManager;

constexpr void __set__obstacleSaberSparkleEffectManager(::GlobalNamespace::ObstacleSaberSparkleEffectManager value) ;

constexpr ::GlobalNamespace::ObstacleSaberSparkleEffectManager __get__obstacleSaberSparkleEffectManager() const;

 ::GlobalNamespace::SaberType __declspec(property(get=__get__saberType, put=__set__saberType))  _saberType;

constexpr void __set__saberType(::GlobalNamespace::SaberType value) ;

constexpr ::GlobalNamespace::SaberType __get__saberType() const;

 ::UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(::UnityEngine::AudioSource value) ;

constexpr ::UnityEngine::AudioSource __get__audioSource() const;

 float_t __declspec(property(get=__get__volume, put=__set__volume))  _volume;

constexpr void __set__volume(float_t value) ;

constexpr float_t __get__volume() const;

/// @brief Field kSmooth offset 0
static constexpr float_t  kSmooth{8};

 float_t __declspec(property(get=__get__targetVolume, put=__set__targetVolume))  _targetVolume;

constexpr void __set__targetVolume(float_t value) ;

constexpr float_t __get__targetVolume() const;


// Methods

/// @brief Method Awake addr 0x20bd230 size 0x104 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x20bd334 size 0x12c virtual false final false
 void OnDestroy() ;

/// @brief Method LateUpdate addr 0x20bd460 size 0x104 virtual false final false
 void LateUpdate() ;

/// @brief Method HandleSparkleEffectDidStart addr 0x20bd564 size 0xc8 virtual false final false
 void HandleSparkleEffectDidStart(::GlobalNamespace::SaberType saberType) ;

/// @brief Method HandleSparkleEffecDidEnd addr 0x20bd62c size 0x14 virtual false final false
 void HandleSparkleEffecDidEnd(::GlobalNamespace::SaberType saberType) ;

// Ctor Parameters []
explicit ObstacleSaberSoundEffect() ;

/// @brief Method .ctor addr 0x20bd640 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ObstacleSaberSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleSaberSoundEffect, "", "ObstacleSaberSoundEffect");
