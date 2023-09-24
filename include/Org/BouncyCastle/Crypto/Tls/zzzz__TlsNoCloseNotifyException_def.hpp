#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__EndOfStreamException_def.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNoCloseNotifyException;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsNoCloseNotifyException
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3549))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1312))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsNoCloseNotifyException
class CORDL_TYPE TlsNoCloseNotifyException : public System::IO::EndOfStreamException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TlsNoCloseNotifyException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsNoCloseNotifyException", modifiers: " const&", def_value: None }]
constexpr TlsNoCloseNotifyException(TlsNoCloseNotifyException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsNoCloseNotifyException", modifiers: "&&", def_value: None }]
constexpr TlsNoCloseNotifyException(TlsNoCloseNotifyException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsNoCloseNotifyException(void* ptr) noexcept : System::IO::EndOfStreamException(ptr) {
}


  constexpr TlsNoCloseNotifyException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsNoCloseNotifyException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsNoCloseNotifyException& operator=(TlsNoCloseNotifyException&& o) noexcept = default;
  constexpr TlsNoCloseNotifyException& operator=(TlsNoCloseNotifyException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException New_ctor() ;

/// @brief Method .ctor addr 0xf21b58 size 0x4c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsNoCloseNotifyException, "Org.BouncyCastle.Crypto.Tls", "TlsNoCloseNotifyException");
