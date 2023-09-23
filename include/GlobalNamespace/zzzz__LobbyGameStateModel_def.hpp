#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyGameStateModel;
}
// Type: ::LobbyGameStateModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4512))
// CS Name: LobbyGameStateModel
class CORDL_TYPE LobbyGameStateModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LobbyGameStateModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateModel", modifiers: " const&", def_value: None }]
constexpr LobbyGameStateModel(LobbyGameStateModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyGameStateModel", modifiers: "&&", def_value: None }]
constexpr LobbyGameStateModel(LobbyGameStateModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LobbyGameStateModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LobbyGameStateModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LobbyGameStateModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LobbyGameStateModel& operator=(LobbyGameStateModel&& o) noexcept = default;
  constexpr LobbyGameStateModel& operator=(LobbyGameStateModel const& o) noexcept = default;
                


// Fields

 System::Action_1<GlobalNamespace::MultiplayerGameState> __declspec(property(get=__get_gameStateDidChangeEvent, put=__set_gameStateDidChangeEvent))  gameStateDidChangeEvent;

constexpr void __set_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState> value) ;

constexpr System::Action_1<GlobalNamespace::MultiplayerGameState> __get_gameStateDidChangeEvent() const;

 System::Action_1<GlobalNamespace::MultiplayerGameState> __declspec(property(get=__get_gameStateDidChangeAlwaysSentEvent, put=__set_gameStateDidChangeAlwaysSentEvent))  gameStateDidChangeAlwaysSentEvent;

constexpr void __set_gameStateDidChangeAlwaysSentEvent(System::Action_1<GlobalNamespace::MultiplayerGameState> value) ;

constexpr System::Action_1<GlobalNamespace::MultiplayerGameState> __get_gameStateDidChangeAlwaysSentEvent() const;

 GlobalNamespace::MultiplayerGameState __declspec(property(get=__get__gameState, put=__set__gameState))  _gameState;

constexpr void __set__gameState(GlobalNamespace::MultiplayerGameState value) ;

constexpr GlobalNamespace::MultiplayerGameState __get__gameState() const;


// Properties

 GlobalNamespace::MultiplayerGameState __declspec(property(get=get_gameState))  gameState;


// Methods

/// @brief Method get_gameState addr 0x21f891c size 0x8 virtual false final false
 GlobalNamespace::MultiplayerGameState get_gameState() ;

/// @brief Method add_gameStateDidChangeEvent addr 0x21f8924 size 0xb0 virtual false final false
 void add_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState> value) ;

/// @brief Method remove_gameStateDidChangeEvent addr 0x21f89d4 size 0xb0 virtual false final false
 void remove_gameStateDidChangeEvent(System::Action_1<GlobalNamespace::MultiplayerGameState> value) ;

/// @brief Method add_gameStateDidChangeAlwaysSentEvent addr 0x21f8a84 size 0xb0 virtual false final false
 void add_gameStateDidChangeAlwaysSentEvent(System::Action_1<GlobalNamespace::MultiplayerGameState> value) ;

/// @brief Method remove_gameStateDidChangeAlwaysSentEvent addr 0x21f8b34 size 0xb0 virtual false final false
 void remove_gameStateDidChangeAlwaysSentEvent(System::Action_1<GlobalNamespace::MultiplayerGameState> value) ;

/// @brief Method SetGameState addr 0x21f7d48 size 0x8 virtual false final false
 void SetGameState(GlobalNamespace::MultiplayerGameState newGameState) ;

/// @brief Method SetGameStateWithoutNotification addr 0x21f5dd4 size 0x2c virtual false final false
 void SetGameStateWithoutNotification(GlobalNamespace::MultiplayerGameState newGameState) ;

/// @brief Method SetGameState addr 0x21f8be4 size 0x70 virtual false final false
 void SetGameState(GlobalNamespace::MultiplayerGameState newGameState, bool sendNotification) ;

// Ctor Parameters []
explicit LobbyGameStateModel() ;

/// @brief Method .ctor addr 0x21f8c54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LobbyGameStateModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyGameStateModel, "", "LobbyGameStateModel");
