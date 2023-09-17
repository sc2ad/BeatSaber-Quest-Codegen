#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataTransformHelper;
}
// Type: ::BeatmapDataTransformHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4164))
// CS Name: BeatmapDataTransformHelper
class CORDL_TYPE BeatmapDataTransformHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataTransformHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataTransformHelper", modifiers: " const&", def_value: None }]
constexpr BeatmapDataTransformHelper(BeatmapDataTransformHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataTransformHelper", modifiers: "&&", def_value: None }]
constexpr BeatmapDataTransformHelper(BeatmapDataTransformHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataTransformHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataTransformHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataTransformHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataTransformHelper& operator=(BeatmapDataTransformHelper&& o) noexcept = default;
  constexpr BeatmapDataTransformHelper& operator=(BeatmapDataTransformHelper const& o) noexcept = default;
                


// Methods

/// @brief Method CreateTransformedBeatmapData addr 0x21baf90 size 0x198 virtual false final false
static ::GlobalNamespace::IReadonlyBeatmapData CreateTransformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData beatmapData, ::GlobalNamespace::IPreviewBeatmapLevel beatmapLevel, ::GlobalNamespace::GameplayModifiers gameplayModifiers, bool leftHanded, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset, ::GlobalNamespace::EnvironmentIntensityReductionOptions environmentIntensityReductionOptions, ::GlobalNamespace::MainSettingsModelSO mainSettingsModel) ;

/// @brief Method AddTestBurstSlider addr 0x21bb220 size 0xe4 virtual false final false
static void AddTestBurstSlider(float_t time, float_t duration, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer, ::GlobalNamespace::NoteCutDirection tailCutDirection, int32_t sliceCount, float_t squishAmount, ::GlobalNamespace::BeatmapData beatmapData) ;

/// @brief Method AddTestSlider addr 0x21bb304 size 0x17c virtual false final false
static void AddTestSlider(float_t time, float_t duration, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headNoteLineLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headControlPointLength, int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailNoteLineLayer, ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailControlPointLength, bool hasHeadNote, bool hasTailNote, ::GlobalNamespace::BeatmapData beatmapData) ;

/// @brief Method IsObstaclesMergingNeeded addr 0x21bb214 size 0xc virtual false final false
static bool IsObstaclesMergingNeeded(::GlobalNamespace::IPreviewBeatmapLevel beatmapLevel, bool screenDisplacementEffectsEnabled) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataTransformHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataTransformHelper, "", "BeatmapDataTransformHelper");
