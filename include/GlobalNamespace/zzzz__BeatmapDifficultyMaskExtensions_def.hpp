#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultyMaskExtensions;
}
// Type: ::BeatmapDifficultyMaskExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14905))
// CS Name: BeatmapDifficultyMaskExtensions
class CORDL_TYPE BeatmapDifficultyMaskExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDifficultyMaskExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMaskExtensions", modifiers: " const&", def_value: None }]
constexpr BeatmapDifficultyMaskExtensions(BeatmapDifficultyMaskExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMaskExtensions", modifiers: "&&", def_value: None }]
constexpr BeatmapDifficultyMaskExtensions(BeatmapDifficultyMaskExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDifficultyMaskExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDifficultyMaskExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDifficultyMaskExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDifficultyMaskExtensions& operator=(BeatmapDifficultyMaskExtensions&& o) noexcept = default;
  constexpr BeatmapDifficultyMaskExtensions& operator=(BeatmapDifficultyMaskExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToMask addr 0xd91158 size 0xc virtual false final false
static ::GlobalNamespace::BeatmapDifficultyMask ToMask(::GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method FromMask addr 0xd91164 size 0x54 virtual false final false
static ::GlobalNamespace::BeatmapDifficulty FromMask(::GlobalNamespace::BeatmapDifficultyMask mask) ;

/// @brief Method LocalizedKey addr 0xd911b8 size 0xdc virtual false final false
static ::StringW LocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask) ;

/// @brief Method ShortLocalizedKey addr 0xd91294 size 0xdc virtual false final false
static ::StringW ShortLocalizedKey(::GlobalNamespace::BeatmapDifficultyMask mask) ;

/// @brief Method Contains addr 0xd91370 size 0x18 virtual false final false
static bool Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method Contains addr 0xd91388 size 0x10 virtual false final false
static bool Contains(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other) ;

/// @brief Method DifferenceFrom addr 0xd91398 size 0x3c virtual false final false
static int32_t DifferenceFrom(::GlobalNamespace::BeatmapDifficultyMask mask, ::GlobalNamespace::BeatmapDifficultyMask other) ;

/// @brief Method ToHexString addr 0xd91408 size 0x5c virtual false final false
static ::StringW ToHexString(::GlobalNamespace::BeatmapDifficultyMask mask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultyMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyMaskExtensions, "", "BeatmapDifficultyMaskExtensions");
