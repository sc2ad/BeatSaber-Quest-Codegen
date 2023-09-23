#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtcTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateList;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class V2TbsCertListGenerator;
}
// Type: Org.BouncyCastle.Asn1.X509::V2TbsCertListGenerator
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(399))
// CS Name: Org.BouncyCastle.Asn1.X509.V2TbsCertListGenerator
class CORDL_TYPE V2TbsCertListGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~V2TbsCertListGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "V2TbsCertListGenerator", modifiers: " const&", def_value: None }]
constexpr V2TbsCertListGenerator(V2TbsCertListGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "V2TbsCertListGenerator", modifiers: "&&", def_value: None }]
constexpr V2TbsCertListGenerator(V2TbsCertListGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit V2TbsCertListGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr V2TbsCertListGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr V2TbsCertListGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr V2TbsCertListGenerator& operator=(V2TbsCertListGenerator&& o) noexcept = default;
  constexpr V2TbsCertListGenerator& operator=(V2TbsCertListGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_signature() const;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Name __get_issuer() const;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=__get_thisUpdate, put=__set_thisUpdate))  thisUpdate;

constexpr void __set_thisUpdate(Org::BouncyCastle::Asn1::X509::Time value) ;

constexpr Org::BouncyCastle::Asn1::X509::Time __get_thisUpdate() const;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=__get_nextUpdate, put=__set_nextUpdate))  nextUpdate;

constexpr void __set_nextUpdate(Org::BouncyCastle::Asn1::X509::Time value) ;

constexpr Org::BouncyCastle::Asn1::X509::Time __get_nextUpdate() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_extensions() const;

 System::Collections::IList __declspec(property(get=__get_crlEntries, put=__set_crlEntries))  crlEntries;

constexpr void __set_crlEntries(System::Collections::IList value) ;

constexpr System::Collections::IList __get_crlEntries() const;


// Methods

// Ctor Parameters []
explicit V2TbsCertListGenerator() ;

/// @brief Method .ctor addr 0x11115a0 size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method SetSignature addr 0x111160c size 0x8 virtual false final false
 void SetSignature(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signature) ;

/// @brief Method SetIssuer addr 0x1111614 size 0x8 virtual false final false
 void SetIssuer(Org::BouncyCastle::Asn1::X509::X509Name issuer) ;

/// @brief Method SetThisUpdate addr 0x111161c size 0x6c virtual false final false
 void SetThisUpdate(Org::BouncyCastle::Asn1::DerUtcTime thisUpdate) ;

/// @brief Method SetNextUpdate addr 0x1111688 size 0x74 virtual false final false
 void SetNextUpdate(Org::BouncyCastle::Asn1::DerUtcTime nextUpdate) ;

/// @brief Method SetThisUpdate addr 0x11116fc size 0x8 virtual false final false
 void SetThisUpdate(Org::BouncyCastle::Asn1::X509::Time thisUpdate) ;

/// @brief Method SetNextUpdate addr 0x1111704 size 0x8 virtual false final false
 void SetNextUpdate(Org::BouncyCastle::Asn1::X509::Time nextUpdate) ;

/// @brief Method AddCrlEntry addr 0x111170c size 0xe4 virtual false final false
 void AddCrlEntry(Org::BouncyCastle::Asn1::Asn1Sequence crlEntry) ;

/// @brief Method AddCrlEntry addr 0x11117f0 size 0x8c virtual false final false
 void AddCrlEntry(Org::BouncyCastle::Asn1::DerInteger userCertificate, Org::BouncyCastle::Asn1::DerUtcTime revocationDate, int32_t reason) ;

/// @brief Method AddCrlEntry addr 0x111187c size 0x8 virtual false final false
 void AddCrlEntry(Org::BouncyCastle::Asn1::DerInteger userCertificate, Org::BouncyCastle::Asn1::X509::Time revocationDate, int32_t reason) ;

/// @brief Method AddCrlEntry addr 0x1111884 size 0x5e4 virtual false final false
 void AddCrlEntry(Org::BouncyCastle::Asn1::DerInteger userCertificate, Org::BouncyCastle::Asn1::X509::Time revocationDate, int32_t reason, Org::BouncyCastle::Asn1::DerGeneralizedTime invalidityDate) ;

/// @brief Method AddCrlEntry addr 0x1112394 size 0x14c virtual false final false
 void AddCrlEntry(Org::BouncyCastle::Asn1::DerInteger userCertificate, Org::BouncyCastle::Asn1::X509::Time revocationDate, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method SetExtensions addr 0x11124e0 size 0x8 virtual false final false
 void SetExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method GenerateTbsCertList addr 0x11124e8 size 0x4e8 virtual false final false
 Org::BouncyCastle::Asn1::X509::TbsCertificateList GenerateTbsCertList() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator, "Org.BouncyCastle.Asn1.X509", "V2TbsCertListGenerator");
