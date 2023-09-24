#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_def.hpp"
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayingMultiplayerRichPresenceData;
}
// Type: ::PlayingMultiplayerRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4785))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4786))
// CS Name: PlayingMultiplayerRichPresenceData
class CORDL_TYPE PlayingMultiplayerRichPresenceData : public GlobalNamespace::InMultiplayerRichPresenceData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PlayingMultiplayerRichPresenceData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayingMultiplayerRichPresenceData", modifiers: " const&", def_value: None }]
constexpr PlayingMultiplayerRichPresenceData(PlayingMultiplayerRichPresenceData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayingMultiplayerRichPresenceData", modifiers: "&&", def_value: None }]
constexpr PlayingMultiplayerRichPresenceData(PlayingMultiplayerRichPresenceData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayingMultiplayerRichPresenceData(void* ptr) noexcept : GlobalNamespace::InMultiplayerRichPresenceData(ptr) {
}


  constexpr PlayingMultiplayerRichPresenceData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayingMultiplayerRichPresenceData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayingMultiplayerRichPresenceData& operator=(PlayingMultiplayerRichPresenceData&& o) noexcept = default;
  constexpr PlayingMultiplayerRichPresenceData& operator=(PlayingMultiplayerRichPresenceData const& o) noexcept = default;
                


// Fields

/// @brief Field kPlayingMultiplayerLobbyRichPresenceLocalizationKey offset 0
static constexpr ::ConstString  kPlayingMultiplayerLobbyRichPresenceLocalizationKey{u"PLAYING_MULTIPLAYER_PRESENCE"};


// Methods

static GlobalNamespace::PlayingMultiplayerRichPresenceData New_ctor(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, bool atMaxPartySize) ;

/// @brief Method .ctor addr 0x2229d4c size 0x8c virtual false final false
 void _ctor(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, bool atMaxPartySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayingMultiplayerRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingMultiplayerRichPresenceData, "", "PlayingMultiplayerRichPresenceData");
