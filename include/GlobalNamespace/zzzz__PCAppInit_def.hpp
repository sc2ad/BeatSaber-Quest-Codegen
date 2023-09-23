#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class FileSaveData;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class SteamInit;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class OculusInit;
}
// Forward declare root types
namespace GlobalNamespace {
class PCAppInit;
}
// Type: ::PCAppInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4024))
// CS Name: PCAppInit
class CORDL_TYPE PCAppInit : public GlobalNamespace::AppInit {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~PCAppInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "PCAppInit", modifiers: " const&", def_value: None }]
constexpr PCAppInit(PCAppInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PCAppInit", modifiers: "&&", def_value: None }]
constexpr PCAppInit(PCAppInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PCAppInit(void* ptr) noexcept : GlobalNamespace::AppInit(ptr) {
}


  constexpr PCAppInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PCAppInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PCAppInit& operator=(PCAppInit&& o) noexcept = default;
  constexpr PCAppInit& operator=(PCAppInit const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainSystemInit __declspec(property(get=__get__mainSystemInit, put=__set__mainSystemInit))  _mainSystemInit;

constexpr void __set__mainSystemInit(GlobalNamespace::MainSystemInit value) ;

constexpr GlobalNamespace::MainSystemInit __get__mainSystemInit() const;

 GlobalNamespace::OculusInit __declspec(property(get=__get__oculusInit, put=__set__oculusInit))  _oculusInit;

constexpr void __set__oculusInit(GlobalNamespace::OculusInit value) ;

constexpr GlobalNamespace::OculusInit __get__oculusInit() const;

 GlobalNamespace::SteamInit __declspec(property(get=__get__steamInit, put=__set__steamInit))  _steamInit;

constexpr void __set__steamInit(GlobalNamespace::SteamInit value) ;

constexpr GlobalNamespace::SteamInit __get__steamInit() const;

 GlobalNamespace::DefaultScenesTransitionsFromInit __declspec(property(get=__get__defaultScenesTransitionsFromInit, put=__set__defaultScenesTransitionsFromInit))  _defaultScenesTransitionsFromInit;

constexpr void __set__defaultScenesTransitionsFromInit(GlobalNamespace::DefaultScenesTransitionsFromInit value) ;

constexpr GlobalNamespace::DefaultScenesTransitionsFromInit __get__defaultScenesTransitionsFromInit() const;

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 ::StringW __declspec(property(get=__get__goStraightToMenuCommandArgument, put=__set__goStraightToMenuCommandArgument))  _goStraightToMenuCommandArgument;

constexpr void __set__goStraightToMenuCommandArgument(::StringW value) ;

constexpr ::StringW __get__goStraightToMenuCommandArgument() const;

 ::StringW __declspec(property(get=__get__goStraightToEditorCommandArgument, put=__set__goStraightToEditorCommandArgument))  _goStraightToEditorCommandArgument;

constexpr void __set__goStraightToEditorCommandArgument(::StringW value) ;

constexpr ::StringW __get__goStraightToEditorCommandArgument() const;

 GlobalNamespace::FileSaveData __declspec(property(get=__get__saveData, put=__set__saveData))  _saveData;

constexpr void __set__saveData(GlobalNamespace::FileSaveData value) ;

constexpr GlobalNamespace::FileSaveData __get__saveData() const;


// Methods

/// @brief Method AppStartAndMultiSceneEditorSetup addr 0x20b753c size 0x7c virtual true final false
 void AppStartAndMultiSceneEditorSetup() ;

/// @brief Method RepeatableSetup addr 0x20b75b8 size 0x84 virtual true final false
 void RepeatableSetup() ;

/// @brief Method TransitionToNextScene addr 0x20b763c size 0xc0 virtual true final false
 void TransitionToNextScene() ;

/// @brief Method InstallBindings addr 0x20b76fc size 0x2e0 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit PCAppInit() ;

/// @brief Method .ctor addr 0x20b79dc size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PCAppInit);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PCAppInit, "", "PCAppInit");
