#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataZenModeTransform;
}
// Type: ::BeatmapDataZenModeTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4165))
// CS Name: BeatmapDataZenModeTransform
class CORDL_TYPE BeatmapDataZenModeTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataZenModeTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataZenModeTransform", modifiers: " const&", def_value: None }]
constexpr BeatmapDataZenModeTransform(BeatmapDataZenModeTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataZenModeTransform", modifiers: "&&", def_value: None }]
constexpr BeatmapDataZenModeTransform(BeatmapDataZenModeTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataZenModeTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataZenModeTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataZenModeTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataZenModeTransform& operator=(BeatmapDataZenModeTransform&& o) noexcept = default;
  constexpr BeatmapDataZenModeTransform& operator=(BeatmapDataZenModeTransform const& o) noexcept = default;
                


// Methods

/// @brief Method CreateTransformedData addr 0x21bb128 size 0xec virtual false final false
static GlobalNamespace::IReadonlyBeatmapData CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData beatmapData) ;

/// @brief Method <CreateTransformedData>g__ProcessData|0_0 addr 0x21bb480 size 0xb0 virtual false final false
static GlobalNamespace::BeatmapDataItem _CreateTransformedData_g__ProcessData_0_0(GlobalNamespace::BeatmapDataItem beatmapDataItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataZenModeTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataZenModeTransform, "", "BeatmapDataZenModeTransform");
