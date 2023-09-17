#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class UnsafeValueTypeAttribute;
}
// Type: System.Runtime.CompilerServices::UnsafeValueTypeAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3380))
// CS Name: System.Runtime.CompilerServices.UnsafeValueTypeAttribute
class CORDL_TYPE UnsafeValueTypeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnsafeValueTypeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeValueTypeAttribute", modifiers: " const&", def_value: None }]
constexpr UnsafeValueTypeAttribute(UnsafeValueTypeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeValueTypeAttribute", modifiers: "&&", def_value: None }]
constexpr UnsafeValueTypeAttribute(UnsafeValueTypeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnsafeValueTypeAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr UnsafeValueTypeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnsafeValueTypeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnsafeValueTypeAttribute& operator=(UnsafeValueTypeAttribute&& o) noexcept = default;
  constexpr UnsafeValueTypeAttribute& operator=(UnsafeValueTypeAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnsafeValueTypeAttribute() ;

/// @brief Method .ctor addr 0x236e4dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::UnsafeValueTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::UnsafeValueTypeAttribute, "System.Runtime.CompilerServices", "UnsafeValueTypeAttribute");
