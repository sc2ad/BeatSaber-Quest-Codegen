#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class ArithmeticException;
}
// Type: System::ArithmeticException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2347))
// CS Name: System.ArithmeticException
class CORDL_TYPE ArithmeticException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ArithmeticException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArithmeticException", modifiers: " const&", def_value: None }]
constexpr ArithmeticException(ArithmeticException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArithmeticException", modifiers: "&&", def_value: None }]
constexpr ArithmeticException(ArithmeticException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArithmeticException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr ArithmeticException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArithmeticException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArithmeticException& operator=(ArithmeticException&& o) noexcept = default;
  constexpr ArithmeticException& operator=(ArithmeticException const& o) noexcept = default;
                


// Methods

static System::ArithmeticException New_ctor() ;

/// @brief Method .ctor addr 0x23b452c size 0x5c virtual false final false
 void _ctor() ;

static System::ArithmeticException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x23b4588 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::ArithmeticException New_ctor(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x23b45ac size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

static System::ArithmeticException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b45d0 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ArithmeticException);
DEFINE_IL2CPP_ARG_TYPE(System::ArithmeticException, "System", "ArithmeticException");
