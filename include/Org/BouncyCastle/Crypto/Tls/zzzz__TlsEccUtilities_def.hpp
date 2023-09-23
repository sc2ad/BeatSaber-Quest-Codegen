#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class ECDomainParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPublicKeyParameters;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEccUtilities;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsEccUtilities
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1303))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsEccUtilities
class CORDL_TYPE TlsEccUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TlsEccUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsEccUtilities", modifiers: " const&", def_value: None }]
constexpr TlsEccUtilities(TlsEccUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsEccUtilities", modifiers: "&&", def_value: None }]
constexpr TlsEccUtilities(TlsEccUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsEccUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsEccUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsEccUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsEccUtilities& operator=(TlsEccUtilities&& o) noexcept = default;
  constexpr TlsEccUtilities& operator=(TlsEccUtilities const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_CurveNames, put=__set_CurveNames))  CurveNames;

static void __set_CurveNames(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_CurveNames() ;


// Methods

/// @brief Method AddSupportedEllipticCurvesExtension addr 0xf19ed8 size 0x120 virtual false final false
static void AddSupportedEllipticCurvesExtension(System::Collections::IDictionary extensions, ::ArrayW<int32_t> namedCurves) ;

/// @brief Method AddSupportedPointFormatsExtension addr 0xf1a0a0 size 0x120 virtual false final false
static void AddSupportedPointFormatsExtension(System::Collections::IDictionary extensions, ::ArrayW<uint8_t> ecPointFormats) ;

/// @brief Method GetSupportedEllipticCurvesExtension addr 0xf1a278 size 0x9c virtual false final false
static ::ArrayW<int32_t> GetSupportedEllipticCurvesExtension(System::Collections::IDictionary extensions) ;

/// @brief Method GetSupportedPointFormatsExtension addr 0xf1a464 size 0x9c virtual false final false
static ::ArrayW<uint8_t> GetSupportedPointFormatsExtension(System::Collections::IDictionary extensions) ;

/// @brief Method CreateSupportedEllipticCurvesExtension addr 0xf19ff8 size 0xa8 virtual false final false
static ::ArrayW<uint8_t> CreateSupportedEllipticCurvesExtension(::ArrayW<int32_t> namedCurves) ;

/// @brief Method CreateSupportedPointFormatsExtension addr 0xf1a1c0 size 0xb8 virtual false final false
static ::ArrayW<uint8_t> CreateSupportedPointFormatsExtension(::ArrayW<uint8_t> ecPointFormats) ;

/// @brief Method ReadSupportedEllipticCurvesExtension addr 0xf1a314 size 0x150 virtual false final false
static ::ArrayW<int32_t> ReadSupportedEllipticCurvesExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method ReadSupportedPointFormatsExtension addr 0xf1a500 size 0xe0 virtual false final false
static ::ArrayW<uint8_t> ReadSupportedPointFormatsExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method GetNameOfNamedCurve addr 0xf1a5e0 size 0xa4 virtual false final false
static ::StringW GetNameOfNamedCurve(int32_t namedCurve) ;

/// @brief Method GetParametersForNamedCurve addr 0xf1a704 size 0x12c virtual false final false
static Org::BouncyCastle::Crypto::Parameters::ECDomainParameters GetParametersForNamedCurve(int32_t namedCurve) ;

/// @brief Method HasAnySupportedNamedCurves addr 0xf1a830 size 0x6c virtual false final false
static bool HasAnySupportedNamedCurves() ;

/// @brief Method ContainsEccCipherSuites addr 0xf1a89c size 0xb0 virtual false final false
static bool ContainsEccCipherSuites(::ArrayW<int32_t> cipherSuites) ;

/// @brief Method IsEccCipherSuite addr 0xf1a94c size 0x8c virtual false final false
static bool IsEccCipherSuite(int32_t cipherSuite) ;

/// @brief Method AreOnSameCurve addr 0xf1a9d8 size 0x14 virtual false final false
static bool AreOnSameCurve(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters a, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters b) ;

/// @brief Method IsSupportedNamedCurve addr 0xf1a684 size 0x80 virtual false final false
static bool IsSupportedNamedCurve(int32_t namedCurve) ;

/// @brief Method IsCompressionPreferred addr 0xf1a9ec size 0x58 virtual false final false
static bool IsCompressionPreferred(::ArrayW<uint8_t> ecPointFormats, uint8_t compressionFormat) ;

/// @brief Method SerializeECFieldElement addr 0xf1aa44 size 0x1c virtual false final false
static ::ArrayW<uint8_t> SerializeECFieldElement(int32_t fieldSize, Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method SerializeECPoint addr 0xf1aa60 size 0xd4 virtual false final false
static ::ArrayW<uint8_t> SerializeECPoint(::ArrayW<uint8_t> ecPointFormats, Org::BouncyCastle::Math::EC::ECPoint point) ;

/// @brief Method SerializeECPublicKey addr 0xf1ab34 size 0x68 virtual false final false
static ::ArrayW<uint8_t> SerializeECPublicKey(::ArrayW<uint8_t> ecPointFormats, Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters keyParameters) ;

/// @brief Method DeserializeECFieldElement addr 0xf1ab9c size 0xcc virtual false final false
static Org::BouncyCastle::Math::BigInteger DeserializeECFieldElement(int32_t fieldSize, ::ArrayW<uint8_t> encoding) ;

/// @brief Method DeserializeECPoint addr 0xf1ac68 size 0x130 virtual false final false
static Org::BouncyCastle::Math::EC::ECPoint DeserializeECPoint(::ArrayW<uint8_t> ecPointFormats, Org::BouncyCastle::Math::EC::ECCurve curve, ::ArrayW<uint8_t> encoding) ;

/// @brief Method DeserializeECPublicKey addr 0xf1ad98 size 0x180 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters DeserializeECPublicKey(::ArrayW<uint8_t> ecPointFormats, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters curve_params, ::ArrayW<uint8_t> encoding) ;

/// @brief Method CalculateECDHBasicAgreement addr 0xf1af18 size 0xac virtual false final false
static ::ArrayW<uint8_t> CalculateECDHBasicAgreement(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters publicKey, Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters privateKey) ;

/// @brief Method GenerateECKeyPair addr 0xf1afc4 size 0xb4 virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateECKeyPair(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters ecParams) ;

/// @brief Method GenerateEphemeralClientKeyExchange addr 0xf1b078 size 0x128 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters GenerateEphemeralClientKeyExchange(Org::BouncyCastle::Security::SecureRandom random, ::ArrayW<uint8_t> ecPointFormats, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters ecParams, System::IO::Stream output) ;

/// @brief Method GenerateEphemeralServerKeyExchange addr 0xf1b244 size 0x22c virtual false final false
static Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters GenerateEphemeralServerKeyExchange(Org::BouncyCastle::Security::SecureRandom random, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> ecPointFormats, System::IO::Stream output) ;

/// @brief Method ValidateECPublicKey addr 0xf1ba2c size 0x4 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters ValidateECPublicKey(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters key) ;

/// @brief Method ReadECExponent addr 0xf1ba30 size 0xdc virtual false final false
static int32_t ReadECExponent(int32_t fieldSize, System::IO::Stream input) ;

/// @brief Method ReadECFieldElement addr 0xf1bbac size 0x9c virtual false final false
static Org::BouncyCastle::Math::BigInteger ReadECFieldElement(int32_t fieldSize, System::IO::Stream input) ;

/// @brief Method ReadECParameter addr 0xf1bb0c size 0xa0 virtual false final false
static Org::BouncyCastle::Math::BigInteger ReadECParameter(System::IO::Stream input) ;

/// @brief Method ReadECParameters addr 0xf1bc48 size 0x6a8 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::ECDomainParameters ReadECParameters(::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> ecPointFormats, System::IO::Stream input) ;

/// @brief Method CheckNamedCurve addr 0xf1c2f0 size 0xac virtual false final false
static void CheckNamedCurve(::ArrayW<int32_t> namedCurves, int32_t namedCurve) ;

/// @brief Method WriteECExponent addr 0xf1c39c size 0x9c virtual false final false
static void WriteECExponent(int32_t k, System::IO::Stream output) ;

/// @brief Method WriteECFieldElement addr 0xf1c4b4 size 0x84 virtual false final false
static void WriteECFieldElement(Org::BouncyCastle::Math::EC::ECFieldElement x, System::IO::Stream output) ;

/// @brief Method WriteECFieldElement addr 0xf1c538 size 0xb8 virtual false final false
static void WriteECFieldElement(int32_t fieldSize, Org::BouncyCastle::Math::BigInteger x, System::IO::Stream output) ;

/// @brief Method WriteECParameter addr 0xf1c438 size 0x7c virtual false final false
static void WriteECParameter(Org::BouncyCastle::Math::BigInteger x, System::IO::Stream output) ;

/// @brief Method WriteExplicitECParameters addr 0xf1b470 size 0x4f0 virtual false final false
static void WriteExplicitECParameters(::ArrayW<uint8_t> ecPointFormats, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters ecParameters, System::IO::Stream output) ;

/// @brief Method WriteECPoint addr 0xf1b1a0 size 0xa4 virtual false final false
static void WriteECPoint(::ArrayW<uint8_t> ecPointFormats, Org::BouncyCastle::Math::EC::ECPoint point, System::IO::Stream output) ;

/// @brief Method WriteNamedECParameters addr 0xf1b960 size 0xcc virtual false final false
static void WriteNamedECParameters(int32_t namedCurve, System::IO::Stream output) ;

// Ctor Parameters []
explicit TlsEccUtilities() ;

/// @brief Method .ctor addr 0xf1cd74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities, "Org.BouncyCastle.Crypto.Tls", "TlsEccUtilities");
