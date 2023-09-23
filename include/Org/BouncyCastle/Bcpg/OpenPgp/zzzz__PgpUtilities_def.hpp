#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class MPInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace System::IO {
class FileInfo;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUtilities;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpUtilities
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1673))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpUtilities
class CORDL_TYPE PgpUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PgpUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpUtilities", modifiers: " const&", def_value: None }]
constexpr PgpUtilities(PgpUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpUtilities", modifiers: "&&", def_value: None }]
constexpr PgpUtilities(PgpUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpUtilities& operator=(PgpUtilities&& o) noexcept = default;
  constexpr PgpUtilities& operator=(PgpUtilities const& o) noexcept = default;
                


// Fields

/// @brief Field ReadAhead offset 0
static constexpr int32_t  ReadAhead{60};


// Methods

// Ctor Parameters []
explicit PgpUtilities() ;

/// @brief Method .ctor addr 0x1041a40 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method DsaSigToMpi addr 0x103e75c size 0x260 virtual false final false
static ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> DsaSigToMpi(::ArrayW<uint8_t> encoding) ;

/// @brief Method RsaSigToMpi addr 0x103e9bc size 0xfc virtual false final false
static ::ArrayW<Org::BouncyCastle::Bcpg::MPInteger> RsaSigToMpi(::ArrayW<uint8_t> encoding) ;

/// @brief Method GetDigestName addr 0x102d858 size 0x12c virtual false final false
static ::StringW GetDigestName(Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) ;

/// @brief Method GetSignatureName addr 0x103c164 size 0x180 virtual false final false
static ::StringW GetSignatureName(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) ;

/// @brief Method GetSymmetricCipherName addr 0x102d6b4 size 0x1a4 virtual false final false
static ::StringW GetSymmetricCipherName(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm) ;

/// @brief Method GetKeySize addr 0x1041a48 size 0xa4 virtual false final false
static int32_t GetKeySize(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm) ;

/// @brief Method MakeKey addr 0x1041aec size 0x78 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::KeyParameter MakeKey(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, ::ArrayW<uint8_t> keyBytes) ;

/// @brief Method MakeRandomKey addr 0x1041b64 size 0x9c virtual false final false
static Org::BouncyCastle::Crypto::Parameters::KeyParameter MakeRandomKey(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method EncodePassPhrase addr 0x1032418 size 0x50 virtual false final false
static ::ArrayW<uint8_t> EncodePassPhrase(::ArrayW<char16_t> passPhrase, bool utf8) ;

/// @brief Method MakeKeyFromPassPhrase addr 0x1041c00 size 0x3c virtual false final false
static Org::BouncyCastle::Crypto::Parameters::KeyParameter MakeKeyFromPassPhrase(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<char16_t> passPhrase) ;

/// @brief Method MakeKeyFromPassPhraseUtf8 addr 0x1041c3c size 0x38 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::KeyParameter MakeKeyFromPassPhraseUtf8(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<char16_t> passPhrase) ;

/// @brief Method MakeKeyFromPassPhraseRaw addr 0x1041c74 size 0x8 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::KeyParameter MakeKeyFromPassPhraseRaw(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> rawPassPhrase) ;

/// @brief Method DoMakeKeyFromPassPhrase addr 0x1033a70 size 0x970 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::KeyParameter DoMakeKeyFromPassPhrase(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm, Org::BouncyCastle::Bcpg::S2k s2k, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase) ;

/// @brief Method WriteFileToLiteralData addr 0x1041c7c size 0xd4 virtual false final false
static void WriteFileToLiteralData(System::IO::Stream output, char16_t fileType, System::IO::FileInfo file) ;

/// @brief Method WriteFileToLiteralData addr 0x1041f30 size 0xcc virtual false final false
static void WriteFileToLiteralData(System::IO::Stream output, char16_t fileType, System::IO::FileInfo file, ::ArrayW<uint8_t> buffer) ;

/// @brief Method PipeFileContents addr 0x1041d50 size 0x1e0 virtual false final false
static void PipeFileContents(System::IO::FileInfo file, System::IO::Stream pOut, int32_t bufSize) ;

/// @brief Method IsPossiblyBase64 addr 0x1041ffc size 0x48 virtual false final false
static bool IsPossiblyBase64(int32_t ch) ;

/// @brief Method GetDecoderStream addr 0x1042044 size 0x410 virtual false final false
static System::IO::Stream GetDecoderStream(System::IO::Stream inputStream) ;

/// @brief Method CreateWrapper addr 0x102da8c size 0x124 virtual false final false
static Org::BouncyCastle::Crypto::IWrapper CreateWrapper(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm) ;

/// @brief Method GenerateIV addr 0x103677c size 0x7c virtual false final false
static ::ArrayW<uint8_t> GenerateIV(int32_t length, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method GenerateS2k addr 0x10366ec size 0x90 virtual false final false
static Org::BouncyCastle::Bcpg::S2k GenerateS2k(Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int32_t s2kCount, Org::BouncyCastle::Security::SecureRandom random) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpUtilities");
