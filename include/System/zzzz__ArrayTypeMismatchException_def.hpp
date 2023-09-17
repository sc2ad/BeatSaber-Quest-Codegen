#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class ArrayTypeMismatchException;
}
// Type: System::ArrayTypeMismatchException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2350))
// CS Name: System.ArrayTypeMismatchException
class CORDL_TYPE ArrayTypeMismatchException : public ::System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ArrayTypeMismatchException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayTypeMismatchException", modifiers: " const&", def_value: None }]
constexpr ArrayTypeMismatchException(ArrayTypeMismatchException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayTypeMismatchException", modifiers: "&&", def_value: None }]
constexpr ArrayTypeMismatchException(ArrayTypeMismatchException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayTypeMismatchException(void* ptr) noexcept : ::System::SystemException(ptr) {
}


  constexpr ArrayTypeMismatchException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayTypeMismatchException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayTypeMismatchException& operator=(ArrayTypeMismatchException&& o) noexcept = default;
  constexpr ArrayTypeMismatchException& operator=(ArrayTypeMismatchException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ArrayTypeMismatchException() ;

/// @brief Method .ctor addr 0x23b45d8 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ArrayTypeMismatchException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b4634 size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::ArrayTypeMismatchException);
DEFINE_IL2CPP_ARG_TYPE(::System::ArrayTypeMismatchException, "System", "ArrayTypeMismatchException");
