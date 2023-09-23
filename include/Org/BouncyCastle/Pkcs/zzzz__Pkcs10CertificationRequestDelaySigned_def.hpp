#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Pkcs/zzzz__Pkcs10CertificationRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs10CertificationRequestDelaySigned;
}
// Type: Org.BouncyCastle.Pkcs::Pkcs10CertificationRequestDelaySigned
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1696))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1697))
// CS Name: Org.BouncyCastle.Pkcs.Pkcs10CertificationRequestDelaySigned
class CORDL_TYPE Pkcs10CertificationRequestDelaySigned : public Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Pkcs10CertificationRequestDelaySigned() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs10CertificationRequestDelaySigned", modifiers: " const&", def_value: None }]
constexpr Pkcs10CertificationRequestDelaySigned(Pkcs10CertificationRequestDelaySigned const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs10CertificationRequestDelaySigned", modifiers: "&&", def_value: None }]
constexpr Pkcs10CertificationRequestDelaySigned(Pkcs10CertificationRequestDelaySigned&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs10CertificationRequestDelaySigned(void* ptr) noexcept : Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest(ptr) {
}


  constexpr Pkcs10CertificationRequestDelaySigned& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs10CertificationRequestDelaySigned& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs10CertificationRequestDelaySigned& operator=(Pkcs10CertificationRequestDelaySigned&& o) noexcept = default;
  constexpr Pkcs10CertificationRequestDelaySigned& operator=(Pkcs10CertificationRequestDelaySigned const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Pkcs10CertificationRequestDelaySigned() ;

/// @brief Method .ctor addr 0x104eb10 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "encoded", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequestDelaySigned(::ArrayW<uint8_t> encoded) ;

/// @brief Method .ctor addr 0x104eb68 size 0x64 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoded) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequestDelaySigned(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x104ebcc size 0x68 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequestDelaySigned(System::IO::Stream input) ;

/// @brief Method .ctor addr 0x104ec34 size 0x64 virtual false final false
 void _ctor(System::IO::Stream input) ;

// Ctor Parameters [CppParam { name: "signatureAlgorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "subject", ty: "Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "signingKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequestDelaySigned(::StringW signatureAlgorithm, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter signingKey) ;

/// @brief Method .ctor addr 0x104ec98 size 0x94 virtual false final false
 void _ctor(::StringW signatureAlgorithm, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter signingKey) ;

// Ctor Parameters [CppParam { name: "signatureAlgorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "subject", ty: "Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequestDelaySigned(::StringW signatureAlgorithm, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes) ;

/// @brief Method .ctor addr 0x104ed2c size 0x65c virtual false final false
 void _ctor(::StringW signatureAlgorithm, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes) ;

/// @brief Method GetDataToSign addr 0x104f388 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetDataToSign() ;

/// @brief Method SignRequest addr 0x104f3a4 size 0x70 virtual false final false
 void SignRequest(::ArrayW<uint8_t> signedData) ;

/// @brief Method SignRequest addr 0x104f414 size 0x8 virtual false final false
 void SignRequest(Org::BouncyCastle::Asn1::DerBitString signedData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::Pkcs10CertificationRequestDelaySigned, "Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequestDelaySigned");
