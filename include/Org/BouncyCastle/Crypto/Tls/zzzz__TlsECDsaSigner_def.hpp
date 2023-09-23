#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDsaSigner_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsECDsaSigner;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsECDsaSigner
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1306))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsECDsaSigner
class CORDL_TYPE TlsECDsaSigner : public Org::BouncyCastle::Crypto::Tls::TlsDsaSigner {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TlsECDsaSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsECDsaSigner", modifiers: " const&", def_value: None }]
constexpr TlsECDsaSigner(TlsECDsaSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsECDsaSigner", modifiers: "&&", def_value: None }]
constexpr TlsECDsaSigner(TlsECDsaSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsECDsaSigner(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::TlsDsaSigner(ptr) {
}


  constexpr TlsECDsaSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsECDsaSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsECDsaSigner& operator=(TlsECDsaSigner&& o) noexcept = default;
  constexpr TlsECDsaSigner& operator=(TlsECDsaSigner const& o) noexcept = default;
                


// Properties

 uint8_t __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;


// Methods

/// @brief Method IsValidPublicKey addr 0xf1ead8 size 0x78 virtual true final false
 bool IsValidPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method CreateDsaImpl addr 0xf1eb50 size 0xc8 virtual true final false
 Org::BouncyCastle::Crypto::IDsa CreateDsaImpl(uint8_t hashAlgorithm) ;

/// @brief Method get_SignatureAlgorithm addr 0xf1edf0 size 0x8 virtual true final false
 uint8_t get_SignatureAlgorithm() ;

// Ctor Parameters []
explicit TlsECDsaSigner() ;

/// @brief Method .ctor addr 0xf1cec4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsECDsaSigner, "Org.BouncyCastle.Crypto.Tls", "TlsECDsaSigner");
