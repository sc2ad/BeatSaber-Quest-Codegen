#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace {
namespace GlobalNamespace {
class FlyingSpriteSpawner;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__CoreGameHUDController__InitData;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
// Forward declare root types
namespace GlobalNamespace {
class BadNoteCutEffectSpawner;
}
// Type: ::BadNoteCutEffectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4997))
// CS Name: BadNoteCutEffectSpawner
class CORDL_TYPE BadNoteCutEffectSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BadNoteCutEffectSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "BadNoteCutEffectSpawner", modifiers: " const&", def_value: None }]
constexpr BadNoteCutEffectSpawner(BadNoteCutEffectSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BadNoteCutEffectSpawner", modifiers: "&&", def_value: None }]
constexpr BadNoteCutEffectSpawner(BadNoteCutEffectSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BadNoteCutEffectSpawner(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BadNoteCutEffectSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BadNoteCutEffectSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BadNoteCutEffectSpawner& operator=(BadNoteCutEffectSpawner&& o) noexcept = default;
  constexpr BadNoteCutEffectSpawner& operator=(BadNoteCutEffectSpawner const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::FlyingSpriteSpawner __declspec(property(get=__get__failFlyingSpriteSpawner, put=__set__failFlyingSpriteSpawner))  _failFlyingSpriteSpawner;

constexpr void __set__failFlyingSpriteSpawner(::GlobalNamespace::FlyingSpriteSpawner value) ;

constexpr ::GlobalNamespace::FlyingSpriteSpawner __get__failFlyingSpriteSpawner() const;

 ::GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 ::GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController value) ;

constexpr ::GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 ::GlobalNamespace::____GlobalNamespace__CoreGameHUDController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__CoreGameHUDController__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__CoreGameHUDController__InitData __get__initData() const;


// Methods

/// @brief Method Start addr 0x2257ce4 size 0xb4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2257d98 size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteWasCut addr 0x2257e30 size 0x118 virtual false final false
 void HandleNoteWasCut(::GlobalNamespace::NoteController noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) ;

// Ctor Parameters []
explicit BadNoteCutEffectSpawner() ;

/// @brief Method .ctor addr 0x2258140 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BadNoteCutEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadNoteCutEffectSpawner, "", "BadNoteCutEffectSpawner");
