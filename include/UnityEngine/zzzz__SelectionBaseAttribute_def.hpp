#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class SelectionBaseAttribute;
}
// Type: UnityEngine::SelectionBaseAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10132))
// CS Name: UnityEngine.SelectionBaseAttribute
class CORDL_TYPE SelectionBaseAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SelectionBaseAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectionBaseAttribute", modifiers: " const&", def_value: None }]
constexpr SelectionBaseAttribute(SelectionBaseAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectionBaseAttribute", modifiers: "&&", def_value: None }]
constexpr SelectionBaseAttribute(SelectionBaseAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectionBaseAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr SelectionBaseAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectionBaseAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectionBaseAttribute& operator=(SelectionBaseAttribute&& o) noexcept = default;
  constexpr SelectionBaseAttribute& operator=(SelectionBaseAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SelectionBaseAttribute() ;

/// @brief Method .ctor addr 0x2b55fcc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SelectionBaseAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SelectionBaseAttribute, "UnityEngine", "SelectionBaseAttribute");
