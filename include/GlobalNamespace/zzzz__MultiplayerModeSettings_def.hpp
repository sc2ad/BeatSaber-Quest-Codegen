#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
// Type: ::MultiplayerModeSettings
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4523))
// CS Name: MultiplayerModeSettings
class CORDL_TYPE MultiplayerModeSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerModeSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSettings", modifiers: " const&", def_value: None }]
constexpr MultiplayerModeSettings(MultiplayerModeSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerModeSettings", modifiers: "&&", def_value: None }]
constexpr MultiplayerModeSettings(MultiplayerModeSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerModeSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerModeSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerModeSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerModeSettings& operator=(MultiplayerModeSettings&& o) noexcept = default;
  constexpr MultiplayerModeSettings& operator=(MultiplayerModeSettings const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_createServerPlayersCount, put=__set_createServerPlayersCount))  createServerPlayersCount;

constexpr void __set_createServerPlayersCount(int32_t value) ;

constexpr int32_t __get_createServerPlayersCount() const;

 ::GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=__get_quickPlayBeatmapDifficulty, put=__set_quickPlayBeatmapDifficulty))  quickPlayBeatmapDifficulty;

constexpr void __set_quickPlayBeatmapDifficulty(::GlobalNamespace::BeatmapDifficultyMask value) ;

constexpr ::GlobalNamespace::BeatmapDifficultyMask __get_quickPlayBeatmapDifficulty() const;

 ::StringW __declspec(property(get=__get_quickPlaySongPackMaskSerializedName, put=__set_quickPlaySongPackMaskSerializedName))  quickPlaySongPackMaskSerializedName;

constexpr void __set_quickPlaySongPackMaskSerializedName(::StringW value) ;

constexpr ::StringW __get_quickPlaySongPackMaskSerializedName() const;

 bool __declspec(property(get=__get_quickPlayEnableLevelSelection, put=__set_quickPlayEnableLevelSelection))  quickPlayEnableLevelSelection;

constexpr void __set_quickPlayEnableLevelSelection(bool value) ;

constexpr bool __get_quickPlayEnableLevelSelection() const;


// Methods

// Ctor Parameters []
explicit MultiplayerModeSettings() ;

/// @brief Method .ctor addr 0x2200264 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerModeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerModeSettings, "", "MultiplayerModeSettings");
