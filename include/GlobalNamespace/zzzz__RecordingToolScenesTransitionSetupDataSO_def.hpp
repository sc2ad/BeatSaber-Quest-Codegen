#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
// Type: ::RecordingToolScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13875))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6134))
// CS Name: RecordingToolScenesTransitionSetupDataSO
class CORDL_TYPE RecordingToolScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RecordingToolScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr RecordingToolScenesTransitionSetupDataSO(RecordingToolScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr RecordingToolScenesTransitionSetupDataSO(RecordingToolScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO(ptr) {
}


  constexpr RecordingToolScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolScenesTransitionSetupDataSO& operator=(RecordingToolScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr RecordingToolScenesTransitionSetupDataSO& operator=(RecordingToolScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Methods

/// @brief Method Init addr 0x21d3abc size 0x8 virtual false final false
 void Init(GlobalNamespace::RecordingToolSceneSetupData recordingToolSceneSetupData) ;

static GlobalNamespace::RecordingToolScenesTransitionSetupDataSO New_ctor() ;

/// @brief Method .ctor addr 0x21d3ac4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RecordingToolScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolScenesTransitionSetupDataSO, "", "RecordingToolScenesTransitionSetupDataSO");
