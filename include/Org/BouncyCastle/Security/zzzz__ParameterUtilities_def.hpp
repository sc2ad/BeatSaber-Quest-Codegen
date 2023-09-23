#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class ParameterUtilities;
}
// Type: Org.BouncyCastle.Security::ParameterUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1753))
// CS Name: Org.BouncyCastle.Security.ParameterUtilities
class CORDL_TYPE ParameterUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ParameterUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParameterUtilities", modifiers: " const&", def_value: None }]
constexpr ParameterUtilities(ParameterUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParameterUtilities", modifiers: "&&", def_value: None }]
constexpr ParameterUtilities(ParameterUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParameterUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParameterUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParameterUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParameterUtilities& operator=(ParameterUtilities&& o) noexcept = default;
  constexpr ParameterUtilities& operator=(ParameterUtilities const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithms() ;

static System::Collections::IDictionary __declspec(property(get=__get_basicIVSizes, put=__set_basicIVSizes))  basicIVSizes;

static void __set_basicIVSizes(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_basicIVSizes() ;


// Methods

// Ctor Parameters []
explicit ParameterUtilities() ;

/// @brief Method .ctor addr 0x10a59a0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method AddAlgorithm addr 0x10a7250 size 0x1c4 virtual false final false
static void AddAlgorithm(::StringW canonicalName, ::ArrayW<::bs_hook::Il2CppWrapperType> aliases) ;

/// @brief Method AddBasicIVSizeEntries addr 0x10a7414 size 0x164 virtual false final false
static void AddBasicIVSizeEntries(int32_t size, ::ArrayW<::StringW> algorithms) ;

/// @brief Method GetCanonicalAlgorithmName addr 0x10a7578 size 0x138 virtual false final false
static ::StringW GetCanonicalAlgorithmName(::StringW algorithm) ;

/// @brief Method CreateKeyParameter addr 0x10a76b0 size 0x74 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::KeyParameter CreateKeyParameter(Org::BouncyCastle::Asn1::DerObjectIdentifier algOid, ::ArrayW<uint8_t> keyBytes) ;

/// @brief Method CreateKeyParameter addr 0x10a79ec size 0x6c virtual false final false
static Org::BouncyCastle::Crypto::Parameters::KeyParameter CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t> keyBytes) ;

/// @brief Method CreateKeyParameter addr 0x10a7a58 size 0x80 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::KeyParameter CreateKeyParameter(Org::BouncyCastle::Asn1::DerObjectIdentifier algOid, ::ArrayW<uint8_t> keyBytes, int32_t offset, int32_t length) ;

/// @brief Method CreateKeyParameter addr 0x10a7724 size 0x2c8 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::KeyParameter CreateKeyParameter(::StringW algorithm, ::ArrayW<uint8_t> keyBytes, int32_t offset, int32_t length) ;

/// @brief Method GetCipherParameters addr 0x10a7ad8 size 0x78 virtual false final false
static Org::BouncyCastle::Crypto::ICipherParameters GetCipherParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier algOid, Org::BouncyCastle::Crypto::ICipherParameters key, Org::BouncyCastle::Asn1::Asn1Object asn1Params) ;

/// @brief Method GetCipherParameters addr 0x10a7b50 size 0x45c virtual false final false
static Org::BouncyCastle::Crypto::ICipherParameters GetCipherParameters(::StringW algorithm, Org::BouncyCastle::Crypto::ICipherParameters key, Org::BouncyCastle::Asn1::Asn1Object asn1Params) ;

/// @brief Method GenerateParameters addr 0x10a8150 size 0x68 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Encodable GenerateParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier algID, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method GenerateParameters addr 0x10a81b8 size 0x304 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Encodable GenerateParameters(::StringW algorithm, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method WithRandom addr 0x10a85cc size 0x74 virtual false final false
static Org::BouncyCastle::Crypto::ICipherParameters WithRandom(Org::BouncyCastle::Crypto::ICipherParameters cp, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method CreateIVOctetString addr 0x10a84bc size 0xa8 virtual false final false
static Org::BouncyCastle::Asn1::Asn1OctetString CreateIVOctetString(Org::BouncyCastle::Security::SecureRandom random, int32_t ivLength) ;

/// @brief Method CreateIV addr 0x10a8564 size 0x68 virtual false final false
static ::ArrayW<uint8_t> CreateIV(Org::BouncyCastle::Security::SecureRandom random, int32_t ivLength) ;

/// @brief Method FindBasicIVSize addr 0x10a7fac size 0x1a4 virtual false final false
static int32_t FindBasicIVSize(::StringW canonicalName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::ParameterUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::ParameterUtilities, "Org.BouncyCastle.Security", "ParameterUtilities");
