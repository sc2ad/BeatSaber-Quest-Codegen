#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentSceneSetup;
}
// Type: ::EnvironmentSceneSetup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6082))
// CS Name: EnvironmentSceneSetup
class CORDL_TYPE EnvironmentSceneSetup : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EnvironmentSceneSetup() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetup", modifiers: " const&", def_value: None }]
constexpr EnvironmentSceneSetup(EnvironmentSceneSetup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSceneSetup", modifiers: "&&", def_value: None }]
constexpr EnvironmentSceneSetup(EnvironmentSceneSetup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentSceneSetup(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr EnvironmentSceneSetup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentSceneSetup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentSceneSetup& operator=(EnvironmentSceneSetup&& o) noexcept = default;
  constexpr EnvironmentSceneSetup& operator=(EnvironmentSceneSetup const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::EnvironmentSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(::GlobalNamespace::EnvironmentSceneSetupData value) ;

constexpr ::GlobalNamespace::EnvironmentSceneSetupData __get__sceneSetupData() const;

static int32_t __declspec(property(get=__get_trackLaneYPositionPropertyId, put=__set_trackLaneYPositionPropertyId))  trackLaneYPositionPropertyId;

static void __set_trackLaneYPositionPropertyId(int32_t value) ;

static int32_t __get_trackLaneYPositionPropertyId() ;


// Methods

/// @brief Method InstallBindings addr 0x21b3f88 size 0x168 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit EnvironmentSceneSetup() ;

/// @brief Method .ctor addr 0x21b40f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSceneSetup, "", "EnvironmentSceneSetup");
