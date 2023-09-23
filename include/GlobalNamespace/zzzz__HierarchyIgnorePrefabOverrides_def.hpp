#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class HierarchyIgnorePrefabOverrides;
}
// Type: ::HierarchyIgnorePrefabOverrides
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4230))
// CS Name: HierarchyIgnorePrefabOverrides
class CORDL_TYPE HierarchyIgnorePrefabOverrides : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HierarchyIgnorePrefabOverrides() = default;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyIgnorePrefabOverrides", modifiers: " const&", def_value: None }]
constexpr HierarchyIgnorePrefabOverrides(HierarchyIgnorePrefabOverrides const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyIgnorePrefabOverrides", modifiers: "&&", def_value: None }]
constexpr HierarchyIgnorePrefabOverrides(HierarchyIgnorePrefabOverrides&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HierarchyIgnorePrefabOverrides(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HierarchyIgnorePrefabOverrides& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HierarchyIgnorePrefabOverrides& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HierarchyIgnorePrefabOverrides& operator=(HierarchyIgnorePrefabOverrides&& o) noexcept = default;
  constexpr HierarchyIgnorePrefabOverrides& operator=(HierarchyIgnorePrefabOverrides const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HierarchyIgnorePrefabOverrides() ;

/// @brief Method .ctor addr 0x21c3a70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HierarchyIgnorePrefabOverrides);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HierarchyIgnorePrefabOverrides, "", "HierarchyIgnorePrefabOverrides");
