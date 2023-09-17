#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEnvironmentHelper;
}
// Type: ::BeatmapEnvironmentHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4321))
// CS Name: BeatmapEnvironmentHelper
class CORDL_TYPE BeatmapEnvironmentHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapEnvironmentHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEnvironmentHelper", modifiers: " const&", def_value: None }]
constexpr BeatmapEnvironmentHelper(BeatmapEnvironmentHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEnvironmentHelper", modifiers: "&&", def_value: None }]
constexpr BeatmapEnvironmentHelper(BeatmapEnvironmentHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapEnvironmentHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapEnvironmentHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapEnvironmentHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapEnvironmentHelper& operator=(BeatmapEnvironmentHelper&& o) noexcept = default;
  constexpr BeatmapEnvironmentHelper& operator=(BeatmapEnvironmentHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetEnvironmentInfo addr 0x21da280 size 0x4b4 virtual false final false
static ::GlobalNamespace::EnvironmentInfoSO GetEnvironmentInfo(::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEnvironmentHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEnvironmentHelper, "", "BeatmapEnvironmentHelper");
