#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptographicException;
}
// Type: System.Security.Cryptography::CryptographicException
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2920))
// CS Name: System.Security.Cryptography.CryptographicException
class CORDL_TYPE CryptographicException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CryptographicException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptographicException", modifiers: " const&", def_value: None }]
constexpr CryptographicException(CryptographicException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptographicException", modifiers: "&&", def_value: None }]
constexpr CryptographicException(CryptographicException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptographicException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr CryptographicException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptographicException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptographicException& operator=(CryptographicException&& o) noexcept = default;
  constexpr CryptographicException& operator=(CryptographicException const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::CryptographicException New_ctor() ;

/// @brief Method .ctor addr 0x22efea8 size 0x6c virtual false final false
 void _ctor() ;

static System::Security::Cryptography::CryptographicException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x22efd0c size 0x28 virtual false final false
 void _ctor(::StringW message) ;

static System::Security::Cryptography::CryptographicException New_ctor(::StringW format, ::StringW insert) ;

/// @brief Method .ctor addr 0x22eff14 size 0x98 virtual false final false
 void _ctor(::StringW format, ::StringW insert) ;

static System::Security::Cryptography::CryptographicException New_ctor(::StringW message, System::Exception inner) ;

/// @brief Method .ctor addr 0x22effac size 0x28 virtual false final false
 void _ctor(::StringW message, System::Exception inner) ;

static System::Security::Cryptography::CryptographicException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x22effd4 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::CryptographicException);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptographicException, "System.Security.Cryptography", "CryptographicException");
