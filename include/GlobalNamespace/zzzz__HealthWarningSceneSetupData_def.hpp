#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
// Type: ::HealthWarningSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6106))
// CS Name: HealthWarningSceneSetupData
class CORDL_TYPE HealthWarningSceneSetupData : public GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HealthWarningSceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetupData", modifiers: " const&", def_value: None }]
constexpr HealthWarningSceneSetupData(HealthWarningSceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HealthWarningSceneSetupData", modifiers: "&&", def_value: None }]
constexpr HealthWarningSceneSetupData(HealthWarningSceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HealthWarningSceneSetupData(void* ptr) noexcept : GlobalNamespace::SceneSetupData(ptr) {
}


  constexpr HealthWarningSceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HealthWarningSceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HealthWarningSceneSetupData& operator=(HealthWarningSceneSetupData&& o) noexcept = default;
  constexpr HealthWarningSceneSetupData& operator=(HealthWarningSceneSetupData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get__nextScenesTransitionSetupData, put=__set__nextScenesTransitionSetupData))  _nextScenesTransitionSetupData;

constexpr void __set__nextScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get__nextScenesTransitionSetupData() const;


// Properties

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=get_nextScenesTransitionSetupData))  nextScenesTransitionSetupData;


// Methods

/// @brief Method get_nextScenesTransitionSetupData addr 0x21cf910 size 0x8 virtual false final false
 GlobalNamespace::ScenesTransitionSetupDataSO get_nextScenesTransitionSetupData() ;

// Ctor Parameters [CppParam { name: "nextScenesTransitionSetupData", ty: "GlobalNamespace::ScenesTransitionSetupDataSO", modifiers: "", def_value: None }]
explicit HealthWarningSceneSetupData(GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData) ;

/// @brief Method .ctor addr 0x21cf918 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HealthWarningSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningSceneSetupData, "", "HealthWarningSceneSetupData");
