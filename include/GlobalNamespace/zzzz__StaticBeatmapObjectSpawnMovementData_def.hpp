#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticBeatmapObjectSpawnMovementData;
}
// Type: ::StaticBeatmapObjectSpawnMovementData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14962))
// CS Name: StaticBeatmapObjectSpawnMovementData
class CORDL_TYPE StaticBeatmapObjectSpawnMovementData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StaticBeatmapObjectSpawnMovementData() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticBeatmapObjectSpawnMovementData", modifiers: " const&", def_value: None }]
constexpr StaticBeatmapObjectSpawnMovementData(StaticBeatmapObjectSpawnMovementData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticBeatmapObjectSpawnMovementData", modifiers: "&&", def_value: None }]
constexpr StaticBeatmapObjectSpawnMovementData(StaticBeatmapObjectSpawnMovementData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticBeatmapObjectSpawnMovementData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StaticBeatmapObjectSpawnMovementData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticBeatmapObjectSpawnMovementData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticBeatmapObjectSpawnMovementData& operator=(StaticBeatmapObjectSpawnMovementData&& o) noexcept = default;
  constexpr StaticBeatmapObjectSpawnMovementData& operator=(StaticBeatmapObjectSpawnMovementData const& o) noexcept = default;
                


// Fields

/// @brief Field kNoteLinesDistance offset 0
static constexpr float_t  kNoteLinesDistance{0.6};

/// @brief Field kBaseLinesYPos offset 0
static constexpr float_t  kBaseLinesYPos{0.25};

/// @brief Field kUpperLinesYPos offset 0
static constexpr float_t  kUpperLinesYPos{0.85};

/// @brief Field kTopLinesYPos offset 0
static constexpr float_t  kTopLinesYPos{1.45};

/// @brief Field kObstacleVerticalOffset offset 0
static constexpr float_t  kObstacleVerticalOffset{-0.15};


// Properties

static float_t __declspec(property(get=get_layerHeight))  layerHeight;


// Methods

/// @brief Method Get2DNoteOffset addr 0xd98384 size 0x4c virtual false final false
static UnityEngine::Vector2 Get2DNoteOffset(int32_t noteLineIndex, int32_t noteLinesCount, GlobalNamespace::NoteLineLayer noteLineLayer) ;

/// @brief Method LineYPosForLineLayer addr 0xd98768 size 0x24 virtual false final false
static float_t LineYPosForLineLayer(GlobalNamespace::NoteLineLayer lineLayer) ;

/// @brief Method get_layerHeight addr 0xd9878c size 0xc virtual false final false
static float_t get_layerHeight() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StaticBeatmapObjectSpawnMovementData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StaticBeatmapObjectSpawnMovementData, "", "StaticBeatmapObjectSpawnMovementData");
