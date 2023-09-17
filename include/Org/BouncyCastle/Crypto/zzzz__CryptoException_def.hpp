#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class CryptoException;
}
// Type: Org.BouncyCastle.Crypto::CryptoException
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1347))
// CS Name: Org.BouncyCastle.Crypto.CryptoException
class CORDL_TYPE CryptoException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CryptoException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoException", modifiers: " const&", def_value: None }]
constexpr CryptoException(CryptoException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoException", modifiers: "&&", def_value: None }]
constexpr CryptoException(CryptoException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptoException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr CryptoException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptoException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptoException& operator=(CryptoException&& o) noexcept = default;
  constexpr CryptoException& operator=(CryptoException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CryptoException() ;

/// @brief Method .ctor addr 0xf386b4 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit CryptoException(::StringW message) ;

/// @brief Method .ctor addr 0xf3870c size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit CryptoException(::StringW message, ::System::Exception exception) ;

/// @brief Method .ctor addr 0xf38774 size 0x70 virtual false final false
 void _ctor(::StringW message, ::System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::CryptoException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::CryptoException, "Org.BouncyCastle.Crypto", "CryptoException");
