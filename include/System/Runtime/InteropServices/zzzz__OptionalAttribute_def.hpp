#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::InteropServices {
class OptionalAttribute;
}
// Type: System.Runtime.InteropServices::OptionalAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3321))
// CS Name: System.Runtime.InteropServices.OptionalAttribute
class CORDL_TYPE OptionalAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OptionalAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OptionalAttribute", modifiers: " const&", def_value: None }]
constexpr OptionalAttribute(OptionalAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OptionalAttribute", modifiers: "&&", def_value: None }]
constexpr OptionalAttribute(OptionalAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OptionalAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr OptionalAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OptionalAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OptionalAttribute& operator=(OptionalAttribute&& o) noexcept = default;
  constexpr OptionalAttribute& operator=(OptionalAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OptionalAttribute() ;

/// @brief Method .ctor addr 0x236acb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::InteropServices::OptionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::OptionalAttribute, "System.Runtime.InteropServices", "OptionalAttribute");
