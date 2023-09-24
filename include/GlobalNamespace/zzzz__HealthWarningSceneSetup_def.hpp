#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningSceneSetup;
}
// Type: ::HealthWarningSceneSetup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6085))
// CS Name: HealthWarningSceneSetup
class CORDL_TYPE HealthWarningSceneSetup : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HealthWarningSceneSetup() = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetup", modifiers: " const&", def_value: None }]
constexpr HealthWarningSceneSetup(HealthWarningSceneSetup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetup", modifiers: "&&", def_value: None }]
constexpr HealthWarningSceneSetup(HealthWarningSceneSetup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HealthWarningSceneSetup(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr HealthWarningSceneSetup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HealthWarningSceneSetup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HealthWarningSceneSetup& operator=(HealthWarningSceneSetup&& o) noexcept = default;
  constexpr HealthWarningSceneSetup& operator=(HealthWarningSceneSetup const& o) noexcept = default;
                


// Fields

 GlobalNamespace::HealthWarningSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::HealthWarningSceneSetupData value) ;

constexpr GlobalNamespace::HealthWarningSceneSetupData __get__sceneSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x21b5210 size 0x15c virtual true final false
 void InstallBindings() ;

static GlobalNamespace::HealthWarningSceneSetup New_ctor() ;

/// @brief Method .ctor addr 0x21b536c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HealthWarningSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningSceneSetup, "", "HealthWarningSceneSetup");
