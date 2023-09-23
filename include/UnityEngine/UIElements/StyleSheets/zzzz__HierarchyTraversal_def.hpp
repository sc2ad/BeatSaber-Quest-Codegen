#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class HierarchyTraversal;
}
// Type: UnityEngine.UIElements.StyleSheets::HierarchyTraversal
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7559))
// CS Name: UnityEngine.UIElements.StyleSheets.HierarchyTraversal
class CORDL_TYPE HierarchyTraversal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HierarchyTraversal() = default;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyTraversal", modifiers: " const&", def_value: None }]
constexpr HierarchyTraversal(HierarchyTraversal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HierarchyTraversal", modifiers: "&&", def_value: None }]
constexpr HierarchyTraversal(HierarchyTraversal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HierarchyTraversal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HierarchyTraversal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HierarchyTraversal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HierarchyTraversal& operator=(HierarchyTraversal&& o) noexcept = default;
  constexpr HierarchyTraversal& operator=(HierarchyTraversal const& o) noexcept = default;
                


// Methods

/// @brief Method Traverse addr 0x2c6b210 size 0x10 virtual true final false
 void Traverse(UnityEngine::UIElements::VisualElement element) ;

/// @brief Method TraverseRecursive addr 0x0 size 0xffffffffffffffff virtual true final false
 void TraverseRecursive(UnityEngine::UIElements::VisualElement element, int32_t depth) ;

/// @brief Method Recurse addr 0x2c6b220 size 0xd0 virtual false final false
 void Recurse(UnityEngine::UIElements::VisualElement element, int32_t depth) ;

// Ctor Parameters []
explicit HierarchyTraversal() ;

/// @brief Method .ctor addr 0x2c6b2f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::HierarchyTraversal);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::HierarchyTraversal, "UnityEngine.UIElements.StyleSheets", "HierarchyTraversal");
