#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeaderBuilder;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiHeaderBuilder
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(38))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiHeaderBuilder
class CORDL_TYPE PkiHeaderBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~PkiHeaderBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiHeaderBuilder", modifiers: " const&", def_value: None }]
constexpr PkiHeaderBuilder(PkiHeaderBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiHeaderBuilder", modifiers: "&&", def_value: None }]
constexpr PkiHeaderBuilder(PkiHeaderBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiHeaderBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PkiHeaderBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiHeaderBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiHeaderBuilder& operator=(PkiHeaderBuilder&& o) noexcept = default;
  constexpr PkiHeaderBuilder& operator=(PkiHeaderBuilder const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_pvno, put=__set_pvno))  pvno;

constexpr void __set_pvno(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_pvno() const;

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_sender, put=__set_sender))  sender;

constexpr void __set_sender(::Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName __get_sender() const;

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_recipient, put=__set_recipient))  recipient;

constexpr void __set_recipient(::Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName __get_recipient() const;

 ::Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_messageTime, put=__set_messageTime))  messageTime;

constexpr void __set_messageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime __get_messageTime() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_protectionAlg, put=__set_protectionAlg))  protectionAlg;

constexpr void __set_protectionAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_protectionAlg() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_senderKID, put=__set_senderKID))  senderKID;

constexpr void __set_senderKID(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_senderKID() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_recipKID, put=__set_recipKID))  recipKID;

constexpr void __set_recipKID(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_recipKID() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_transactionID, put=__set_transactionID))  transactionID;

constexpr void __set_transactionID(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_transactionID() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_senderNonce, put=__set_senderNonce))  senderNonce;

constexpr void __set_senderNonce(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_senderNonce() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_recipNonce, put=__set_recipNonce))  recipNonce;

constexpr void __set_recipNonce(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_recipNonce() const;

 ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText __declspec(property(get=__get_freeText, put=__set_freeText))  freeText;

constexpr void __set_freeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText __get_freeText() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_generalInfo, put=__set_generalInfo))  generalInfo;

constexpr void __set_generalInfo(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_generalInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "pvno", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sender", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }, CppParam { name: "recipient", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit PkiHeaderBuilder(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName sender, ::Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

/// @brief Method .ctor addr 0xddf118 size 0x90 virtual false final false
 void _ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName sender, ::Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

// Ctor Parameters [CppParam { name: "pvno", ty: "::Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "sender", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }, CppParam { name: "recipient", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }]
explicit PkiHeaderBuilder(::Org::BouncyCastle::Asn1::DerInteger pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName sender, ::Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

/// @brief Method .ctor addr 0xddf1a8 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerInteger pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName sender, ::Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

/// @brief Method SetMessageTime addr 0xddf1e4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetMessageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime time) ;

/// @brief Method SetProtectionAlg addr 0xddf1ec size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetProtectionAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier aid) ;

/// @brief Method SetSenderKID addr 0xddf1f4 size 0x84 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetSenderKID(::ArrayW<uint8_t> kid) ;

/// @brief Method SetSenderKID addr 0xddf278 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetSenderKID(::Org::BouncyCastle::Asn1::Asn1OctetString kid) ;

/// @brief Method SetRecipKID addr 0xddf280 size 0x84 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetRecipKID(::ArrayW<uint8_t> kid) ;

/// @brief Method SetRecipKID addr 0xddf304 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetRecipKID(::Org::BouncyCastle::Asn1::Asn1OctetString kid) ;

/// @brief Method SetTransactionID addr 0xddf30c size 0x84 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetTransactionID(::ArrayW<uint8_t> tid) ;

/// @brief Method SetTransactionID addr 0xddf390 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetTransactionID(::Org::BouncyCastle::Asn1::Asn1OctetString tid) ;

/// @brief Method SetSenderNonce addr 0xddf398 size 0x88 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetSenderNonce(::ArrayW<uint8_t> nonce) ;

/// @brief Method SetSenderNonce addr 0xddf420 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetSenderNonce(::Org::BouncyCastle::Asn1::Asn1OctetString nonce) ;

/// @brief Method SetRecipNonce addr 0xddf428 size 0x88 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetRecipNonce(::ArrayW<uint8_t> nonce) ;

/// @brief Method SetRecipNonce addr 0xddf4b0 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetRecipNonce(::Org::BouncyCastle::Asn1::Asn1OctetString nonce) ;

/// @brief Method SetFreeText addr 0xddf4b8 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetFreeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText text) ;

/// @brief Method SetGeneralInfo addr 0xddf4c0 size 0x2c virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetGeneralInfo(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue genInfo) ;

/// @brief Method SetGeneralInfo addr 0xddf550 size 0x2c virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetGeneralInfo(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> genInfos) ;

/// @brief Method SetGeneralInfo addr 0xddf65c size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder SetGeneralInfo(::Org::BouncyCastle::Asn1::Asn1Sequence seqOfInfoTypeAndValue) ;

/// @brief Method MakeGeneralInfoSeq addr 0xddf4ec size 0x64 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Sequence MakeGeneralInfoSeq(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue generalInfo) ;

/// @brief Method MakeGeneralInfoSeq addr 0xddf57c size 0xe0 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Sequence MakeGeneralInfoSeq(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> generalInfos) ;

/// @brief Method Build addr 0xddf664 size 0x220 virtual true final false
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeader Build() ;

/// @brief Method AddOptional addr 0xddf884 size 0x9c virtual false final false
 void AddOptional(::Org::BouncyCastle::Asn1::Asn1EncodableVector v, int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiHeaderBuilder, "Org.BouncyCastle.Asn1.Cmp", "PkiHeaderBuilder");
