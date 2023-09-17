#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsRsaUtilities;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsRsaUtilities
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1320))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsRsaUtilities
class CORDL_TYPE TlsRsaUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TlsRsaUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsRsaUtilities", modifiers: " const&", def_value: None }]
constexpr TlsRsaUtilities(TlsRsaUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsRsaUtilities", modifiers: "&&", def_value: None }]
constexpr TlsRsaUtilities(TlsRsaUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsRsaUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsRsaUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsRsaUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsRsaUtilities& operator=(TlsRsaUtilities&& o) noexcept = default;
  constexpr TlsRsaUtilities& operator=(TlsRsaUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateEncryptedPreMasterSecret addr 0xf235a4 size 0x3f4 virtual false final false
static ::ArrayW<uint8_t> GenerateEncryptedPreMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters rsaServerPublicKey, ::System::IO::Stream output) ;

/// @brief Method SafeDecryptPreMasterSecret addr 0xf251fc size 0x428 virtual false final false
static ::ArrayW<uint8_t> SafeDecryptPreMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters rsaServerPrivateKey, ::ArrayW<uint8_t> encryptedPreMasterSecret) ;

// Ctor Parameters []
explicit TlsRsaUtilities() ;

/// @brief Method .ctor addr 0xf25624 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsRsaUtilities, "Org.BouncyCastle.Crypto.Tls", "TlsRsaUtilities");
