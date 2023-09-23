#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::InteropServices {
class OutAttribute;
}
// Type: System.Runtime.InteropServices::OutAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3320))
// CS Name: System.Runtime.InteropServices.OutAttribute
class CORDL_TYPE OutAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OutAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "OutAttribute", modifiers: " const&", def_value: None }]
constexpr OutAttribute(OutAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OutAttribute", modifiers: "&&", def_value: None }]
constexpr OutAttribute(OutAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OutAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr OutAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OutAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OutAttribute& operator=(OutAttribute&& o) noexcept = default;
  constexpr OutAttribute& operator=(OutAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OutAttribute() ;

/// @brief Method .ctor addr 0x236aca8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::OutAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::OutAttribute, "System.Runtime.InteropServices", "OutAttribute");
