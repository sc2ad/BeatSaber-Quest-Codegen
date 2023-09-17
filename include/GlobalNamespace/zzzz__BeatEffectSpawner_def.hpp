#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class SongController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatEffect__Pool;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class BeatEffect;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class IBeatEffectDidFinishEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatEffectSpawner;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatEffectSpawner__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4998))
// CS Name: BeatEffectSpawner::InitData
class CORDL_TYPE ____GlobalNamespace__BeatEffectSpawner__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__BeatEffectSpawner__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatEffectSpawner__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatEffectSpawner__InitData(____GlobalNamespace__BeatEffectSpawner__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatEffectSpawner__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatEffectSpawner__InitData(____GlobalNamespace__BeatEffectSpawner__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatEffectSpawner__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatEffectSpawner__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatEffectSpawner__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatEffectSpawner__InitData& operator=(____GlobalNamespace__BeatEffectSpawner__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatEffectSpawner__InitData& operator=(____GlobalNamespace__BeatEffectSpawner__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_hideNoteSpawnEffect, put=__set_hideNoteSpawnEffect))  hideNoteSpawnEffect;

constexpr void __set_hideNoteSpawnEffect(bool value) ;

constexpr bool __get_hideNoteSpawnEffect() const;


// Methods

// Ctor Parameters [CppParam { name: "hideNoteSpawnEffect", ty: "bool", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__BeatEffectSpawner__InitData(bool hideNoteSpawnEffect) ;

/// @brief Method .ctor addr 0x2258828 size 0x28 virtual false final false
 void _ctor(bool hideNoteSpawnEffect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatEffectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4999))
// CS Name: BeatEffectSpawner
class CORDL_TYPE BeatEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::____GlobalNamespace__BeatEffectSpawner__InitData;

/// @brief Convert operator to ::GlobalNamespace::IBeatEffectDidFinishEvent
constexpr operator  ::GlobalNamespace::IBeatEffectDidFinishEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~BeatEffectSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatEffectSpawner", modifiers: " const&", def_value: None }]
constexpr BeatEffectSpawner(BeatEffectSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatEffectSpawner", modifiers: "&&", def_value: None }]
constexpr BeatEffectSpawner(BeatEffectSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatEffectSpawner(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatEffectSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatEffectSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatEffectSpawner& operator=(BeatEffectSpawner&& o) noexcept = default;
  constexpr BeatEffectSpawner& operator=(BeatEffectSpawner const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__effectDuration, put=__set__effectDuration))  _effectDuration;

constexpr void __set__effectDuration(float_t value) ;

constexpr float_t __get__effectDuration() const;

 ::UnityEngine::Color __declspec(property(get=__get__bombColorEffect, put=__set__bombColorEffect))  _bombColorEffect;

constexpr void __set__bombColorEffect(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__bombColorEffect() const;

 ::GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager value) ;

constexpr ::GlobalNamespace::ColorManager __get__colorManager() const;

 ::GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 ::GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 ::GlobalNamespace::____GlobalNamespace__BeatEffectSpawner__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__BeatEffectSpawner__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__BeatEffectSpawner__InitData __get__initData() const;

 ::GlobalNamespace::BloomFogSO __declspec(property(get=__get__bloomFog, put=__set__bloomFog))  _bloomFog;

constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO value) ;

constexpr ::GlobalNamespace::BloomFogSO __get__bloomFog() const;

 ::GlobalNamespace::SongController __declspec(property(get=__get__songController, put=__set__songController))  _songController;

constexpr void __set__songController(::GlobalNamespace::SongController value) ;

constexpr ::GlobalNamespace::SongController __get__songController() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BeatEffect> __declspec(property(get=__get__beatEffectPoolContainer, put=__set__beatEffectPoolContainer))  _beatEffectPoolContainer;

constexpr void __set__beatEffectPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BeatEffect> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BeatEffect> __get__beatEffectPoolContainer() const;


// Methods

/// @brief Method Init addr 0x2258148 size 0x84 virtual false final false
 void Init(::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool beatEffectPool) ;

/// @brief Method Start addr 0x22581cc size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2258258 size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x22582f0 size 0x184 virtual false final false
 void Update() ;

/// @brief Method HandleNoteDidStartJump addr 0x2258474 size 0x2c0 virtual false final false
 void HandleNoteDidStartJump(::GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleBeatEffectDidFinish addr 0x2258734 size 0xd8 virtual true final true
 void HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect beatEffect) ;

// Ctor Parameters []
explicit BeatEffectSpawner() ;

/// @brief Method .ctor addr 0x225880c size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatEffectSpawner, "", "BeatEffectSpawner");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatEffectSpawner__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatEffectSpawner__InitData, "", "BeatEffectSpawner/InitData");
