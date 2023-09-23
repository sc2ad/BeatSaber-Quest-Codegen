#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class MultiplayerBadgesModelSO;
}
namespace GlobalNamespace {
class ScoreSyncStateManager;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerCoreInstaller;
}
// Type: ::MultiplayerCoreInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5484))
// CS Name: MultiplayerCoreInstaller
class CORDL_TYPE MultiplayerCoreInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerCoreInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerCoreInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerCoreInstaller(MultiplayerCoreInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerCoreInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerCoreInstaller(MultiplayerCoreInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerCoreInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr MultiplayerCoreInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerCoreInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerCoreInstaller& operator=(MultiplayerCoreInstaller&& o) noexcept = default;
  constexpr MultiplayerCoreInstaller& operator=(MultiplayerCoreInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ScoreSyncStateManager __declspec(property(get=__get__scoreSyncStateManagerPrefab, put=__set__scoreSyncStateManagerPrefab))  _scoreSyncStateManagerPrefab;

constexpr void __set__scoreSyncStateManagerPrefab(GlobalNamespace::ScoreSyncStateManager value) ;

constexpr GlobalNamespace::ScoreSyncStateManager __get__scoreSyncStateManagerPrefab() const;

 GlobalNamespace::MultiplayerBadgesModelSO __declspec(property(get=__get__multiplayerBadgesModel, put=__set__multiplayerBadgesModel))  _multiplayerBadgesModel;

constexpr void __set__multiplayerBadgesModel(GlobalNamespace::MultiplayerBadgesModelSO value) ;

constexpr GlobalNamespace::MultiplayerBadgesModelSO __get__multiplayerBadgesModel() const;

 GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr GlobalNamespace::GameplayCoreSceneSetupData __get__sceneSetupData() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;


// Methods

/// @brief Method InstallBindings addr 0x211a5c0 size 0x61c virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MultiplayerCoreInstaller() ;

/// @brief Method .ctor addr 0x211abdc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerCoreInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerCoreInstaller, "", "MultiplayerCoreInstaller");
