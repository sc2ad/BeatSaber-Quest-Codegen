#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class GlobalNamespace__CoreGameHUDController__InitData;
}
namespace GlobalNamespace {
class FlyingSpriteSpawner;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class MissedNoteEffectSpawner;
}
// Type: ::MissedNoteEffectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5005))
// CS Name: MissedNoteEffectSpawner
class CORDL_TYPE MissedNoteEffectSpawner : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MissedNoteEffectSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissedNoteEffectSpawner", modifiers: " const&", def_value: None }]
constexpr MissedNoteEffectSpawner(MissedNoteEffectSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissedNoteEffectSpawner", modifiers: "&&", def_value: None }]
constexpr MissedNoteEffectSpawner(MissedNoteEffectSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissedNoteEffectSpawner(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissedNoteEffectSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissedNoteEffectSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissedNoteEffectSpawner& operator=(MissedNoteEffectSpawner&& o) noexcept = default;
  constexpr MissedNoteEffectSpawner& operator=(MissedNoteEffectSpawner const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FlyingSpriteSpawner __declspec(property(get=__get__missedNoteFlyingSpriteSpawner, put=__set__missedNoteFlyingSpriteSpawner))  _missedNoteFlyingSpriteSpawner;

constexpr void __set__missedNoteFlyingSpriteSpawner(GlobalNamespace::FlyingSpriteSpawner value) ;

constexpr GlobalNamespace::FlyingSpriteSpawner __get__missedNoteFlyingSpriteSpawner() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData __get__initData() const;

 float_t __declspec(property(get=__get__spawnPosZ, put=__set__spawnPosZ))  _spawnPosZ;

constexpr void __set__spawnPosZ(float_t value) ;

constexpr float_t __get__spawnPosZ() const;


// Methods

/// @brief Method Start addr 0x225907c size 0xd4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2259150 size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteWasMissed addr 0x22591e8 size 0x18c virtual false final false
 void HandleNoteWasMissed(GlobalNamespace::NoteController noteController) ;

// Ctor Parameters []
explicit MissedNoteEffectSpawner() ;

/// @brief Method .ctor addr 0x2259374 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MissedNoteEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissedNoteEffectSpawner, "", "MissedNoteEffectSpawner");
