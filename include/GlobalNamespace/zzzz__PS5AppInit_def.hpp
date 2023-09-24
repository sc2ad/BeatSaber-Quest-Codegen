#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class PS5SharedPackageSKUsSO;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
namespace GlobalNamespace {
class SonyOnGoingToBackgroundSaveHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5AppInit;
}
// Type: ::PS5AppInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4026))
// CS Name: PS5AppInit
class CORDL_TYPE PS5AppInit : public GlobalNamespace::AppInit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~PS5AppInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5AppInit", modifiers: " const&", def_value: None }]
constexpr PS5AppInit(PS5AppInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5AppInit", modifiers: "&&", def_value: None }]
constexpr PS5AppInit(PS5AppInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5AppInit(void* ptr) noexcept : GlobalNamespace::AppInit(ptr) {
}


  constexpr PS5AppInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5AppInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5AppInit& operator=(PS5AppInit&& o) noexcept = default;
  constexpr PS5AppInit& operator=(PS5AppInit const& o) noexcept = default;
                


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

 GlobalNamespace::PS5SharedPackageSKUsSO __declspec(property(get=__get__ps5SharedPackageSKUs, put=__set__ps5SharedPackageSKUs))  _ps5SharedPackageSKUs;

constexpr void __set__ps5SharedPackageSKUs(GlobalNamespace::PS5SharedPackageSKUsSO value) ;

constexpr GlobalNamespace::PS5SharedPackageSKUsSO __get__ps5SharedPackageSKUs() const;

 GlobalNamespace::SonyOnGoingToBackgroundSaveHandler __declspec(property(get=__get__sonyOnGoingToBackgroundSaveHandler, put=__set__sonyOnGoingToBackgroundSaveHandler))  _sonyOnGoingToBackgroundSaveHandler;

constexpr void __set__sonyOnGoingToBackgroundSaveHandler(GlobalNamespace::SonyOnGoingToBackgroundSaveHandler value) ;

constexpr GlobalNamespace::SonyOnGoingToBackgroundSaveHandler __get__sonyOnGoingToBackgroundSaveHandler() const;

 UnityEngine::GameObject __declspec(property(get=__get__ps5AdvancedHapticPlayerPrefab, put=__set__ps5AdvancedHapticPlayerPrefab))  _ps5AdvancedHapticPlayerPrefab;

constexpr void __set__ps5AdvancedHapticPlayerPrefab(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__ps5AdvancedHapticPlayerPrefab() const;

 GlobalNamespace::ISaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::ISaveData value) ;

constexpr GlobalNamespace::ISaveData __get__saveData() const;


// Methods

/// @brief Method AppStartAndMultiSceneEditorSetup addr 0x20b7db0 size 0x68 virtual true final false
 void AppStartAndMultiSceneEditorSetup() ;

/// @brief Method RepeatableSetup addr 0x20b7e18 size 0x84 virtual true final false
 void RepeatableSetup() ;

/// @brief Method TransitionToNextScene addr 0x20b7e9c size 0x4 virtual true final false
 void TransitionToNextScene() ;

/// @brief Method TransitionToNextSceneInternal addr 0x20b7ea0 size 0x50 virtual false final false
 void TransitionToNextSceneInternal() ;

/// @brief Method InstallBindings addr 0x20b7ef0 size 0x2a8 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::PS5AppInit New_ctor() ;

/// @brief Method .ctor addr 0x20b8198 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS5AppInit);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS5AppInit, "", "PS5AppInit");
