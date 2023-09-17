#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningNoTransitionInstaller;
}
// Type: ::HealthWarningNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11118))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6091))
// CS Name: HealthWarningNoTransitionInstaller
class CORDL_TYPE HealthWarningNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HealthWarningNoTransitionInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningNoTransitionInstaller", modifiers: " const&", def_value: None }]
constexpr HealthWarningNoTransitionInstaller(HealthWarningNoTransitionInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningNoTransitionInstaller", modifiers: "&&", def_value: None }]
constexpr HealthWarningNoTransitionInstaller(HealthWarningNoTransitionInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HealthWarningNoTransitionInstaller(void* ptr) noexcept : ::Zenject::NoTransitionInstaller(ptr) {
}


  constexpr HealthWarningNoTransitionInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HealthWarningNoTransitionInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HealthWarningNoTransitionInstaller& operator=(HealthWarningNoTransitionInstaller&& o) noexcept = default;
  constexpr HealthWarningNoTransitionInstaller& operator=(HealthWarningNoTransitionInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::HealthWarningSceneSetupData __declspec(property(get=__get__healthWarningSceneSetupData, put=__set__healthWarningSceneSetupData))  _healthWarningSceneSetupData;

constexpr void __set__healthWarningSceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData value) ;

constexpr ::GlobalNamespace::HealthWarningSceneSetupData __get__healthWarningSceneSetupData() const;

 ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO __declspec(property(get=__get__scenesTransitionSetupData, put=__set__scenesTransitionSetupData))  _scenesTransitionSetupData;

constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO value) ;

constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO __get__scenesTransitionSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x21b65a4 size 0x44 virtual true final false
 void InstallBindings(::Zenject::DiContainer container) ;

// Ctor Parameters []
explicit HealthWarningNoTransitionInstaller() ;

/// @brief Method .ctor addr 0x21b65e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningNoTransitionInstaller, "", "HealthWarningNoTransitionInstaller");
