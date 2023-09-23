#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class ObjectiveListItem;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class ObjectiveListItemsList;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class LevelBar;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0;
}
namespace GlobalNamespace {
class MissionLevelDetailViewController;
}
// Type: ::<>c__DisplayClass14_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5791))
// CS Name: MissionLevelDetailViewController::<>c__DisplayClass14_0
class CORDL_TYPE GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0(GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0(GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0& operator=(GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0&& o) noexcept = default;
  constexpr GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0& operator=(GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::MissionObjective> __declspec(property(get=__get_missionObjectives, put=__set_missionObjectives))  missionObjectives;

constexpr void __set_missionObjectives(::ArrayW<GlobalNamespace::MissionObjective> value) ;

constexpr ::ArrayW<GlobalNamespace::MissionObjective> __get_missionObjectives() const;

 System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=__get_modifierParamsList, put=__set_modifierParamsList))  modifierParamsList;

constexpr void __set_modifierParamsList(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> __get_modifierParamsList() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0() ;

/// @brief Method .ctor addr 0x2173368 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RefreshContent>b__0 addr 0x2173398 size 0x1f0 virtual false final false
 void _RefreshContent_b__0(int32_t idx, GlobalNamespace::ObjectiveListItem objectiveListItem) ;

/// @brief Method <RefreshContent>b__1 addr 0x2173588 size 0x7c virtual false final false
 void _RefreshContent_b__1(int32_t idx, GlobalNamespace::GameplayModifierInfoListItem gameplayModifierInfoListItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionLevelDetailViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5792))
// CS Name: MissionLevelDetailViewController
class CORDL_TYPE MissionLevelDetailViewController : public HMUI::ViewController {
public:
// Declarations
using __c__DisplayClass14_0 = GlobalNamespace::GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MissionLevelDetailViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelDetailViewController", modifiers: " const&", def_value: None }]
constexpr MissionLevelDetailViewController(MissionLevelDetailViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelDetailViewController", modifiers: "&&", def_value: None }]
constexpr MissionLevelDetailViewController(MissionLevelDetailViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionLevelDetailViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr MissionLevelDetailViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionLevelDetailViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionLevelDetailViewController& operator=(MissionLevelDetailViewController&& o) noexcept = default;
  constexpr MissionLevelDetailViewController& operator=(MissionLevelDetailViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;

 UnityEngine::UI::Button __declspec(property(get=__get__playButton, put=__set__playButton))  _playButton;

constexpr void __set__playButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__playButton() const;

 GlobalNamespace::LevelBar __declspec(property(get=__get__levelBar, put=__set__levelBar))  _levelBar;

constexpr void __set__levelBar(GlobalNamespace::LevelBar value) ;

constexpr GlobalNamespace::LevelBar __get__levelBar() const;

 GlobalNamespace::ObjectiveListItemsList __declspec(property(get=__get__objectiveListItems, put=__set__objectiveListItems))  _objectiveListItems;

constexpr void __set__objectiveListItems(GlobalNamespace::ObjectiveListItemsList value) ;

constexpr GlobalNamespace::ObjectiveListItemsList __get__objectiveListItems() const;

 GlobalNamespace::GameplayModifierInfoListItemsList __declspec(property(get=__get__gameplayModifierInfoListItemsList, put=__set__gameplayModifierInfoListItemsList))  _gameplayModifierInfoListItemsList;

constexpr void __set__gameplayModifierInfoListItemsList(GlobalNamespace::GameplayModifierInfoListItemsList value) ;

constexpr GlobalNamespace::GameplayModifierInfoListItemsList __get__gameplayModifierInfoListItemsList() const;

 UnityEngine::GameObject __declspec(property(get=__get__modifiersPanelGO, put=__set__modifiersPanelGO))  _modifiersPanelGO;

constexpr void __set__modifiersPanelGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__modifiersPanelGO() const;

 System::Action_1<GlobalNamespace::MissionLevelDetailViewController> __declspec(property(get=__get_didPressPlayButtonEvent, put=__set_didPressPlayButtonEvent))  didPressPlayButtonEvent;

constexpr void __set_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionLevelDetailViewController> value) ;

constexpr System::Action_1<GlobalNamespace::MissionLevelDetailViewController> __get_didPressPlayButtonEvent() const;

 GlobalNamespace::MissionNode __declspec(property(get=__get__missionNode, put=__set__missionNode))  _missionNode;

constexpr void __set__missionNode(GlobalNamespace::MissionNode value) ;

constexpr GlobalNamespace::MissionNode __get__missionNode() const;


// Properties

 GlobalNamespace::MissionNode __declspec(property(get=get_missionNode))  missionNode;


// Methods

/// @brief Method add_didPressPlayButtonEvent addr 0x2172f3c size 0xb0 virtual false final false
 void add_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionLevelDetailViewController> value) ;

/// @brief Method remove_didPressPlayButtonEvent addr 0x2172fec size 0xb0 virtual false final false
 void remove_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionLevelDetailViewController> value) ;

/// @brief Method get_missionNode addr 0x217309c size 0x8 virtual false final false
 GlobalNamespace::MissionNode get_missionNode() ;

/// @brief Method Setup addr 0x21730a4 size 0x2c virtual false final false
 void Setup(GlobalNamespace::MissionNode missionNode) ;

/// @brief Method DidActivate addr 0x21732bc size 0xac virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method RefreshContent addr 0x21730d0 size 0x1ec virtual false final false
 void RefreshContent() ;

/// @brief Method PlayButtonPressed addr 0x2173370 size 0x20 virtual false final false
 void PlayButtonPressed() ;

// Ctor Parameters []
explicit MissionLevelDetailViewController() ;

/// @brief Method .ctor addr 0x2173390 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionLevelDetailViewController____c__DisplayClass14_0, "", "MissionLevelDetailViewController/<>c__DisplayClass14_0");
NEED_NO_BOX(GlobalNamespace::MissionLevelDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelDetailViewController, "", "MissionLevelDetailViewController");
