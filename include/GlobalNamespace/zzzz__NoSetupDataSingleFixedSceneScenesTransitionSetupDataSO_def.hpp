#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO;
}
// Type: ::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13871))
// CS Name: NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO
class CORDL_TYPE NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO(NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO(NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO(ptr) {
}


  constexpr NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO& operator=(NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO& operator=(NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x1f82a30 size 0x8 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x1f82b28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO, "", "NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO");
