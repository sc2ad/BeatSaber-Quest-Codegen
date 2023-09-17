#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class ExtensionAttribute;
}
// Type: System.Runtime.CompilerServices::ExtensionAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3361))
// CS Name: System.Runtime.CompilerServices.ExtensionAttribute
class CORDL_TYPE ExtensionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExtensionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionAttribute", modifiers: " const&", def_value: None }]
constexpr ExtensionAttribute(ExtensionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionAttribute", modifiers: "&&", def_value: None }]
constexpr ExtensionAttribute(ExtensionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExtensionAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ExtensionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExtensionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExtensionAttribute& operator=(ExtensionAttribute&& o) noexcept = default;
  constexpr ExtensionAttribute& operator=(ExtensionAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ExtensionAttribute() ;

/// @brief Method .ctor addr 0x236df04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::ExtensionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ExtensionAttribute, "System.Runtime.CompilerServices", "ExtensionAttribute");
