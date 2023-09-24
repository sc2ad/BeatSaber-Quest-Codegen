#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class GlobalNamespace__BombCutSoundEffect__Pool;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class BombCutSoundEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class BombCutSoundEffectManager;
}
// Type: ::BombCutSoundEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4044))
// CS Name: BombCutSoundEffectManager
class CORDL_TYPE BombCutSoundEffectManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BombCutSoundEffectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "BombCutSoundEffectManager", modifiers: " const&", def_value: None }]
constexpr BombCutSoundEffectManager(BombCutSoundEffectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BombCutSoundEffectManager", modifiers: "&&", def_value: None }]
constexpr BombCutSoundEffectManager(BombCutSoundEffectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BombCutSoundEffectManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BombCutSoundEffectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BombCutSoundEffectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BombCutSoundEffectManager& operator=(BombCutSoundEffectManager&& o) noexcept = default;
  constexpr BombCutSoundEffectManager& operator=(BombCutSoundEffectManager const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__volume, put=__set__volume))  _volume;

constexpr void __set__volume(float_t value) ;

constexpr float_t __get__volume() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__bombExplosionAudioClips, put=__set__bombExplosionAudioClips))  _bombExplosionAudioClips;

constexpr void __set__bombExplosionAudioClips(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__bombExplosionAudioClips() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::SaberManager __declspec(property(get=__get_saberManager, put=__set_saberManager))  saberManager;

constexpr void __set_saberManager(GlobalNamespace::SaberManager value) ;

constexpr GlobalNamespace::SaberManager __get_saberManager() const;

 GlobalNamespace::GlobalNamespace__BombCutSoundEffect__Pool __declspec(property(get=__get__bombCutSoundEffectPool, put=__set__bombCutSoundEffectPool))  _bombCutSoundEffectPool;

constexpr void __set__bombCutSoundEffectPool(GlobalNamespace::GlobalNamespace__BombCutSoundEffect__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__BombCutSoundEffect__Pool __get__bombCutSoundEffectPool() const;

 GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __declspec(property(get=__get__randomSoundPicker, put=__set__randomSoundPicker))  _randomSoundPicker;

constexpr void __set__randomSoundPicker(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> value) ;

constexpr GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __get__randomSoundPicker() const;


// Methods

/// @brief Method Start addr 0x20ba2d4 size 0xe4 virtual false final false
 void Start() ;

/// @brief Method HandleNoteWasCut addr 0x20ba3b8 size 0x220 virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method OnDestroy addr 0x20ba5d8 size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBombCutSoundEffectDidFinish addr 0x20ba670 size 0xb8 virtual false final false
 void HandleBombCutSoundEffectDidFinish(GlobalNamespace::BombCutSoundEffect bombCutSoundEffect) ;

static GlobalNamespace::BombCutSoundEffectManager New_ctor() ;

/// @brief Method .ctor addr 0x20ba728 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BombCutSoundEffectManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombCutSoundEffectManager, "", "BombCutSoundEffectManager");
