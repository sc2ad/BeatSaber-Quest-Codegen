#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertIDv2;
}
// Type: Org.BouncyCastle.Asn1.Ess::EssCertIDv2
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(163))
// CS Name: Org.BouncyCastle.Asn1.Ess.EssCertIDv2
class CORDL_TYPE EssCertIDv2 : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EssCertIDv2() = default;

// Ctor Parameters [CppParam { name: "", ty: "EssCertIDv2", modifiers: " const&", def_value: None }]
constexpr EssCertIDv2(EssCertIDv2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EssCertIDv2", modifiers: "&&", def_value: None }]
constexpr EssCertIDv2(EssCertIDv2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EssCertIDv2(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr EssCertIDv2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EssCertIDv2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EssCertIDv2& operator=(EssCertIDv2&& o) noexcept = default;
  constexpr EssCertIDv2& operator=(EssCertIDv2 const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_hashAlgorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_certHash, put=__set_certHash))  certHash;

constexpr void __set_certHash(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_certHash() const;

 Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=__get_issuerSerial, put=__set_issuerSerial))  issuerSerial;

constexpr void __set_issuerSerial(Org::BouncyCastle::Asn1::X509::IssuerSerial value) ;

constexpr Org::BouncyCastle::Asn1::X509::IssuerSerial __get_issuerSerial() const;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_DefaultAlgID, put=__set_DefaultAlgID))  DefaultAlgID;

static void __set_DefaultAlgID(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

static Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_DefaultAlgID() ;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=get_IssuerSerial))  IssuerSerial;


// Methods

/// @brief Method GetInstance addr 0xe0c2c4 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Ess::EssCertIDv2 GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit EssCertIDv2(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe0c368 size 0x260 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "certHash", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit EssCertIDv2(::ArrayW<uint8_t> certHash) ;

/// @brief Method .ctor addr 0xe0c5c8 size 0x10 virtual false final false
 void _ctor(::ArrayW<uint8_t> certHash) ;

// Ctor Parameters [CppParam { name: "algId", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "certHash", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit EssCertIDv2(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId, ::ArrayW<uint8_t> certHash) ;

/// @brief Method .ctor addr 0xe0c668 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId, ::ArrayW<uint8_t> certHash) ;

// Ctor Parameters [CppParam { name: "certHash", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "issuerSerial", ty: "Org::BouncyCastle::Asn1::X509::IssuerSerial", modifiers: "", def_value: None }]
explicit EssCertIDv2(::ArrayW<uint8_t> certHash, Org::BouncyCastle::Asn1::X509::IssuerSerial issuerSerial) ;

/// @brief Method .ctor addr 0xe0c670 size 0x10 virtual false final false
 void _ctor(::ArrayW<uint8_t> certHash, Org::BouncyCastle::Asn1::X509::IssuerSerial issuerSerial) ;

// Ctor Parameters [CppParam { name: "algId", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "certHash", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "issuerSerial", ty: "Org::BouncyCastle::Asn1::X509::IssuerSerial", modifiers: "", def_value: None }]
explicit EssCertIDv2(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId, ::ArrayW<uint8_t> certHash, Org::BouncyCastle::Asn1::X509::IssuerSerial issuerSerial) ;

/// @brief Method .ctor addr 0xe0c5d8 size 0x90 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId, ::ArrayW<uint8_t> certHash, Org::BouncyCastle::Asn1::X509::IssuerSerial issuerSerial) ;

/// @brief Method get_HashAlgorithm addr 0xe0c680 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_HashAlgorithm() ;

/// @brief Method GetCertHash addr 0xe0c688 size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetCertHash() ;

/// @brief Method get_IssuerSerial addr 0xe0c6e4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::IssuerSerial get_IssuerSerial() ;

/// @brief Method ToAsn1Object addr 0xe0c6ec size 0x1b4 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ess::EssCertIDv2);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ess::EssCertIDv2, "Org.BouncyCastle.Asn1.Ess", "EssCertIDv2");
