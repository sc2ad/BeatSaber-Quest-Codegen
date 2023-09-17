#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevel;
}
// Type: ::IBeatmapLevel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4411))
// CS Name: IBeatmapLevel
class CORDL_TYPE IBeatmapLevel : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IPreviewBeatmapLevel
constexpr operator  ::GlobalNamespace::IPreviewBeatmapLevel() const noexcept;

~IBeatmapLevel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatmapLevel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::GlobalNamespace::IBeatmapLevelData __declspec(property(get=get_beatmapLevelData))  beatmapLevelData;


// Methods

/// @brief Method get_beatmapLevelData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IBeatmapLevelData get_beatmapLevelData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevel, "", "IBeatmapLevel");
