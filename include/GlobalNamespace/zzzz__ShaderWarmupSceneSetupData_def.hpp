#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
// Type: ::ShaderWarmupSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6110))
// CS Name: ShaderWarmupSceneSetupData
class CORDL_TYPE ShaderWarmupSceneSetupData : public GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ShaderWarmupSceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetupData", modifiers: " const&", def_value: None }]
constexpr ShaderWarmupSceneSetupData(ShaderWarmupSceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneSetupData", modifiers: "&&", def_value: None }]
constexpr ShaderWarmupSceneSetupData(ShaderWarmupSceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderWarmupSceneSetupData(void* ptr) noexcept : GlobalNamespace::SceneSetupData(ptr) {
}


  constexpr ShaderWarmupSceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderWarmupSceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderWarmupSceneSetupData& operator=(ShaderWarmupSceneSetupData&& o) noexcept = default;
  constexpr ShaderWarmupSceneSetupData& operator=(ShaderWarmupSceneSetupData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get__nextScenesTransitionSetupData_k__BackingField, put=__set__nextScenesTransitionSetupData_k__BackingField))  _nextScenesTransitionSetupData_k__BackingField;

constexpr void __set__nextScenesTransitionSetupData_k__BackingField(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get__nextScenesTransitionSetupData_k__BackingField() const;


// Properties

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=get_nextScenesTransitionSetupData, put=set_nextScenesTransitionSetupData))  nextScenesTransitionSetupData;


// Methods

/// @brief Method get_nextScenesTransitionSetupData addr 0x21cfa24 size 0x8 virtual false final false
 GlobalNamespace::ScenesTransitionSetupDataSO get_nextScenesTransitionSetupData() ;

/// @brief Method set_nextScenesTransitionSetupData addr 0x21cfa2c size 0x8 virtual false final false
 void set_nextScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

static GlobalNamespace::ShaderWarmupSceneSetupData New_ctor(GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData) ;

/// @brief Method .ctor addr 0x21cfa34 size 0x28 virtual false final false
 void _ctor(GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ShaderWarmupSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderWarmupSceneSetupData, "", "ShaderWarmupSceneSetupData");
