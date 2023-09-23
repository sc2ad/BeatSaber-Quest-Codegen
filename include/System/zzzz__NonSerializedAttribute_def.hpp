#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System {
class NonSerializedAttribute;
}
// Type: System::NonSerializedAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2443))
// CS Name: System.NonSerializedAttribute
class CORDL_TYPE NonSerializedAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NonSerializedAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NonSerializedAttribute", modifiers: " const&", def_value: None }]
constexpr NonSerializedAttribute(NonSerializedAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NonSerializedAttribute", modifiers: "&&", def_value: None }]
constexpr NonSerializedAttribute(NonSerializedAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NonSerializedAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NonSerializedAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NonSerializedAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NonSerializedAttribute& operator=(NonSerializedAttribute&& o) noexcept = default;
  constexpr NonSerializedAttribute& operator=(NonSerializedAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NonSerializedAttribute() ;

/// @brief Method .ctor addr 0x2442a64 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::NonSerializedAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::NonSerializedAttribute, "System", "NonSerializedAttribute");
