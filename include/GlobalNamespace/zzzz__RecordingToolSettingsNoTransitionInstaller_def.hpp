#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
namespace {
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsNoTransitionInstaller;
}
// Type: ::RecordingToolSettingsNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11118))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6094))
// CS Name: RecordingToolSettingsNoTransitionInstaller
class CORDL_TYPE RecordingToolSettingsNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RecordingToolSettingsNoTransitionInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsNoTransitionInstaller", modifiers: " const&", def_value: None }]
constexpr RecordingToolSettingsNoTransitionInstaller(RecordingToolSettingsNoTransitionInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsNoTransitionInstaller", modifiers: "&&", def_value: None }]
constexpr RecordingToolSettingsNoTransitionInstaller(RecordingToolSettingsNoTransitionInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolSettingsNoTransitionInstaller(void* ptr) noexcept : ::Zenject::NoTransitionInstaller(ptr) {
}


  constexpr RecordingToolSettingsNoTransitionInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolSettingsNoTransitionInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolSettingsNoTransitionInstaller& operator=(RecordingToolSettingsNoTransitionInstaller&& o) noexcept = default;
  constexpr RecordingToolSettingsNoTransitionInstaller& operator=(RecordingToolSettingsNoTransitionInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::RecordingToolSceneSetupData __declspec(property(get=__get__recordingToolSceneSetupData, put=__set__recordingToolSceneSetupData))  _recordingToolSceneSetupData;

constexpr void __set__recordingToolSceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData value) ;

constexpr ::GlobalNamespace::RecordingToolSceneSetupData __get__recordingToolSceneSetupData() const;

 ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO __declspec(property(get=__get__scenesTransitionSetupData, put=__set__scenesTransitionSetupData))  _scenesTransitionSetupData;

constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO __get__scenesTransitionSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x21b66c4 size 0x44 virtual true final false
 void InstallBindings(::Zenject::DiContainer container) ;

// Ctor Parameters []
explicit RecordingToolSettingsNoTransitionInstaller() ;

/// @brief Method .ctor addr 0x21b6708 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller, "", "RecordingToolSettingsNoTransitionInstaller");
