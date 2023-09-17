#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CryptoException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class InvalidCipherTextException;
}
// Type: Org.BouncyCastle.Crypto::InvalidCipherTextException
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1350))
// CS Name: Org.BouncyCastle.Crypto.InvalidCipherTextException
class CORDL_TYPE InvalidCipherTextException : public ::Org::BouncyCastle::Crypto::CryptoException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InvalidCipherTextException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidCipherTextException", modifiers: " const&", def_value: None }]
constexpr InvalidCipherTextException(InvalidCipherTextException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidCipherTextException", modifiers: "&&", def_value: None }]
constexpr InvalidCipherTextException(InvalidCipherTextException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidCipherTextException(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::CryptoException(ptr) {
}


  constexpr InvalidCipherTextException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidCipherTextException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidCipherTextException& operator=(InvalidCipherTextException&& o) noexcept = default;
  constexpr InvalidCipherTextException& operator=(InvalidCipherTextException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InvalidCipherTextException() ;

/// @brief Method .ctor addr 0xf387ec size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit InvalidCipherTextException(::StringW message) ;

/// @brief Method .ctor addr 0xf387f0 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit InvalidCipherTextException(::StringW message, ::System::Exception exception) ;

/// @brief Method .ctor addr 0xf387f4 size 0x4 virtual false final false
 void _ctor(::StringW message, ::System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::InvalidCipherTextException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::InvalidCipherTextException, "Org.BouncyCastle.Crypto", "InvalidCipherTextException");
