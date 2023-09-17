#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
namespace {
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupDataSO;
}
// Type: ::HealthWarningScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6121))
// CS Name: HealthWarningScenesTransitionSetupDataSO
class CORDL_TYPE HealthWarningScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~HealthWarningScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr HealthWarningScenesTransitionSetupDataSO(HealthWarningScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr HealthWarningScenesTransitionSetupDataSO(HealthWarningScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HealthWarningScenesTransitionSetupDataSO(void* ptr) noexcept : ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO(ptr) {
}


  constexpr HealthWarningScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HealthWarningScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HealthWarningScenesTransitionSetupDataSO& operator=(HealthWarningScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr HealthWarningScenesTransitionSetupDataSO& operator=(HealthWarningScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x21d0b64 size 0x8 virtual false final false
 void Init(::GlobalNamespace::HealthWarningSceneSetupData healthWarningSceneSetupData) ;

// Ctor Parameters []
explicit HealthWarningScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x21d0b6c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO, "", "HealthWarningScenesTransitionSetupDataSO");
