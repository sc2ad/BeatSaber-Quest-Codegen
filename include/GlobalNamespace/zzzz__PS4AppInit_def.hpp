#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class PS4ActivePublisherSKUSettingsSO;
}
namespace GlobalNamespace {
class SonyOnGoingToBackgroundSaveHandler;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4AppInit;
}
// Type: ::PS4AppInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4025))
// CS Name: PS4AppInit
class CORDL_TYPE PS4AppInit : public GlobalNamespace::AppInit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~PS4AppInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4AppInit", modifiers: " const&", def_value: None }]
constexpr PS4AppInit(PS4AppInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4AppInit", modifiers: "&&", def_value: None }]
constexpr PS4AppInit(PS4AppInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS4AppInit(void* ptr) noexcept : GlobalNamespace::AppInit(ptr) {
}


  constexpr PS4AppInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS4AppInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS4AppInit& operator=(PS4AppInit&& o) noexcept = default;
  constexpr PS4AppInit& operator=(PS4AppInit const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainSystemInit __declspec(property(get=__get__mainSystemInit, put=__set__mainSystemInit))  _mainSystemInit;

constexpr void __set__mainSystemInit(GlobalNamespace::MainSystemInit value) ;

constexpr GlobalNamespace::MainSystemInit __get__mainSystemInit() const;

 GlobalNamespace::DefaultScenesTransitionsFromInit __declspec(property(get=__get__defaultScenesTransitionsFromInit, put=__set__defaultScenesTransitionsFromInit))  _defaultScenesTransitionsFromInit;

constexpr void __set__defaultScenesTransitionsFromInit(GlobalNamespace::DefaultScenesTransitionsFromInit value) ;

constexpr GlobalNamespace::DefaultScenesTransitionsFromInit __get__defaultScenesTransitionsFromInit() const;

 GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO __declspec(property(get=__get__appInitScenesTransitionSetupDataContainer, put=__set__appInitScenesTransitionSetupDataContainer))  _appInitScenesTransitionSetupDataContainer;

constexpr void __set__appInitScenesTransitionSetupDataContainer(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO value) ;

constexpr GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO __get__appInitScenesTransitionSetupDataContainer() const;

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 GlobalNamespace::PS4ActivePublisherSKUSettingsSO __declspec(property(get=__get__activePublisherSKUSettingsSO, put=__set__activePublisherSKUSettingsSO))  _activePublisherSKUSettingsSO;

constexpr void __set__activePublisherSKUSettingsSO(GlobalNamespace::PS4ActivePublisherSKUSettingsSO value) ;

constexpr GlobalNamespace::PS4ActivePublisherSKUSettingsSO __get__activePublisherSKUSettingsSO() const;

 GlobalNamespace::SonyOnGoingToBackgroundSaveHandler __declspec(property(get=__get__sonyOnGoingToBackgroundSaveHandler, put=__set__sonyOnGoingToBackgroundSaveHandler))  _sonyOnGoingToBackgroundSaveHandler;

constexpr void __set__sonyOnGoingToBackgroundSaveHandler(GlobalNamespace::SonyOnGoingToBackgroundSaveHandler value) ;

constexpr GlobalNamespace::SonyOnGoingToBackgroundSaveHandler __get__sonyOnGoingToBackgroundSaveHandler() const;

 GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::ISaveData value) ;

constexpr GlobalNamespace::ISaveData __get__saveData() const;


// Methods

/// @brief Method AppStartAndMultiSceneEditorSetup addr 0x20b79e0 size 0x68 virtual true final false
 void AppStartAndMultiSceneEditorSetup() ;

/// @brief Method RepeatableSetup addr 0x20b7a48 size 0x84 virtual true final false
 void RepeatableSetup() ;

/// @brief Method TransitionToNextScene addr 0x20b7acc size 0x30 virtual true final false
 void TransitionToNextScene() ;

/// @brief Method InstallBindings addr 0x20b7afc size 0x2b0 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::PS4AppInit New_ctor() ;

/// @brief Method .ctor addr 0x20b7dac size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS4AppInit);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4AppInit, "", "PS4AppInit");
