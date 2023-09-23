#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class SliderData;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapObjectSpawner;
}
// Type: ::IBeatmapObjectSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4847))
// CS Name: IBeatmapObjectSpawner
class CORDL_TYPE IBeatmapObjectSpawner : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBeatmapObjectSpawner() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatmapObjectSpawner(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ProcessObstacleData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessObstacleData(GlobalNamespace::ObstacleData obstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation) ;

/// @brief Method ProcessNoteData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessNoteData(GlobalNamespace::NoteData noteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNoteBehaviour) ;

/// @brief Method ProcessSliderData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessSliderData(GlobalNamespace::SliderData sliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IBeatmapObjectSpawner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapObjectSpawner, "", "IBeatmapObjectSpawner");
