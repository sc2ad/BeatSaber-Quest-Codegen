#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyAvatarInstaller;
}
// Type: ::LobbyAvatarInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4088))
// CS Name: LobbyAvatarInstaller
class CORDL_TYPE LobbyAvatarInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LobbyAvatarInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyAvatarInstaller", modifiers: " const&", def_value: None }]
constexpr LobbyAvatarInstaller(LobbyAvatarInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LobbyAvatarInstaller", modifiers: "&&", def_value: None }]
constexpr LobbyAvatarInstaller(LobbyAvatarInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LobbyAvatarInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr LobbyAvatarInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LobbyAvatarInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LobbyAvatarInstaller& operator=(LobbyAvatarInstaller&& o) noexcept = default;
  constexpr LobbyAvatarInstaller& operator=(LobbyAvatarInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;


// Methods

/// @brief Method InstallBindings addr 0x20c2f94 size 0x54 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit LobbyAvatarInstaller() ;

/// @brief Method .ctor addr 0x20c2fe8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LobbyAvatarInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyAvatarInstaller, "", "LobbyAvatarInstaller");
