#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class NoteDebrisSpawner;
}
namespace GlobalNamespace {
class ShockwaveEffect;
}
namespace GlobalNamespace {
class BombExplosionEffect;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteCutHapticEffect;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class NoteCutParticlesEffect;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__NoteCutHapticEffect__Type;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteCutCoreEffectsSpawner;
}
// Type: ::NoteCutCoreEffectsSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5006))
// CS Name: NoteCutCoreEffectsSpawner
class CORDL_TYPE NoteCutCoreEffectsSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~NoteCutCoreEffectsSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutCoreEffectsSpawner", modifiers: " const&", def_value: None }]
constexpr NoteCutCoreEffectsSpawner(NoteCutCoreEffectsSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutCoreEffectsSpawner", modifiers: "&&", def_value: None }]
constexpr NoteCutCoreEffectsSpawner(NoteCutCoreEffectsSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutCoreEffectsSpawner(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteCutCoreEffectsSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutCoreEffectsSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutCoreEffectsSpawner& operator=(NoteCutCoreEffectsSpawner&& o) noexcept = default;
  constexpr NoteCutCoreEffectsSpawner& operator=(NoteCutCoreEffectsSpawner const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__shockWaveYPos, put=__set__shockWaveYPos))  _shockWaveYPos;

constexpr void __set__shockWaveYPos(float_t value) ;

constexpr float_t __get__shockWaveYPos() const;

 ::GlobalNamespace::NoteCutParticlesEffect __declspec(property(get=__get__noteCutParticlesEffect, put=__set__noteCutParticlesEffect))  _noteCutParticlesEffect;

constexpr void __set__noteCutParticlesEffect(::GlobalNamespace::NoteCutParticlesEffect value) ;

constexpr ::GlobalNamespace::NoteCutParticlesEffect __get__noteCutParticlesEffect() const;

 ::GlobalNamespace::NoteDebrisSpawner __declspec(property(get=__get__noteDebrisSpawner, put=__set__noteDebrisSpawner))  _noteDebrisSpawner;

constexpr void __set__noteDebrisSpawner(::GlobalNamespace::NoteDebrisSpawner value) ;

constexpr ::GlobalNamespace::NoteDebrisSpawner __get__noteDebrisSpawner() const;

 ::GlobalNamespace::NoteCutHapticEffect __declspec(property(get=__get__noteCutHapticEffect, put=__set__noteCutHapticEffect))  _noteCutHapticEffect;

constexpr void __set__noteCutHapticEffect(::GlobalNamespace::NoteCutHapticEffect value) ;

constexpr ::GlobalNamespace::NoteCutHapticEffect __get__noteCutHapticEffect() const;

 ::GlobalNamespace::ShockwaveEffect __declspec(property(get=__get__shockwaveEffect, put=__set__shockwaveEffect))  _shockwaveEffect;

constexpr void __set__shockwaveEffect(::GlobalNamespace::ShockwaveEffect value) ;

constexpr ::GlobalNamespace::ShockwaveEffect __get__shockwaveEffect() const;

 ::GlobalNamespace::BombExplosionEffect __declspec(property(get=__get__bombExplosionEffect, put=__set__bombExplosionEffect))  _bombExplosionEffect;

constexpr void __set__bombExplosionEffect(::GlobalNamespace::BombExplosionEffect value) ;

constexpr ::GlobalNamespace::BombExplosionEffect __get__bombExplosionEffect() const;

 ::GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager value) ;

constexpr ::GlobalNamespace::ColorManager __get__colorManager() const;

 ::GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 ::GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

/// @brief Field kNormalNoteSparkleParticlesCount offset 0
static constexpr int32_t  kNormalNoteSparkleParticlesCount{150};

/// @brief Field kNormalNoteExplosionParticlesCount offset 0
static constexpr int32_t  kNormalNoteExplosionParticlesCount{50};

/// @brief Field kBurstSliderElementSparkleParticlesCount offset 0
static constexpr int32_t  kBurstSliderElementSparkleParticlesCount{50};

/// @brief Field kBurstSliderElementParticlesCount offset 0
static constexpr int32_t  kBurstSliderElementParticlesCount{20};


// Methods

/// @brief Method Start addr 0x225937c size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2259408 size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteWasCut addr 0x22594a0 size 0x178 virtual false final false
 void HandleNoteWasCut(::GlobalNamespace::NoteController noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method PlayHitNoteHapticEffect addr 0x2259bb0 size 0x4c virtual false final false
 void PlayHitNoteHapticEffect(::GlobalNamespace::NoteCutInfo noteCutInfo, ::GlobalNamespace::____GlobalNamespace__NoteCutHapticEffect__Type hapticType) ;

/// @brief Method SpawnNoteCutEffect addr 0x2259668 size 0x548 virtual false final false
 void SpawnNoteCutEffect(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController noteController, int32_t sparkleParticlesCount, int32_t explosionParticlesCount) ;

/// @brief Method SpawnBombCutEffect addr 0x2259618 size 0x50 virtual false final false
 void SpawnBombCutEffect(ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo, ::GlobalNamespace::NoteController noteController) ;

// Ctor Parameters []
explicit NoteCutCoreEffectsSpawner() ;

/// @brief Method .ctor addr 0x225a48c size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NoteCutCoreEffectsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutCoreEffectsSpawner, "", "NoteCutCoreEffectsSpawner");
