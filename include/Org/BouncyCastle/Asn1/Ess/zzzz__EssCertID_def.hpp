#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertID;
}
// Type: Org.BouncyCastle.Asn1.Ess::EssCertID
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(162))
// CS Name: Org.BouncyCastle.Asn1.Ess.EssCertID
class CORDL_TYPE EssCertID : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EssCertID() = default;

// Ctor Parameters [CppParam { name: "", ty: "EssCertID", modifiers: " const&", def_value: None }]
constexpr EssCertID(EssCertID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EssCertID", modifiers: "&&", def_value: None }]
constexpr EssCertID(EssCertID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EssCertID(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr EssCertID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EssCertID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EssCertID& operator=(EssCertID&& o) noexcept = default;
  constexpr EssCertID& operator=(EssCertID const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_certHash, put=__set_certHash))  certHash;

constexpr void __set_certHash(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_certHash() const;

 Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=__get_issuerSerial, put=__set_issuerSerial))  issuerSerial;

constexpr void __set_issuerSerial(Org::BouncyCastle::Asn1::X509::IssuerSerial value) ;

constexpr Org::BouncyCastle::Asn1::X509::IssuerSerial __get_issuerSerial() const;


// Properties

 Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=get_IssuerSerial))  IssuerSerial;


// Methods

/// @brief Method GetInstance addr 0xe0bd74 size 0x190 virtual false final false
static Org::BouncyCastle::Asn1::Ess::EssCertID GetInstance(::bs_hook::Il2CppWrapperType o) ;

static Org::BouncyCastle::Asn1::Ess::EssCertID New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe0bf04 size 0x154 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Ess::EssCertID New_ctor(::ArrayW<uint8_t> hash) ;

/// @brief Method .ctor addr 0xe0c058 size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> hash) ;

static Org::BouncyCastle::Asn1::Ess::EssCertID New_ctor(::ArrayW<uint8_t> hash, Org::BouncyCastle::Asn1::X509::IssuerSerial issuerSerial) ;

/// @brief Method .ctor addr 0xe0c0d4 size 0x80 virtual false final false
 void _ctor(::ArrayW<uint8_t> hash, Org::BouncyCastle::Asn1::X509::IssuerSerial issuerSerial) ;

/// @brief Method GetCertHash addr 0xe0c154 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetCertHash() ;

/// @brief Method get_IssuerSerial addr 0xe0c174 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::IssuerSerial get_IssuerSerial() ;

/// @brief Method ToAsn1Object addr 0xe0c17c size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ess::EssCertID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ess::EssCertID, "Org.BouncyCastle.Asn1.Ess", "EssCertID");
