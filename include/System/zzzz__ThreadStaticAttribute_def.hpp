#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System {
class ThreadStaticAttribute;
}
// Type: System::ThreadStaticAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2482))
// CS Name: System.ThreadStaticAttribute
class CORDL_TYPE ThreadStaticAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ThreadStaticAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStaticAttribute", modifiers: " const&", def_value: None }]
constexpr ThreadStaticAttribute(ThreadStaticAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStaticAttribute", modifiers: "&&", def_value: None }]
constexpr ThreadStaticAttribute(ThreadStaticAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadStaticAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ThreadStaticAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadStaticAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadStaticAttribute& operator=(ThreadStaticAttribute&& o) noexcept = default;
  constexpr ThreadStaticAttribute& operator=(ThreadStaticAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ThreadStaticAttribute() ;

/// @brief Method .ctor addr 0x2457b6c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ThreadStaticAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ThreadStaticAttribute, "System", "ThreadStaticAttribute");
