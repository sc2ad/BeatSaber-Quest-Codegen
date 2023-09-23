#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class MultiplayerLobbyAvatarController;
}
namespace GlobalNamespace {
class MultiplayerLobbyAvatarPlace;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyInstaller;
}
// Type: ::MultiplayerLobbyInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5485))
// CS Name: MultiplayerLobbyInstaller
class CORDL_TYPE MultiplayerLobbyInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MultiplayerLobbyInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyInstaller(MultiplayerLobbyInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyInstaller(MultiplayerLobbyInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr MultiplayerLobbyInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyInstaller& operator=(MultiplayerLobbyInstaller&& o) noexcept = default;
  constexpr MultiplayerLobbyInstaller& operator=(MultiplayerLobbyInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerLobbyAvatarController __declspec(property(get=__get__multiplayerLobbyAvatarControllerPrefab, put=__set__multiplayerLobbyAvatarControllerPrefab))  _multiplayerLobbyAvatarControllerPrefab;

constexpr void __set__multiplayerLobbyAvatarControllerPrefab(GlobalNamespace::MultiplayerLobbyAvatarController value) ;

constexpr GlobalNamespace::MultiplayerLobbyAvatarController __get__multiplayerLobbyAvatarControllerPrefab() const;

 GlobalNamespace::MultiplayerLobbyAvatarPlace __declspec(property(get=__get__multiplayerAvatarPlacePrefab, put=__set__multiplayerAvatarPlacePrefab))  _multiplayerAvatarPlacePrefab;

constexpr void __set__multiplayerAvatarPlacePrefab(GlobalNamespace::MultiplayerLobbyAvatarPlace value) ;

constexpr GlobalNamespace::MultiplayerLobbyAvatarPlace __get__multiplayerAvatarPlacePrefab() const;


// Methods

/// @brief Method InstallBindings addr 0x211abe4 size 0xec virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MultiplayerLobbyInstaller() ;

/// @brief Method .ctor addr 0x211acd0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLobbyInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyInstaller, "", "MultiplayerLobbyInstaller");
