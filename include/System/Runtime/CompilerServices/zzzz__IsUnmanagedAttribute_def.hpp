#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IsUnmanagedAttribute;
}
// Type: System.Runtime.CompilerServices::IsUnmanagedAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8437))
// CS Name: System.Runtime.CompilerServices.IsUnmanagedAttribute
class CORDL_TYPE IsUnmanagedAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IsUnmanagedAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "IsUnmanagedAttribute", modifiers: " const&", def_value: None }]
constexpr IsUnmanagedAttribute(IsUnmanagedAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IsUnmanagedAttribute", modifiers: "&&", def_value: None }]
constexpr IsUnmanagedAttribute(IsUnmanagedAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IsUnmanagedAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr IsUnmanagedAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IsUnmanagedAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IsUnmanagedAttribute& operator=(IsUnmanagedAttribute&& o) noexcept = default;
  constexpr IsUnmanagedAttribute& operator=(IsUnmanagedAttribute const& o) noexcept = default;
                


// Methods

static System::Runtime::CompilerServices::IsUnmanagedAttribute New_ctor() ;

/// @brief Method .ctor addr 0x25a4d78 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::IsUnmanagedAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::IsUnmanagedAttribute, "System.Runtime.CompilerServices", "IsUnmanagedAttribute");
