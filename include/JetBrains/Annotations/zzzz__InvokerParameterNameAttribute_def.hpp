#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class InvokerParameterNameAttribute;
}
// Type: JetBrains.Annotations::InvokerParameterNameAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15684))
// CS Name: JetBrains.Annotations.InvokerParameterNameAttribute
class CORDL_TYPE InvokerParameterNameAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InvokerParameterNameAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokerParameterNameAttribute", modifiers: " const&", def_value: None }]
constexpr InvokerParameterNameAttribute(InvokerParameterNameAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvokerParameterNameAttribute", modifiers: "&&", def_value: None }]
constexpr InvokerParameterNameAttribute(InvokerParameterNameAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvokerParameterNameAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr InvokerParameterNameAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvokerParameterNameAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvokerParameterNameAttribute& operator=(InvokerParameterNameAttribute&& o) noexcept = default;
  constexpr InvokerParameterNameAttribute& operator=(InvokerParameterNameAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InvokerParameterNameAttribute() ;

/// @brief Method .ctor addr 0x2d40aec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::InvokerParameterNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::InvokerParameterNameAttribute, "JetBrains.Annotations", "InvokerParameterNameAttribute");
