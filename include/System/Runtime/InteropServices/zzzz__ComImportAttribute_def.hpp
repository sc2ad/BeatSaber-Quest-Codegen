#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::InteropServices {
class ComImportAttribute;
}
// Type: System.Runtime.InteropServices::ComImportAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3316))
// CS Name: System.Runtime.InteropServices.ComImportAttribute
class CORDL_TYPE ComImportAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ComImportAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComImportAttribute", modifiers: " const&", def_value: None }]
constexpr ComImportAttribute(ComImportAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComImportAttribute", modifiers: "&&", def_value: None }]
constexpr ComImportAttribute(ComImportAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComImportAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ComImportAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComImportAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComImportAttribute& operator=(ComImportAttribute&& o) noexcept = default;
  constexpr ComImportAttribute& operator=(ComImportAttribute const& o) noexcept = default;
                


// Methods

static System::Runtime::InteropServices::ComImportAttribute New_ctor() ;

/// @brief Method .ctor addr 0x236ac68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::ComImportAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ComImportAttribute, "System.Runtime.InteropServices", "ComImportAttribute");
