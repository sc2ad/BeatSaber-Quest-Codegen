#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultyMethods;
}
// Type: ::BeatmapDifficultyMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4358))
// CS Name: BeatmapDifficultyMethods
class CORDL_TYPE BeatmapDifficultyMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDifficultyMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMethods", modifiers: " const&", def_value: None }]
constexpr BeatmapDifficultyMethods(BeatmapDifficultyMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyMethods", modifiers: "&&", def_value: None }]
constexpr BeatmapDifficultyMethods(BeatmapDifficultyMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDifficultyMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDifficultyMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDifficultyMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDifficultyMethods& operator=(BeatmapDifficultyMethods&& o) noexcept = default;
  constexpr BeatmapDifficultyMethods& operator=(BeatmapDifficultyMethods const& o) noexcept = default;
                


// Methods

/// @brief Method Name addr 0x21e200c size 0x9c virtual false final false
static ::StringW Name(::GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method ShortName addr 0x21e20a8 size 0x9c virtual false final false
static ::StringW ShortName(::GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method DefaultRating addr 0x21e2144 size 0x28 virtual false final false
static int32_t DefaultRating(::GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method NoteJumpMovementSpeed addr 0x21e216c size 0x28 virtual false final false
static float_t NoteJumpMovementSpeed(::GlobalNamespace::BeatmapDifficulty difficulty) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultyMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyMethods, "", "BeatmapDifficultyMethods");
