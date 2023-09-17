#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class BombExplosionEffect;
}
namespace GlobalNamespace {
class NoteDebrisSpawner;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerEffectsSpawner;
}
// Type: ::MultiplayerConnectedPlayerEffectsSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5220))
// CS Name: MultiplayerConnectedPlayerEffectsSpawner
class CORDL_TYPE MultiplayerConnectedPlayerEffectsSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MultiplayerConnectedPlayerEffectsSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerEffectsSpawner", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerEffectsSpawner(MultiplayerConnectedPlayerEffectsSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerEffectsSpawner", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerEffectsSpawner(MultiplayerConnectedPlayerEffectsSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerEffectsSpawner(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerConnectedPlayerEffectsSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerEffectsSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerEffectsSpawner& operator=(MultiplayerConnectedPlayerEffectsSpawner&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerEffectsSpawner& operator=(MultiplayerConnectedPlayerEffectsSpawner const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::NoteDebrisSpawner __declspec(property(get=__get__noteDebrisSpawner, put=__set__noteDebrisSpawner))  _noteDebrisSpawner;

constexpr void __set__noteDebrisSpawner(::GlobalNamespace::NoteDebrisSpawner value) ;

constexpr ::GlobalNamespace::NoteDebrisSpawner __get__noteDebrisSpawner() const;

 ::GlobalNamespace::BombExplosionEffect __declspec(property(get=__get__bombExplosionEffect, put=__set__bombExplosionEffect))  _bombExplosionEffect;

constexpr void __set__bombExplosionEffect(::GlobalNamespace::BombExplosionEffect value) ;

constexpr ::GlobalNamespace::BombExplosionEffect __get__bombExplosionEffect() const;

 ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager __declspec(property(get=__get__beatmapObjectEventManager, put=__set__beatmapObjectEventManager))  _beatmapObjectEventManager;

constexpr void __set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager value) ;

constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager __get__beatmapObjectEventManager() const;


// Methods

/// @brief Method Start addr 0x20df120 size 0xf0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20df210 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut addr 0x20df318 size 0x1f8 virtual false final false
 void HandleBeatmapObjectEventManagerConnectedPlayerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable noteCutInfo) ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerEffectsSpawner() ;

/// @brief Method .ctor addr 0x20df510 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner, "", "MultiplayerConnectedPlayerEffectsSpawner");
