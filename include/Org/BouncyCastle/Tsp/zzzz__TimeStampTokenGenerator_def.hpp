#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampRequest;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampToken;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenGenerator;
}
// Type: Org.BouncyCastle.Tsp::TimeStampTokenGenerator
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1771))
// CS Name: Org.BouncyCastle.Tsp.TimeStampTokenGenerator
class CORDL_TYPE TimeStampTokenGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~TimeStampTokenGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenGenerator", modifiers: " const&", def_value: None }]
constexpr TimeStampTokenGenerator(TimeStampTokenGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampTokenGenerator", modifiers: "&&", def_value: None }]
constexpr TimeStampTokenGenerator(TimeStampTokenGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampTokenGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeStampTokenGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampTokenGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampTokenGenerator& operator=(TimeStampTokenGenerator&& o) noexcept = default;
  constexpr TimeStampTokenGenerator& operator=(TimeStampTokenGenerator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_accuracySeconds, put=__set_accuracySeconds))  accuracySeconds;

constexpr void __set_accuracySeconds(int32_t value) ;

constexpr int32_t __get_accuracySeconds() const;

 int32_t __declspec(property(get=__get_accuracyMillis, put=__set_accuracyMillis))  accuracyMillis;

constexpr void __set_accuracyMillis(int32_t value) ;

constexpr int32_t __get_accuracyMillis() const;

 int32_t __declspec(property(get=__get_accuracyMicros, put=__set_accuracyMicros))  accuracyMicros;

constexpr void __set_accuracyMicros(int32_t value) ;

constexpr int32_t __get_accuracyMicros() const;

 bool __declspec(property(get=__get_ordering, put=__set_ordering))  ordering;

constexpr void __set_ordering(bool value) ;

constexpr bool __get_ordering() const;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_tsa, put=__set_tsa))  tsa;

constexpr void __set_tsa(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_tsa() const;

 ::StringW __declspec(property(get=__get_tsaPolicyOID, put=__set_tsaPolicyOID))  tsaPolicyOID;

constexpr void __set_tsaPolicyOID(::StringW value) ;

constexpr ::StringW __get_tsaPolicyOID() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_key() const;

 Org::BouncyCastle::X509::X509Certificate __declspec(property(get=__get_cert, put=__set_cert))  cert;

constexpr void __set_cert(Org::BouncyCastle::X509::X509Certificate value) ;

constexpr Org::BouncyCastle::X509::X509Certificate __get_cert() const;

 ::StringW __declspec(property(get=__get_digestOID, put=__set_digestOID))  digestOID;

constexpr void __set_digestOID(::StringW value) ;

constexpr ::StringW __get_digestOID() const;

 Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=__get_signedAttr, put=__set_signedAttr))  signedAttr;

constexpr void __set_signedAttr(Org::BouncyCastle::Asn1::Cms::AttributeTable value) ;

constexpr Org::BouncyCastle::Asn1::Cms::AttributeTable __get_signedAttr() const;

 Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=__get_unsignedAttr, put=__set_unsignedAttr))  unsignedAttr;

constexpr void __set_unsignedAttr(Org::BouncyCastle::Asn1::Cms::AttributeTable value) ;

constexpr Org::BouncyCastle::Asn1::Cms::AttributeTable __get_unsignedAttr() const;

 Org::BouncyCastle::X509::Store::IX509Store __declspec(property(get=__get_x509Certs, put=__set_x509Certs))  x509Certs;

constexpr void __set_x509Certs(Org::BouncyCastle::X509::Store::IX509Store value) ;

constexpr Org::BouncyCastle::X509::Store::IX509Store __get_x509Certs() const;

 Org::BouncyCastle::X509::Store::IX509Store __declspec(property(get=__get_x509Crls, put=__set_x509Crls))  x509Crls;

constexpr void __set_x509Crls(Org::BouncyCastle::X509::Store::IX509Store value) ;

constexpr Org::BouncyCastle::X509::Store::IX509Store __get_x509Crls() const;


// Methods

static Org::BouncyCastle::Tsp::TimeStampTokenGenerator New_ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOID, ::StringW tsaPolicyOID) ;

/// @brief Method .ctor addr 0x10c76f8 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOID, ::StringW tsaPolicyOID) ;

static Org::BouncyCastle::Tsp::TimeStampTokenGenerator New_ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOID, ::StringW tsaPolicyOID, Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr) ;

/// @brief Method .ctor addr 0x10c7704 size 0x448 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOID, ::StringW tsaPolicyOID, Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr) ;

/// @brief Method SetCertificates addr 0x10c7b4c size 0x8 virtual false final false
 void SetCertificates(Org::BouncyCastle::X509::Store::IX509Store certificates) ;

/// @brief Method SetCrls addr 0x10c7b54 size 0x8 virtual false final false
 void SetCrls(Org::BouncyCastle::X509::Store::IX509Store crls) ;

/// @brief Method SetAccuracySeconds addr 0x10c7b5c size 0x8 virtual false final false
 void SetAccuracySeconds(int32_t accuracySeconds) ;

/// @brief Method SetAccuracyMillis addr 0x10c7b64 size 0x8 virtual false final false
 void SetAccuracyMillis(int32_t accuracyMillis) ;

/// @brief Method SetAccuracyMicros addr 0x10c7b6c size 0x8 virtual false final false
 void SetAccuracyMicros(int32_t accuracyMicros) ;

/// @brief Method SetOrdering addr 0x10c7b74 size 0xc virtual false final false
 void SetOrdering(bool ordering) ;

/// @brief Method SetTsa addr 0x10c7b80 size 0x8 virtual false final false
 void SetTsa(Org::BouncyCastle::Asn1::X509::GeneralName tsa) ;

/// @brief Method Generate addr 0x10c57a4 size 0x6a8 virtual false final false
 Org::BouncyCastle::Tsp::TimeStampToken Generate(Org::BouncyCastle::Tsp::TimeStampRequest request, Org::BouncyCastle::Math::BigInteger serialNumber, System::DateTime genTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Tsp
NEED_NO_BOX(Org::BouncyCastle::Tsp::TimeStampTokenGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Tsp::TimeStampTokenGenerator, "Org.BouncyCastle.Tsp", "TimeStampTokenGenerator");
