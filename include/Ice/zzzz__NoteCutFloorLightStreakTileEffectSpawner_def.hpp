#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
struct Color;
}
namespace Ice {
class FloorLightStreakTileEffect;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Forward declare root types
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawner;
}
// Type: Ice::NoteCutFloorLightStreakTileEffectSpawner
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16003))
// CS Name: Ice.NoteCutFloorLightStreakTileEffectSpawner
class CORDL_TYPE NoteCutFloorLightStreakTileEffectSpawner : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~NoteCutFloorLightStreakTileEffectSpawner() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawner", modifiers: " const&", def_value: None }]
constexpr NoteCutFloorLightStreakTileEffectSpawner(NoteCutFloorLightStreakTileEffectSpawner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawner", modifiers: "&&", def_value: None }]
constexpr NoteCutFloorLightStreakTileEffectSpawner(NoteCutFloorLightStreakTileEffectSpawner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutFloorLightStreakTileEffectSpawner(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteCutFloorLightStreakTileEffectSpawner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutFloorLightStreakTileEffectSpawner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutFloorLightStreakTileEffectSpawner& operator=(NoteCutFloorLightStreakTileEffectSpawner&& o) noexcept = default;
  constexpr NoteCutFloorLightStreakTileEffectSpawner& operator=(NoteCutFloorLightStreakTileEffectSpawner const& o) noexcept = default;
                


// Fields

 Ice::FloorLightStreakTileEffect __declspec(property(get=__get__floorLightStreakTileEffect, put=__set__floorLightStreakTileEffect))  _floorLightStreakTileEffect;

constexpr void __set__floorLightStreakTileEffect(Ice::FloorLightStreakTileEffect value) ;

constexpr Ice::FloorLightStreakTileEffect __get__floorLightStreakTileEffect() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 UnityEngine::Color __declspec(property(get=__get__spawnColor, put=__set__spawnColor))  _spawnColor;

constexpr void __set__spawnColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__spawnColor() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_spawnColor, put=set_spawnColor))  spawnColor;


// Methods

/// @brief Method set_spawnColor addr 0x1211c18 size 0xc virtual false final false
 void set_spawnColor(UnityEngine::Color value) ;

/// @brief Method get_spawnColor addr 0x1211c24 size 0xc virtual false final false
 UnityEngine::Color get_spawnColor() ;

/// @brief Method Start addr 0x1211c30 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x1211cbc size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteWasCut addr 0x1211d54 size 0x64 virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

static Ice::NoteCutFloorLightStreakTileEffectSpawner New_ctor() ;

/// @brief Method .ctor addr 0x1211db8 size 0xc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Ice
NEED_NO_BOX(Ice::NoteCutFloorLightStreakTileEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(Ice::NoteCutFloorLightStreakTileEffectSpawner, "Ice", "NoteCutFloorLightStreakTileEffectSpawner");
