#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System {
class SerializableAttribute;
}
// Type: System::SerializableAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2467))
// CS Name: System.SerializableAttribute
class CORDL_TYPE SerializableAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SerializableAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializableAttribute", modifiers: " const&", def_value: None }]
constexpr SerializableAttribute(SerializableAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerializableAttribute", modifiers: "&&", def_value: None }]
constexpr SerializableAttribute(SerializableAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerializableAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr SerializableAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerializableAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerializableAttribute& operator=(SerializableAttribute&& o) noexcept = default;
  constexpr SerializableAttribute& operator=(SerializableAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SerializableAttribute() ;

/// @brief Method .ctor addr 0x2452f9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::SerializableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::SerializableAttribute, "System", "SerializableAttribute");
