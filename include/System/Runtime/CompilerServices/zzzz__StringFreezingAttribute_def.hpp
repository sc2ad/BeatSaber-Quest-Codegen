#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Runtime::CompilerServices {
class StringFreezingAttribute;
}
// Type: System.Runtime.CompilerServices::StringFreezingAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3377))
// CS Name: System.Runtime.CompilerServices.StringFreezingAttribute
class CORDL_TYPE StringFreezingAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StringFreezingAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringFreezingAttribute", modifiers: " const&", def_value: None }]
constexpr StringFreezingAttribute(StringFreezingAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringFreezingAttribute", modifiers: "&&", def_value: None }]
constexpr StringFreezingAttribute(StringFreezingAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringFreezingAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr StringFreezingAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringFreezingAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringFreezingAttribute& operator=(StringFreezingAttribute&& o) noexcept = default;
  constexpr StringFreezingAttribute& operator=(StringFreezingAttribute const& o) noexcept = default;
                


// Methods

static System::Runtime::CompilerServices::StringFreezingAttribute New_ctor() ;

/// @brief Method .ctor addr 0x236e3d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::StringFreezingAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::StringFreezingAttribute, "System.Runtime.CompilerServices", "StringFreezingAttribute");
