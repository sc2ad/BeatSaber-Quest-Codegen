#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventTypeExtensions;
}
// Type: ::BeatmapEventTypeExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14910))
// CS Name: BeatmapEventTypeExtensions
class CORDL_TYPE BeatmapEventTypeExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapEventTypeExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventTypeExtensions", modifiers: " const&", def_value: None }]
constexpr BeatmapEventTypeExtensions(BeatmapEventTypeExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventTypeExtensions", modifiers: "&&", def_value: None }]
constexpr BeatmapEventTypeExtensions(BeatmapEventTypeExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventTypeExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapEventTypeExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEventTypeExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEventTypeExtensions& operator=(BeatmapEventTypeExtensions&& o) noexcept = default;
  constexpr BeatmapEventTypeExtensions& operator=(BeatmapEventTypeExtensions const& o) noexcept = default;
                


// Fields

/// @brief Field kLights1 offset 0
static GlobalNamespace::BasicBeatmapEventType const kLights1;

/// @brief Field kLights2 offset 0
static GlobalNamespace::BasicBeatmapEventType const kLights2;

/// @brief Field kLights3 offset 0
static GlobalNamespace::BasicBeatmapEventType const kLights3;

/// @brief Field kLights4 offset 0
static GlobalNamespace::BasicBeatmapEventType const kLights4;

/// @brief Field kLights5 offset 0
static GlobalNamespace::BasicBeatmapEventType const kLights5;

/// @brief Field kColorBoost offset 0
static GlobalNamespace::BasicBeatmapEventType const kColorBoost;

/// @brief Field kRotateRings offset 0
static GlobalNamespace::BasicBeatmapEventType const kRotateRings;

/// @brief Field kCompressExpand offset 0
static GlobalNamespace::BasicBeatmapEventType const kCompressExpand;

/// @brief Field kLegacyEarlySpawnRotation offset 0
static GlobalNamespace::BasicBeatmapEventType const kLegacyEarlySpawnRotation;

/// @brief Field kLegacyLateSpawnRotation offset 0
static GlobalNamespace::BasicBeatmapEventType const kLegacyLateSpawnRotation;


// Methods

/// @brief Method IsCoreLightIntensityChangeEvent addr 0xd91994 size 0x1c virtual false final false
static bool IsCoreLightIntensityChangeEvent(GlobalNamespace::BasicBeatmapEventType basicBeatmapEventType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEventTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventTypeExtensions, "", "BeatmapEventTypeExtensions");
