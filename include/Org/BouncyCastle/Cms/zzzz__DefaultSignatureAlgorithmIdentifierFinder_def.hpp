#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class DefaultSignatureAlgorithmIdentifierFinder;
}
// Type: Org.BouncyCastle.Cms::DefaultSignatureAlgorithmIdentifierFinder
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(658))
// CS Name: Org.BouncyCastle.Cms.DefaultSignatureAlgorithmIdentifierFinder
class CORDL_TYPE DefaultSignatureAlgorithmIdentifierFinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultSignatureAlgorithmIdentifierFinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureAlgorithmIdentifierFinder", modifiers: " const&", def_value: None }]
constexpr DefaultSignatureAlgorithmIdentifierFinder(DefaultSignatureAlgorithmIdentifierFinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureAlgorithmIdentifierFinder", modifiers: "&&", def_value: None }]
constexpr DefaultSignatureAlgorithmIdentifierFinder(DefaultSignatureAlgorithmIdentifierFinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultSignatureAlgorithmIdentifierFinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultSignatureAlgorithmIdentifierFinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultSignatureAlgorithmIdentifierFinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultSignatureAlgorithmIdentifierFinder& operator=(DefaultSignatureAlgorithmIdentifierFinder&& o) noexcept = default;
  constexpr DefaultSignatureAlgorithmIdentifierFinder& operator=(DefaultSignatureAlgorithmIdentifierFinder const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithms() ;

static Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_noParams, put=__set_noParams))  noParams;

static void __set_noParams(Org::BouncyCastle::Utilities::Collections::ISet value) ;

static Org::BouncyCastle::Utilities::Collections::ISet __get_noParams() ;

static System::Collections::IDictionary __declspec(property(get=__get__params, put=__set__params))  _params;

static void __set__params(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get__params() ;

static Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_pkcs15RsaEncryption, put=__set_pkcs15RsaEncryption))  pkcs15RsaEncryption;

static void __set_pkcs15RsaEncryption(Org::BouncyCastle::Utilities::Collections::ISet value) ;

static Org::BouncyCastle::Utilities::Collections::ISet __get_pkcs15RsaEncryption() ;

static System::Collections::IDictionary __declspec(property(get=__get_digestOids, put=__set_digestOids))  digestOids;

static void __set_digestOids(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_digestOids() ;

static System::Collections::IDictionary __declspec(property(get=__get_digestBuilders, put=__set_digestBuilders))  digestBuilders;

static void __set_digestBuilders(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_digestBuilders() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ENCRYPTION_RSA, put=__set_ENCRYPTION_RSA))  ENCRYPTION_RSA;

static void __set_ENCRYPTION_RSA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ENCRYPTION_RSA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ENCRYPTION_DSA, put=__set_ENCRYPTION_DSA))  ENCRYPTION_DSA;

static void __set_ENCRYPTION_DSA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ENCRYPTION_DSA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ENCRYPTION_ECDSA, put=__set_ENCRYPTION_ECDSA))  ENCRYPTION_ECDSA;

static void __set_ENCRYPTION_ECDSA(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ENCRYPTION_ECDSA() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ENCRYPTION_RSA_PSS, put=__set_ENCRYPTION_RSA_PSS))  ENCRYPTION_RSA_PSS;

static void __set_ENCRYPTION_RSA_PSS(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ENCRYPTION_RSA_PSS() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ENCRYPTION_GOST3410, put=__set_ENCRYPTION_GOST3410))  ENCRYPTION_GOST3410;

static void __set_ENCRYPTION_GOST3410(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ENCRYPTION_GOST3410() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ENCRYPTION_ECGOST3410, put=__set_ENCRYPTION_ECGOST3410))  ENCRYPTION_ECGOST3410;

static void __set_ENCRYPTION_ECGOST3410(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ENCRYPTION_ECGOST3410() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ENCRYPTION_ECGOST3410_2012_256, put=__set_ENCRYPTION_ECGOST3410_2012_256))  ENCRYPTION_ECGOST3410_2012_256;

static void __set_ENCRYPTION_ECGOST3410_2012_256(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ENCRYPTION_ECGOST3410_2012_256() ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_ENCRYPTION_ECGOST3410_2012_512, put=__set_ENCRYPTION_ECGOST3410_2012_512))  ENCRYPTION_ECGOST3410_2012_512;

static void __set_ENCRYPTION_ECGOST3410_2012_512(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

static Org::BouncyCastle::Asn1::DerObjectIdentifier __get_ENCRYPTION_ECGOST3410_2012_512() ;


// Methods

/// @brief Method Generate addr 0x116fc7c size 0x6c0 virtual false final false
static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Generate(::StringW signatureAlgorithm) ;

/// @brief Method CreatePssParams addr 0x116fb50 size 0x12c virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters CreatePssParams(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgId, int32_t saltSize) ;

/// @brief Method Find addr 0x117033c size 0x54 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier Find(::StringW sigAlgName) ;

static Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder New_ctor() ;

/// @brief Method .ctor addr 0x1170390 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder, "Org.BouncyCastle.Cms", "DefaultSignatureAlgorithmIdentifierFinder");
