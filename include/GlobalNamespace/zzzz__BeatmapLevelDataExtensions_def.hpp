#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataExtensions;
}
// Type: ::BeatmapLevelDataExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4413))
// CS Name: BeatmapLevelDataExtensions
class CORDL_TYPE BeatmapLevelDataExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapLevelDataExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataExtensions", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelDataExtensions(BeatmapLevelDataExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataExtensions", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelDataExtensions(BeatmapLevelDataExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelDataExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLevelDataExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelDataExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelDataExtensions& operator=(BeatmapLevelDataExtensions&& o) noexcept = default;
  constexpr BeatmapLevelDataExtensions& operator=(BeatmapLevelDataExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method GetDifficultyBeatmap addr 0x21eb17c size 0x418 virtual false final false
static GlobalNamespace::IDifficultyBeatmap GetDifficultyBeatmap(GlobalNamespace::IBeatmapLevelData beatmapLevelData, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method GetDifficultyBeatmapSet addr 0x21eb594 size 0x4a0 virtual false final false
static GlobalNamespace::IDifficultyBeatmapSet GetDifficultyBeatmapSet(GlobalNamespace::IBeatmapLevelData beatmapLevelData, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method GetDifficultyBeatmap addr 0x21eba34 size 0x20 virtual false final false
static GlobalNamespace::IDifficultyBeatmap GetDifficultyBeatmap(GlobalNamespace::IBeatmapLevelData beatmapLevelData, GlobalNamespace::PreviewDifficultyBeatmap previewDifficultyBeatmap) ;

/// @brief Method GetDifficultyBeatmapSet addr 0x21eba54 size 0x478 virtual false final false
static GlobalNamespace::IDifficultyBeatmapSet GetDifficultyBeatmapSet(GlobalNamespace::IBeatmapLevelData beatmapLevelData, ::StringW beatmapCharacteristicName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLevelDataExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataExtensions, "", "BeatmapLevelDataExtensions");
