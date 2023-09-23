#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataNoArrowsTransform;
}
// Type: ::BeatmapDataNoArrowsTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4157))
// CS Name: BeatmapDataNoArrowsTransform
class CORDL_TYPE BeatmapDataNoArrowsTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataNoArrowsTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataNoArrowsTransform", modifiers: " const&", def_value: None }]
constexpr BeatmapDataNoArrowsTransform(BeatmapDataNoArrowsTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataNoArrowsTransform", modifiers: "&&", def_value: None }]
constexpr BeatmapDataNoArrowsTransform(BeatmapDataNoArrowsTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataNoArrowsTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataNoArrowsTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataNoArrowsTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataNoArrowsTransform& operator=(BeatmapDataNoArrowsTransform&& o) noexcept = default;
  constexpr BeatmapDataNoArrowsTransform& operator=(BeatmapDataNoArrowsTransform const& o) noexcept = default;
                


// Methods

/// @brief Method CreateTransformedData addr 0x21b9bc4 size 0xec virtual false final false
static GlobalNamespace::IReadonlyBeatmapData CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData beatmapData) ;

/// @brief Method <CreateTransformedData>g__ProcessData|0_0 addr 0x21b9cb0 size 0xe4 virtual false final false
static GlobalNamespace::BeatmapDataItem _CreateTransformedData_g__ProcessData_0_0(GlobalNamespace::BeatmapDataItem beatmapDataItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapDataNoArrowsTransform);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataNoArrowsTransform, "", "BeatmapDataNoArrowsTransform");
