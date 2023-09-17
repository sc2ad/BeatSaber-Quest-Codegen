#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
namespace {
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupDataSO;
}
// Type: ::ShaderWarmupScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6135))
// CS Name: ShaderWarmupScenesTransitionSetupDataSO
class CORDL_TYPE ShaderWarmupScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ShaderWarmupScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr ShaderWarmupScenesTransitionSetupDataSO(ShaderWarmupScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr ShaderWarmupScenesTransitionSetupDataSO(ShaderWarmupScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderWarmupScenesTransitionSetupDataSO(void* ptr) noexcept : ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO(ptr) {
}


  constexpr ShaderWarmupScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderWarmupScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderWarmupScenesTransitionSetupDataSO& operator=(ShaderWarmupScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr ShaderWarmupScenesTransitionSetupDataSO& operator=(ShaderWarmupScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x21d3acc size 0x8 virtual false final false
 void Init(::GlobalNamespace::ShaderWarmupSceneSetupData shaderWarmupSceneSetupData) ;

// Ctor Parameters []
explicit ShaderWarmupScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x21d3ad4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO, "", "ShaderWarmupScenesTransitionSetupDataSO");
