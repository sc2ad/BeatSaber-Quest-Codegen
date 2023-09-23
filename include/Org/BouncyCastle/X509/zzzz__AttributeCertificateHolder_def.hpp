#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Holder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
// Type: Org.BouncyCastle.X509::AttributeCertificateHolder
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1852))
// CS Name: Org.BouncyCastle.X509.AttributeCertificateHolder
class CORDL_TYPE AttributeCertificateHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::X509::Store::IX509Selector
constexpr operator  Org::BouncyCastle::X509::Store::IX509Selector() const noexcept;

/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AttributeCertificateHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateHolder", modifiers: " const&", def_value: None }]
constexpr AttributeCertificateHolder(AttributeCertificateHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateHolder", modifiers: "&&", def_value: None }]
constexpr AttributeCertificateHolder(AttributeCertificateHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeCertificateHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AttributeCertificateHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeCertificateHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeCertificateHolder& operator=(AttributeCertificateHolder&& o) noexcept = default;
  constexpr AttributeCertificateHolder& operator=(AttributeCertificateHolder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::Holder __declspec(property(get=__get_holder, put=__set_holder))  holder;

constexpr void __set_holder(Org::BouncyCastle::Asn1::X509::Holder value) ;

constexpr Org::BouncyCastle::Asn1::X509::Holder __get_holder() const;


// Properties

 int32_t __declspec(property(get=get_DigestedObjectType))  DigestedObjectType;

 ::StringW __declspec(property(get=get_DigestAlgorithm))  DigestAlgorithm;

 ::StringW __declspec(property(get=get_OtherObjectTypeID))  OtherObjectTypeID;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_SerialNumber))  SerialNumber;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AttributeCertificateHolder(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x10e7c8c size 0x34 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "issuerName", ty: "Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "serialNumber", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit AttributeCertificateHolder(Org::BouncyCastle::Asn1::X509::X509Name issuerName, Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method .ctor addr 0x10e7cc0 size 0xf4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::X509Name issuerName, Org::BouncyCastle::Math::BigInteger serialNumber) ;

// Ctor Parameters [CppParam { name: "cert", ty: "Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }]
explicit AttributeCertificateHolder(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method .ctor addr 0x10e7e48 size 0x1e4 virtual false final false
 void _ctor(Org::BouncyCastle::X509::X509Certificate cert) ;

// Ctor Parameters [CppParam { name: "principal", ty: "Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }]
explicit AttributeCertificateHolder(Org::BouncyCastle::Asn1::X509::X509Name principal) ;

/// @brief Method .ctor addr 0x10e802c size 0x8c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::X509Name principal) ;

// Ctor Parameters [CppParam { name: "digestedObjectType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "digestAlgorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "otherObjectTypeID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objectDigest", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit AttributeCertificateHolder(int32_t digestedObjectType, ::StringW digestAlgorithm, ::StringW otherObjectTypeID, ::ArrayW<uint8_t> objectDigest) ;

/// @brief Method .ctor addr 0x10e80b8 size 0x168 virtual false final false
 void _ctor(int32_t digestedObjectType, ::StringW digestAlgorithm, ::StringW otherObjectTypeID, ::ArrayW<uint8_t> objectDigest) ;

/// @brief Method get_DigestedObjectType addr 0x10e8220 size 0x38 virtual false final false
 int32_t get_DigestedObjectType() ;

/// @brief Method get_DigestAlgorithm addr 0x10e8258 size 0x44 virtual false final false
 ::StringW get_DigestAlgorithm() ;

/// @brief Method GetObjectDigest addr 0x10e829c size 0x3c virtual false final false
 ::ArrayW<uint8_t> GetObjectDigest() ;

/// @brief Method get_OtherObjectTypeID addr 0x10e82d8 size 0x34 virtual false final false
 ::StringW get_OtherObjectTypeID() ;

/// @brief Method GenerateGeneralNames addr 0x10e7db4 size 0x94 virtual false final false
 Org::BouncyCastle::Asn1::X509::GeneralNames GenerateGeneralNames(Org::BouncyCastle::Asn1::X509::X509Name principal) ;

/// @brief Method MatchesDN addr 0x10e830c size 0x180 virtual false final false
 bool MatchesDN(Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Asn1::X509::GeneralNames targets) ;

/// @brief Method GetNames addr 0x10e848c size 0x160 virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetNames(::ArrayW<Org::BouncyCastle::Asn1::X509::GeneralName> names) ;

/// @brief Method GetPrincipals addr 0x10e85ec size 0x1d0 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::X509Name> GetPrincipals(Org::BouncyCastle::Asn1::X509::GeneralNames names) ;

/// @brief Method GetEntityNames addr 0x10e87bc size 0x2c virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::X509Name> GetEntityNames() ;

/// @brief Method GetIssuer addr 0x10e87e8 size 0x30 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::X509Name> GetIssuer() ;

/// @brief Method get_SerialNumber addr 0x10e8818 size 0x38 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_SerialNumber() ;

/// @brief Method Clone addr 0x10e8850 size 0xdc virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Match addr 0x10e892c size 0x4b8 virtual false final false
 bool Match(Org::BouncyCastle::X509::X509Certificate x509Cert) ;

/// @brief Method Equals addr 0x10e8de4 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x10e8e8c size 0x1c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Match addr 0x10e8ea8 size 0x8c virtual true final true
 bool Match(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::AttributeCertificateHolder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::AttributeCertificateHolder, "Org.BouncyCastle.X509", "AttributeCertificateHolder");
