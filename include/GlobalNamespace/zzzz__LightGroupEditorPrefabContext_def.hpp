#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class LightGroupSO;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupEditorPrefabContext;
}
// Type: ::LightGroupEditorPrefabContext
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14670))
// CS Name: LightGroupEditorPrefabContext
class CORDL_TYPE LightGroupEditorPrefabContext : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LightGroupEditorPrefabContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupEditorPrefabContext", modifiers: " const&", def_value: None }]
constexpr LightGroupEditorPrefabContext(LightGroupEditorPrefabContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupEditorPrefabContext", modifiers: "&&", def_value: None }]
constexpr LightGroupEditorPrefabContext(LightGroupEditorPrefabContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupEditorPrefabContext(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightGroupEditorPrefabContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupEditorPrefabContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupEditorPrefabContext& operator=(LightGroupEditorPrefabContext&& o) noexcept = default;
  constexpr LightGroupEditorPrefabContext& operator=(LightGroupEditorPrefabContext const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::LightGroupSO> __declspec(property(get=__get_lightGroups, put=__set_lightGroups))  lightGroups;

constexpr void __set_lightGroups(System::Collections::Generic::List_1<GlobalNamespace::LightGroupSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::LightGroupSO> __get_lightGroups() const;


// Methods

// Ctor Parameters []
explicit LightGroupEditorPrefabContext() ;

/// @brief Method .ctor addr 0x1f9bf70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightGroupEditorPrefabContext);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightGroupEditorPrefabContext, "", "LightGroupEditorPrefabContext");
