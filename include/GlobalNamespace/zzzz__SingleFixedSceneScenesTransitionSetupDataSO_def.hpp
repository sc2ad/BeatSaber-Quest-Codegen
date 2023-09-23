#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
namespace GlobalNamespace {
class SceneSetupData;
}
namespace GlobalNamespace {
class SceneInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class SingleFixedSceneScenesTransitionSetupDataSO;
}
// Type: ::SingleFixedSceneScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13875))
// CS Name: SingleFixedSceneScenesTransitionSetupDataSO
class CORDL_TYPE SingleFixedSceneScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SingleFixedSceneScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleFixedSceneScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr SingleFixedSceneScenesTransitionSetupDataSO(SingleFixedSceneScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleFixedSceneScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr SingleFixedSceneScenesTransitionSetupDataSO(SingleFixedSceneScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SingleFixedSceneScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::ScenesTransitionSetupDataSO(ptr) {
}


  constexpr SingleFixedSceneScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SingleFixedSceneScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SingleFixedSceneScenesTransitionSetupDataSO& operator=(SingleFixedSceneScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr SingleFixedSceneScenesTransitionSetupDataSO& operator=(SingleFixedSceneScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SceneInfo __declspec(property(get=__get__sceneInfo, put=__set__sceneInfo))  _sceneInfo;

constexpr void __set__sceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__sceneInfo() const;


// Properties

 GlobalNamespace::SceneInfo __declspec(property(get=get_sceneInfo))  sceneInfo;


// Methods

/// @brief Method get_sceneInfo addr 0x1f83094 size 0x8 virtual false final false
 GlobalNamespace::SceneInfo get_sceneInfo() ;

/// @brief Method Init addr 0x1f82a38 size 0xf0 virtual false final false
 void Init(GlobalNamespace::SceneSetupData sceneSetupData) ;

// Ctor Parameters []
explicit SingleFixedSceneScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x1f82b30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO, "", "SingleFixedSceneScenesTransitionSetupDataSO");
