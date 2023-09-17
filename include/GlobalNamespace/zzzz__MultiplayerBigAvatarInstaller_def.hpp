#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace {
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SaberManager__InitData;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBigAvatarInstaller;
}
// Type: ::MultiplayerBigAvatarInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5291))
// CS Name: MultiplayerBigAvatarInstaller
class CORDL_TYPE MultiplayerBigAvatarInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerBigAvatarInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerBigAvatarInstaller(MultiplayerBigAvatarInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerBigAvatarInstaller(MultiplayerBigAvatarInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBigAvatarInstaller(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr MultiplayerBigAvatarInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBigAvatarInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBigAvatarInstaller& operator=(MultiplayerBigAvatarInstaller&& o) noexcept = default;
  constexpr MultiplayerBigAvatarInstaller& operator=(MultiplayerBigAvatarInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer value) ;

constexpr ::GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;

 ::GlobalNamespace::____GlobalNamespace__SaberManager__InitData __declspec(property(get=__get__saberManagerInitData, put=__set__saberManagerInitData))  _saberManagerInitData;

constexpr void __set__saberManagerInitData(::GlobalNamespace::____GlobalNamespace__SaberManager__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__SaberManager__InitData __get__saberManagerInitData() const;

 ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __declspec(property(get=__get__playerSpecificSettings, put=__set__playerSpecificSettings))  _playerSpecificSettings;

constexpr void __set__playerSpecificSettings(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel value) ;

constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __get__playerSpecificSettings() const;


// Methods

/// @brief Method InstallBindings addr 0x20f05e4 size 0x224 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MultiplayerBigAvatarInstaller() ;

/// @brief Method .ctor addr 0x20f0808 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBigAvatarInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBigAvatarInstaller, "", "MultiplayerBigAvatarInstaller");
