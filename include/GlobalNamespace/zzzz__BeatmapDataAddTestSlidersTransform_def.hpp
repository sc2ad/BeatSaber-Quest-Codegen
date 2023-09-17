#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataAddTestSlidersTransform;
}
// Type: ::BeatmapDataAddTestSlidersTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4154))
// CS Name: BeatmapDataAddTestSlidersTransform
class CORDL_TYPE BeatmapDataAddTestSlidersTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDataAddTestSlidersTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataAddTestSlidersTransform", modifiers: " const&", def_value: None }]
constexpr BeatmapDataAddTestSlidersTransform(BeatmapDataAddTestSlidersTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataAddTestSlidersTransform", modifiers: "&&", def_value: None }]
constexpr BeatmapDataAddTestSlidersTransform(BeatmapDataAddTestSlidersTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataAddTestSlidersTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataAddTestSlidersTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataAddTestSlidersTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataAddTestSlidersTransform& operator=(BeatmapDataAddTestSlidersTransform&& o) noexcept = default;
  constexpr BeatmapDataAddTestSlidersTransform& operator=(BeatmapDataAddTestSlidersTransform const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxTimeDiff offset 0
static constexpr float_t  kMaxTimeDiff{2};


// Methods

/// @brief Method CreateTransformedData addr 0x21b906c size 0x320 virtual false final false
static ::GlobalNamespace::IReadonlyBeatmapData CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData beatmapData) ;

/// @brief Method FindNextSameColorTypeNote addr 0x21b9758 size 0x1ec virtual false final false
static ::GlobalNamespace::NoteData FindNextSameColorTypeNote(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapDataItem> beatmapDataItems, int32_t startIndex, ::GlobalNamespace::ColorType colorType) ;

// Ctor Parameters []
explicit BeatmapDataAddTestSlidersTransform() ;

/// @brief Method .ctor addr 0x21b9944 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataAddTestSlidersTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataAddTestSlidersTransform, "", "BeatmapDataAddTestSlidersTransform");
