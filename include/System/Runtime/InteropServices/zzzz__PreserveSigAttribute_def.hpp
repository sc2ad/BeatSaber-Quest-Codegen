#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::InteropServices {
class PreserveSigAttribute;
}
// Type: System.Runtime.InteropServices::PreserveSigAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3318))
// CS Name: System.Runtime.InteropServices.PreserveSigAttribute
class CORDL_TYPE PreserveSigAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PreserveSigAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreserveSigAttribute", modifiers: " const&", def_value: None }]
constexpr PreserveSigAttribute(PreserveSigAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreserveSigAttribute", modifiers: "&&", def_value: None }]
constexpr PreserveSigAttribute(PreserveSigAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreserveSigAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr PreserveSigAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreserveSigAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreserveSigAttribute& operator=(PreserveSigAttribute&& o) noexcept = default;
  constexpr PreserveSigAttribute& operator=(PreserveSigAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PreserveSigAttribute() ;

/// @brief Method .ctor addr 0x236ac98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::PreserveSigAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::PreserveSigAttribute, "System.Runtime.InteropServices", "PreserveSigAttribute");
