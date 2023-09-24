#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class RecordingToolResourceContainerSO;
}
namespace GlobalNamespace {
class ProgramArguments;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolInstallerSO;
}
// Type: ::RecordingToolInstallerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6040))
// CS Name: RecordingToolInstallerSO
class CORDL_TYPE RecordingToolInstallerSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RecordingToolInstallerSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolInstallerSO", modifiers: " const&", def_value: None }]
constexpr RecordingToolInstallerSO(RecordingToolInstallerSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolInstallerSO", modifiers: "&&", def_value: None }]
constexpr RecordingToolInstallerSO(RecordingToolInstallerSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolInstallerSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr RecordingToolInstallerSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolInstallerSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolInstallerSO& operator=(RecordingToolInstallerSO&& o) noexcept = default;
  constexpr RecordingToolInstallerSO& operator=(RecordingToolInstallerSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::RecordingToolResourceContainerSO __declspec(property(get=__get__recordingToolResourceContainer, put=__set__recordingToolResourceContainer))  _recordingToolResourceContainer;

constexpr void __set__recordingToolResourceContainer(GlobalNamespace::RecordingToolResourceContainerSO value) ;

constexpr GlobalNamespace::RecordingToolResourceContainerSO __get__recordingToolResourceContainer() const;


// Methods

/// @brief Method InstallDependencies addr 0x21ab928 size 0x368 virtual false final false
 void InstallDependencies(Zenject::DiContainer container, GlobalNamespace::ProgramArguments programArguments, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection) ;

static GlobalNamespace::RecordingToolInstallerSO New_ctor() ;

/// @brief Method .ctor addr 0x21abf48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RecordingToolInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolInstallerSO, "", "RecordingToolInstallerSO");
