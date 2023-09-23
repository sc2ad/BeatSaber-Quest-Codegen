#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
namespace UnityEngine {
struct Color;
}
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawner;
}
// Forward declare root types
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawnerLightWithId;
}
// Type: Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16004))
// CS Name: Ice.NoteCutFloorLightStreakTileEffectSpawnerLightWithId
class CORDL_TYPE NoteCutFloorLightStreakTileEffectSpawnerLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NoteCutFloorLightStreakTileEffectSpawnerLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawnerLightWithId", modifiers: " const&", def_value: None }]
constexpr NoteCutFloorLightStreakTileEffectSpawnerLightWithId(NoteCutFloorLightStreakTileEffectSpawnerLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawnerLightWithId", modifiers: "&&", def_value: None }]
constexpr NoteCutFloorLightStreakTileEffectSpawnerLightWithId(NoteCutFloorLightStreakTileEffectSpawnerLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutFloorLightStreakTileEffectSpawnerLightWithId(void* ptr) noexcept : GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr NoteCutFloorLightStreakTileEffectSpawnerLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutFloorLightStreakTileEffectSpawnerLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutFloorLightStreakTileEffectSpawnerLightWithId& operator=(NoteCutFloorLightStreakTileEffectSpawnerLightWithId&& o) noexcept = default;
  constexpr NoteCutFloorLightStreakTileEffectSpawnerLightWithId& operator=(NoteCutFloorLightStreakTileEffectSpawnerLightWithId const& o) noexcept = default;
                


// Fields

 Ice::NoteCutFloorLightStreakTileEffectSpawner __declspec(property(get=__get__noteCutFloorLightStreakTileEffectSpawner, put=__set__noteCutFloorLightStreakTileEffectSpawner))  _noteCutFloorLightStreakTileEffectSpawner;

constexpr void __set__noteCutFloorLightStreakTileEffectSpawner(Ice::NoteCutFloorLightStreakTileEffectSpawner value) ;

constexpr Ice::NoteCutFloorLightStreakTileEffectSpawner __get__noteCutFloorLightStreakTileEffectSpawner() const;


// Methods

/// @brief Method ColorWasSet addr 0x1211dc4 size 0x20 virtual true final false
 void ColorWasSet(UnityEngine::Color color) ;

// Ctor Parameters []
explicit NoteCutFloorLightStreakTileEffectSpawnerLightWithId() ;

/// @brief Method .ctor addr 0x1211de4 size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Ice
NEED_NO_BOX(Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId);
DEFINE_IL2CPP_ARG_TYPE(Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId, "Ice", "NoteCutFloorLightStreakTileEffectSpawnerLightWithId");
