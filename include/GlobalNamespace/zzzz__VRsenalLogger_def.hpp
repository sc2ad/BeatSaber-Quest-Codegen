#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class VRsenalScoreLogger;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class StringSignal;
}
// Forward declare root types
namespace GlobalNamespace {
class VRsenalLogger;
}
// Type: ::VRsenalLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3996))
// CS Name: VRsenalLogger
class CORDL_TYPE VRsenalLogger : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~VRsenalLogger() = default;

// Ctor Parameters [CppParam { name: "", ty: "VRsenalLogger", modifiers: " const&", def_value: None }]
constexpr VRsenalLogger(VRsenalLogger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VRsenalLogger", modifiers: "&&", def_value: None }]
constexpr VRsenalLogger(VRsenalLogger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VRsenalLogger(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VRsenalLogger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VRsenalLogger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VRsenalLogger& operator=(VRsenalLogger&& o) noexcept = default;
  constexpr VRsenalLogger& operator=(VRsenalLogger const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get__standardLevelScenesTransitionSetupData, put=__set__standardLevelScenesTransitionSetupData))  _standardLevelScenesTransitionSetupData;

constexpr void __set__standardLevelScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get__standardLevelScenesTransitionSetupData() const;

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get__tutorialScenesTransitionSetupData, put=__set__tutorialScenesTransitionSetupData))  _tutorialScenesTransitionSetupData;

constexpr void __set__tutorialScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get__tutorialScenesTransitionSetupData() const;

 GlobalNamespace::StringSignal __declspec(property(get=__get__playerNameWasEnteredSignal, put=__set__playerNameWasEnteredSignal))  _playerNameWasEnteredSignal;

constexpr void __set__playerNameWasEnteredSignal(GlobalNamespace::StringSignal value) ;

constexpr GlobalNamespace::StringSignal __get__playerNameWasEnteredSignal() const;

 GlobalNamespace::VRsenalScoreLogger __declspec(property(get=__get__vRsenalScoreLoggerPrefab, put=__set__vRsenalScoreLoggerPrefab))  _vRsenalScoreLoggerPrefab;

constexpr void __set__vRsenalScoreLoggerPrefab(GlobalNamespace::VRsenalScoreLogger value) ;

constexpr GlobalNamespace::VRsenalScoreLogger __get__vRsenalScoreLoggerPrefab() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;


// Methods

/// @brief Method Awake addr 0x20afc28 size 0x108 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x20afd30 size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleGameScenesManagerInstallEarlyBindings addr 0x20afe38 size 0x14c virtual false final false
 void HandleGameScenesManagerInstallEarlyBindings(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject::DiContainer container) ;

/// @brief Method HandlePlayerNameWasEntered addr 0x20aff84 size 0x8c virtual false final false
 void HandlePlayerNameWasEntered(::StringW playerName) ;

static GlobalNamespace::VRsenalLogger New_ctor() ;

/// @brief Method .ctor addr 0x20b0010 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VRsenalLogger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRsenalLogger, "", "VRsenalLogger");
