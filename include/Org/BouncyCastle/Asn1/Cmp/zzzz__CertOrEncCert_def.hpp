#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertOrEncCert;
}
// Type: Org.BouncyCastle.Asn1.Cmp::CertOrEncCert
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14))
// CS Name: Org.BouncyCastle.Asn1.Cmp.CertOrEncCert
class CORDL_TYPE CertOrEncCert : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertOrEncCert() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertOrEncCert", modifiers: " const&", def_value: None }]
constexpr CertOrEncCert(CertOrEncCert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertOrEncCert", modifiers: "&&", def_value: None }]
constexpr CertOrEncCert(CertOrEncCert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertOrEncCert(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertOrEncCert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertOrEncCert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertOrEncCert& operator=(CertOrEncCert&& o) noexcept = default;
  constexpr CertOrEncCert& operator=(CertOrEncCert const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::CmpCertificate __declspec(property(get=__get_certificate, put=__set_certificate))  certificate;

constexpr void __set_certificate(Org::BouncyCastle::Asn1::Cmp::CmpCertificate value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::CmpCertificate __get_certificate() const;

 Org::BouncyCastle::Asn1::Crmf::EncryptedValue __declspec(property(get=__get_encryptedCert, put=__set_encryptedCert))  encryptedCert;

constexpr void __set_encryptedCert(Org::BouncyCastle::Asn1::Crmf::EncryptedValue value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::EncryptedValue __get_encryptedCert() const;


// Properties

 Org::BouncyCastle::Asn1::Cmp::CmpCertificate __declspec(property(get=get_Certificate))  Certificate;

 Org::BouncyCastle::Asn1::Crmf::EncryptedValue __declspec(property(get=get_EncryptedCert))  EncryptedCert;


// Methods

static Org::BouncyCastle::Asn1::Cmp::CertOrEncCert New_ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

/// @brief Method .ctor addr 0xdd7c8c size 0xf4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject tagged) ;

/// @brief Method GetInstance addr 0xdd77a0 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::CertOrEncCert GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cmp::CertOrEncCert New_ctor(Org::BouncyCastle::Asn1::Cmp::CmpCertificate certificate) ;

/// @brief Method .ctor addr 0xdd7d80 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cmp::CmpCertificate certificate) ;

static Org::BouncyCastle::Asn1::Cmp::CertOrEncCert New_ctor(Org::BouncyCastle::Asn1::Crmf::EncryptedValue encryptedCert) ;

/// @brief Method .ctor addr 0xdd7df8 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Crmf::EncryptedValue encryptedCert) ;

/// @brief Method get_Certificate addr 0xdd7e70 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::CmpCertificate get_Certificate() ;

/// @brief Method get_EncryptedCert addr 0xdd7e78 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::EncryptedValue get_EncryptedCert() ;

/// @brief Method ToAsn1Object addr 0xdd7e80 size 0x94 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::CertOrEncCert);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::CertOrEncCert, "Org.BouncyCastle.Asn1.Cmp", "CertOrEncCert");
