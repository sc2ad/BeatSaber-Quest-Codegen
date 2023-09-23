#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class SceneInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class FixedScenesScenesTransitionSetupDataSO;
}
// Type: ::FixedScenesScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13870))
// CS Name: FixedScenesScenesTransitionSetupDataSO
class CORDL_TYPE FixedScenesScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FixedScenesScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedScenesScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr FixedScenesScenesTransitionSetupDataSO(FixedScenesScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedScenesScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr FixedScenesScenesTransitionSetupDataSO(FixedScenesScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedScenesScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::ScenesTransitionSetupDataSO(ptr) {
}


  constexpr FixedScenesScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedScenesScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedScenesScenesTransitionSetupDataSO& operator=(FixedScenesScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr FixedScenesScenesTransitionSetupDataSO& operator=(FixedScenesScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::SceneInfo> __declspec(property(get=__get__sceneInfos, put=__set__sceneInfos))  _sceneInfos;

constexpr void __set__sceneInfos(::ArrayW<GlobalNamespace::SceneInfo> value) ;

constexpr ::ArrayW<GlobalNamespace::SceneInfo> __get__sceneInfos() const;


// Methods

/// @brief Method Init addr 0x1f82a04 size 0x10 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit FixedScenesScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x1f82a20 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FixedScenesScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FixedScenesScenesTransitionSetupDataSO, "", "FixedScenesScenesTransitionSetupDataSO");
