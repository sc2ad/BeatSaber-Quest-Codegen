#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::ExceptionServices {
class HandleProcessCorruptedStateExceptionsAttribute;
}
// Type: System.Runtime.ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute
namespace System::Runtime::ExceptionServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3341))
// CS Name: System.Runtime.ExceptionServices.HandleProcessCorruptedStateExceptionsAttribute
class CORDL_TYPE HandleProcessCorruptedStateExceptionsAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HandleProcessCorruptedStateExceptionsAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "HandleProcessCorruptedStateExceptionsAttribute", modifiers: " const&", def_value: None }]
constexpr HandleProcessCorruptedStateExceptionsAttribute(HandleProcessCorruptedStateExceptionsAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HandleProcessCorruptedStateExceptionsAttribute", modifiers: "&&", def_value: None }]
constexpr HandleProcessCorruptedStateExceptionsAttribute(HandleProcessCorruptedStateExceptionsAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HandleProcessCorruptedStateExceptionsAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr HandleProcessCorruptedStateExceptionsAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HandleProcessCorruptedStateExceptionsAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HandleProcessCorruptedStateExceptionsAttribute& operator=(HandleProcessCorruptedStateExceptionsAttribute&& o) noexcept = default;
  constexpr HandleProcessCorruptedStateExceptionsAttribute& operator=(HandleProcessCorruptedStateExceptionsAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HandleProcessCorruptedStateExceptionsAttribute() ;

/// @brief Method .ctor addr 0x236d7f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::ExceptionServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute, "System.Runtime.ExceptionServices", "HandleProcessCorruptedStateExceptionsAttribute");
