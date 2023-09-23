#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class MissionObjectiveChecker;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
namespace GlobalNamespace {
class MissionObjectiveResult;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MissionObjectiveCheckersManager__InitData;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5194))
// CS Name: MissionObjectiveCheckersManager::InitData
class CORDL_TYPE GlobalNamespace__MissionObjectiveCheckersManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__MissionObjectiveCheckersManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionObjectiveCheckersManager__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionObjectiveCheckersManager__InitData(GlobalNamespace__MissionObjectiveCheckersManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionObjectiveCheckersManager__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionObjectiveCheckersManager__InitData(GlobalNamespace__MissionObjectiveCheckersManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionObjectiveCheckersManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionObjectiveCheckersManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionObjectiveCheckersManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionObjectiveCheckersManager__InitData& operator=(GlobalNamespace__MissionObjectiveCheckersManager__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__MissionObjectiveCheckersManager__InitData& operator=(GlobalNamespace__MissionObjectiveCheckersManager__InitData const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::MissionObjective> __declspec(property(get=__get_missionObjectives, put=__set_missionObjectives))  missionObjectives;

constexpr void __set_missionObjectives(::ArrayW<GlobalNamespace::MissionObjective> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionObjective> __get_missionObjectives() const;


// Methods

// Ctor Parameters [CppParam { name: "missionObjectives", ty: "::ArrayW<GlobalNamespace::MissionObjective>", modifiers: "", def_value: None }]
explicit GlobalNamespace__MissionObjectiveCheckersManager__InitData(::ArrayW<GlobalNamespace::MissionObjective> missionObjectives) ;

/// @brief Method .ctor addr 0x20d7b44 size 0x28 virtual false final false
 void _ctor(::ArrayW<GlobalNamespace::MissionObjective> missionObjectives) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionObjectiveCheckersManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5195))
// CS Name: MissionObjectiveCheckersManager
class CORDL_TYPE MissionObjectiveCheckersManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__MissionObjectiveCheckersManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MissionObjectiveCheckersManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveCheckersManager", modifiers: " const&", def_value: None }]
constexpr MissionObjectiveCheckersManager(MissionObjectiveCheckersManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveCheckersManager", modifiers: "&&", def_value: None }]
constexpr MissionObjectiveCheckersManager(MissionObjectiveCheckersManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionObjectiveCheckersManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionObjectiveCheckersManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionObjectiveCheckersManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionObjectiveCheckersManager& operator=(MissionObjectiveCheckersManager&& o) noexcept = default;
  constexpr MissionObjectiveCheckersManager& operator=(MissionObjectiveCheckersManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::MissionObjectiveChecker> __declspec(property(get=__get__missionObjectiveCheckers, put=__set__missionObjectiveCheckers))  _missionObjectiveCheckers;

constexpr void __set__missionObjectiveCheckers(::ArrayW<GlobalNamespace::MissionObjectiveChecker> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionObjectiveChecker> __get__missionObjectiveCheckers() const;

 GlobalNamespace::GlobalNamespace__MissionObjectiveCheckersManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__MissionObjectiveCheckersManager__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__MissionObjectiveCheckersManager__InitData __get__initData() const;

 GlobalNamespace::ILevelEndActions __declspec(property(get=__get__gameplayManager, put=__set__gameplayManager))  _gameplayManager;

constexpr void __set__gameplayManager(GlobalNamespace::ILevelEndActions value) ;

constexpr GlobalNamespace::ILevelEndActions __get__gameplayManager() const;

 System::Action __declspec(property(get=__get_objectiveDidFailEvent, put=__set_objectiveDidFailEvent))  objectiveDidFailEvent;

constexpr void __set_objectiveDidFailEvent(System::Action value) ;

constexpr System::Action __get_objectiveDidFailEvent() const;

 System::Action __declspec(property(get=__get_objectiveWasClearedEvent, put=__set_objectiveWasClearedEvent))  objectiveWasClearedEvent;

constexpr void __set_objectiveWasClearedEvent(System::Action value) ;

constexpr System::Action __get_objectiveWasClearedEvent() const;

 System::Action __declspec(property(get=__get_objectivesListDidChangeEvent, put=__set_objectivesListDidChangeEvent))  objectivesListDidChangeEvent;

constexpr void __set_objectivesListDidChangeEvent(System::Action value) ;

constexpr System::Action __get_objectivesListDidChangeEvent() const;

 ::ArrayW<GlobalNamespace::MissionObjectiveChecker> __declspec(property(get=__get__activeMissionObjectiveCheckers, put=__set__activeMissionObjectiveCheckers))  _activeMissionObjectiveCheckers;

constexpr void __set__activeMissionObjectiveCheckers(::ArrayW<GlobalNamespace::MissionObjectiveChecker> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionObjectiveChecker> __get__activeMissionObjectiveCheckers() const;


// Properties

 ::ArrayW<GlobalNamespace::MissionObjectiveChecker> __declspec(property(get=get_activeMissionObjectiveCheckers))  activeMissionObjectiveCheckers;


// Methods

/// @brief Method add_objectiveDidFailEvent addr 0x20d6dd8 size 0x9c virtual false final false
 void add_objectiveDidFailEvent(System::Action value) ;

/// @brief Method remove_objectiveDidFailEvent addr 0x20d6e74 size 0x9c virtual false final false
 void remove_objectiveDidFailEvent(System::Action value) ;

/// @brief Method add_objectiveWasClearedEvent addr 0x20d6f10 size 0x9c virtual false final false
 void add_objectiveWasClearedEvent(System::Action value) ;

/// @brief Method remove_objectiveWasClearedEvent addr 0x20d6fac size 0x9c virtual false final false
 void remove_objectiveWasClearedEvent(System::Action value) ;

/// @brief Method add_objectivesListDidChangeEvent addr 0x20d7048 size 0x9c virtual false final false
 void add_objectivesListDidChangeEvent(System::Action value) ;

/// @brief Method remove_objectivesListDidChangeEvent addr 0x20d70e4 size 0x9c virtual false final false
 void remove_objectivesListDidChangeEvent(System::Action value) ;

/// @brief Method get_activeMissionObjectiveCheckers addr 0x20d7180 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::MissionObjectiveChecker> get_activeMissionObjectiveCheckers() ;

/// @brief Method Start addr 0x20d7188 size 0x5cc virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20d7754 size 0x1a4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleMissionObjectiveCheckerStatusDidChange addr 0x20d78f8 size 0x4c virtual false final false
 void HandleMissionObjectiveCheckerStatusDidChange(GlobalNamespace::MissionObjectiveChecker missionObjectiveChecker) ;

/// @brief Method GetMissionObjectiveChecker addr 0x20d7944 size 0xc8 virtual false final false
 GlobalNamespace::MissionObjectiveChecker GetMissionObjectiveChecker(GlobalNamespace::MissionObjectiveTypeSO missionObjectiveType) ;

/// @brief Method GetResults addr 0x20d3f9c size 0x194 virtual false final false
 ::ArrayW<GlobalNamespace::MissionObjectiveResult> GetResults() ;

/// @brief Method HandleLevelFailed addr 0x20d7a0c size 0x4 virtual false final false
 void HandleLevelFailed() ;

/// @brief Method HandleLevelFinished addr 0x20d7ae8 size 0x4 virtual false final false
 void HandleLevelFinished() ;

/// @brief Method StopChecking addr 0x20d7a10 size 0xd8 virtual false final false
 void StopChecking() ;

// Ctor Parameters []
explicit MissionObjectiveCheckersManager() ;

/// @brief Method .ctor addr 0x20d7aec size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionObjectiveCheckersManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionObjectiveCheckersManager__InitData, "", "MissionObjectiveCheckersManager/InitData");
NEED_NO_BOX(GlobalNamespace::MissionObjectiveCheckersManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveCheckersManager, "", "MissionObjectiveCheckersManager");
