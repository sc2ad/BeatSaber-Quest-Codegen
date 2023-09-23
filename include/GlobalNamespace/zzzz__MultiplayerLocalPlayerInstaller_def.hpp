#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class MultiplayerLevelSceneSetupData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalPlayerInstaller;
}
// Type: ::MultiplayerLocalPlayerInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5486))
// CS Name: MultiplayerLocalPlayerInstaller
class CORDL_TYPE MultiplayerLocalPlayerInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerLocalPlayerInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalPlayerInstaller(MultiplayerLocalPlayerInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalPlayerInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalPlayerInstaller(MultiplayerLocalPlayerInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalPlayerInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr MultiplayerLocalPlayerInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalPlayerInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalPlayerInstaller& operator=(MultiplayerLocalPlayerInstaller&& o) noexcept = default;
  constexpr MultiplayerLocalPlayerInstaller& operator=(MultiplayerLocalPlayerInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerLevelSceneSetupData __declspec(property(get=__get__levelSceneSetupData, put=__set__levelSceneSetupData))  _levelSceneSetupData;

constexpr void __set__levelSceneSetupData(GlobalNamespace::MultiplayerLevelSceneSetupData value) ;

constexpr GlobalNamespace::MultiplayerLevelSceneSetupData __get__levelSceneSetupData() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::MultiplayerPlayerStartState __declspec(property(get=__get__startState, put=__set__startState))  _startState;

constexpr void __set__startState(GlobalNamespace::MultiplayerPlayerStartState value) ;

constexpr GlobalNamespace::MultiplayerPlayerStartState __get__startState() const;


// Methods

/// @brief Method InstallBindings addr 0x211acd8 size 0x238 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MultiplayerLocalPlayerInstaller() ;

/// @brief Method .ctor addr 0x211af10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalPlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalPlayerInstaller, "", "MultiplayerLocalPlayerInstaller");
