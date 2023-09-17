#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace System {
class ICloneable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertIssuer;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
// Type: Org.BouncyCastle.X509::AttributeCertificateIssuer
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1853))
// CS Name: Org.BouncyCastle.X509.AttributeCertificateIssuer
class CORDL_TYPE AttributeCertificateIssuer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::X509::Store::IX509Selector
constexpr operator  ::Org::BouncyCastle::X509::Store::IX509Selector() const noexcept;

/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AttributeCertificateIssuer() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateIssuer", modifiers: " const&", def_value: None }]
constexpr AttributeCertificateIssuer(AttributeCertificateIssuer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateIssuer", modifiers: "&&", def_value: None }]
constexpr AttributeCertificateIssuer(AttributeCertificateIssuer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttributeCertificateIssuer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AttributeCertificateIssuer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttributeCertificateIssuer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttributeCertificateIssuer& operator=(AttributeCertificateIssuer&& o) noexcept = default;
  constexpr AttributeCertificateIssuer& operator=(AttributeCertificateIssuer const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_form, put=__set_form))  form;

constexpr void __set_form(::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable __get_form() const;


// Methods

// Ctor Parameters [CppParam { name: "issuer", ty: "::Org::BouncyCastle::Asn1::X509::AttCertIssuer", modifiers: "", def_value: None }]
explicit AttributeCertificateIssuer(::Org::BouncyCastle::Asn1::X509::AttCertIssuer issuer) ;

/// @brief Method .ctor addr 0x10e8f34 size 0x34 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::AttCertIssuer issuer) ;

// Ctor Parameters [CppParam { name: "principal", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }]
explicit AttributeCertificateIssuer(::Org::BouncyCastle::Asn1::X509::X509Name principal) ;

/// @brief Method .ctor addr 0x10e8f68 size 0xdc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name principal) ;

/// @brief Method GetNames addr 0x10e9044 size 0x1fc virtual false final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetNames() ;

/// @brief Method GetPrincipals addr 0x10e9240 size 0x1c0 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name> GetPrincipals() ;

/// @brief Method MatchesDN addr 0x10e9400 size 0x180 virtual false final false
 bool MatchesDN(::Org::BouncyCastle::Asn1::X509::X509Name subject, ::Org::BouncyCastle::Asn1::X509::GeneralNames targets) ;

/// @brief Method Clone addr 0x10e9580 size 0x80 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Match addr 0x10e9600 size 0x18c virtual false final false
 bool Match(::Org::BouncyCastle::X509::X509Certificate x509Cert) ;

/// @brief Method Equals addr 0x10e978c size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x10e9834 size 0x1c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Match addr 0x10e9850 size 0x8c virtual true final true
 bool Match(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::AttributeCertificateIssuer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::AttributeCertificateIssuer, "Org.BouncyCastle.X509", "AttributeCertificateIssuer");
