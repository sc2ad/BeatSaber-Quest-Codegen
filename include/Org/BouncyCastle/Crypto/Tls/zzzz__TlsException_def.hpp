#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsException;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsException
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1307))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsException
class CORDL_TYPE TlsException : public System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TlsException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: " const&", def_value: None }]
constexpr TlsException(TlsException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsException", modifiers: "&&", def_value: None }]
constexpr TlsException(TlsException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsException(void* ptr) noexcept : System::IO::IOException(ptr) {
}


  constexpr TlsException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsException& operator=(TlsException&& o) noexcept = default;
  constexpr TlsException& operator=(TlsException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Crypto::Tls::TlsException New_ctor(::StringW message, System::Exception cause) ;

/// @brief Method .ctor addr 0xf1edf8 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception cause) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsException, "Org.BouncyCastle.Crypto.Tls", "TlsException");
