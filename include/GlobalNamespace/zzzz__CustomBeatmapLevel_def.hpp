#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class BeatmapLevelData;
}
namespace GlobalNamespace {
class IFilePathSongAudioClipProvider;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class CustomPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomBeatmapLevel;
}
// Type: ::CustomBeatmapLevel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4405))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4403))
// CS Name: CustomBeatmapLevel
class CORDL_TYPE CustomBeatmapLevel : public GlobalNamespace::CustomPreviewBeatmapLevel {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IBeatmapLevel
constexpr operator  GlobalNamespace::IBeatmapLevel() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPreviewBeatmapLevel
constexpr operator  GlobalNamespace::IPreviewBeatmapLevel() const noexcept;

/// @brief Convert operator to GlobalNamespace::IFilePathSongAudioClipProvider
constexpr operator  GlobalNamespace::IFilePathSongAudioClipProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~CustomBeatmapLevel() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevel", modifiers: " const&", def_value: None }]
constexpr CustomBeatmapLevel(CustomBeatmapLevel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomBeatmapLevel", modifiers: "&&", def_value: None }]
constexpr CustomBeatmapLevel(CustomBeatmapLevel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomBeatmapLevel(void* ptr) noexcept : GlobalNamespace::CustomPreviewBeatmapLevel(ptr) {
}


  constexpr CustomBeatmapLevel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomBeatmapLevel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomBeatmapLevel& operator=(CustomBeatmapLevel&& o) noexcept = default;
  constexpr CustomBeatmapLevel& operator=(CustomBeatmapLevel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapLevelData __declspec(property(get=__get__beatmapLevelData, put=__set__beatmapLevelData))  _beatmapLevelData;

constexpr void __set__beatmapLevelData(GlobalNamespace::BeatmapLevelData value) ;

constexpr GlobalNamespace::BeatmapLevelData __get__beatmapLevelData() const;


// Properties

 GlobalNamespace::IBeatmapLevelData __declspec(property(get=get_beatmapLevelData))  beatmapLevelData;

 ::StringW __declspec(property(get=get_songAudioClipPath))  songAudioClipPath;


// Methods

/// @brief Method get_beatmapLevelData addr 0x21e9fdc size 0x8 virtual true final true
 GlobalNamespace::IBeatmapLevelData get_beatmapLevelData() ;

/// @brief Method get_songAudioClipPath addr 0x21e9fe4 size 0x4 virtual true final true
 ::StringW get_songAudioClipPath() ;

// Ctor Parameters [CppParam { name: "customPreviewBeatmapLevel", ty: "GlobalNamespace::CustomPreviewBeatmapLevel", modifiers: "", def_value: None }]
explicit CustomBeatmapLevel(GlobalNamespace::CustomPreviewBeatmapLevel customPreviewBeatmapLevel) ;

/// @brief Method .ctor addr 0x21ea058 size 0xc0 virtual false final false
 void _ctor(GlobalNamespace::CustomPreviewBeatmapLevel customPreviewBeatmapLevel) ;

/// @brief Method SetBeatmapLevelData addr 0x21ea1fc size 0x8 virtual false final false
 void SetBeatmapLevelData(GlobalNamespace::BeatmapLevelData beatmapLevelData) ;

/// @brief Method GetBeatmapLevelColorScheme addr 0x21ea204 size 0x44 virtual false final false
 GlobalNamespace::ColorScheme GetBeatmapLevelColorScheme(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CustomBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomBeatmapLevel, "", "CustomBeatmapLevel");
