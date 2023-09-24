#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class PbeParametersGenerator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class PbeUtilities;
}
// Type: Org.BouncyCastle.Security::PbeUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1754))
// CS Name: Org.BouncyCastle.Security.PbeUtilities
class CORDL_TYPE PbeUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PbeUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "PbeUtilities", modifiers: " const&", def_value: None }]
constexpr PbeUtilities(PbeUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PbeUtilities", modifiers: "&&", def_value: None }]
constexpr PbeUtilities(PbeUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PbeUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PbeUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PbeUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PbeUtilities& operator=(PbeUtilities&& o) noexcept = default;
  constexpr PbeUtilities& operator=(PbeUtilities const& o) noexcept = default;
                


// Fields

/// @brief Field Pkcs5S1 offset 0
static constexpr ::ConstString  Pkcs5S1{u"Pkcs5S1"};

/// @brief Field Pkcs5S2 offset 0
static constexpr ::ConstString  Pkcs5S2{u"Pkcs5S2"};

/// @brief Field Pkcs12 offset 0
static constexpr ::ConstString  Pkcs12{u"Pkcs12"};

/// @brief Field OpenSsl offset 0
static constexpr ::ConstString  OpenSsl{u"OpenSsl"};

static System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithms() ;

static System::Collections::IDictionary __declspec(property(get=__get_algorithmType, put=__set_algorithmType))  algorithmType;

static void __set_algorithmType(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithmType() ;

static System::Collections::IDictionary __declspec(property(get=__get_oids, put=__set_oids))  oids;

static void __set_oids(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_oids() ;


// Properties

static System::Collections::ICollection __declspec(property(get=get_Algorithms))  Algorithms;


// Methods

static Org::BouncyCastle::Security::PbeUtilities New_ctor() ;

/// @brief Method .ctor addr 0x10a8640 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method MakePbeGenerator addr 0x10adc4c size 0x248 virtual false final false
static Org::BouncyCastle::Crypto::PbeParametersGenerator MakePbeGenerator(::StringW type, Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method GetObjectIdentifier addr 0x10ade94 size 0x208 virtual false final false
static Org::BouncyCastle::Asn1::DerObjectIdentifier GetObjectIdentifier(::StringW mechanism) ;

/// @brief Method get_Algorithms addr 0x10ae09c size 0xcc virtual false final false
static System::Collections::ICollection get_Algorithms() ;

/// @brief Method IsPkcs12 addr 0x10ae168 size 0x1fc virtual false final false
static bool IsPkcs12(::StringW algorithm) ;

/// @brief Method IsPkcs5Scheme1 addr 0x10ae364 size 0x1fc virtual false final false
static bool IsPkcs5Scheme1(::StringW algorithm) ;

/// @brief Method IsPkcs5Scheme2 addr 0x10ae560 size 0x1fc virtual false final false
static bool IsPkcs5Scheme2(::StringW algorithm) ;

/// @brief Method IsOpenSsl addr 0x10ae75c size 0x1fc virtual false final false
static bool IsOpenSsl(::StringW algorithm) ;

/// @brief Method IsPbeAlgorithm addr 0x10ae958 size 0x1cc virtual false final false
static bool IsPbeAlgorithm(::StringW algorithm) ;

/// @brief Method GenerateAlgorithmParameters addr 0x10aeb24 size 0x78 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Encodable GenerateAlgorithmParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method GenerateAlgorithmParameters addr 0x10aeb9c size 0x134 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Encodable GenerateAlgorithmParameters(::StringW algorithm, ::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method GenerateAlgorithmParameters addr 0x10aecd0 size 0x3c4 virtual false final false
static Org::BouncyCastle::Asn1::Asn1Encodable GenerateAlgorithmParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier cipherAlgorithm, Org::BouncyCastle::Asn1::DerObjectIdentifier hashAlgorithm, ::ArrayW<uint8_t> salt, int32_t iterationCount, Org::BouncyCastle::Security::SecureRandom secureRandom) ;

/// @brief Method GenerateCipherParameters addr 0x10af094 size 0x7c virtual false final false
static Org::BouncyCastle::Crypto::ICipherParameters GenerateCipherParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid, ::ArrayW<char16_t> password, Org::BouncyCastle::Asn1::Asn1Encodable pbeParameters) ;

/// @brief Method GenerateCipherParameters addr 0x10b0244 size 0x80 virtual false final false
static Org::BouncyCastle::Crypto::ICipherParameters GenerateCipherParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid, ::ArrayW<char16_t> password, bool wrongPkcs12Zero, Org::BouncyCastle::Asn1::Asn1Encodable pbeParameters) ;

/// @brief Method GenerateCipherParameters addr 0x10b02c4 size 0xa4 virtual false final false
static Org::BouncyCastle::Crypto::ICipherParameters GenerateCipherParameters(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, ::ArrayW<char16_t> password) ;

/// @brief Method GenerateCipherParameters addr 0x10b0368 size 0xa8 virtual false final false
static Org::BouncyCastle::Crypto::ICipherParameters GenerateCipherParameters(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID, ::ArrayW<char16_t> password, bool wrongPkcs12Zero) ;

/// @brief Method GenerateCipherParameters addr 0x10b0410 size 0x70 virtual false final false
static Org::BouncyCastle::Crypto::ICipherParameters GenerateCipherParameters(::StringW algorithm, ::ArrayW<char16_t> password, Org::BouncyCastle::Asn1::Asn1Encodable pbeParameters) ;

/// @brief Method GenerateCipherParameters addr 0x10af110 size 0x1134 virtual false final false
static Org::BouncyCastle::Crypto::ICipherParameters GenerateCipherParameters(::StringW algorithm, ::ArrayW<char16_t> password, bool wrongPkcs12Zero, Org::BouncyCastle::Asn1::Asn1Encodable pbeParameters) ;

/// @brief Method CreateEngine addr 0x10b0698 size 0x60 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateEngine(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithmOid) ;

/// @brief Method CreateEngine addr 0x10b0bf0 size 0x110 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateEngine(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algID) ;

/// @brief Method CreateEngine addr 0x10b06f8 size 0x4f8 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateEngine(::StringW algorithm) ;

/// @brief Method GetEncodingName addr 0x10b0d00 size 0x108 virtual false final false
static ::StringW GetEncodingName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method FixDesParity addr 0x10b0480 size 0x218 virtual false final false
static Org::BouncyCastle::Crypto::ICipherParameters FixDesParity(::StringW mechanism, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::PbeUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::PbeUtilities, "Org.BouncyCastle.Security", "PbeUtilities");
