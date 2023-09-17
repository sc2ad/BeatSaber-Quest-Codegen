#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectData;
}
// Type: ::BeatmapObjectData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14901))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14932))
// CS Name: BeatmapObjectData
class CORDL_TYPE BeatmapObjectData : public ::GlobalNamespace::BeatmapDataItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapObjectData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectData", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectData(BeatmapObjectData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectData", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectData(BeatmapObjectData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectData(void* ptr) noexcept : ::GlobalNamespace::BeatmapDataItem(ptr) {
}


  constexpr BeatmapObjectData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectData& operator=(BeatmapObjectData&& o) noexcept = default;
  constexpr BeatmapObjectData& operator=(BeatmapObjectData const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "subtypeIdentifier", ty: "int32_t", modifiers: "", def_value: None }]
explicit BeatmapObjectData(float_t time, int32_t subtypeIdentifier) ;

/// @brief Method .ctor addr 0xd93b9c size 0x40 virtual false final false
 void _ctor(float_t time, int32_t subtypeIdentifier) ;

/// @brief Method Mirror addr 0x0 size 0xffffffffffffffff virtual true final false
 void Mirror(int32_t lineCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectData, "", "BeatmapObjectData");
