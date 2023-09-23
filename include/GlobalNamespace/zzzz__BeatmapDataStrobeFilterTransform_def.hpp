#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class EnvironmentIntensityReductionOptions;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataStrobeFilterTransform;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData;
}
// Type: ::StrobeStreakData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4162))
// CS Name: BeatmapDataStrobeFilterTransform::StrobeStreakData
class CORDL_TYPE GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData(GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData(GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData& operator=(GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData& operator=(GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_isActive, put=__set_isActive))  isActive;

constexpr void __set_isActive(bool value) ;

constexpr bool __get_isActive() const;

 float_t __declspec(property(get=__get_strobeStartTime, put=__set_strobeStartTime))  strobeStartTime;

constexpr void __set_strobeStartTime(float_t value) ;

constexpr float_t __get_strobeStartTime() const;

 GlobalNamespace::EnvironmentColorType __declspec(property(get=__get_startColorType, put=__set_startColorType))  startColorType;

constexpr void __set_startColorType(GlobalNamespace::EnvironmentColorType value) ;

constexpr GlobalNamespace::EnvironmentColorType __get_startColorType() const;

 float_t __declspec(property(get=__get_lastSwitchTime, put=__set_lastSwitchTime))  lastSwitchTime;

constexpr void __set_lastSwitchTime(float_t value) ;

constexpr float_t __get_lastSwitchTime() const;

 GlobalNamespace::EnvironmentColorType __declspec(property(get=__get_lastColorType, put=__set_lastColorType))  lastColorType;

constexpr void __set_lastColorType(GlobalNamespace::EnvironmentColorType value) ;

constexpr GlobalNamespace::EnvironmentColorType __get_lastColorType() const;

 bool __declspec(property(get=__get_lastIsOn, put=__set_lastIsOn))  lastIsOn;

constexpr void __set_lastIsOn(bool value) ;

constexpr bool __get_lastIsOn() const;

 GlobalNamespace::BasicBeatmapEventData __declspec(property(get=__get_originalBasicBeatmapEventData, put=__set_originalBasicBeatmapEventData))  originalBasicBeatmapEventData;

constexpr void __set_originalBasicBeatmapEventData(GlobalNamespace::BasicBeatmapEventData value) ;

constexpr GlobalNamespace::BasicBeatmapEventData __get_originalBasicBeatmapEventData() const;

 bool __declspec(property(get=__get__foundFirstColoredEventData, put=__set__foundFirstColoredEventData))  _foundFirstColoredEventData;

constexpr void __set__foundFirstColoredEventData(bool value) ;

constexpr bool __get__foundFirstColoredEventData() const;


// Methods

/// @brief Method StartPotentialStrobe addr 0x21baef8 size 0x98 virtual false final false
 void StartPotentialStrobe(GlobalNamespace::BasicBeatmapEventData startBasicBeatmapEventData) ;

/// @brief Method AddStrobeData addr 0x21bae20 size 0x94 virtual false final false
 void AddStrobeData(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

// Ctor Parameters []
explicit GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData() ;

/// @brief Method .ctor addr 0x21bad94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDataStrobeFilterTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4163))
// CS Name: BeatmapDataStrobeFilterTransform
class CORDL_TYPE BeatmapDataStrobeFilterTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using StrobeStreakData = GlobalNamespace::GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataStrobeFilterTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataStrobeFilterTransform", modifiers: " const&", def_value: None }]
constexpr BeatmapDataStrobeFilterTransform(BeatmapDataStrobeFilterTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataStrobeFilterTransform", modifiers: "&&", def_value: None }]
constexpr BeatmapDataStrobeFilterTransform(BeatmapDataStrobeFilterTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataStrobeFilterTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataStrobeFilterTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataStrobeFilterTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataStrobeFilterTransform& operator=(BeatmapDataStrobeFilterTransform&& o) noexcept = default;
  constexpr BeatmapDataStrobeFilterTransform& operator=(BeatmapDataStrobeFilterTransform const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxSecondsToConsiderStrobe offset 0
static constexpr float_t  kMaxSecondsToConsiderStrobe{0.1};


// Methods

/// @brief Method CreateTransformedData addr 0x21ba478 size 0x91c virtual false final false
static GlobalNamespace::IReadonlyBeatmapData CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData beatmapData, GlobalNamespace::EnvironmentIntensityReductionOptions environmentIntensityReductionOptions) ;

/// @brief Method GetOnEventDataValue addr 0x21baeb4 size 0x24 virtual false final false
static int32_t GetOnEventDataValue(GlobalNamespace::EnvironmentColorType lightColorType) ;

/// @brief Method GetFlashAndFadeToBlackEventDataValue addr 0x21baed8 size 0x20 virtual false final false
static int32_t GetFlashAndFadeToBlackEventDataValue(GlobalNamespace::EnvironmentColorType lightColorType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataStrobeFilterTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataStrobeFilterTransform, "", "BeatmapDataStrobeFilterTransform");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapDataStrobeFilterTransform__StrobeStreakData, "", "BeatmapDataStrobeFilterTransform/StrobeStreakData");
