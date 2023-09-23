#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEventDataLightsExtensions;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues;
}
// Type: ::LightSwitchEventEffectDataValues
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14907))
// CS Name: BeatmapEventDataLightsExtensions::LightSwitchEventEffectDataValues
class CORDL_TYPE GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues(GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues(GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues& operator=(GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues& operator=(GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues const& o) noexcept = default;
                


// Fields

/// @brief Field kOff offset 0
static constexpr int32_t  kOff{0};

/// @brief Field kOnA offset 0
static constexpr int32_t  kOnA{1};

/// @brief Field kOnB offset 0
static constexpr int32_t  kOnB{5};

/// @brief Field kOnW offset 0
static constexpr int32_t  kOnW{9};

/// @brief Field kHighlightA offset 0
static constexpr int32_t  kHighlightA{2};

/// @brief Field kHighlightB offset 0
static constexpr int32_t  kHighlightB{6};

/// @brief Field kHighlightW offset 0
static constexpr int32_t  kHighlightW{10};

/// @brief Field kFlashAndFadeToBlack offset 0
static constexpr int32_t  kFlashAndFadeToBlack{-1};

/// @brief Field kFlashAndFadeToBlackA offset 0
static constexpr int32_t  kFlashAndFadeToBlackA{3};

/// @brief Field kFlashAndFadeToBlackB offset 0
static constexpr int32_t  kFlashAndFadeToBlackB{7};

/// @brief Field kFlashAndFadeToBlackW offset 0
static constexpr int32_t  kFlashAndFadeToBlackW{11};

/// @brief Field kFadeA offset 0
static constexpr int32_t  kFadeA{4};

/// @brief Field kFadeB offset 0
static constexpr int32_t  kFadeB{8};

/// @brief Field kFadeW offset 0
static constexpr int32_t  kFadeW{12};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapEventDataLightsExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14908))
// CS Name: BeatmapEventDataLightsExtensions
class CORDL_TYPE BeatmapEventDataLightsExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LightSwitchEventEffectDataValues = GlobalNamespace::GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapEventDataLightsExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataLightsExtensions", modifiers: " const&", def_value: None }]
constexpr BeatmapEventDataLightsExtensions(BeatmapEventDataLightsExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEventDataLightsExtensions", modifiers: "&&", def_value: None }]
constexpr BeatmapEventDataLightsExtensions(BeatmapEventDataLightsExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEventDataLightsExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapEventDataLightsExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEventDataLightsExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEventDataLightsExtensions& operator=(BeatmapEventDataLightsExtensions&& o) noexcept = default;
  constexpr BeatmapEventDataLightsExtensions& operator=(BeatmapEventDataLightsExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method LightColorTypeFromEventDataValue addr 0xd91894 size 0x18 virtual false final false
static GlobalNamespace::EnvironmentColorType LightColorTypeFromEventDataValue(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method GetLightColorTypeFromEventDataValue addr 0xd918ac size 0x2c virtual false final false
static GlobalNamespace::EnvironmentColorType GetLightColorTypeFromEventDataValue(int32_t beatmapEventValue) ;

/// @brief Method HasLightFadeEventDataValue addr 0xd918d8 size 0x34 virtual false final false
static bool HasLightFadeEventDataValue(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method HasFixedDurationLightSwitchEventDataValue addr 0xd9190c size 0x4c virtual false final false
static bool HasFixedDurationLightSwitchEventDataValue(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method HasFixedDurationLightSwitchEventDataValue addr 0xd91958 size 0x3c virtual false final false
static bool HasFixedDurationLightSwitchEventDataValue(int32_t beatmapEventValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapEventDataLightsExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEventDataLightsExtensions, "", "BeatmapEventDataLightsExtensions");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapEventDataLightsExtensions__LightSwitchEventEffectDataValues, "", "BeatmapEventDataLightsExtensions/LightSwitchEventEffectDataValues");
