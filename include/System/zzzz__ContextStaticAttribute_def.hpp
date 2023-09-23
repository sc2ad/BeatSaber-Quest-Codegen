#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System {
class ContextStaticAttribute;
}
// Type: System::ContextStaticAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2549))
// CS Name: System.ContextStaticAttribute
class CORDL_TYPE ContextStaticAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ContextStaticAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextStaticAttribute", modifiers: " const&", def_value: None }]
constexpr ContextStaticAttribute(ContextStaticAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextStaticAttribute", modifiers: "&&", def_value: None }]
constexpr ContextStaticAttribute(ContextStaticAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextStaticAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ContextStaticAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextStaticAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextStaticAttribute& operator=(ContextStaticAttribute&& o) noexcept = default;
  constexpr ContextStaticAttribute& operator=(ContextStaticAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ContextStaticAttribute() ;

/// @brief Method .ctor addr 0x246e194 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ContextStaticAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ContextStaticAttribute, "System", "ContextStaticAttribute");
