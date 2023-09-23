#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine {
class PropertyAttribute;
}
// Type: UnityEngine::PropertyAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10112))
// CS Name: UnityEngine.PropertyAttribute
class CORDL_TYPE PropertyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PropertyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyAttribute", modifiers: " const&", def_value: None }]
constexpr PropertyAttribute(PropertyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyAttribute", modifiers: "&&", def_value: None }]
constexpr PropertyAttribute(PropertyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr PropertyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyAttribute& operator=(PropertyAttribute&& o) noexcept = default;
  constexpr PropertyAttribute& operator=(PropertyAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PropertyAttribute() ;

/// @brief Method .ctor addr 0x2b54db0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::PropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PropertyAttribute, "UnityEngine", "PropertyAttribute");
