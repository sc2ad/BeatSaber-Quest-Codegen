#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHPrivateKeyParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHUtilities;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsDHUtilities
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1300))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDHUtilities
class CORDL_TYPE TlsDHUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TlsDHUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDHUtilities", modifiers: " const&", def_value: None }]
constexpr TlsDHUtilities(TlsDHUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDHUtilities", modifiers: "&&", def_value: None }]
constexpr TlsDHUtilities(TlsDHUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsDHUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsDHUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsDHUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsDHUtilities& operator=(TlsDHUtilities&& o) noexcept = default;
  constexpr TlsDHUtilities& operator=(TlsDHUtilities const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Two, put=__set_Two))  Two;

static void __set_Two(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Two() ;

static ::StringW __declspec(property(get=__get_draft_ffdhe2432_p, put=__set_draft_ffdhe2432_p))  draft_ffdhe2432_p;

static void __set_draft_ffdhe2432_p(::StringW value) ;

static ::StringW __get_draft_ffdhe2432_p() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_draft_ffdhe2432, put=__set_draft_ffdhe2432))  draft_ffdhe2432;

static void __set_draft_ffdhe2432(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_draft_ffdhe2432() ;

static ::StringW __declspec(property(get=__get_draft_ffdhe3072_p, put=__set_draft_ffdhe3072_p))  draft_ffdhe3072_p;

static void __set_draft_ffdhe3072_p(::StringW value) ;

static ::StringW __get_draft_ffdhe3072_p() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_draft_ffdhe3072, put=__set_draft_ffdhe3072))  draft_ffdhe3072;

static void __set_draft_ffdhe3072(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_draft_ffdhe3072() ;

static ::StringW __declspec(property(get=__get_draft_ffdhe4096_p, put=__set_draft_ffdhe4096_p))  draft_ffdhe4096_p;

static void __set_draft_ffdhe4096_p(::StringW value) ;

static ::StringW __get_draft_ffdhe4096_p() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_draft_ffdhe4096, put=__set_draft_ffdhe4096))  draft_ffdhe4096;

static void __set_draft_ffdhe4096(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_draft_ffdhe4096() ;

static ::StringW __declspec(property(get=__get_draft_ffdhe6144_p, put=__set_draft_ffdhe6144_p))  draft_ffdhe6144_p;

static void __set_draft_ffdhe6144_p(::StringW value) ;

static ::StringW __get_draft_ffdhe6144_p() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_draft_ffdhe6144, put=__set_draft_ffdhe6144))  draft_ffdhe6144;

static void __set_draft_ffdhe6144(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_draft_ffdhe6144() ;

static ::StringW __declspec(property(get=__get_draft_ffdhe8192_p, put=__set_draft_ffdhe8192_p))  draft_ffdhe8192_p;

static void __set_draft_ffdhe8192_p(::StringW value) ;

static ::StringW __get_draft_ffdhe8192_p() ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_draft_ffdhe8192, put=__set_draft_ffdhe8192))  draft_ffdhe8192;

static void __set_draft_ffdhe8192(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

static Org::BouncyCastle::Crypto::Parameters::DHParameters __get_draft_ffdhe8192() ;


// Methods

/// @brief Method FromHex addr 0xf187a4 size 0xa0 virtual false final false
static Org::BouncyCastle::Math::BigInteger FromHex(::StringW hex) ;

/// @brief Method FromSafeP addr 0xf18844 size 0xc8 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DHParameters FromSafeP(::StringW hexP) ;

/// @brief Method AddNegotiatedDheGroupsClientExtension addr 0xf1890c size 0x14c virtual false final false
static void AddNegotiatedDheGroupsClientExtension(System::Collections::IDictionary extensions, ::ArrayW<uint8_t> dheGroups) ;

/// @brief Method AddNegotiatedDheGroupsServerExtension addr 0xf18b04 size 0x14c virtual false final false
static void AddNegotiatedDheGroupsServerExtension(System::Collections::IDictionary extensions, uint8_t dheGroup) ;

/// @brief Method GetNegotiatedDheGroupsClientExtension addr 0xf18ca8 size 0xd0 virtual false final false
static ::ArrayW<uint8_t> GetNegotiatedDheGroupsClientExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetNegotiatedDheGroupsServerExtension addr 0xf18e28 size 0xd4 virtual false final false
static int16_t GetNegotiatedDheGroupsServerExtension(System::Collections::IDictionary extensions) ;

/// @brief Method CreateNegotiatedDheGroupsClientExtension addr 0xf18a58 size 0xac virtual false final false
static ::ArrayW<uint8_t> CreateNegotiatedDheGroupsClientExtension(::ArrayW<uint8_t> dheGroups) ;

/// @brief Method CreateNegotiatedDheGroupsServerExtension addr 0xf18c50 size 0x58 virtual false final false
static ::ArrayW<uint8_t> CreateNegotiatedDheGroupsServerExtension(uint8_t dheGroup) ;

/// @brief Method ReadNegotiatedDheGroupsClientExtension addr 0xf18d78 size 0xb0 virtual false final false
static ::ArrayW<uint8_t> ReadNegotiatedDheGroupsClientExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadNegotiatedDheGroupsServerExtension addr 0xf18efc size 0x58 virtual false final false
static uint8_t ReadNegotiatedDheGroupsServerExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method GetParametersForDHEGroup addr 0xf18f54 size 0xfc virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DHParameters GetParametersForDHEGroup(int16_t dheGroup) ;

/// @brief Method ContainsDheCipherSuites addr 0xf19050 size 0xb0 virtual false final false
static bool ContainsDheCipherSuites(::ArrayW<int32_t> cipherSuites) ;

/// @brief Method IsDheCipherSuite addr 0xf19100 size 0x13c virtual false final false
static bool IsDheCipherSuite(int32_t cipherSuite) ;

/// @brief Method AreCompatibleParameters addr 0xf1923c size 0x90 virtual false final false
static bool AreCompatibleParameters(Org::BouncyCastle::Crypto::Parameters::DHParameters a, Org::BouncyCastle::Crypto::Parameters::DHParameters b) ;

/// @brief Method CalculateDHBasicAgreement addr 0xf17c18 size 0x94 virtual false final false
static ::ArrayW<uint8_t> CalculateDHBasicAgreement(Org::BouncyCastle::Crypto::Parameters::DHPublicKeyParameters publicKey, Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters privateKey) ;

/// @brief Method GenerateDHKeyPair addr 0xf192cc size 0xbc virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateDHKeyPair(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams) ;

/// @brief Method GenerateEphemeralClientKeyExchange addr 0xf178c8 size 0x11c virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters GenerateEphemeralClientKeyExchange(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams, System::IO::Stream output) ;

/// @brief Method GenerateEphemeralServerKeyExchange addr 0xf171c0 size 0x144 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters GenerateEphemeralServerKeyExchange(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::DHParameters dhParams, System::IO::Stream output) ;

/// @brief Method ReadDHParameter addr 0xf17544 size 0xa0 virtual false final false
static Org::BouncyCastle::Math::BigInteger ReadDHParameter(System::IO::Stream input) ;

/// @brief Method ReadDHParameters addr 0xf19478 size 0xa8 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DHParameters ReadDHParameters(System::IO::Stream input) ;

/// @brief Method ReceiveDHParameters addr 0xf1741c size 0x128 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DHParameters ReceiveDHParameters(Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, System::IO::Stream input) ;

/// @brief Method WriteDHParameter addr 0xf19388 size 0x7c virtual false final false
static void WriteDHParameter(Org::BouncyCastle::Math::BigInteger x, System::IO::Stream output) ;

/// @brief Method WriteDHParameters addr 0xf19404 size 0x74 virtual false final false
static void WriteDHParameters(Org::BouncyCastle::Crypto::Parameters::DHParameters dhParameters, System::IO::Stream output) ;

// Ctor Parameters []
explicit TlsDHUtilities() ;

/// @brief Method .ctor addr 0xf1968c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsDHUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsDHUtilities, "Org.BouncyCastle.Crypto.Tls", "TlsDHUtilities");
