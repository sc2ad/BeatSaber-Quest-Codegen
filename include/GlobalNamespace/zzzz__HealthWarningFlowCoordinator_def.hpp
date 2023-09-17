#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__PrivacyPolicyViewController__ButtonType;
}
namespace GlobalNamespace {
class PrivacyPolicyViewController;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__EulaViewController__ButtonType;
}
namespace GlobalNamespace {
class SelectLanguageViewController;
}
namespace GlobalNamespace {
class EulaViewController;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class SelectRegionViewController;
}
namespace GlobalNamespace {
class HealthWarningViewController;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
struct ____HMUI__ViewController__AnimationType;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__SelectRegionViewController__Region;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningFlowCoordinator;
}
namespace GlobalNamespace {
class ____GlobalNamespace__HealthWarningFlowCoordinator__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5591))
// CS Name: HealthWarningFlowCoordinator::InitData
class CORDL_TYPE ____GlobalNamespace__HealthWarningFlowCoordinator__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__HealthWarningFlowCoordinator__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__HealthWarningFlowCoordinator__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__HealthWarningFlowCoordinator__InitData(____GlobalNamespace__HealthWarningFlowCoordinator__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__HealthWarningFlowCoordinator__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__HealthWarningFlowCoordinator__InitData(____GlobalNamespace__HealthWarningFlowCoordinator__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__HealthWarningFlowCoordinator__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__HealthWarningFlowCoordinator__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__HealthWarningFlowCoordinator__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__HealthWarningFlowCoordinator__InitData& operator=(____GlobalNamespace__HealthWarningFlowCoordinator__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__HealthWarningFlowCoordinator__InitData& operator=(____GlobalNamespace__HealthWarningFlowCoordinator__InitData const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get_nextScenesTransitionSetupData, put=__set_nextScenesTransitionSetupData))  nextScenesTransitionSetupData;

constexpr void __set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO __get_nextScenesTransitionSetupData() const;


// Methods

// Ctor Parameters [CppParam { name: "nextScenesTransitionSetupData", ty: "::GlobalNamespace::ScenesTransitionSetupDataSO", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__HealthWarningFlowCoordinator__InitData(::GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData) ;

/// @brief Method .ctor addr 0x21333a0 size 0x28 virtual false final false
 void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::HealthWarningFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13633))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5592))
// CS Name: HealthWarningFlowCoordinator
class CORDL_TYPE HealthWarningFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
using InitData = ::GlobalNamespace::____GlobalNamespace__HealthWarningFlowCoordinator__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~HealthWarningFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr HealthWarningFlowCoordinator(HealthWarningFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr HealthWarningFlowCoordinator(HealthWarningFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HealthWarningFlowCoordinator(void* ptr) noexcept : ::HMUI::FlowCoordinator(ptr) {
}


  constexpr HealthWarningFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HealthWarningFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HealthWarningFlowCoordinator& operator=(HealthWarningFlowCoordinator&& o) noexcept = default;
  constexpr HealthWarningFlowCoordinator& operator=(HealthWarningFlowCoordinator const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO __declspec(property(get=__get__appInitScenesTransitionSetupDataContainer, put=__set__appInitScenesTransitionSetupDataContainer))  _appInitScenesTransitionSetupDataContainer;

constexpr void __set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO value) ;

constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO __get__appInitScenesTransitionSetupDataContainer() const;

 ::GlobalNamespace::SelectLanguageViewController __declspec(property(get=__get__selectLanguageViewController, put=__set__selectLanguageViewController))  _selectLanguageViewController;

constexpr void __set__selectLanguageViewController(::GlobalNamespace::SelectLanguageViewController value) ;

constexpr ::GlobalNamespace::SelectLanguageViewController __get__selectLanguageViewController() const;

 ::GlobalNamespace::SelectRegionViewController __declspec(property(get=__get__selectRegionViewController, put=__set__selectRegionViewController))  _selectRegionViewController;

constexpr void __set__selectRegionViewController(::GlobalNamespace::SelectRegionViewController value) ;

constexpr ::GlobalNamespace::SelectRegionViewController __get__selectRegionViewController() const;

 ::GlobalNamespace::EulaViewController __declspec(property(get=__get__eulaViewController, put=__set__eulaViewController))  _eulaViewController;

constexpr void __set__eulaViewController(::GlobalNamespace::EulaViewController value) ;

constexpr ::GlobalNamespace::EulaViewController __get__eulaViewController() const;

 ::GlobalNamespace::PrivacyPolicyViewController __declspec(property(get=__get__privacyPolicyViewController, put=__set__privacyPolicyViewController))  _privacyPolicyViewController;

constexpr void __set__privacyPolicyViewController(::GlobalNamespace::PrivacyPolicyViewController value) ;

constexpr ::GlobalNamespace::PrivacyPolicyViewController __get__privacyPolicyViewController() const;

 ::GlobalNamespace::HealthWarningViewController __declspec(property(get=__get__healthWarningViewController, put=__set__healthWarningViewController))  _healthWarningViewController;

constexpr void __set__healthWarningViewController(::GlobalNamespace::HealthWarningViewController value) ;

constexpr ::GlobalNamespace::HealthWarningViewController __get__healthWarningViewController() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 ::GlobalNamespace::DlcPromoPanelModel __declspec(property(get=__get__dlcPromoPanelModel, put=__set__dlcPromoPanelModel))  _dlcPromoPanelModel;

constexpr void __set__dlcPromoPanelModel(::GlobalNamespace::DlcPromoPanelModel value) ;

constexpr ::GlobalNamespace::DlcPromoPanelModel __get__dlcPromoPanelModel() const;

 ::GlobalNamespace::FadeInOutController __declspec(property(get=__get__fadeInOut, put=__set__fadeInOut))  _fadeInOut;

constexpr void __set__fadeInOut(::GlobalNamespace::FadeInOutController value) ;

constexpr ::GlobalNamespace::FadeInOutController __get__fadeInOut() const;

 ::GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager value) ;

constexpr ::GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 ::GlobalNamespace::____GlobalNamespace__HealthWarningFlowCoordinator__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__HealthWarningFlowCoordinator__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__HealthWarningFlowCoordinator__InitData __get__initData() const;

 ::GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(::GlobalNamespace::ISaveData value) ;

constexpr ::GlobalNamespace::ISaveData __get__saveData() const;

 ::System::Collections::Generic::Dictionary_2<::HMUI::ViewController,::StringW> __declspec(property(get=__get__viewControllerTitles, put=__set__viewControllerTitles))  _viewControllerTitles;

constexpr void __set__viewControllerTitles(::System::Collections::Generic::Dictionary_2<::HMUI::ViewController,::StringW> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::HMUI::ViewController,::StringW> __get__viewControllerTitles() const;

 ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region __declspec(property(get=__get__selectedRegion, put=__set__selectedRegion))  _selectedRegion;

constexpr void __set__selectedRegion(::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region __get__selectedRegion() const;


// Methods

/// @brief Method DidActivate addr 0x2132824 size 0x460 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2132cd4 size 0x264 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method TopViewControllerWillChange addr 0x2132f38 size 0x84 virtual true final false
 void TopViewControllerWillChange(::HMUI::ViewController oldViewController, ::HMUI::ViewController newViewController, ::HMUI::____HMUI__ViewController__AnimationType animationType) ;

/// @brief Method Update addr 0x2132fbc size 0x2c virtual false final false
 void Update() ;

/// @brief Method HandleSelectLanguageViewControllerDidChangeLanguage addr 0x213307c size 0x84 virtual false final false
 void HandleSelectLanguageViewControllerDidChangeLanguage() ;

/// @brief Method HandleSelectLanguageViewControllerDidPressContinueButton addr 0x2133100 size 0x4c virtual false final false
 void HandleSelectLanguageViewControllerDidPressContinueButton() ;

/// @brief Method HandleSelectRegionViewControllerDidPressContinueButton addr 0x213314c size 0x30 virtual false final false
 void HandleSelectRegionViewControllerDidPressContinueButton(::GlobalNamespace::____GlobalNamespace__SelectRegionViewController__Region region) ;

/// @brief Method HandleEulaViewControllerDidFinish addr 0x2133270 size 0x7c virtual false final false
 void HandleEulaViewControllerDidFinish(::GlobalNamespace::____GlobalNamespace__EulaViewController__ButtonType buttonType) ;

/// @brief Method HandlePrivacyPolicyViewControllerDidFinish addr 0x21332ec size 0x58 virtual false final false
 void HandlePrivacyPolicyViewControllerDidFinish(::GlobalNamespace::____GlobalNamespace__PrivacyPolicyViewController__ButtonType buttonType) ;

/// @brief Method HandleHealthWarningViewControllerDidFinish addr 0x2132fe8 size 0x94 virtual false final false
 void HandleHealthWarningViewControllerDidFinish() ;

/// @brief Method ResolveMainViewController addr 0x2132c84 size 0x50 virtual false final false
 ::HMUI::ViewController ResolveMainViewController() ;

/// @brief Method ResolvePlayerAgreementsViewController addr 0x213317c size 0xf4 virtual false final false
 ::HMUI::ViewController ResolvePlayerAgreementsViewController() ;

/// @brief Method GoToNextScene addr 0x2133344 size 0x54 virtual false final false
 void GoToNextScene() ;

// Ctor Parameters []
explicit HealthWarningFlowCoordinator() ;

/// @brief Method .ctor addr 0x2133398 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator, "", "HealthWarningFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__HealthWarningFlowCoordinator__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__HealthWarningFlowCoordinator__InitData, "", "HealthWarningFlowCoordinator/InitData");
