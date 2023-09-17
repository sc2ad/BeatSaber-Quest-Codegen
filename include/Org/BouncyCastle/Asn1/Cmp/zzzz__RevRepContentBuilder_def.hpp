#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Cmp {
class RevRepContent;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertId;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class RevRepContentBuilder;
}
// Type: Org.BouncyCastle.Asn1.Cmp::RevRepContentBuilder
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(52))
// CS Name: Org.BouncyCastle.Asn1.Cmp.RevRepContentBuilder
class CORDL_TYPE RevRepContentBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RevRepContentBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevRepContentBuilder", modifiers: " const&", def_value: None }]
constexpr RevRepContentBuilder(RevRepContentBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevRepContentBuilder", modifiers: "&&", def_value: None }]
constexpr RevRepContentBuilder(RevRepContentBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevRepContentBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RevRepContentBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevRepContentBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevRepContentBuilder& operator=(RevRepContentBuilder&& o) noexcept = default;
  constexpr RevRepContentBuilder& operator=(RevRepContentBuilder const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1EncodableVector __declspec(property(get=__get_status, put=__set_status))  status;

constexpr void __set_status(::Org::BouncyCastle::Asn1::Asn1EncodableVector value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector __get_status() const;

 ::Org::BouncyCastle::Asn1::Asn1EncodableVector __declspec(property(get=__get_revCerts, put=__set_revCerts))  revCerts;

constexpr void __set_revCerts(::Org::BouncyCastle::Asn1::Asn1EncodableVector value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector __get_revCerts() const;

 ::Org::BouncyCastle::Asn1::Asn1EncodableVector __declspec(property(get=__get_crls, put=__set_crls))  crls;

constexpr void __set_crls(::Org::BouncyCastle::Asn1::Asn1EncodableVector value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector __get_crls() const;


// Methods

/// @brief Method Add addr 0xde2028 size 0x28 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder Add(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo status) ;

/// @brief Method Add addr 0xde2050 size 0xac virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder Add(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo status, ::Org::BouncyCastle::Asn1::Crmf::CertId certId) ;

/// @brief Method AddCrl addr 0xde20fc size 0x28 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder AddCrl(::Org::BouncyCastle::Asn1::X509::CertificateList crl) ;

/// @brief Method Build addr 0xde2124 size 0x1a4 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::RevRepContent Build() ;

// Ctor Parameters []
explicit RevRepContentBuilder() ;

/// @brief Method .ctor addr 0xde22c8 size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::RevRepContentBuilder, "Org.BouncyCastle.Asn1.Cmp", "RevRepContentBuilder");
