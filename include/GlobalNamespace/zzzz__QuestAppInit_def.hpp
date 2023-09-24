#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class FileSaveData;
}
namespace GlobalNamespace {
class OculusInit;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class QuestAppInit;
}
// Type: ::QuestAppInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4027))
// CS Name: QuestAppInit
class CORDL_TYPE QuestAppInit : public GlobalNamespace::AppInit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~QuestAppInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuestAppInit", modifiers: " const&", def_value: None }]
constexpr QuestAppInit(QuestAppInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuestAppInit", modifiers: "&&", def_value: None }]
constexpr QuestAppInit(QuestAppInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuestAppInit(void* ptr) noexcept : GlobalNamespace::AppInit(ptr) {
}


  constexpr QuestAppInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuestAppInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuestAppInit& operator=(QuestAppInit&& o) noexcept = default;
  constexpr QuestAppInit& operator=(QuestAppInit const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainSystemInit __declspec(property(get=__get__mainSystemInit, put=__set__mainSystemInit))  _mainSystemInit;

constexpr void __set__mainSystemInit(GlobalNamespace::MainSystemInit value) ;

constexpr GlobalNamespace::MainSystemInit __get__mainSystemInit() const;

 GlobalNamespace::OculusInit __declspec(property(get=__get__oculusInit, put=__set__oculusInit))  _oculusInit;

constexpr void __set__oculusInit(GlobalNamespace::OculusInit value) ;

constexpr GlobalNamespace::OculusInit __get__oculusInit() const;

 GlobalNamespace::DefaultScenesTransitionsFromInit __declspec(property(get=__get__defaultScenesTransitionsFromInit, put=__set__defaultScenesTransitionsFromInit))  _defaultScenesTransitionsFromInit;

constexpr void __set__defaultScenesTransitionsFromInit(GlobalNamespace::DefaultScenesTransitionsFromInit value) ;

constexpr GlobalNamespace::DefaultScenesTransitionsFromInit __get__defaultScenesTransitionsFromInit() const;

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 GlobalNamespace::FileSaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::FileSaveData value) ;

constexpr GlobalNamespace::FileSaveData __get__saveData() const;


// Methods

/// @brief Method AppStartAndMultiSceneEditorSetup addr 0x20b819c size 0x18 virtual true final false
 void AppStartAndMultiSceneEditorSetup() ;

/// @brief Method RepeatableSetup addr 0x20b81b4 size 0x84 virtual true final false
 void RepeatableSetup() ;

/// @brief Method TransitionToNextScene addr 0x20b8238 size 0x30 virtual true final false
 void TransitionToNextScene() ;

/// @brief Method InstallBindings addr 0x20b8268 size 0x33c virtual true final false
 void InstallBindings() ;

static GlobalNamespace::QuestAppInit New_ctor() ;

/// @brief Method .ctor addr 0x20b85a4 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::QuestAppInit);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuestAppInit, "", "QuestAppInit");
