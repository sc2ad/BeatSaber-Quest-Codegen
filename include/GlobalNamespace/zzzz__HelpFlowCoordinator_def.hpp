#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__HowToPlayViewController__HowToPlayOptions;
}
namespace GlobalNamespace {
class HelpMenuViewController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class PrivacyPolicyDisplayViewController;
}
namespace GlobalNamespace {
class EulaDisplayViewController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class HealthWarningDisplayViewController;
}
namespace GlobalNamespace {
class HowToPlayViewController;
}
namespace GlobalNamespace {
class PlayerStatisticsViewController;
}
namespace GlobalNamespace {
class HelpNavigationController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class HelpFlowCoordinator;
}
// Type: ::HelpFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13633))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5593))
// CS Name: HelpFlowCoordinator
class CORDL_TYPE HelpFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~HelpFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "HelpFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr HelpFlowCoordinator(HelpFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HelpFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr HelpFlowCoordinator(HelpFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HelpFlowCoordinator(void* ptr) noexcept : ::HMUI::FlowCoordinator(ptr) {
}


  constexpr HelpFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HelpFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HelpFlowCoordinator& operator=(HelpFlowCoordinator&& o) noexcept = default;
  constexpr HelpFlowCoordinator& operator=(HelpFlowCoordinator const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::HelpMenuViewController __declspec(property(get=__get__helpMenuViewController, put=__set__helpMenuViewController))  _helpMenuViewController;

constexpr void __set__helpMenuViewController(::GlobalNamespace::HelpMenuViewController value) ;

constexpr ::GlobalNamespace::HelpMenuViewController __get__helpMenuViewController() const;

 ::GlobalNamespace::HelpNavigationController __declspec(property(get=__get__helpNavigationController, put=__set__helpNavigationController))  _helpNavigationController;

constexpr void __set__helpNavigationController(::GlobalNamespace::HelpNavigationController value) ;

constexpr ::GlobalNamespace::HelpNavigationController __get__helpNavigationController() const;

 ::GlobalNamespace::HowToPlayViewController __declspec(property(get=__get__howToPlayViewController, put=__set__howToPlayViewController))  _howToPlayViewController;

constexpr void __set__howToPlayViewController(::GlobalNamespace::HowToPlayViewController value) ;

constexpr ::GlobalNamespace::HowToPlayViewController __get__howToPlayViewController() const;

 ::GlobalNamespace::HealthWarningDisplayViewController __declspec(property(get=__get__healthWarningDisplayViewController, put=__set__healthWarningDisplayViewController))  _healthWarningDisplayViewController;

constexpr void __set__healthWarningDisplayViewController(::GlobalNamespace::HealthWarningDisplayViewController value) ;

constexpr ::GlobalNamespace::HealthWarningDisplayViewController __get__healthWarningDisplayViewController() const;

 ::GlobalNamespace::PrivacyPolicyDisplayViewController __declspec(property(get=__get__privacyPolicyDisplayViewController, put=__set__privacyPolicyDisplayViewController))  _privacyPolicyDisplayViewController;

constexpr void __set__privacyPolicyDisplayViewController(::GlobalNamespace::PrivacyPolicyDisplayViewController value) ;

constexpr ::GlobalNamespace::PrivacyPolicyDisplayViewController __get__privacyPolicyDisplayViewController() const;

 ::GlobalNamespace::EulaDisplayViewController __declspec(property(get=__get__eulaDisplayViewController, put=__set__eulaDisplayViewController))  _eulaDisplayViewController;

constexpr void __set__eulaDisplayViewController(::GlobalNamespace::EulaDisplayViewController value) ;

constexpr ::GlobalNamespace::EulaDisplayViewController __get__eulaDisplayViewController() const;

 ::GlobalNamespace::PlayerStatisticsViewController __declspec(property(get=__get__playerStatisticsViewController, put=__set__playerStatisticsViewController))  _playerStatisticsViewController;

constexpr void __set__playerStatisticsViewController(::GlobalNamespace::PlayerStatisticsViewController value) ;

constexpr ::GlobalNamespace::PlayerStatisticsViewController __get__playerStatisticsViewController() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 ::GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get__menuTransitionsHelper, put=__set__menuTransitionsHelper))  _menuTransitionsHelper;

constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper __get__menuTransitionsHelper() const;

/// @brief Field kHowToPlayMenu offset 0
static constexpr ::ConstString  kHowToPlayMenu{u"LABEL_HOW_TO_PLAY"};

/// @brief Field kPrivacyPolicyMenu offset 0
static constexpr ::ConstString  kPrivacyPolicyMenu{u"PRIVACY_POLICY_MENU"};

/// @brief Field kEulaMenu offset 0
static constexpr ::ConstString  kEulaMenu{u"EULA_MENU"};

/// @brief Field kHealthWarningMenu offset 0
static constexpr ::ConstString  kHealthWarningMenu{u"HEALTH_AND_SAFETY_MENU"};

 ::System::Action_1<::GlobalNamespace::HelpFlowCoordinator> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator> value) ;

constexpr ::System::Action_1<::GlobalNamespace::HelpFlowCoordinator> __get_didFinishEvent() const;

 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController,::StringW>> __declspec(property(get=__get__viewControllers, put=__set__viewControllers))  _viewControllers;

constexpr void __set__viewControllers(::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController,::StringW>> value) ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::HMUI::ViewController,::StringW>> __get__viewControllers() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x21333c8 size 0xb0 virtual false final false
 void add_didFinishEvent(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator> value) ;

/// @brief Method remove_didFinishEvent addr 0x2133478 size 0xb0 virtual false final false
 void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::HelpFlowCoordinator> value) ;

/// @brief Method DidActivate addr 0x2133528 size 0x488 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x21339b0 size 0x10c virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method HandleDidSelectHelpSubMenu addr 0x2133abc size 0x64 virtual false final false
 void HandleDidSelectHelpSubMenu(int32_t idx) ;

/// @brief Method ReplaceViewController addr 0x2133b20 size 0x104 virtual false final false
 void ReplaceViewController(::HMUI::ViewController viewController) ;

/// @brief Method HandleHowToPlayViewControllerDidFinish addr 0x2133c24 size 0x78 virtual false final false
 void HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::____GlobalNamespace__HowToPlayViewController__HowToPlayOptions howToPlayOptions) ;

/// @brief Method BackButtonWasPressed addr 0x2133c9c size 0x20 virtual true final false
 void BackButtonWasPressed(::HMUI::ViewController topViewController) ;

// Ctor Parameters []
explicit HelpFlowCoordinator() ;

/// @brief Method .ctor addr 0x2133cbc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::HelpFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HelpFlowCoordinator, "", "HelpFlowCoordinator");
