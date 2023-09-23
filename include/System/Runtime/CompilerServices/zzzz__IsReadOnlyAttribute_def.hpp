#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IsReadOnlyAttribute;
}
// Type: System.Runtime.CompilerServices::IsReadOnlyAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3370))
// CS Name: System.Runtime.CompilerServices.IsReadOnlyAttribute
class CORDL_TYPE IsReadOnlyAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IsReadOnlyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "IsReadOnlyAttribute", modifiers: " const&", def_value: None }]
constexpr IsReadOnlyAttribute(IsReadOnlyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IsReadOnlyAttribute", modifiers: "&&", def_value: None }]
constexpr IsReadOnlyAttribute(IsReadOnlyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IsReadOnlyAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr IsReadOnlyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IsReadOnlyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IsReadOnlyAttribute& operator=(IsReadOnlyAttribute&& o) noexcept = default;
  constexpr IsReadOnlyAttribute& operator=(IsReadOnlyAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit IsReadOnlyAttribute() ;

/// @brief Method .ctor addr 0x236e0d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::IsReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::IsReadOnlyAttribute, "System.Runtime.CompilerServices", "IsReadOnlyAttribute");
