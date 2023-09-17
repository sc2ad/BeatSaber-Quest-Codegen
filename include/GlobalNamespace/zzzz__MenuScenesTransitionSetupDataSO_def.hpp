#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
// Type: ::MenuScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13871))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6124))
// CS Name: MenuScenesTransitionSetupDataSO
class CORDL_TYPE MenuScenesTransitionSetupDataSO : public ::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MenuScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr MenuScenesTransitionSetupDataSO(MenuScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr MenuScenesTransitionSetupDataSO(MenuScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuScenesTransitionSetupDataSO(void* ptr) noexcept : ::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO(ptr) {
}


  constexpr MenuScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuScenesTransitionSetupDataSO& operator=(MenuScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr MenuScenesTransitionSetupDataSO& operator=(MenuScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MenuScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x21d0e08 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MenuScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuScenesTransitionSetupDataSO, "", "MenuScenesTransitionSetupDataSO");
