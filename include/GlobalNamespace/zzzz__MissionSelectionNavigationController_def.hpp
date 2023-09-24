#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0;
}
namespace GlobalNamespace {
class MissionLevelDetailViewController;
}
namespace GlobalNamespace {
class MissionSelectionMapViewController;
}
namespace GlobalNamespace {
class MissionNode;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0;
}
namespace GlobalNamespace {
class MissionSelectionNavigationController;
}
// Type: ::<>c__DisplayClass11_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5801))
// CS Name: MissionSelectionNavigationController::<>c__DisplayClass11_0
class CORDL_TYPE GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0(GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0(GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0& operator=(GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0&& o) noexcept = default;
  constexpr GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0& operator=(GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionSelectionNavigationController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MissionSelectionNavigationController value) ;

constexpr GlobalNamespace::MissionSelectionNavigationController __get___4__this() const;

 System::Action_1<bool> __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback))  finishedCallback;

constexpr void __set_finishedCallback(System::Action_1<bool> value) ;

constexpr System::Action_1<bool> __get_finishedCallback() const;

 System::Action __declspec(property(get=__get___9__1, put=__set___9__1))  __9__1;

constexpr void __set___9__1(System::Action value) ;

constexpr System::Action __get___9__1() const;


// Methods

static GlobalNamespace::GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0 New_ctor() ;

/// @brief Method .ctor addr 0x2175544 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PresentMissionClearedIfNeeded>b__0 addr 0x2175554 size 0xbc virtual false final false
 void _PresentMissionClearedIfNeeded_b__0() ;

/// @brief Method <PresentMissionClearedIfNeeded>b__1 addr 0x2175610 size 0x20 virtual false final false
 void _PresentMissionClearedIfNeeded_b__1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionSelectionNavigationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5802))
// CS Name: MissionSelectionNavigationController
class CORDL_TYPE MissionSelectionNavigationController : public HMUI::NavigationController {
public:
// Declarations
using __c__DisplayClass11_0 = GlobalNamespace::GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~MissionSelectionNavigationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionSelectionNavigationController", modifiers: " const&", def_value: None }]
constexpr MissionSelectionNavigationController(MissionSelectionNavigationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionSelectionNavigationController", modifiers: "&&", def_value: None }]
constexpr MissionSelectionNavigationController(MissionSelectionNavigationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionSelectionNavigationController(void* ptr) noexcept : HMUI::NavigationController(ptr) {
}


  constexpr MissionSelectionNavigationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionSelectionNavigationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionSelectionNavigationController& operator=(MissionSelectionNavigationController&& o) noexcept = default;
  constexpr MissionSelectionNavigationController& operator=(MissionSelectionNavigationController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MissionSelectionMapViewController __declspec(property(get=__get__missionSelectionMapViewController, put=__set__missionSelectionMapViewController))  _missionSelectionMapViewController;

constexpr void __set__missionSelectionMapViewController(GlobalNamespace::MissionSelectionMapViewController value) ;

constexpr GlobalNamespace::MissionSelectionMapViewController __get__missionSelectionMapViewController() const;

 GlobalNamespace::MissionLevelDetailViewController __declspec(property(get=__get__missionLevelDetailViewController, put=__set__missionLevelDetailViewController))  _missionLevelDetailViewController;

constexpr void __set__missionLevelDetailViewController(GlobalNamespace::MissionLevelDetailViewController value) ;

constexpr GlobalNamespace::MissionLevelDetailViewController __get__missionLevelDetailViewController() const;

 System::Action_1<GlobalNamespace::MissionSelectionNavigationController> __declspec(property(get=__get_didPressPlayButtonEvent, put=__set_didPressPlayButtonEvent))  didPressPlayButtonEvent;

constexpr void __set_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionSelectionNavigationController> value) ;

constexpr System::Action_1<GlobalNamespace::MissionSelectionNavigationController> __get_didPressPlayButtonEvent() const;


// Properties

 GlobalNamespace::MissionNode __declspec(property(get=get_selectedMissionNode))  selectedMissionNode;


// Methods

/// @brief Method add_didPressPlayButtonEvent addr 0x2174fa4 size 0xb0 virtual false final false
 void add_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionSelectionNavigationController> value) ;

/// @brief Method remove_didPressPlayButtonEvent addr 0x2175054 size 0xb0 virtual false final false
 void remove_didPressPlayButtonEvent(System::Action_1<GlobalNamespace::MissionSelectionNavigationController> value) ;

/// @brief Method get_selectedMissionNode addr 0x2175104 size 0x1c virtual false final false
 GlobalNamespace::MissionNode get_selectedMissionNode() ;

/// @brief Method DidActivate addr 0x2175120 size 0x174 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2175294 size 0x104 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleMissionSelectionMapViewControllerDidSelectMissionLevel addr 0x2175398 size 0x74 virtual false final false
 void HandleMissionSelectionMapViewControllerDidSelectMissionLevel(GlobalNamespace::MissionSelectionMapViewController viewController, GlobalNamespace::MissionNode _missionNode) ;

/// @brief Method HandleMissionLevelDetailViewControllerDidPressPlayButton addr 0x217540c size 0x20 virtual false final false
 void HandleMissionLevelDetailViewControllerDidPressPlayButton(GlobalNamespace::MissionLevelDetailViewController viewController) ;

/// @brief Method PresentMissionClearedIfNeeded addr 0x217542c size 0x118 virtual false final false
 void PresentMissionClearedIfNeeded(System::Action_1<bool> finishedCallback) ;

static GlobalNamespace::MissionSelectionNavigationController New_ctor() ;

/// @brief Method .ctor addr 0x217554c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MissionSelectionNavigationController____c__DisplayClass11_0, "", "MissionSelectionNavigationController/<>c__DisplayClass11_0");
NEED_NO_BOX(GlobalNamespace::MissionSelectionNavigationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionSelectionNavigationController, "", "MissionSelectionNavigationController");
