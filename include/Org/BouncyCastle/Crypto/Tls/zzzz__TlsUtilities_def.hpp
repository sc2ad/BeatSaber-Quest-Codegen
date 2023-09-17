#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSession;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Net::Sockets {
class SocketException;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class ProtocolVersion;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SessionParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsUtilities;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsUtilities
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1332))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsUtilities
class CORDL_TYPE TlsUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TlsUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsUtilities", modifiers: " const&", def_value: None }]
constexpr TlsUtilities(TlsUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsUtilities", modifiers: "&&", def_value: None }]
constexpr TlsUtilities(TlsUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsUtilities& operator=(TlsUtilities&& o) noexcept = default;
  constexpr TlsUtilities& operator=(TlsUtilities const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_EmptyBytes, put=__set_EmptyBytes))  EmptyBytes;

static void __set_EmptyBytes(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_EmptyBytes() ;

static ::ArrayW<int16_t> __declspec(property(get=__get_EmptyShorts, put=__set_EmptyShorts))  EmptyShorts;

static void __set_EmptyShorts(::ArrayW<int16_t> value) ;

static ::ArrayW<int16_t> __get_EmptyShorts() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_EmptyInts, put=__set_EmptyInts))  EmptyInts;

static void __set_EmptyInts(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_EmptyInts() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_EmptyLongs, put=__set_EmptyLongs))  EmptyLongs;

static void __set_EmptyLongs(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_EmptyLongs() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_SSL_CLIENT, put=__set_SSL_CLIENT))  SSL_CLIENT;

static void __set_SSL_CLIENT(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_SSL_CLIENT() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_SSL_SERVER, put=__set_SSL_SERVER))  SSL_SERVER;

static void __set_SSL_SERVER(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_SSL_SERVER() ;

static ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_SSL3_CONST, put=__set_SSL3_CONST))  SSL3_CONST;

static void __set_SSL3_CONST(::ArrayW<::ArrayW<uint8_t>> value) ;

static ::ArrayW<::ArrayW<uint8_t>> __get_SSL3_CONST() ;


// Methods

/// @brief Method CheckUint8 addr 0xf2d34c size 0x94 virtual false final false
static void CheckUint8(int32_t i) ;

/// @brief Method CheckUint8 addr 0xf2d3ec size 0x94 virtual false final false
static void CheckUint8(int64_t i) ;

/// @brief Method CheckUint16 addr 0xf20ae8 size 0x94 virtual false final false
static void CheckUint16(int32_t i) ;

/// @brief Method CheckUint16 addr 0xf2d498 size 0x94 virtual false final false
static void CheckUint16(int64_t i) ;

/// @brief Method CheckUint24 addr 0xf2d538 size 0x94 virtual false final false
static void CheckUint24(int32_t i) ;

/// @brief Method CheckUint24 addr 0xf2d5dc size 0x94 virtual false final false
static void CheckUint24(int64_t i) ;

/// @brief Method CheckUint32 addr 0xf2d680 size 0x94 virtual false final false
static void CheckUint32(int64_t i) ;

/// @brief Method CheckUint48 addr 0xf2d724 size 0x94 virtual false final false
static void CheckUint48(int64_t i) ;

/// @brief Method CheckUint64 addr 0xf2d7c8 size 0x54 virtual false final false
static void CheckUint64(int64_t i) ;

/// @brief Method IsValidUint8 addr 0xf2d3e0 size 0xc virtual false final false
static bool IsValidUint8(int32_t i) ;

/// @brief Method IsValidUint8 addr 0xf2d480 size 0xc virtual false final false
static bool IsValidUint8(int64_t i) ;

/// @brief Method IsValidUint16 addr 0xf2d48c size 0xc virtual false final false
static bool IsValidUint16(int32_t i) ;

/// @brief Method IsValidUint16 addr 0xf2d52c size 0xc virtual false final false
static bool IsValidUint16(int64_t i) ;

/// @brief Method IsValidUint24 addr 0xf2d5cc size 0x10 virtual false final false
static bool IsValidUint24(int32_t i) ;

/// @brief Method IsValidUint24 addr 0xf2d670 size 0x10 virtual false final false
static bool IsValidUint24(int64_t i) ;

/// @brief Method IsValidUint32 addr 0xf2d714 size 0x10 virtual false final false
static bool IsValidUint32(int64_t i) ;

/// @brief Method IsValidUint48 addr 0xf2d7b8 size 0x10 virtual false final false
static bool IsValidUint48(int64_t i) ;

/// @brief Method IsValidUint64 addr 0xf2d81c size 0x8 virtual false final false
static bool IsValidUint64(int64_t i) ;

/// @brief Method IsSsl addr 0xf212b8 size 0xac virtual false final false
static bool IsSsl(::Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method IsTlsV11 addr 0xf2d824 size 0x80 virtual false final false
static bool IsTlsV11(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion version) ;

/// @brief Method IsTlsV11 addr 0xf2d8a4 size 0xd4 virtual false final false
static bool IsTlsV11(::Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method IsTlsV12 addr 0xf2d978 size 0x80 virtual false final false
static bool IsTlsV12(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion version) ;

/// @brief Method IsTlsV12 addr 0xf24f00 size 0xd4 virtual false final false
static bool IsTlsV12(::Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method WriteUint8 addr 0xf298a8 size 0x2c virtual false final false
static void WriteUint8(uint8_t i, ::System::IO::Stream output) ;

/// @brief Method WriteUint8 addr 0xf21758 size 0x2c virtual false final false
static void WriteUint8(uint8_t i, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method WriteUint16 addr 0xf29858 size 0x50 virtual false final false
static void WriteUint16(int32_t i, ::System::IO::Stream output) ;

/// @brief Method WriteUint16 addr 0xf217f4 size 0x48 virtual false final false
static void WriteUint16(int32_t i, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method WriteUint24 addr 0xf2d9f8 size 0x68 virtual false final false
static void WriteUint24(int32_t i, ::System::IO::Stream output) ;

/// @brief Method WriteUint24 addr 0xf29a54 size 0x64 virtual false final false
static void WriteUint24(int32_t i, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method WriteUint32 addr 0xf2da60 size 0x80 virtual false final false
static void WriteUint32(int64_t i, ::System::IO::Stream output) ;

/// @brief Method WriteUint32 addr 0xf2dae0 size 0x80 virtual false final false
static void WriteUint32(int64_t i, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method WriteUint48 addr 0xf2db60 size 0xb0 virtual false final false
static void WriteUint48(int64_t i, ::System::IO::Stream output) ;

/// @brief Method WriteUint48 addr 0xf2dc10 size 0xb8 virtual false final false
static void WriteUint48(int64_t i, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method WriteUint64 addr 0xf2dcc8 size 0xe0 virtual false final false
static void WriteUint64(int64_t i, ::System::IO::Stream output) ;

/// @brief Method WriteUint64 addr 0xf21668 size 0xf0 virtual false final false
static void WriteUint64(int64_t i, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method WriteOpaque8 addr 0xf29738 size 0x94 virtual false final false
static void WriteOpaque8(::ArrayW<uint8_t> buf, ::System::IO::Stream output) ;

/// @brief Method WriteOpaque16 addr 0xf22b74 size 0x88 virtual false final false
static void WriteOpaque16(::ArrayW<uint8_t> buf, ::System::IO::Stream output) ;

/// @brief Method WriteOpaque24 addr 0xf2dda8 size 0x88 virtual false final false
static void WriteOpaque24(::ArrayW<uint8_t> buf, ::System::IO::Stream output) ;

/// @brief Method WriteUint8Array addr 0xf2de30 size 0x38 virtual false final false
static void WriteUint8Array(::ArrayW<uint8_t> uints, ::System::IO::Stream output) ;

/// @brief Method WriteUint8Array addr 0xf2de68 size 0xc8 virtual false final false
static void WriteUint8Array(::ArrayW<uint8_t> uints, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method WriteUint8ArrayWithUint8Length addr 0xf2df30 size 0x88 virtual false final false
static void WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t> uints, ::System::IO::Stream output) ;

/// @brief Method WriteUint8ArrayWithUint8Length addr 0xf2dfb8 size 0x8c virtual false final false
static void WriteUint8ArrayWithUint8Length(::ArrayW<uint8_t> uints, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method WriteUint16Array addr 0xf2e044 size 0xb0 virtual false final false
static void WriteUint16Array(::ArrayW<int32_t> uints, ::System::IO::Stream output) ;

/// @brief Method WriteUint16Array addr 0xf2e0f4 size 0xbc virtual false final false
static void WriteUint16Array(::ArrayW<int32_t> uints, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method WriteUint16ArrayWithUint16Length addr 0xf2c06c size 0x80 virtual false final false
static void WriteUint16ArrayWithUint16Length(::ArrayW<int32_t> uints, ::System::IO::Stream output) ;

/// @brief Method WriteUint16ArrayWithUint16Length addr 0xf2e1b0 size 0x94 virtual false final false
static void WriteUint16ArrayWithUint16Length(::ArrayW<int32_t> uints, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method DecodeUint8 addr 0xf20d78 size 0xe4 virtual false final false
static uint8_t DecodeUint8(::ArrayW<uint8_t> buf) ;

/// @brief Method DecodeUint8ArrayWithUint8Length addr 0xf20c0c size 0x16c virtual false final false
static ::ArrayW<uint8_t> DecodeUint8ArrayWithUint8Length(::ArrayW<uint8_t> buf) ;

/// @brief Method EncodeOpaque8 addr 0xf2bbbc size 0x90 virtual false final false
static ::ArrayW<uint8_t> EncodeOpaque8(::ArrayW<uint8_t> buf) ;

/// @brief Method EncodeUint8 addr 0xf20a00 size 0x90 virtual false final false
static ::ArrayW<uint8_t> EncodeUint8(uint8_t val) ;

/// @brief Method EncodeUint8ArrayWithUint8Length addr 0xf20968 size 0x98 virtual false final false
static ::ArrayW<uint8_t> EncodeUint8ArrayWithUint8Length(::ArrayW<uint8_t> uints) ;

/// @brief Method EncodeUint16ArrayWithUint16Length addr 0xf2e270 size 0x9c virtual false final false
static ::ArrayW<uint8_t> EncodeUint16ArrayWithUint16Length(::ArrayW<int32_t> uints) ;

/// @brief Method ReadUint8 addr 0xf28868 size 0x64 virtual false final false
static uint8_t ReadUint8(::System::IO::Stream input) ;

/// @brief Method ReadUint8 addr 0xf2e244 size 0x2c virtual false final false
static uint8_t ReadUint8(::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method ReadUint16 addr 0xf2870c size 0x8c virtual false final false
static int32_t ReadUint16(::System::IO::Stream input) ;

/// @brief Method ReadUint16 addr 0xf2e30c size 0x40 virtual false final false
static int32_t ReadUint16(::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method ReadUint24 addr 0xf2e34c size 0xac virtual false final false
static int32_t ReadUint24(::System::IO::Stream input) ;

/// @brief Method ReadUint24 addr 0xf2e3f8 size 0x58 virtual false final false
static int32_t ReadUint24(::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method ReadUint32 addr 0xf2e450 size 0xd0 virtual false final false
static int64_t ReadUint32(::System::IO::Stream input) ;

/// @brief Method ReadUint32 addr 0xf2e520 size 0x6c virtual false final false
static int64_t ReadUint32(::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method ReadUint48 addr 0xf2e58c size 0x70 virtual false final false
static int64_t ReadUint48(::System::IO::Stream input) ;

/// @brief Method ReadUint48 addr 0xf2e5fc size 0x84 virtual false final false
static int64_t ReadUint48(::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method ReadAllOrNothing addr 0xf2e680 size 0xf0 virtual false final false
static ::ArrayW<uint8_t> ReadAllOrNothing(int32_t length, ::System::IO::Stream input) ;

/// @brief Method ReadFully addr 0xf28628 size 0xe4 virtual false final false
static ::ArrayW<uint8_t> ReadFully(int32_t length, ::System::IO::Stream input) ;

/// @brief Method ReadFully addr 0xf2e770 size 0x78 virtual false final false
static void ReadFully(::ArrayW<uint8_t> buf, ::System::IO::Stream input) ;

/// @brief Method ReadOpaque8 addr 0xf1d7bc size 0x8c virtual false final false
static ::ArrayW<uint8_t> ReadOpaque8(::System::IO::Stream input) ;

/// @brief Method ReadOpaque16 addr 0xf23018 size 0x8c virtual false final false
static ::ArrayW<uint8_t> ReadOpaque16(::System::IO::Stream input) ;

/// @brief Method ReadOpaque24 addr 0xf2e7e8 size 0x5c virtual false final false
static ::ArrayW<uint8_t> ReadOpaque24(::System::IO::Stream input) ;

/// @brief Method ReadUint8Array addr 0xf288cc size 0xd0 virtual false final false
static ::ArrayW<uint8_t> ReadUint8Array(int32_t count, ::System::IO::Stream input) ;

/// @brief Method ReadUint16Array addr 0xf28798 size 0xd0 virtual false final false
static ::ArrayW<int32_t> ReadUint16Array(int32_t count, ::System::IO::Stream input) ;

/// @brief Method ReadVersion addr 0xf2e844 size 0x94 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion ReadVersion(::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method ReadVersion addr 0xf28554 size 0xd4 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion ReadVersion(::System::IO::Stream input) ;

/// @brief Method ReadVersionRaw addr 0xf2e8d8 size 0x40 virtual false final false
static int32_t ReadVersionRaw(::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method ReadVersionRaw addr 0xf2e918 size 0x8c virtual false final false
static int32_t ReadVersionRaw(::System::IO::Stream input) ;

/// @brief Method ReadAsn1Object addr 0xf2e9a4 size 0x11c virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Object ReadAsn1Object(::ArrayW<uint8_t> encoding) ;

/// @brief Method ReadDerObject addr 0xf2eac0 size 0x104 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Object ReadDerObject(::ArrayW<uint8_t> encoding) ;

/// @brief Method WriteGmtUnixTime addr 0xf2ebc4 size 0xf4 virtual false final false
static void WriteGmtUnixTime(::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method WriteVersion addr 0xf296d0 size 0x68 virtual false final false
static void WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion version, ::System::IO::Stream output) ;

/// @brief Method WriteVersion addr 0xf21784 size 0x70 virtual false final false
static void WriteVersion(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion version, ::ArrayW<uint8_t> buf, int32_t offset) ;

/// @brief Method GetAllSignatureAlgorithms addr 0xf2ecb8 size 0x27c virtual false final false
static ::System::Collections::IList GetAllSignatureAlgorithms() ;

/// @brief Method GetDefaultDssSignatureAlgorithms addr 0xf2ef34 size 0x88 virtual false final false
static ::System::Collections::IList GetDefaultDssSignatureAlgorithms() ;

/// @brief Method GetDefaultECDsaSignatureAlgorithms addr 0xf2f09c size 0x88 virtual false final false
static ::System::Collections::IList GetDefaultECDsaSignatureAlgorithms() ;

/// @brief Method GetDefaultRsaSignatureAlgorithms addr 0xf2f124 size 0x88 virtual false final false
static ::System::Collections::IList GetDefaultRsaSignatureAlgorithms() ;

/// @brief Method GetExtensionData addr 0xf1fee8 size 0x114 virtual false final false
static ::ArrayW<uint8_t> GetExtensionData(::System::Collections::IDictionary extensions, int32_t extensionType) ;

/// @brief Method GetDefaultSupportedSignatureAlgorithms addr 0xf2f1ac size 0x218 virtual false final false
static ::System::Collections::IList GetDefaultSupportedSignatureAlgorithms() ;

/// @brief Method GetSignatureAndHashAlgorithm addr 0xf1e304 size 0x128 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm GetSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials signerCredentials) ;

/// @brief Method HasExpectedEmptyExtensionData addr 0xf298d4 size 0xb8 virtual false final false
static bool HasExpectedEmptyExtensionData(::System::Collections::IDictionary extensions, int32_t extensionType, uint8_t alertDescription) ;

/// @brief Method ImportSession addr 0xf2f3c4 size 0x70 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::TlsSession ImportSession(::ArrayW<uint8_t> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters sessionParameters) ;

/// @brief Method IsSignatureAlgorithmsExtensionAllowed addr 0xf2f434 size 0x80 virtual false final false
static bool IsSignatureAlgorithmsExtensionAllowed(::Org::BouncyCastle::Crypto::Tls::ProtocolVersion clientVersion) ;

/// @brief Method AddSignatureAlgorithmsExtension addr 0xf2f4b4 size 0x120 virtual false final false
static void AddSignatureAlgorithmsExtension(::System::Collections::IDictionary extensions, ::System::Collections::IList supportedSignatureAlgorithms) ;

/// @brief Method GetSignatureAlgorithmsExtension addr 0xf2f674 size 0x84 virtual false final false
static ::System::Collections::IList GetSignatureAlgorithmsExtension(::System::Collections::IDictionary extensions) ;

/// @brief Method CreateSignatureAlgorithmsExtension addr 0xf2f5d4 size 0xa0 virtual false final false
static ::ArrayW<uint8_t> CreateSignatureAlgorithmsExtension(::System::Collections::IList supportedSignatureAlgorithms) ;

/// @brief Method ReadSignatureAlgorithmsExtension addr 0xf2f6f8 size 0xf8 virtual false final false
static ::System::Collections::IList ReadSignatureAlgorithmsExtension(::ArrayW<uint8_t> extensionData) ;

/// @brief Method EncodeSupportedSignatureAlgorithms addr 0xf2f7f0 size 0x5e4 virtual false final false
static void EncodeSupportedSignatureAlgorithms(::System::Collections::IList supportedSignatureAlgorithms, bool allowAnonymous, ::System::IO::Stream output) ;

/// @brief Method ParseSupportedSignatureAlgorithms addr 0xf2fdd4 size 0x1d0 virtual false final false
static ::System::Collections::IList ParseSupportedSignatureAlgorithms(bool allowAnonymous, ::System::IO::Stream input) ;

/// @brief Method VerifySupportedSignatureAlgorithm addr 0xf27800 size 0x59c virtual false final false
static void VerifySupportedSignatureAlgorithm(::System::Collections::IList supportedSignatureAlgorithms, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm signatureAlgorithm) ;

/// @brief Method PRF addr 0xf2ffa4 size 0x260 virtual false final false
static ::ArrayW<uint8_t> PRF(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::ArrayW<uint8_t> secret, ::StringW asciiLabel, ::ArrayW<uint8_t> seed, int32_t size) ;

/// @brief Method PRF_legacy addr 0xf307dc size 0x98 virtual false final false
static ::ArrayW<uint8_t> PRF_legacy(::ArrayW<uint8_t> secret, ::StringW asciiLabel, ::ArrayW<uint8_t> seed, int32_t size) ;

/// @brief Method PRF_legacy addr 0xf302a8 size 0x1b8 virtual false final false
static ::ArrayW<uint8_t> PRF_legacy(::ArrayW<uint8_t> secret, ::ArrayW<uint8_t> label, ::ArrayW<uint8_t> labelSeed, int32_t size) ;

/// @brief Method Concat addr 0xf30204 size 0xa4 virtual false final false
static ::ArrayW<uint8_t> Concat(::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) ;

/// @brief Method HMacHash addr 0xf304fc size 0x2e0 virtual false final false
static void HMacHash(::Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> secret, ::ArrayW<uint8_t> seed, ::ArrayW<uint8_t> output) ;

/// @brief Method ValidateKeyUsage addr 0xf1d414 size 0xf8 virtual false final false
static void ValidateKeyUsage(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure c, int32_t keyUsageBits) ;

/// @brief Method CalculateKeyBlock addr 0xf22028 size 0x1a0 virtual false final false
static ::ArrayW<uint8_t> CalculateKeyBlock(::Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t size) ;

/// @brief Method CalculateKeyBlock_Ssl addr 0xf30874 size 0x538 virtual false final false
static ::ArrayW<uint8_t> CalculateKeyBlock_Ssl(::ArrayW<uint8_t> master_secret, ::ArrayW<uint8_t> random, int32_t size) ;

/// @brief Method CalculateMasterSecret addr 0xf30dac size 0x214 virtual false final false
static ::ArrayW<uint8_t> CalculateMasterSecret(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::ArrayW<uint8_t> pre_master_secret) ;

/// @brief Method CalculateMasterSecret_Ssl addr 0xf30fc0 size 0x4f8 virtual false final false
static ::ArrayW<uint8_t> CalculateMasterSecret_Ssl(::ArrayW<uint8_t> pre_master_secret, ::ArrayW<uint8_t> random) ;

/// @brief Method CalculateVerifyData addr 0xf314b8 size 0x158 virtual false final false
static ::ArrayW<uint8_t> CalculateVerifyData(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::StringW asciiLabel, ::ArrayW<uint8_t> handshakeHash) ;

/// @brief Method CreateHash addr 0xf1ec18 size 0x1d8 virtual false final false
static ::Org::BouncyCastle::Crypto::IDigest CreateHash(uint8_t hashAlgorithm) ;

/// @brief Method CreateHash addr 0xf1e42c size 0xb0 virtual false final false
static ::Org::BouncyCastle::Crypto::IDigest CreateHash(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm signatureAndHashAlgorithm) ;

/// @brief Method CloneHash addr 0xf31610 size 0x334 virtual false final false
static ::Org::BouncyCastle::Crypto::IDigest CloneHash(uint8_t hashAlgorithm, ::Org::BouncyCastle::Crypto::IDigest hash) ;

/// @brief Method CreatePrfHash addr 0xf30460 size 0x9c virtual false final false
static ::Org::BouncyCastle::Crypto::IDigest CreatePrfHash(int32_t prfAlgorithm) ;

/// @brief Method ClonePrfHash addr 0xf319fc size 0xe4 virtual false final false
static ::Org::BouncyCastle::Crypto::IDigest ClonePrfHash(int32_t prfAlgorithm, ::Org::BouncyCastle::Crypto::IDigest hash) ;

/// @brief Method GetHashAlgorithmForPrfAlgorithm addr 0xf31944 size 0xb8 virtual false final false
static uint8_t GetHashAlgorithmForPrfAlgorithm(int32_t prfAlgorithm) ;

/// @brief Method GetOidForHashAlgorithm addr 0xf24fd4 size 0x19c virtual false final false
static ::Org::BouncyCastle::Asn1::DerObjectIdentifier GetOidForHashAlgorithm(uint8_t hashAlgorithm) ;

/// @brief Method GetClientCertificateType addr 0xf26f3c size 0x33c virtual false final false
static int16_t GetClientCertificateType(::Org::BouncyCastle::Crypto::Tls::Certificate clientCertificate, ::Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate) ;

/// @brief Method TrackHashAlgorithms addr 0xf26730 size 0x3cc virtual false final false
static void TrackHashAlgorithms(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash handshakeHash, ::System::Collections::IList supportedSignatureAlgorithms) ;

/// @brief Method HasSigningCapability addr 0xf29bc0 size 0x24 virtual false final false
static bool HasSigningCapability(uint8_t clientCertificateType) ;

/// @brief Method CreateTlsSigner addr 0xf27d9c size 0x160 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::TlsSigner CreateTlsSigner(uint8_t clientCertificateType) ;

/// @brief Method GenSsl3Const addr 0xf31ae0 size 0x114 virtual false final false
static ::ArrayW<::ArrayW<uint8_t>> GenSsl3Const() ;

/// @brief Method VectorOfOne addr 0xf2efbc size 0xe0 virtual false final false
static ::System::Collections::IList VectorOfOne(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetCipherType addr 0xf31bf4 size 0xbc virtual false final false
static int32_t GetCipherType(int32_t ciphersuite) ;

/// @brief Method GetEncryptionAlgorithm addr 0xf31cb0 size 0x124 virtual false final false
static int32_t GetEncryptionAlgorithm(int32_t ciphersuite) ;

/// @brief Method GetKeyExchangeAlgorithm addr 0xf31dd4 size 0x140 virtual false final false
static int32_t GetKeyExchangeAlgorithm(int32_t ciphersuite) ;

/// @brief Method GetMacAlgorithm addr 0xf31f14 size 0xc4 virtual false final false
static int32_t GetMacAlgorithm(int32_t ciphersuite) ;

/// @brief Method GetMinimumVersion addr 0xf31fd8 size 0x110 virtual false final false
static ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion GetMinimumVersion(int32_t ciphersuite) ;

/// @brief Method IsAeadCipherSuite addr 0xf320e8 size 0x60 virtual false final false
static bool IsAeadCipherSuite(int32_t ciphersuite) ;

/// @brief Method IsBlockCipherSuite addr 0xf32148 size 0x60 virtual false final false
static bool IsBlockCipherSuite(int32_t ciphersuite) ;

/// @brief Method IsStreamCipherSuite addr 0xf321a8 size 0x60 virtual false final false
static bool IsStreamCipherSuite(int32_t ciphersuite) ;

/// @brief Method IsValidCipherSuiteForSignatureAlgorithms addr 0xf32208 size 0x2a4 virtual false final false
static bool IsValidCipherSuiteForSignatureAlgorithms(int32_t cipherSuite, ::System::Collections::IList sigAlgs) ;

/// @brief Method IsValidCipherSuiteForVersion addr 0xf297cc size 0x8c virtual false final false
static bool IsValidCipherSuiteForVersion(int32_t cipherSuite, ::Org::BouncyCastle::Crypto::Tls::ProtocolVersion serverVersion) ;

/// @brief Method GetUsableSignatureAlgorithms addr 0xf324ac size 0x560 virtual false final false
static ::System::Collections::IList GetUsableSignatureAlgorithms(::System::Collections::IList sigHashAlgs) ;

/// @brief Method IsTimeout addr 0xf32a0c size 0x2c virtual false final false
static bool IsTimeout(::System::Net::Sockets::SocketException e) ;

// Ctor Parameters []
explicit TlsUtilities() ;

/// @brief Method .ctor addr 0xf32bc4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsUtilities, "Org.BouncyCastle.Crypto.Tls", "TlsUtilities");
