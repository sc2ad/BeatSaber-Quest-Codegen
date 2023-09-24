#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
// Type: ::AppInitScenesTransitionSetupDataContainerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6113))
// CS Name: AppInitScenesTransitionSetupDataContainerSO
class CORDL_TYPE AppInitScenesTransitionSetupDataContainerSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AppInitScenesTransitionSetupDataContainerSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataContainerSO", modifiers: " const&", def_value: None }]
constexpr AppInitScenesTransitionSetupDataContainerSO(AppInitScenesTransitionSetupDataContainerSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppInitScenesTransitionSetupDataContainerSO", modifiers: "&&", def_value: None }]
constexpr AppInitScenesTransitionSetupDataContainerSO(AppInitScenesTransitionSetupDataContainerSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppInitScenesTransitionSetupDataContainerSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AppInitScenesTransitionSetupDataContainerSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppInitScenesTransitionSetupDataContainerSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppInitScenesTransitionSetupDataContainerSO& operator=(AppInitScenesTransitionSetupDataContainerSO&& o) noexcept = default;
  constexpr AppInitScenesTransitionSetupDataContainerSO& operator=(AppInitScenesTransitionSetupDataContainerSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::AppInitScenesTransitionSetupDataSO __declspec(property(get=__get_appInitScenesTransitionSetupData, put=__set_appInitScenesTransitionSetupData))  appInitScenesTransitionSetupData;

constexpr void __set_appInitScenesTransitionSetupData(GlobalNamespace::AppInitScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::AppInitScenesTransitionSetupDataSO __get_appInitScenesTransitionSetupData() const;


// Methods

static GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO New_ctor() ;

/// @brief Method .ctor addr 0x21cfaf4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO, "", "AppInitScenesTransitionSetupDataContainerSO");
