#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class LevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace BeatmapEditor3D {
class BeatmapEditorStandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class CreditsScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class BeatmapDataCache;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0;
}
// Type: ::<>c__DisplayClass28_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6125))
// CS Name: MenuTransitionsHelper::<>c__DisplayClass28_0
class CORDL_TYPE ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper __get___4__this() const;

 ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get_standardLevelScenesTransitionSetupData, put=__set_standardLevelScenesTransitionSetupData))  standardLevelScenesTransitionSetupData;

constexpr void __set_standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get_standardLevelScenesTransitionSetupData() const;

 ::GlobalNamespace::LevelCompletionResults __declspec(property(get=__get_levelCompletionResults, put=__set_levelCompletionResults))  levelCompletionResults;

constexpr void __set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults value) ;

constexpr ::GlobalNamespace::LevelCompletionResults __get_levelCompletionResults() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0() ;

/// @brief Method .ctor addr 0x21d2de0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleMainGameSceneDidFinish>b__0 addr 0x21d3854 size 0x38 virtual false final false
 void _HandleMainGameSceneDidFinish_b__0(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass29_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6126))
// CS Name: MenuTransitionsHelper::<>c__DisplayClass29_0
class CORDL_TYPE ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper __get___4__this() const;

 ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __declspec(property(get=__get_multiplayerLevelScenesTransitionSetupData, put=__set_multiplayerLevelScenesTransitionSetupData))  multiplayerLevelScenesTransitionSetupData;

constexpr void __set_multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __get_multiplayerLevelScenesTransitionSetupData() const;

 ::GlobalNamespace::MultiplayerResultsData __declspec(property(get=__get_multiplayerResultsData, put=__set_multiplayerResultsData))  multiplayerResultsData;

constexpr void __set_multiplayerResultsData(::GlobalNamespace::MultiplayerResultsData value) ;

constexpr ::GlobalNamespace::MultiplayerResultsData __get_multiplayerResultsData() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0() ;

/// @brief Method .ctor addr 0x21d2fb8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleMultiplayerLevelDidFinish>b__0 addr 0x21d388c size 0x38 virtual false final false
 void _HandleMultiplayerLevelDidFinish_b__0(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass30_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6127))
// CS Name: MenuTransitionsHelper::<>c__DisplayClass30_0
class CORDL_TYPE ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper __get___4__this() const;

 ::GlobalNamespace::DisconnectedReason __declspec(property(get=__get_disconnectedReason, put=__set_disconnectedReason))  disconnectedReason;

constexpr void __set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) ;

constexpr ::GlobalNamespace::DisconnectedReason __get_disconnectedReason() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0() ;

/// @brief Method .ctor addr 0x21d3148 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleMultiplayerLevelDidDisconnect>b__0 addr 0x21d38c4 size 0x38 virtual false final false
 void _HandleMultiplayerLevelDidDisconnect_b__0(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass31_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6128))
// CS Name: MenuTransitionsHelper::<>c__DisplayClass31_0
class CORDL_TYPE ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper __get___4__this() const;

 ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get_missionLevelScenesTransitionSetupData, put=__set_missionLevelScenesTransitionSetupData))  missionLevelScenesTransitionSetupData;

constexpr void __set_missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get_missionLevelScenesTransitionSetupData() const;

 ::GlobalNamespace::MissionCompletionResults __declspec(property(get=__get_missionCompletionResults, put=__set_missionCompletionResults))  missionCompletionResults;

constexpr void __set_missionCompletionResults(::GlobalNamespace::MissionCompletionResults value) ;

constexpr ::GlobalNamespace::MissionCompletionResults __get_missionCompletionResults() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0() ;

/// @brief Method .ctor addr 0x21d3310 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleMissionLevelSceneDidFinish>b__0 addr 0x21d38fc size 0x38 virtual false final false
 void _HandleMissionLevelSceneDidFinish_b__0(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass32_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6129))
// CS Name: MenuTransitionsHelper::<>c__DisplayClass32_0
class CORDL_TYPE ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType __declspec(property(get=__get_endState, put=__set_endState))  endState;

constexpr void __set_endState(::GlobalNamespace::____GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType __get_endState() const;

 ::GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper __get___4__this() const;

 ::GlobalNamespace::TutorialScenesTransitionSetupDataSO __declspec(property(get=__get_tutorialSceneTransitionSetupData, put=__set_tutorialSceneTransitionSetupData))  tutorialSceneTransitionSetupData;

constexpr void __set_tutorialSceneTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO __get_tutorialSceneTransitionSetupData() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0() ;

/// @brief Method .ctor addr 0x21d345c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleTutorialSceneDidFinish>b__0 addr 0x21d3934 size 0x3c virtual false final false
 void _HandleTutorialSceneDidFinish_b__0(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass35_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6130))
// CS Name: MenuTransitionsHelper::<>c__DisplayClass35_0
class CORDL_TYPE ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0& operator=(____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0 const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::MenuTransitionsHelper value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper __get___4__this() const;

 ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get_beatmapEditorStandardLevelScenesTransitionSetupData, put=__set_beatmapEditorStandardLevelScenesTransitionSetupData))  beatmapEditorStandardLevelScenesTransitionSetupData;

constexpr void __set_beatmapEditorStandardLevelScenesTransitionSetupData(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO value) ;

constexpr ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO __get_beatmapEditorStandardLevelScenesTransitionSetupData() const;

 ::GlobalNamespace::LevelCompletionResults __declspec(property(get=__get_levelCompletionResults, put=__set_levelCompletionResults))  levelCompletionResults;

constexpr void __set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults value) ;

constexpr ::GlobalNamespace::LevelCompletionResults __get_levelCompletionResults() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0() ;

/// @brief Method .ctor addr 0x21d3778 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleBeatmapEditorGameSceneDidFinish>b__0 addr 0x21d3970 size 0x30 virtual false final false
 void _HandleBeatmapEditorGameSceneDidFinish_b__0(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MenuTransitionsHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6131))
// CS Name: MenuTransitionsHelper
class CORDL_TYPE MenuTransitionsHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass35_0 = ::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0;

using __c__DisplayClass32_0 = ::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0;

using __c__DisplayClass31_0 = ::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0;

using __c__DisplayClass30_0 = ::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0;

using __c__DisplayClass29_0 = ::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0;

using __c__DisplayClass28_0 = ::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~MenuTransitionsHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper", modifiers: " const&", def_value: None }]
constexpr MenuTransitionsHelper(MenuTransitionsHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper", modifiers: "&&", def_value: None }]
constexpr MenuTransitionsHelper(MenuTransitionsHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuTransitionsHelper(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MenuTransitionsHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuTransitionsHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuTransitionsHelper& operator=(MenuTransitionsHelper&& o) noexcept = default;
  constexpr MenuTransitionsHelper& operator=(MenuTransitionsHelper const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO __declspec(property(get=__get__appInitScenesTransitionSetupDataContainer, put=__set__appInitScenesTransitionSetupDataContainer))  _appInitScenesTransitionSetupDataContainer;

constexpr void __set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO value) ;

constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO __get__appInitScenesTransitionSetupDataContainer() const;

 ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__standardLevelScenesTransitionSetupData, put=__set__standardLevelScenesTransitionSetupData))  _standardLevelScenesTransitionSetupData;

constexpr void __set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__standardLevelScenesTransitionSetupData() const;

 ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __declspec(property(get=__get__multiplayerLevelScenesTransitionSetupData, put=__set__multiplayerLevelScenesTransitionSetupData))  _multiplayerLevelScenesTransitionSetupData;

constexpr void __set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __get__multiplayerLevelScenesTransitionSetupData() const;

 ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get__missionLevelScenesTransitionSetupData, put=__set__missionLevelScenesTransitionSetupData))  _missionLevelScenesTransitionSetupData;

constexpr void __set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get__missionLevelScenesTransitionSetupData() const;

 ::GlobalNamespace::TutorialScenesTransitionSetupDataSO __declspec(property(get=__get__tutorialScenesTransitionSetupData, put=__set__tutorialScenesTransitionSetupData))  _tutorialScenesTransitionSetupData;

constexpr void __set__tutorialScenesTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO __get__tutorialScenesTransitionSetupData() const;

 ::GlobalNamespace::CreditsScenesTransitionSetupDataSO __declspec(property(get=__get__creditsScenesTransitionSetupData, put=__set__creditsScenesTransitionSetupData))  _creditsScenesTransitionSetupData;

constexpr void __set__creditsScenesTransitionSetupData(::GlobalNamespace::CreditsScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::CreditsScenesTransitionSetupDataSO __get__creditsScenesTransitionSetupData() const;

 ::GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 ::GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager value) ;

constexpr ::GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 ::GlobalNamespace::BeatmapDataCache __declspec(property(get=__get__beatmapDataCache, put=__set__beatmapDataCache))  _beatmapDataCache;

constexpr void __set__beatmapDataCache(::GlobalNamespace::BeatmapDataCache value) ;

constexpr ::GlobalNamespace::BeatmapDataCache __get__beatmapDataCache() const;

 ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> __declspec(property(get=__get__standardLevelFinishedCallback, put=__set__standardLevelFinishedCallback))  _standardLevelFinishedCallback;

constexpr void __set__standardLevelFinishedCallback(::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> value) ;

constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> __get__standardLevelFinishedCallback() const;

 ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> __declspec(property(get=__get__standardLevelRestartedCallback, put=__set__standardLevelRestartedCallback))  _standardLevelRestartedCallback;

constexpr void __set__standardLevelRestartedCallback(::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> value) ;

constexpr ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> __get__standardLevelRestartedCallback() const;

 ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> __declspec(property(get=__get__multiplayerLevelFinishedCallback, put=__set__multiplayerLevelFinishedCallback))  _multiplayerLevelFinishedCallback;

constexpr void __set__multiplayerLevelFinishedCallback(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> value) ;

constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> __get__multiplayerLevelFinishedCallback() const;

 ::System::Action_1<::GlobalNamespace::DisconnectedReason> __declspec(property(get=__get__multiplayerDidDisconnectCallback, put=__set__multiplayerDidDisconnectCallback))  _multiplayerDidDisconnectCallback;

constexpr void __set__multiplayerDidDisconnectCallback(::System::Action_1<::GlobalNamespace::DisconnectedReason> value) ;

constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason> __get__multiplayerDidDisconnectCallback() const;

 ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> __declspec(property(get=__get__missionLevelFinishedCallback, put=__set__missionLevelFinishedCallback))  _missionLevelFinishedCallback;

constexpr void __set__missionLevelFinishedCallback(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> value) ;

constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> __get__missionLevelFinishedCallback() const;

 ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> __declspec(property(get=__get__missionLevelRestartedCallback, put=__set__missionLevelRestartedCallback))  _missionLevelRestartedCallback;

constexpr void __set__missionLevelRestartedCallback(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> value) ;

constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> __get__missionLevelRestartedCallback() const;

 ::System::Action __declspec(property(get=__get__beatmapEditorFinishedCallback, put=__set__beatmapEditorFinishedCallback))  _beatmapEditorFinishedCallback;

constexpr void __set__beatmapEditorFinishedCallback(::System::Action value) ;

constexpr ::System::Action __get__beatmapEditorFinishedCallback() const;

 ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> __declspec(property(get=__get__beatmapEditorGameplayLevelFinishedCallback, put=__set__beatmapEditorGameplayLevelFinishedCallback))  _beatmapEditorGameplayLevelFinishedCallback;

constexpr void __set__beatmapEditorGameplayLevelFinishedCallback(::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> value) ;

constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> __get__beatmapEditorGameplayLevelFinishedCallback() const;


// Methods

/// @brief Method OnDestroy addr 0x21d0e10 size 0x25c virtual false final false
 void OnDestroy() ;

/// @brief Method StartStandardLevel addr 0x21d11cc size 0x50 virtual false final false
 void StartStandardLevel(::StringW gameMode, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme overrideColorScheme, ::GlobalNamespace::ColorScheme beatmapOverrideColorScheme, ::GlobalNamespace::GameplayModifiers gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::GlobalNamespace::PracticeSettings practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused, ::System::Action beforeSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> levelFinishedCallback, ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> levelRestartedCallback) ;

/// @brief Method StartStandardLevel addr 0x21d121c size 0x178 virtual false final false
 void StartStandardLevel(::StringW gameMode, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme overrideColorScheme, ::GlobalNamespace::ColorScheme beatmapOverrideColorScheme, ::GlobalNamespace::GameplayModifiers gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::GlobalNamespace::PracticeSettings practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused, ::System::Action beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer> afterSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> levelFinishedCallback, ::System::Action_2<::GlobalNamespace::LevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> levelRestartedCallback) ;

/// @brief Method StartMissionLevel addr 0x21d1998 size 0x180 virtual false final false
 void StartMissionLevel(::StringW missionId, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::ColorScheme overrideColorScheme, ::GlobalNamespace::GameplayModifiers gameplayModifiers, ::ArrayW<::GlobalNamespace::MissionObjective> missionObjectives, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::System::Action beforeSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> levelFinishedCallback, ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO,::GlobalNamespace::MissionCompletionResults> levelRestartedCallback) ;

/// @brief Method StartMultiplayerLevel addr 0x21d2034 size 0x3c virtual false final false
 void StartMultiplayerLevel(::StringW gameMode, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::ColorScheme overrideColorScheme, ::GlobalNamespace::GameplayModifiers gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::GlobalNamespace::PracticeSettings practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, ::System::Action beforeSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> levelFinishedCallback, ::System::Action_1<::GlobalNamespace::DisconnectedReason> didDisconnectCallback) ;

/// @brief Method StartMultiplayerLevel addr 0x21d2070 size 0x1f4 virtual false final false
 void StartMultiplayerLevel(::StringW gameMode, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::ColorScheme overrideColorScheme, ::GlobalNamespace::GameplayModifiers gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::GlobalNamespace::PracticeSettings practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, ::System::Action beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer> afterSceneSwitchCallback, ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO,::GlobalNamespace::MultiplayerResultsData> levelFinishedCallback, ::System::Action_1<::GlobalNamespace::DisconnectedReason> didDisconnectCallback) ;

/// @brief Method StartTutorial addr 0x21d2694 size 0x108 virtual false final false
 void StartTutorial(::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::System::Action beforeSceneSwitchCallback) ;

/// @brief Method ShowCredits addr 0x21d2acc size 0xf8 virtual false final false
 void ShowCredits() ;

/// @brief Method StartBeatmapEditor addr 0x21d2bc4 size 0x4 virtual false final false
 void StartBeatmapEditor(::System::Action beatmapEditorFinishedCallback) ;

/// @brief Method StartBeatmapEditorStandardLevel addr 0x21d2bc8 size 0x4 virtual false final false
 void StartBeatmapEditorStandardLevel(::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, ::GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, ::GlobalNamespace::GameplayModifiers gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, ::GlobalNamespace::PracticeSettings practiceSettings, ::GlobalNamespace::ColorScheme colorScheme, bool useFirstPersonFlyingController, ::System::Action beforeSceneSwitchCallback, ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO,::GlobalNamespace::LevelCompletionResults> levelFinishedCallback) ;

/// @brief Method RestartGame addr 0x21d2bcc size 0x60 virtual false final false
 void RestartGame(::System::Action_1<::Zenject::DiContainer> finishCallback) ;

/// @brief Method HandleMainGameSceneDidFinish addr 0x21d2c2c size 0x1b4 virtual false final false
 void HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

/// @brief Method HandleMultiplayerLevelDidFinish addr 0x21d2de8 size 0x1d0 virtual false final false
 void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::MultiplayerResultsData multiplayerResultsData) ;

/// @brief Method HandleMultiplayerLevelDidDisconnect addr 0x21d2fc0 size 0x188 virtual false final false
 void HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO multiplayerLevelScenesTransitionSetupData, ::GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method HandleMissionLevelSceneDidFinish addr 0x21d3150 size 0x1c0 virtual false final false
 void HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, ::GlobalNamespace::MissionCompletionResults missionCompletionResults) ;

/// @brief Method HandleTutorialSceneDidFinish addr 0x21d3318 size 0x144 virtual false final false
 void HandleTutorialSceneDidFinish(::GlobalNamespace::TutorialScenesTransitionSetupDataSO tutorialSceneTransitionSetupData, ::GlobalNamespace::____GlobalNamespace__TutorialScenesTransitionSetupDataSO__TutorialEndStateType endState) ;

/// @brief Method HandleCreditsSceneDidFinish addr 0x21d3464 size 0xb0 virtual false final false
 void HandleCreditsSceneDidFinish(::GlobalNamespace::CreditsScenesTransitionSetupDataSO creditsSceneTransitionSetupData) ;

/// @brief Method HandleBeatmapEditorSceneDidFinish addr 0x21d3514 size 0x130 virtual false final false
 void HandleBeatmapEditorSceneDidFinish(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO beatmapEditorScenesTransitionSetupData) ;

/// @brief Method HandleBeatmapEditorGameSceneDidFinish addr 0x21d3644 size 0x134 virtual false final false
 void HandleBeatmapEditorGameSceneDidFinish(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO beatmapEditorStandardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

// Ctor Parameters []
explicit MenuTransitionsHelper() ;

/// @brief Method .ctor addr 0x21d3830 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleBeatmapEditorSceneDidFinish>b__34_0 addr 0x21d3838 size 0x1c virtual false final false
 void _HandleBeatmapEditorSceneDidFinish_b__34_0(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper, "", "MenuTransitionsHelper");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass28_0, "", "MenuTransitionsHelper/<>c__DisplayClass28_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass29_0, "", "MenuTransitionsHelper/<>c__DisplayClass29_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass30_0, "", "MenuTransitionsHelper/<>c__DisplayClass30_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass31_0, "", "MenuTransitionsHelper/<>c__DisplayClass31_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass32_0, "", "MenuTransitionsHelper/<>c__DisplayClass32_0");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MenuTransitionsHelper____c__DisplayClass35_0, "", "MenuTransitionsHelper/<>c__DisplayClass35_0");
