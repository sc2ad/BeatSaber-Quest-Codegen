#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IntrinsicAttribute;
}
// Type: System.Runtime.CompilerServices::IntrinsicAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3368))
// CS Name: System.Runtime.CompilerServices.IntrinsicAttribute
class CORDL_TYPE IntrinsicAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IntrinsicAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntrinsicAttribute", modifiers: " const&", def_value: None }]
constexpr IntrinsicAttribute(IntrinsicAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntrinsicAttribute", modifiers: "&&", def_value: None }]
constexpr IntrinsicAttribute(IntrinsicAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntrinsicAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr IntrinsicAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntrinsicAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntrinsicAttribute& operator=(IntrinsicAttribute&& o) noexcept = default;
  constexpr IntrinsicAttribute& operator=(IntrinsicAttribute const& o) noexcept = default;
                


// Methods

static System::Runtime::CompilerServices::IntrinsicAttribute New_ctor() ;

/// @brief Method .ctor addr 0x236e0c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::IntrinsicAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::IntrinsicAttribute, "System.Runtime.CompilerServices", "IntrinsicAttribute");
