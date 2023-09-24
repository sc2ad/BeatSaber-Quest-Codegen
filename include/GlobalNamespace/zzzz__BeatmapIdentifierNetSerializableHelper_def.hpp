#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializableHelper;
}
// Type: ::BeatmapIdentifierNetSerializableHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4359))
// CS Name: BeatmapIdentifierNetSerializableHelper
class CORDL_TYPE BeatmapIdentifierNetSerializableHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapIdentifierNetSerializableHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapIdentifierNetSerializableHelper", modifiers: " const&", def_value: None }]
constexpr BeatmapIdentifierNetSerializableHelper(BeatmapIdentifierNetSerializableHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapIdentifierNetSerializableHelper", modifiers: "&&", def_value: None }]
constexpr BeatmapIdentifierNetSerializableHelper(BeatmapIdentifierNetSerializableHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapIdentifierNetSerializableHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapIdentifierNetSerializableHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapIdentifierNetSerializableHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapIdentifierNetSerializableHelper& operator=(BeatmapIdentifierNetSerializableHelper&& o) noexcept = default;
  constexpr BeatmapIdentifierNetSerializableHelper& operator=(BeatmapIdentifierNetSerializableHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetIdentifier addr 0x21e2194 size 0x298 virtual false final false
static GlobalNamespace::BeatmapIdentifierNetSerializable GetIdentifier(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method HasIdentifier addr 0x21e242c size 0x290 virtual false final false
static bool HasIdentifier(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId) ;

/// @brief Method ToPreviewDifficultyBeatmap addr 0x21e26bc size 0xd0 virtual false final false
static GlobalNamespace::PreviewDifficultyBeatmap ToPreviewDifficultyBeatmap(GlobalNamespace::BeatmapIdentifierNetSerializable beatmapId, GlobalNamespace::BeatmapLevelsModel beatmapLevelsModel, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection) ;

/// @brief Method ToIdentifier addr 0x21e29e8 size 0x120 virtual false final false
static GlobalNamespace::BeatmapIdentifierNetSerializable ToIdentifier(GlobalNamespace::PreviewDifficultyBeatmap previewDifficultyBeatmapLevel) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapIdentifierNetSerializableHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapIdentifierNetSerializableHelper, "", "BeatmapIdentifierNetSerializableHelper");
