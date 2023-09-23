#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class DigitallySigned;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsKeyExchange;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1171))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsKeyExchange
class CORDL_TYPE AbstractTlsKeyExchange : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsKeyExchange
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsKeyExchange() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AbstractTlsKeyExchange() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsKeyExchange", modifiers: " const&", def_value: None }]
constexpr AbstractTlsKeyExchange(AbstractTlsKeyExchange const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsKeyExchange", modifiers: "&&", def_value: None }]
constexpr AbstractTlsKeyExchange(AbstractTlsKeyExchange&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsKeyExchange(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AbstractTlsKeyExchange& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsKeyExchange& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsKeyExchange& operator=(AbstractTlsKeyExchange&& o) noexcept = default;
  constexpr AbstractTlsKeyExchange& operator=(AbstractTlsKeyExchange const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_mKeyExchange, put=__set_mKeyExchange))  mKeyExchange;

constexpr void __set_mKeyExchange(int32_t value) ;

constexpr int32_t __get_mKeyExchange() const;

 System::Collections::IList __declspec(property(get=__get_mSupportedSignatureAlgorithms, put=__set_mSupportedSignatureAlgorithms))  mSupportedSignatureAlgorithms;

constexpr void __set_mSupportedSignatureAlgorithms(System::Collections::IList value) ;

constexpr System::Collections::IList __get_mSupportedSignatureAlgorithms() const;

 Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_mContext, put=__set_mContext))  mContext;

constexpr void __set_mContext(Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsContext __get_mContext() const;


// Properties

 bool __declspec(property(get=get_RequiresServerKeyExchange))  RequiresServerKeyExchange;


// Methods

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit AbstractTlsKeyExchange(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms) ;

/// @brief Method .ctor addr 0xecc3fc size 0x30 virtual false final false
 void _ctor(int32_t keyExchange, System::Collections::IList supportedSignatureAlgorithms) ;

/// @brief Method ParseSignature addr 0xecc42c size 0x98 virtual true final false
 Org::BouncyCastle::Crypto::Tls::DigitallySigned ParseSignature(System::IO::Stream input) ;

/// @brief Method Init addr 0xecc5a0 size 0x218 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method SkipServerCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
 void SkipServerCredentials() ;

/// @brief Method ProcessServerCertificate addr 0xecc7b8 size 0x4 virtual true final false
 void ProcessServerCertificate(Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate) ;

/// @brief Method ProcessServerCredentials addr 0xecc7bc size 0xb8 virtual true final false
 void ProcessServerCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials) ;

/// @brief Method get_RequiresServerKeyExchange addr 0xecc874 size 0x8 virtual true final false
 bool get_RequiresServerKeyExchange() ;

/// @brief Method GenerateServerKeyExchange addr 0xecc87c size 0x64 virtual true final false
 ::ArrayW<uint8_t> GenerateServerKeyExchange() ;

/// @brief Method SkipServerKeyExchange addr 0xecc8e0 size 0x60 virtual true final false
 void SkipServerKeyExchange() ;

/// @brief Method ProcessServerKeyExchange addr 0xecc940 size 0x60 virtual true final false
 void ProcessServerKeyExchange(System::IO::Stream input) ;

/// @brief Method ValidateCertificateRequest addr 0x0 size 0xffffffffffffffff virtual true final false
 void ValidateCertificateRequest(Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

/// @brief Method SkipClientCredentials addr 0xecc9a0 size 0x4 virtual true final false
 void SkipClientCredentials() ;

/// @brief Method ProcessClientCredentials addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessClientCredentials(Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials) ;

/// @brief Method ProcessClientCertificate addr 0xecc9a4 size 0x4 virtual true final false
 void ProcessClientCertificate(Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate) ;

/// @brief Method GenerateClientKeyExchange addr 0x0 size 0xffffffffffffffff virtual true final false
 void GenerateClientKeyExchange(System::IO::Stream output) ;

/// @brief Method ProcessClientKeyExchange addr 0xecc9a8 size 0x44 virtual true final false
 void ProcessClientKeyExchange(System::IO::Stream input) ;

/// @brief Method GeneratePremasterSecret addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GeneratePremasterSecret() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsKeyExchange");
