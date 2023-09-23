#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class MessageImprint;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class TstInfo;
}
// Type: Org.BouncyCastle.Asn1.Tsp::TstInfo
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(318))
// CS Name: Org.BouncyCastle.Asn1.Tsp.TstInfo
class CORDL_TYPE TstInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~TstInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "TstInfo", modifiers: " const&", def_value: None }]
constexpr TstInfo(TstInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TstInfo", modifiers: "&&", def_value: None }]
constexpr TstInfo(TstInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TstInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr TstInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TstInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TstInfo& operator=(TstInfo&& o) noexcept = default;
  constexpr TstInfo& operator=(TstInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_tsaPolicyId, put=__set_tsaPolicyId))  tsaPolicyId;

constexpr void __set_tsaPolicyId(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_tsaPolicyId() const;

 Org::BouncyCastle::Asn1::Tsp::MessageImprint __declspec(property(get=__get_messageImprint, put=__set_messageImprint))  messageImprint;

constexpr void __set_messageImprint(Org::BouncyCastle::Asn1::Tsp::MessageImprint value) ;

constexpr Org::BouncyCastle::Asn1::Tsp::MessageImprint __get_messageImprint() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_serialNumber, put=__set_serialNumber))  serialNumber;

constexpr void __set_serialNumber(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_serialNumber() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_genTime, put=__set_genTime))  genTime;

constexpr void __set_genTime(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_genTime() const;

 Org::BouncyCastle::Asn1::Tsp::Accuracy __declspec(property(get=__get_accuracy, put=__set_accuracy))  accuracy;

constexpr void __set_accuracy(Org::BouncyCastle::Asn1::Tsp::Accuracy value) ;

constexpr Org::BouncyCastle::Asn1::Tsp::Accuracy __get_accuracy() const;

 Org::BouncyCastle::Asn1::DerBoolean __declspec(property(get=__get_ordering, put=__set_ordering))  ordering;

constexpr void __set_ordering(Org::BouncyCastle::Asn1::DerBoolean value) ;

constexpr Org::BouncyCastle::Asn1::DerBoolean __get_ordering() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_nonce, put=__set_nonce))  nonce;

constexpr void __set_nonce(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_nonce() const;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_tsa, put=__set_tsa))  tsa;

constexpr void __set_tsa(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_tsa() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_extensions() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::Tsp::MessageImprint __declspec(property(get=get_MessageImprint))  MessageImprint;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_Policy))  Policy;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_SerialNumber))  SerialNumber;

 Org::BouncyCastle::Asn1::Tsp::Accuracy __declspec(property(get=get_Accuracy))  Accuracy;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_GenTime))  GenTime;

 Org::BouncyCastle::Asn1::DerBoolean __declspec(property(get=get_Ordering))  Ordering;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Nonce))  Nonce;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_Tsa))  Tsa;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_Extensions))  Extensions;


// Methods

/// @brief Method GetInstance addr 0xfec984 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Tsp::TstInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit TstInfo(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xfeca28 size 0x814 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "tsaPolicyId", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "messageImprint", ty: "Org::BouncyCastle::Asn1::Tsp::MessageImprint", modifiers: "", def_value: None }, CppParam { name: "serialNumber", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "genTime", ty: "Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }, CppParam { name: "accuracy", ty: "Org::BouncyCastle::Asn1::Tsp::Accuracy", modifiers: "", def_value: None }, CppParam { name: "ordering", ty: "Org::BouncyCastle::Asn1::DerBoolean", modifiers: "", def_value: None }, CppParam { name: "nonce", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "tsa", ty: "Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }, CppParam { name: "extensions", ty: "Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
explicit TstInfo(Org::BouncyCastle::Asn1::DerObjectIdentifier tsaPolicyId, Org::BouncyCastle::Asn1::Tsp::MessageImprint messageImprint, Org::BouncyCastle::Asn1::DerInteger serialNumber, Org::BouncyCastle::Asn1::DerGeneralizedTime genTime, Org::BouncyCastle::Asn1::Tsp::Accuracy accuracy, Org::BouncyCastle::Asn1::DerBoolean ordering, Org::BouncyCastle::Asn1::DerInteger nonce, Org::BouncyCastle::Asn1::X509::GeneralName tsa, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method .ctor addr 0xfed23c size 0xc0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier tsaPolicyId, Org::BouncyCastle::Asn1::Tsp::MessageImprint messageImprint, Org::BouncyCastle::Asn1::DerInteger serialNumber, Org::BouncyCastle::Asn1::DerGeneralizedTime genTime, Org::BouncyCastle::Asn1::Tsp::Accuracy accuracy, Org::BouncyCastle::Asn1::DerBoolean ordering, Org::BouncyCastle::Asn1::DerInteger nonce, Org::BouncyCastle::Asn1::X509::GeneralName tsa, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method get_Version addr 0xfed2fc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_MessageImprint addr 0xfed304 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Tsp::MessageImprint get_MessageImprint() ;

/// @brief Method get_Policy addr 0xfed30c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_Policy() ;

/// @brief Method get_SerialNumber addr 0xfed314 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_SerialNumber() ;

/// @brief Method get_Accuracy addr 0xfed31c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Tsp::Accuracy get_Accuracy() ;

/// @brief Method get_GenTime addr 0xfed324 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_GenTime() ;

/// @brief Method get_Ordering addr 0xfed32c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBoolean get_Ordering() ;

/// @brief Method get_Nonce addr 0xfed334 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Nonce() ;

/// @brief Method get_Tsa addr 0xfed33c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_Tsa() ;

/// @brief Method get_Extensions addr 0xfed344 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_Extensions() ;

/// @brief Method ToAsn1Object addr 0xfed34c size 0x298 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Tsp::TstInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Tsp::TstInfo, "Org.BouncyCastle.Asn1.Tsp", "TstInfo");
