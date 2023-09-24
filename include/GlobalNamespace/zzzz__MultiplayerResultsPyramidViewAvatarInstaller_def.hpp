#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatarInstaller;
}
// Type: ::MultiplayerResultsPyramidViewAvatarInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5336))
// CS Name: MultiplayerResultsPyramidViewAvatarInstaller
class CORDL_TYPE MultiplayerResultsPyramidViewAvatarInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerResultsPyramidViewAvatarInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatarInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerResultsPyramidViewAvatarInstaller(MultiplayerResultsPyramidViewAvatarInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatarInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerResultsPyramidViewAvatarInstaller(MultiplayerResultsPyramidViewAvatarInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerResultsPyramidViewAvatarInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr MultiplayerResultsPyramidViewAvatarInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerResultsPyramidViewAvatarInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerResultsPyramidViewAvatarInstaller& operator=(MultiplayerResultsPyramidViewAvatarInstaller&& o) noexcept = default;
  constexpr MultiplayerResultsPyramidViewAvatarInstaller& operator=(MultiplayerResultsPyramidViewAvatarInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;


// Methods

/// @brief Method InstallBindings addr 0x21014e0 size 0x54 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller New_ctor() ;

/// @brief Method .ctor addr 0x2101534 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsPyramidViewAvatarInstaller, "", "MultiplayerResultsPyramidViewAvatarInstaller");
