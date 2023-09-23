#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class GameScenesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
// Type: ::DefaultScenesTransitionsFromInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4017))
// CS Name: DefaultScenesTransitionsFromInit
class CORDL_TYPE DefaultScenesTransitionsFromInit : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~DefaultScenesTransitionsFromInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultScenesTransitionsFromInit", modifiers: " const&", def_value: None }]
constexpr DefaultScenesTransitionsFromInit(DefaultScenesTransitionsFromInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultScenesTransitionsFromInit", modifiers: "&&", def_value: None }]
constexpr DefaultScenesTransitionsFromInit(DefaultScenesTransitionsFromInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultScenesTransitionsFromInit(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DefaultScenesTransitionsFromInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultScenesTransitionsFromInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultScenesTransitionsFromInit& operator=(DefaultScenesTransitionsFromInit&& o) noexcept = default;
  constexpr DefaultScenesTransitionsFromInit& operator=(DefaultScenesTransitionsFromInit const& o) noexcept = default;
                


// Fields

 GlobalNamespace::HealthWarningScenesTransitionSetupDataSO __declspec(property(get=__get__healthWarningScenesTransitionSetupData, put=__set__healthWarningScenesTransitionSetupData))  _healthWarningScenesTransitionSetupData;

constexpr void __set__healthWarningScenesTransitionSetupData(GlobalNamespace::HealthWarningScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::HealthWarningScenesTransitionSetupDataSO __get__healthWarningScenesTransitionSetupData() const;

 GlobalNamespace::RecordingToolScenesTransitionSetupDataSO __declspec(property(get=__get__recordingToolScenesTransitionSetupData, put=__set__recordingToolScenesTransitionSetupData))  _recordingToolScenesTransitionSetupData;

constexpr void __set__recordingToolScenesTransitionSetupData(GlobalNamespace::RecordingToolScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::RecordingToolScenesTransitionSetupDataSO __get__recordingToolScenesTransitionSetupData() const;

 GlobalNamespace::MenuScenesTransitionSetupDataSO __declspec(property(get=__get__mainMenuScenesTransitionSetupData, put=__set__mainMenuScenesTransitionSetupData))  _mainMenuScenesTransitionSetupData;

constexpr void __set__mainMenuScenesTransitionSetupData(GlobalNamespace::MenuScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MenuScenesTransitionSetupDataSO __get__mainMenuScenesTransitionSetupData() const;

 GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO __declspec(property(get=__get__beatmapEditorScenesTransitionSetupData, put=__set__beatmapEditorScenesTransitionSetupData))  _beatmapEditorScenesTransitionSetupData;

constexpr void __set__beatmapEditorScenesTransitionSetupData(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO __get__beatmapEditorScenesTransitionSetupData() const;

 GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO __declspec(property(get=__get__shaderWarmupScenesTransitionSetupData, put=__set__shaderWarmupScenesTransitionSetupData))  _shaderWarmupScenesTransitionSetupData;

constexpr void __set__shaderWarmupScenesTransitionSetupData(GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO __get__shaderWarmupScenesTransitionSetupData() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;


// Properties

 GlobalNamespace::MenuScenesTransitionSetupDataSO __declspec(property(get=get_mainMenuScenesTransitionSetupData))  mainMenuScenesTransitionSetupData;


// Methods

/// @brief Method get_mainMenuScenesTransitionSetupData addr 0x20b4744 size 0x8 virtual false final false
 GlobalNamespace::MenuScenesTransitionSetupDataSO get_mainMenuScenesTransitionSetupData() ;

/// @brief Method TransitionToNextScene addr 0x20b474c size 0x1d0 virtual false final false
 void TransitionToNextScene(bool goStraightToMenu, bool goStraightToEditor, bool goToRecordingToolScene) ;

// Ctor Parameters []
explicit DefaultScenesTransitionsFromInit() ;

/// @brief Method .ctor addr 0x20b491c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DefaultScenesTransitionsFromInit);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DefaultScenesTransitionsFromInit, "", "DefaultScenesTransitionsFromInit");
