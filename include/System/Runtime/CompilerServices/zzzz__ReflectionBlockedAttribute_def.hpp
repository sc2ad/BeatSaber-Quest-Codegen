#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class ReflectionBlockedAttribute;
}
// Type: System.Runtime.CompilerServices::ReflectionBlockedAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3391))
// CS Name: System.Runtime.CompilerServices.ReflectionBlockedAttribute
class CORDL_TYPE ReflectionBlockedAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ReflectionBlockedAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionBlockedAttribute", modifiers: " const&", def_value: None }]
constexpr ReflectionBlockedAttribute(ReflectionBlockedAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionBlockedAttribute", modifiers: "&&", def_value: None }]
constexpr ReflectionBlockedAttribute(ReflectionBlockedAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionBlockedAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ReflectionBlockedAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionBlockedAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionBlockedAttribute& operator=(ReflectionBlockedAttribute&& o) noexcept = default;
  constexpr ReflectionBlockedAttribute& operator=(ReflectionBlockedAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ReflectionBlockedAttribute() ;

/// @brief Method .ctor addr 0x236f0d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::ReflectionBlockedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ReflectionBlockedAttribute, "System.Runtime.CompilerServices", "ReflectionBlockedAttribute");
