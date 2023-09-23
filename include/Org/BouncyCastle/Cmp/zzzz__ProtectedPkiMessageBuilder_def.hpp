#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeaderBuilder;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiBody;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
namespace Org::BouncyCastle::Crypto {
class IMacFactory;
}
namespace Org::BouncyCastle::Cmp {
class ProtectedPkiMessage;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class ProtectedPkiMessageBuilder;
}
// Type: Org.BouncyCastle.Cmp::ProtectedPkiMessageBuilder
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(607))
// CS Name: Org.BouncyCastle.Cmp.ProtectedPkiMessageBuilder
class CORDL_TYPE ProtectedPkiMessageBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ProtectedPkiMessageBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessageBuilder", modifiers: " const&", def_value: None }]
constexpr ProtectedPkiMessageBuilder(ProtectedPkiMessageBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProtectedPkiMessageBuilder", modifiers: "&&", def_value: None }]
constexpr ProtectedPkiMessageBuilder(ProtectedPkiMessageBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProtectedPkiMessageBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProtectedPkiMessageBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProtectedPkiMessageBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProtectedPkiMessageBuilder& operator=(ProtectedPkiMessageBuilder&& o) noexcept = default;
  constexpr ProtectedPkiMessageBuilder& operator=(ProtectedPkiMessageBuilder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder __declspec(property(get=__get_hdrBuilBuilder, put=__set_hdrBuilBuilder))  hdrBuilBuilder;

constexpr void __set_hdrBuilBuilder(Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder __get_hdrBuilBuilder() const;

 Org::BouncyCastle::Asn1::Cmp::PkiBody __declspec(property(get=__get_body, put=__set_body))  body;

constexpr void __set_body(Org::BouncyCastle::Asn1::Cmp::PkiBody value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiBody __get_body() const;

 System::Collections::IList __declspec(property(get=__get_generalInfos, put=__set_generalInfos))  generalInfos;

constexpr void __set_generalInfos(System::Collections::IList value) ;

constexpr System::Collections::IList __get_generalInfos() const;

 System::Collections::IList __declspec(property(get=__get_extraCerts, put=__set_extraCerts))  extraCerts;

constexpr void __set_extraCerts(System::Collections::IList value) ;

constexpr System::Collections::IList __get_extraCerts() const;


// Methods

// Ctor Parameters [CppParam { name: "sender", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }, CppParam { name: "recipient", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit ProtectedPkiMessageBuilder(Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

/// @brief Method .ctor addr 0x114ca28 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

// Ctor Parameters [CppParam { name: "pvno", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sender", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }, CppParam { name: "recipient", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit ProtectedPkiMessageBuilder(int32_t pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

/// @brief Method .ctor addr 0x114caa0 size 0xd0 virtual false final false
 void _ctor(int32_t pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

/// @brief Method SetTransactionId addr 0x114cb70 size 0x2c virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder SetTransactionId(::ArrayW<uint8_t> tid) ;

/// @brief Method SetFreeText addr 0x114cb9c size 0x30 virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder SetFreeText(Org::BouncyCastle::Asn1::Cmp::PkiFreeText freeText) ;

/// @brief Method AddGeneralInfo addr 0x114cbcc size 0xb4 virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder AddGeneralInfo(Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue genInfo) ;

/// @brief Method SetMessageTime addr 0x114cc80 size 0x2c virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder SetMessageTime(Org::BouncyCastle::Asn1::DerGeneralizedTime generalizedTime) ;

/// @brief Method SetRecipKID addr 0x114ccac size 0x2c virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder SetRecipKID(::ArrayW<uint8_t> id) ;

/// @brief Method SetRecipNonce addr 0x114ccd8 size 0x30 virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder SetRecipNonce(::ArrayW<uint8_t> nonce) ;

/// @brief Method SetSenderKID addr 0x114cd08 size 0x2c virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder SetSenderKID(::ArrayW<uint8_t> id) ;

/// @brief Method SetSenderNonce addr 0x114cd34 size 0x2c virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder SetSenderNonce(::ArrayW<uint8_t> nonce) ;

/// @brief Method SetBody addr 0x114cd60 size 0x8 virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder SetBody(Org::BouncyCastle::Asn1::Cmp::PkiBody body) ;

/// @brief Method AddCmpCertificate addr 0x114cd68 size 0xb4 virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder AddCmpCertificate(Org::BouncyCastle::X509::X509Certificate certificate) ;

/// @brief Method Build addr 0x114ce1c size 0x2ec virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessage Build(Org::BouncyCastle::Crypto::ISignatureFactory signatureFactory) ;

/// @brief Method Build addr 0x114dac4 size 0x22c virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessage Build(Org::BouncyCastle::Crypto::IMacFactory factory) ;

/// @brief Method FinalizeHeader addr 0x114d108 size 0x2e0 virtual false final false
 void FinalizeHeader(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithmIdentifier) ;

/// @brief Method FinalizeMessage addr 0x114d760 size 0x364 virtual false final false
 Org::BouncyCastle::Cmp::ProtectedPkiMessage FinalizeMessage(Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::DerBitString protection) ;

/// @brief Method CalculateSignature addr 0x114d3e8 size 0x378 virtual false final false
 ::ArrayW<uint8_t> CalculateSignature(Org::BouncyCastle::Crypto::IStreamCalculator signer, Org::BouncyCastle::Asn1::Cmp::PkiHeader header, Org::BouncyCastle::Asn1::Cmp::PkiBody body) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cmp
NEED_NO_BOX(Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cmp::ProtectedPkiMessageBuilder, "Org.BouncyCastle.Cmp", "ProtectedPkiMessageBuilder");
