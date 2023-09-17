#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDsaSigner_def.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDssSigner;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsDssSigner
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1302))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDssSigner
class CORDL_TYPE TlsDssSigner : public ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TlsDssSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDssSigner", modifiers: " const&", def_value: None }]
constexpr TlsDssSigner(TlsDssSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDssSigner", modifiers: "&&", def_value: None }]
constexpr TlsDssSigner(TlsDssSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsDssSigner(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner(ptr) {
}


  constexpr TlsDssSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsDssSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsDssSigner& operator=(TlsDssSigner&& o) noexcept = default;
  constexpr TlsDssSigner& operator=(TlsDssSigner const& o) noexcept = default;
                


// Properties

 uint8_t __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;


// Methods

/// @brief Method IsValidPublicKey addr 0xf19d8c size 0x78 virtual true final false
 bool IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method CreateDsaImpl addr 0xf19e04 size 0xcc virtual true final false
 ::Org::BouncyCastle::Crypto::IDsa CreateDsaImpl(uint8_t hashAlgorithm) ;

/// @brief Method get_SignatureAlgorithm addr 0xf19ed0 size 0x8 virtual true final false
 uint8_t get_SignatureAlgorithm() ;

// Ctor Parameters []
explicit TlsDssSigner() ;

/// @brief Method .ctor addr 0xf16b58 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDssSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDssSigner, "Org.BouncyCastle.Crypto.Tls", "TlsDssSigner");
