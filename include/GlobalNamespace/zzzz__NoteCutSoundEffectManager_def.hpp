#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__NoteCutSoundEffect__Pool;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class INoteCutSoundEffectDidFinishEvent;
}
namespace GlobalNamespace {
class GlobalNamespace__NoteCutSoundEffectManager__InitData;
}
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__NoteCutSoundEffectManager__InitData;
}
namespace GlobalNamespace {
class NoteCutSoundEffectManager;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4056))
// CS Name: NoteCutSoundEffectManager::InitData
class CORDL_TYPE GlobalNamespace__NoteCutSoundEffectManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__NoteCutSoundEffectManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteCutSoundEffectManager__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__NoteCutSoundEffectManager__InitData(GlobalNamespace__NoteCutSoundEffectManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteCutSoundEffectManager__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__NoteCutSoundEffectManager__InitData(GlobalNamespace__NoteCutSoundEffectManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NoteCutSoundEffectManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__NoteCutSoundEffectManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__NoteCutSoundEffectManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__NoteCutSoundEffectManager__InitData& operator=(GlobalNamespace__NoteCutSoundEffectManager__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__NoteCutSoundEffectManager__InitData& operator=(GlobalNamespace__NoteCutSoundEffectManager__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_useTestAudioClips, put=__set_useTestAudioClips))  useTestAudioClips;

constexpr void __set_useTestAudioClips(bool value) ;

constexpr bool __get_useTestAudioClips() const;

 bool __declspec(property(get=__get_ignoreBadCuts, put=__set_ignoreBadCuts))  ignoreBadCuts;

constexpr void __set_ignoreBadCuts(bool value) ;

constexpr bool __get_ignoreBadCuts() const;


// Methods

static GlobalNamespace::GlobalNamespace__NoteCutSoundEffectManager__InitData New_ctor(bool useTestAudioClips, bool ignoreBadCuts) ;

/// @brief Method .ctor addr 0x20bd200 size 0x30 virtual false final false
 void _ctor(bool useTestAudioClips, bool ignoreBadCuts) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteCutSoundEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4057))
// CS Name: NoteCutSoundEffectManager
class CORDL_TYPE NoteCutSoundEffectManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__NoteCutSoundEffectManager__InitData;

/// @brief Convert operator to GlobalNamespace::INoteCutSoundEffectDidFinishEvent
constexpr operator  GlobalNamespace::INoteCutSoundEffectDidFinishEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~NoteCutSoundEffectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffectManager", modifiers: " const&", def_value: None }]
constexpr NoteCutSoundEffectManager(NoteCutSoundEffectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffectManager", modifiers: "&&", def_value: None }]
constexpr NoteCutSoundEffectManager(NoteCutSoundEffectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutSoundEffectManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteCutSoundEffectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutSoundEffectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutSoundEffectManager& operator=(NoteCutSoundEffectManager&& o) noexcept = default;
  constexpr NoteCutSoundEffectManager& operator=(NoteCutSoundEffectManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AudioManagerSO __declspec(property(get=__get__audioManager, put=__set__audioManager))  _audioManager;

constexpr void __set__audioManager(GlobalNamespace::AudioManagerSO value) ;

constexpr GlobalNamespace::AudioManagerSO __get__audioManager() const;

 float_t __declspec(property(get=__get__audioSamplesBeatAlignOffset, put=__set__audioSamplesBeatAlignOffset))  _audioSamplesBeatAlignOffset;

constexpr void __set__audioSamplesBeatAlignOffset(float_t value) ;

constexpr float_t __get__audioSamplesBeatAlignOffset() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__longCutEffectsAudioClips, put=__set__longCutEffectsAudioClips))  _longCutEffectsAudioClips;

constexpr void __set__longCutEffectsAudioClips(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__longCutEffectsAudioClips() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__shortCutEffectsAudioClips, put=__set__shortCutEffectsAudioClips))  _shortCutEffectsAudioClips;

constexpr void __set__shortCutEffectsAudioClips(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__shortCutEffectsAudioClips() const;

 UnityEngine::AudioClip __declspec(property(get=__get__testAudioClip, put=__set__testAudioClip))  _testAudioClip;

constexpr void __set__testAudioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__testAudioClip() const;

 GlobalNamespace::GlobalNamespace__NoteCutSoundEffectManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__NoteCutSoundEffectManager__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteCutSoundEffectManager__InitData __get__initData() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(GlobalNamespace::SaberManager value) ;

constexpr GlobalNamespace::SaberManager __get__saberManager() const;

 GlobalNamespace::GlobalNamespace__NoteCutSoundEffect__Pool __declspec(property(get=__get__noteCutSoundEffectPool, put=__set__noteCutSoundEffectPool))  _noteCutSoundEffectPool;

constexpr void __set__noteCutSoundEffectPool(GlobalNamespace::GlobalNamespace__NoteCutSoundEffect__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__NoteCutSoundEffect__Pool __get__noteCutSoundEffectPool() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 bool __declspec(property(get=__get__handleWrongSaberTypeAsGood_k__BackingField, put=__set__handleWrongSaberTypeAsGood_k__BackingField))  _handleWrongSaberTypeAsGood_k__BackingField;

constexpr void __set__handleWrongSaberTypeAsGood_k__BackingField(bool value) ;

constexpr bool __get__handleWrongSaberTypeAsGood_k__BackingField() const;

/// @brief Field kMaxNumberOfEffects offset 0
static constexpr int32_t  kMaxNumberOfEffects{64};

/// @brief Field kTwoNotesAtTheSameTimeVolumeMul offset 0
static constexpr float_t  kTwoNotesAtTheSameTimeVolumeMul{0.9};

/// @brief Field kDenseNotesVolumeMul offset 0
static constexpr float_t  kDenseNotesVolumeMul{0.9};

 GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __declspec(property(get=__get__randomLongCutSoundPicker, put=__set__randomLongCutSoundPicker))  _randomLongCutSoundPicker;

constexpr void __set__randomLongCutSoundPicker(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> value) ;

constexpr GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __get__randomLongCutSoundPicker() const;

 GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __declspec(property(get=__get__randomShortCutSoundPicker, put=__set__randomShortCutSoundPicker))  _randomShortCutSoundPicker;

constexpr void __set__randomShortCutSoundPicker(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> value) ;

constexpr GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __get__randomShortCutSoundPicker() const;

 float_t __declspec(property(get=__get__prevNoteATime, put=__set__prevNoteATime))  _prevNoteATime;

constexpr void __set__prevNoteATime(float_t value) ;

constexpr float_t __get__prevNoteATime() const;

 float_t __declspec(property(get=__get__prevNoteBTime, put=__set__prevNoteBTime))  _prevNoteBTime;

constexpr void __set__prevNoteBTime(float_t value) ;

constexpr float_t __get__prevNoteBTime() const;

 GlobalNamespace::NoteCutSoundEffect __declspec(property(get=__get__prevNoteASoundEffect, put=__set__prevNoteASoundEffect))  _prevNoteASoundEffect;

constexpr void __set__prevNoteASoundEffect(GlobalNamespace::NoteCutSoundEffect value) ;

constexpr GlobalNamespace::NoteCutSoundEffect __get__prevNoteASoundEffect() const;

 GlobalNamespace::NoteCutSoundEffect __declspec(property(get=__get__prevNoteBSoundEffect, put=__set__prevNoteBSoundEffect))  _prevNoteBSoundEffect;

constexpr void __set__prevNoteBSoundEffect(GlobalNamespace::NoteCutSoundEffect value) ;

constexpr GlobalNamespace::NoteCutSoundEffect __get__prevNoteBSoundEffect() const;

 float_t __declspec(property(get=__get__beatAlignOffset, put=__set__beatAlignOffset))  _beatAlignOffset;

constexpr void __set__beatAlignOffset(float_t value) ;

constexpr float_t __get__beatAlignOffset() const;

 bool __declspec(property(get=__get__useTestAudioClips, put=__set__useTestAudioClips))  _useTestAudioClips;

constexpr void __set__useTestAudioClips(bool value) ;

constexpr bool __get__useTestAudioClips() const;

 GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect> __declspec(property(get=__get__noteCutSoundEffectPoolContainer, put=__set__noteCutSoundEffectPoolContainer))  _noteCutSoundEffectPoolContainer;

constexpr void __set__noteCutSoundEffectPoolContainer(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect> value) ;

constexpr GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect> __get__noteCutSoundEffectPoolContainer() const;


// Properties

 bool __declspec(property(get=get_handleWrongSaberTypeAsGood, put=set_handleWrongSaberTypeAsGood))  handleWrongSaberTypeAsGood;


// Methods

/// @brief Method get_handleWrongSaberTypeAsGood addr 0x20bc5c4 size 0x8 virtual false final false
 bool get_handleWrongSaberTypeAsGood() ;

/// @brief Method set_handleWrongSaberTypeAsGood addr 0x20bc5cc size 0xc virtual false final false
 void set_handleWrongSaberTypeAsGood(bool value) ;

/// @brief Method Start addr 0x20bc5d8 size 0x260 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20bc838 size 0x104 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteWasSpawned addr 0x20bc93c size 0x580 virtual false final false
 void HandleNoteWasSpawned(GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleNoteWasCut addr 0x20bcef8 size 0x1b0 virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method HandleNoteCutSoundEffectDidFinish addr 0x20bd0a8 size 0xd8 virtual true final true
 void HandleNoteCutSoundEffectDidFinish(GlobalNamespace::NoteCutSoundEffect noteCutSoundEffect) ;

/// @brief Method IsSupportedNote addr 0x20bcebc size 0x3c virtual false final false
 bool IsSupportedNote(GlobalNamespace::NoteData noteData) ;

static GlobalNamespace::NoteCutSoundEffectManager New_ctor() ;

/// @brief Method .ctor addr 0x20bd180 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__NoteCutSoundEffectManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NoteCutSoundEffectManager__InitData, "", "NoteCutSoundEffectManager/InitData");
NEED_NO_BOX(GlobalNamespace::NoteCutSoundEffectManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutSoundEffectManager, "", "NoteCutSoundEffectManager");
