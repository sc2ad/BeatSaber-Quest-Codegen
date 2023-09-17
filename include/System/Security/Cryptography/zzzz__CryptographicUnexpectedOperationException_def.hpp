#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__CryptographicException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptographicUnexpectedOperationException;
}
// Type: System.Security.Cryptography::CryptographicUnexpectedOperationException
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2920))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2921))
// CS Name: System.Security.Cryptography.CryptographicUnexpectedOperationException
class CORDL_TYPE CryptographicUnexpectedOperationException : public ::System::Security::Cryptography::CryptographicException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CryptographicUnexpectedOperationException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptographicUnexpectedOperationException", modifiers: " const&", def_value: None }]
constexpr CryptographicUnexpectedOperationException(CryptographicUnexpectedOperationException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptographicUnexpectedOperationException", modifiers: "&&", def_value: None }]
constexpr CryptographicUnexpectedOperationException(CryptographicUnexpectedOperationException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptographicUnexpectedOperationException(void* ptr) noexcept : ::System::Security::Cryptography::CryptographicException(ptr) {
}


  constexpr CryptographicUnexpectedOperationException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptographicUnexpectedOperationException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptographicUnexpectedOperationException& operator=(CryptographicUnexpectedOperationException&& o) noexcept = default;
  constexpr CryptographicUnexpectedOperationException& operator=(CryptographicUnexpectedOperationException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CryptographicUnexpectedOperationException() ;

/// @brief Method .ctor addr 0x22effdc size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit CryptographicUnexpectedOperationException(::StringW message) ;

/// @brief Method .ctor addr 0x22ef238 size 0x48 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit CryptographicUnexpectedOperationException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x22f0000 size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::CryptographicUnexpectedOperationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptographicUnexpectedOperationException, "System.Security.Cryptography", "CryptographicUnexpectedOperationException");
