#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
// Type: ::IBeatmapObjectSpawnController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4846))
// CS Name: IBeatmapObjectSpawnController
class CORDL_TYPE IBeatmapObjectSpawnController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBeatmapObjectSpawnController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatmapObjectSpawnController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_noteLinesCount))  noteLinesCount;

 float_t __declspec(property(get=get_jumpOffsetY))  jumpOffsetY;

 float_t __declspec(property(get=get_moveDuration))  moveDuration;

 float_t __declspec(property(get=get_jumpDuration))  jumpDuration;

 float_t __declspec(property(get=get_jumpDistance))  jumpDistance;

 float_t __declspec(property(get=get_verticalLayerDistance))  verticalLayerDistance;

 float_t __declspec(property(get=get_noteJumpMovementSpeed))  noteJumpMovementSpeed;

 float_t __declspec(property(get=get_noteLinesDistance))  noteLinesDistance;

 GlobalNamespace::BeatmapObjectSpawnMovementData __declspec(property(get=get_beatmapObjectSpawnMovementData))  beatmapObjectSpawnMovementData;

 bool __declspec(property(get=get_isInitialized))  isInitialized;


// Methods

/// @brief Method get_noteLinesCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_noteLinesCount() ;

/// @brief Method get_jumpOffsetY addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_jumpOffsetY() ;

/// @brief Method get_moveDuration addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_moveDuration() ;

/// @brief Method get_jumpDuration addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_jumpDuration() ;

/// @brief Method get_jumpDistance addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_jumpDistance() ;

/// @brief Method get_verticalLayerDistance addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_verticalLayerDistance() ;

/// @brief Method get_noteJumpMovementSpeed addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_noteJumpMovementSpeed() ;

/// @brief Method get_noteLinesDistance addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_noteLinesDistance() ;

/// @brief Method get_beatmapObjectSpawnMovementData addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BeatmapObjectSpawnMovementData get_beatmapObjectSpawnMovementData() ;

/// @brief Method get_isInitialized addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isInitialized() ;

/// @brief Method add_didInitEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_didInitEvent(System::Action value) ;

/// @brief Method remove_didInitEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_didInitEvent(System::Action value) ;

/// @brief Method Get2DNoteOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector2 Get2DNoteOffset(int32_t noteLineIndex, GlobalNamespace::NoteLineLayer noteLineLayer) ;

/// @brief Method JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IBeatmapObjectSpawnController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapObjectSpawnController, "", "IBeatmapObjectSpawnController");
