#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CompilerGeneratedAttribute;
}
// Type: System.Runtime.CompilerServices::CompilerGeneratedAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3353))
// CS Name: System.Runtime.CompilerServices.CompilerGeneratedAttribute
class CORDL_TYPE CompilerGeneratedAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CompilerGeneratedAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompilerGeneratedAttribute", modifiers: " const&", def_value: None }]
constexpr CompilerGeneratedAttribute(CompilerGeneratedAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompilerGeneratedAttribute", modifiers: "&&", def_value: None }]
constexpr CompilerGeneratedAttribute(CompilerGeneratedAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompilerGeneratedAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr CompilerGeneratedAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompilerGeneratedAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompilerGeneratedAttribute& operator=(CompilerGeneratedAttribute&& o) noexcept = default;
  constexpr CompilerGeneratedAttribute& operator=(CompilerGeneratedAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CompilerGeneratedAttribute() ;

/// @brief Method .ctor addr 0x236da0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::CompilerGeneratedAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::CompilerGeneratedAttribute, "System.Runtime.CompilerServices", "CompilerGeneratedAttribute");
