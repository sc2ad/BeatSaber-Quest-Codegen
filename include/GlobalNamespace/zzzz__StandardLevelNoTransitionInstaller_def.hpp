#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelNoTransitionInstaller;
}
// Type: ::StandardLevelNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11118))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6095))
// CS Name: StandardLevelNoTransitionInstaller
class CORDL_TYPE StandardLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StandardLevelNoTransitionInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstaller", modifiers: " const&", def_value: None }]
constexpr StandardLevelNoTransitionInstaller(StandardLevelNoTransitionInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
constexpr StandardLevelNoTransitionInstaller(StandardLevelNoTransitionInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelNoTransitionInstaller(void* ptr) noexcept : ::Zenject::NoTransitionInstaller(ptr) {
}


  constexpr StandardLevelNoTransitionInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelNoTransitionInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelNoTransitionInstaller& operator=(StandardLevelNoTransitionInstaller&& o) noexcept = default;
  constexpr StandardLevelNoTransitionInstaller& operator=(StandardLevelNoTransitionInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__scenesTransitionSetupData, put=__set__scenesTransitionSetupData))  _scenesTransitionSetupData;

constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__scenesTransitionSetupData() const;

 ::GlobalNamespace::StandardLevelNoTransitionInstallerData __declspec(property(get=__get__standardLevelNoTransitionInstallerData, put=__set__standardLevelNoTransitionInstallerData))  _standardLevelNoTransitionInstallerData;

constexpr void __set__standardLevelNoTransitionInstallerData(::GlobalNamespace::StandardLevelNoTransitionInstallerData value) ;

constexpr ::GlobalNamespace::StandardLevelNoTransitionInstallerData __get__standardLevelNoTransitionInstallerData() const;


// Properties

 ::GlobalNamespace::StandardLevelNoTransitionInstallerData __declspec(property(get=get_standardLevelNoTransitionInstallerData))  standardLevelNoTransitionInstallerData;


// Methods

/// @brief Method get_standardLevelNoTransitionInstallerData addr 0x21b6710 size 0x8 virtual false final false
 ::GlobalNamespace::StandardLevelNoTransitionInstallerData get_standardLevelNoTransitionInstallerData() ;

/// @brief Method InstallBindings addr 0x21b6718 size 0x150 virtual true final false
 void InstallBindings(::Zenject::DiContainer container) ;

// Ctor Parameters []
explicit StandardLevelNoTransitionInstaller() ;

/// @brief Method .ctor addr 0x21b6868 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelNoTransitionInstaller, "", "StandardLevelNoTransitionInstaller");
