#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::Versioning {
class NonVersionableAttribute;
}
// Type: System.Runtime.Versioning::NonVersionableAttribute
namespace System::Runtime::Versioning {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3187))
// CS Name: System.Runtime.Versioning.NonVersionableAttribute
class CORDL_TYPE NonVersionableAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NonVersionableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NonVersionableAttribute", modifiers: " const&", def_value: None }]
constexpr NonVersionableAttribute(NonVersionableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NonVersionableAttribute", modifiers: "&&", def_value: None }]
constexpr NonVersionableAttribute(NonVersionableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NonVersionableAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NonVersionableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NonVersionableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NonVersionableAttribute& operator=(NonVersionableAttribute&& o) noexcept = default;
  constexpr NonVersionableAttribute& operator=(NonVersionableAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NonVersionableAttribute() ;

/// @brief Method .ctor addr 0x234814c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Versioning
NEED_NO_BOX(System::Runtime::Versioning::NonVersionableAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Versioning::NonVersionableAttribute, "System.Runtime.Versioning", "NonVersionableAttribute");
