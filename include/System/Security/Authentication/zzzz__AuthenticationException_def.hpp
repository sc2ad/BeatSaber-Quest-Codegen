#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Security::Authentication {
class AuthenticationException;
}
// Type: System.Security.Authentication::AuthenticationException
namespace System::Security::Authentication {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7814))
// CS Name: System.Security.Authentication.AuthenticationException
class CORDL_TYPE AuthenticationException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~AuthenticationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationException", modifiers: " const&", def_value: None }]
constexpr AuthenticationException(AuthenticationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationException", modifiers: "&&", def_value: None }]
constexpr AuthenticationException(AuthenticationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticationException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr AuthenticationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticationException& operator=(AuthenticationException&& o) noexcept = default;
  constexpr AuthenticationException& operator=(AuthenticationException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AuthenticationException() ;

/// @brief Method .ctor addr 0x27e1bb4 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit AuthenticationException(::StringW message) ;

/// @brief Method .ctor addr 0x27e1c0c size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: None }]
explicit AuthenticationException(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x27e1c14 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit AuthenticationException(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x27e1c1c size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Authentication
NEED_NO_BOX(System::Security::Authentication::AuthenticationException);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Authentication::AuthenticationException, "System.Security.Authentication", "AuthenticationException");
