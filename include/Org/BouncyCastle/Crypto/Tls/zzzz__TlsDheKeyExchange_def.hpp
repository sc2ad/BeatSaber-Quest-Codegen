#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDHKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDheKeyExchange;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsDheKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1298))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1299))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDheKeyExchange
class CORDL_TYPE TlsDheKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~TlsDheKeyExchange() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDheKeyExchange", modifiers: " const&", def_value: None }]
constexpr TlsDheKeyExchange(TlsDheKeyExchange const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDheKeyExchange", modifiers: "&&", def_value: None }]
constexpr TlsDheKeyExchange(TlsDheKeyExchange&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsDheKeyExchange(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::TlsDHKeyExchange(ptr) {
}


  constexpr TlsDheKeyExchange& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsDheKeyExchange& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsDheKeyExchange& operator=(TlsDheKeyExchange&& o) noexcept = default;
  constexpr TlsDheKeyExchange& operator=(TlsDheKeyExchange const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials __declspec(property(get=__get_mServerCredentials, put=__set_mServerCredentials))  mServerCredentials;

constexpr void __set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials __get_mServerCredentials() const;


// Methods

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "dhParameters", ty: "::Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }]
explicit TlsDheKeyExchange(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

/// @brief Method .ctor addr 0xf17cac size 0x90 virtual false final false
 void _ctor(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "dhVerifier", ty: "::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier", modifiers: "", def_value: None }, CppParam { name: "dhParameters", ty: "::Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }]
explicit TlsDheKeyExchange(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

/// @brief Method .ctor addr 0xf17d3c size 0x8 virtual false final false
 void _ctor(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, ::Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters) ;

/// @brief Method ProcessServerCredentials addr 0xf17d44 size 0x16c virtual true final false
 void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials) ;

/// @brief Method GenerateServerKeyExchange addr 0xf17eb0 size 0x44c virtual true final false
 ::ArrayW<uint8_t> GenerateServerKeyExchange() ;

/// @brief Method ProcessServerKeyExchange addr 0xf182fc size 0x2d8 virtual true final false
 void ProcessServerKeyExchange(::System::IO::Stream input) ;

/// @brief Method InitVerifyer addr 0xf185d4 size 0x1d0 virtual true final false
 ::Org::BouncyCastle::Crypto::ISigner InitVerifyer(::Org::BouncyCastle::Crypto::Tls::TlsSigner tlsSigner, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsDheKeyExchange, "Org.BouncyCastle.Crypto.Tls", "TlsDheKeyExchange");
