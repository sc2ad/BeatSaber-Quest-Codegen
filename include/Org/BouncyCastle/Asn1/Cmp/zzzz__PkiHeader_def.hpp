#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PkiHeader
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(37))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiHeader
class CORDL_TYPE PkiHeader : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~PkiHeader() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiHeader", modifiers: " const&", def_value: None }]
constexpr PkiHeader(PkiHeader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiHeader", modifiers: "&&", def_value: None }]
constexpr PkiHeader(PkiHeader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiHeader(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PkiHeader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiHeader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiHeader& operator=(PkiHeader&& o) noexcept = default;
  constexpr PkiHeader& operator=(PkiHeader const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_NULL_NAME, put=__set_NULL_NAME))  NULL_NAME;

static void __set_NULL_NAME(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

static Org::BouncyCastle::Asn1::X509::GeneralName __get_NULL_NAME() ;

static int32_t __declspec(property(get=__get_CMP_1999, put=__set_CMP_1999))  CMP_1999;

static void __set_CMP_1999(int32_t value) ;

static int32_t __get_CMP_1999() ;

static int32_t __declspec(property(get=__get_CMP_2000, put=__set_CMP_2000))  CMP_2000;

static void __set_CMP_2000(int32_t value) ;

static int32_t __get_CMP_2000() ;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_pvno, put=__set_pvno))  pvno;

constexpr void __set_pvno(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_pvno() const;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_sender, put=__set_sender))  sender;

constexpr void __set_sender(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_sender() const;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_recipient, put=__set_recipient))  recipient;

constexpr void __set_recipient(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_recipient() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_messageTime, put=__set_messageTime))  messageTime;

constexpr void __set_messageTime(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_messageTime() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_protectionAlg, put=__set_protectionAlg))  protectionAlg;

constexpr void __set_protectionAlg(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_protectionAlg() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_senderKID, put=__set_senderKID))  senderKID;

constexpr void __set_senderKID(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_senderKID() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_recipKID, put=__set_recipKID))  recipKID;

constexpr void __set_recipKID(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_recipKID() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_transactionID, put=__set_transactionID))  transactionID;

constexpr void __set_transactionID(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_transactionID() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_senderNonce, put=__set_senderNonce))  senderNonce;

constexpr void __set_senderNonce(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_senderNonce() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_recipNonce, put=__set_recipNonce))  recipNonce;

constexpr void __set_recipNonce(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_recipNonce() const;

 Org::BouncyCastle::Asn1::Cmp::PkiFreeText __declspec(property(get=__get_freeText, put=__set_freeText))  freeText;

constexpr void __set_freeText(Org::BouncyCastle::Asn1::Cmp::PkiFreeText value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiFreeText __get_freeText() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_generalInfo, put=__set_generalInfo))  generalInfo;

constexpr void __set_generalInfo(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_generalInfo() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Pvno))  Pvno;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_Sender))  Sender;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_Recipient))  Recipient;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_MessageTime))  MessageTime;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_ProtectionAlg))  ProtectionAlg;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_SenderKID))  SenderKID;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_RecipKID))  RecipKID;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_TransactionID))  TransactionID;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_SenderNonce))  SenderNonce;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_RecipNonce))  RecipNonce;

 Org::BouncyCastle::Asn1::Cmp::PkiFreeText __declspec(property(get=get_FreeText))  FreeText;


// Methods

static Org::BouncyCastle::Asn1::Cmp::PkiHeader New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdde790 size 0x2bc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xddea4c size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PkiHeader GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cmp::PkiHeader New_ctor(int32_t pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

/// @brief Method .ctor addr 0xddebd4 size 0x90 virtual false final false
 void _ctor(int32_t pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

static Org::BouncyCastle::Asn1::Cmp::PkiHeader New_ctor(Org::BouncyCastle::Asn1::DerInteger pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

/// @brief Method .ctor addr 0xddec64 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerInteger pvno, Org::BouncyCastle::Asn1::X509::GeneralName sender, Org::BouncyCastle::Asn1::X509::GeneralName recipient) ;

/// @brief Method get_Pvno addr 0xddeca0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_Pvno() ;

/// @brief Method get_Sender addr 0xddeca8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_Sender() ;

/// @brief Method get_Recipient addr 0xddecb0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_Recipient() ;

/// @brief Method get_MessageTime addr 0xddecb8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_MessageTime() ;

/// @brief Method get_ProtectionAlg addr 0xddecc0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_ProtectionAlg() ;

/// @brief Method get_SenderKID addr 0xddecc8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_SenderKID() ;

/// @brief Method get_RecipKID addr 0xddecd0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_RecipKID() ;

/// @brief Method get_TransactionID addr 0xddecd8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_TransactionID() ;

/// @brief Method get_SenderNonce addr 0xddece0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_SenderNonce() ;

/// @brief Method get_RecipNonce addr 0xddece8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_RecipNonce() ;

/// @brief Method get_FreeText addr 0xddecf0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiFreeText get_FreeText() ;

/// @brief Method GetGeneralInfo addr 0xddecf8 size 0x100 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue> GetGeneralInfo() ;

/// @brief Method ToAsn1Object addr 0xddedf8 size 0x22c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PkiHeader);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PkiHeader, "Org.BouncyCastle.Asn1.Cmp", "PkiHeader");
