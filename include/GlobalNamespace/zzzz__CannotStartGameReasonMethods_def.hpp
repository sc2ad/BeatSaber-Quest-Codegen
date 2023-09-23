#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct CannotStartGameReason;
}
// Forward declare root types
namespace GlobalNamespace {
class CannotStartGameReasonMethods;
}
// Type: ::CannotStartGameReasonMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4493))
// CS Name: CannotStartGameReasonMethods
class CORDL_TYPE CannotStartGameReasonMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CannotStartGameReasonMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "CannotStartGameReasonMethods", modifiers: " const&", def_value: None }]
constexpr CannotStartGameReasonMethods(CannotStartGameReasonMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CannotStartGameReasonMethods", modifiers: "&&", def_value: None }]
constexpr CannotStartGameReasonMethods(CannotStartGameReasonMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CannotStartGameReasonMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CannotStartGameReasonMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CannotStartGameReasonMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CannotStartGameReasonMethods& operator=(CannotStartGameReasonMethods&& o) noexcept = default;
  constexpr CannotStartGameReasonMethods& operator=(CannotStartGameReasonMethods const& o) noexcept = default;
                


// Fields

/// @brief Field kAllPlayersSpectating offset 0
static constexpr ::ConstString  kAllPlayersSpectating{u"LABEL_CANT_START_GAME_ALL_PLAYERS_SPECTATING"};

/// @brief Field kNoSongSelected offset 0
static constexpr ::ConstString  kNoSongSelected{u"LABEL_CANT_START_GAME_NO_SONG_SELECTED"};

/// @brief Field kAllPlayersNotInLobby offset 0
static constexpr ::ConstString  kAllPlayersNotInLobby{u"LABEL_CANT_START_GAME_ALL_PLAYERS_NOT_IN_LOBBY"};

/// @brief Field kDoNotOwnSong offset 0
static constexpr ::ConstString  kDoNotOwnSong{u"LABEL_CANT_START_GAME_DO_NOT_OWN_SONG"};


// Methods

/// @brief Method LocalizedKey addr 0x21f2c64 size 0xd8 virtual false final false
static ::StringW LocalizedKey(GlobalNamespace::CannotStartGameReason cannotStartGameReason) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CannotStartGameReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CannotStartGameReasonMethods, "", "CannotStartGameReasonMethods");
