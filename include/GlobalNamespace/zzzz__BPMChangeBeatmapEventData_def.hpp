#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BPMChangeBeatmapEventData;
}
// Type: ::BPMChangeBeatmapEventData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14914))
// CS Name: BPMChangeBeatmapEventData
class CORDL_TYPE BPMChangeBeatmapEventData : public GlobalNamespace::BeatmapEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BPMChangeBeatmapEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BPMChangeBeatmapEventData", modifiers: " const&", def_value: None }]
constexpr BPMChangeBeatmapEventData(BPMChangeBeatmapEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BPMChangeBeatmapEventData", modifiers: "&&", def_value: None }]
constexpr BPMChangeBeatmapEventData(BPMChangeBeatmapEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BPMChangeBeatmapEventData(void* ptr) noexcept : GlobalNamespace::BeatmapEventData(ptr) {
}


  constexpr BPMChangeBeatmapEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BPMChangeBeatmapEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BPMChangeBeatmapEventData& operator=(BPMChangeBeatmapEventData&& o) noexcept = default;
  constexpr BPMChangeBeatmapEventData& operator=(BPMChangeBeatmapEventData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_bpm, put=__set_bpm))  bpm;

constexpr void __set_bpm(float_t value) ;

constexpr float_t __get_bpm() const;


// Methods

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: None }]
explicit BPMChangeBeatmapEventData(float_t time, float_t bpm) ;

/// @brief Method .ctor addr 0xd91a2c size 0x44 virtual false final false
 void _ctor(float_t time, float_t bpm) ;

/// @brief Method GetCopy addr 0xd91a70 size 0x8c virtual true final false
 GlobalNamespace::BeatmapDataItem GetCopy() ;

/// @brief Method GetDefault addr 0xd91afc size 0x8 virtual true final false
 GlobalNamespace::BeatmapEventData GetDefault() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BPMChangeBeatmapEventData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BPMChangeBeatmapEventData, "", "BPMChangeBeatmapEventData");
