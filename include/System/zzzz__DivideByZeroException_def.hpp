#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ArithmeticException_def.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class DivideByZeroException;
}
// Type: System::DivideByZeroException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2372))
// CS Name: System.DivideByZeroException
class CORDL_TYPE DivideByZeroException : public ::System::ArithmeticException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~DivideByZeroException() = default;

// Ctor Parameters [CppParam { name: "", ty: "DivideByZeroException", modifiers: " const&", def_value: None }]
constexpr DivideByZeroException(DivideByZeroException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DivideByZeroException", modifiers: "&&", def_value: None }]
constexpr DivideByZeroException(DivideByZeroException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DivideByZeroException(void* ptr) noexcept : ::System::ArithmeticException(ptr) {
}


  constexpr DivideByZeroException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DivideByZeroException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DivideByZeroException& operator=(DivideByZeroException&& o) noexcept = default;
  constexpr DivideByZeroException& operator=(DivideByZeroException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DivideByZeroException() ;

/// @brief Method .ctor addr 0x2427790 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit DivideByZeroException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24277ec size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::DivideByZeroException);
DEFINE_IL2CPP_ARG_TYPE(::System::DivideByZeroException, "System", "DivideByZeroException");
