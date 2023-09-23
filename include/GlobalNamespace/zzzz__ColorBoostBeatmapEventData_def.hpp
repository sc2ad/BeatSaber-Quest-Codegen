#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
// Type: ::ColorBoostBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14915))
// CS Name: ColorBoostBeatmapEventData
class CORDL_TYPE ColorBoostBeatmapEventData : public GlobalNamespace::BeatmapEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ColorBoostBeatmapEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorBoostBeatmapEventData", modifiers: " const&", def_value: None }]
constexpr ColorBoostBeatmapEventData(ColorBoostBeatmapEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorBoostBeatmapEventData", modifiers: "&&", def_value: None }]
constexpr ColorBoostBeatmapEventData(ColorBoostBeatmapEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorBoostBeatmapEventData(void* ptr) noexcept : GlobalNamespace::BeatmapEventData(ptr) {
}


  constexpr ColorBoostBeatmapEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorBoostBeatmapEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorBoostBeatmapEventData& operator=(ColorBoostBeatmapEventData&& o) noexcept = default;
  constexpr ColorBoostBeatmapEventData& operator=(ColorBoostBeatmapEventData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_boostColorsAreOn, put=__set_boostColorsAreOn))  boostColorsAreOn;

constexpr void __set_boostColorsAreOn(bool value) ;

constexpr bool __get_boostColorsAreOn() const;

static GlobalNamespace::ColorBoostBeatmapEventData __declspec(property(get=__get__defaultCopy, put=__set__defaultCopy))  _defaultCopy;

static void __set__defaultCopy(GlobalNamespace::ColorBoostBeatmapEventData value) ;

static GlobalNamespace::ColorBoostBeatmapEventData __get__defaultCopy() ;


// Methods

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "boostColorsAreOn", ty: "bool", modifiers: "", def_value: None }]
explicit ColorBoostBeatmapEventData(float_t time, bool boostColorsAreOn) ;

/// @brief Method .ctor addr 0xd91b04 size 0x4c virtual false final false
 void _ctor(float_t time, bool boostColorsAreOn) ;

/// @brief Method GetCopy addr 0xd91b50 size 0x8c virtual true final false
 GlobalNamespace::BeatmapDataItem GetCopy() ;

/// @brief Method GetDefault addr 0xd91bdc size 0x58 virtual true final false
 GlobalNamespace::BeatmapEventData GetDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorBoostBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorBoostBeatmapEventData, "", "ColorBoostBeatmapEventData");
