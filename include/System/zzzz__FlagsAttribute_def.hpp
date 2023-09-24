#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System {
class FlagsAttribute;
}
// Type: System::FlagsAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2381))
// CS Name: System.FlagsAttribute
class CORDL_TYPE FlagsAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FlagsAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlagsAttribute", modifiers: " const&", def_value: None }]
constexpr FlagsAttribute(FlagsAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlagsAttribute", modifiers: "&&", def_value: None }]
constexpr FlagsAttribute(FlagsAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlagsAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr FlagsAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlagsAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlagsAttribute& operator=(FlagsAttribute&& o) noexcept = default;
  constexpr FlagsAttribute& operator=(FlagsAttribute const& o) noexcept = default;
                


// Methods

static System::FlagsAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2429398 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::FlagsAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::FlagsAttribute, "System", "FlagsAttribute");
