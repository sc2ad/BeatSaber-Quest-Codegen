#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class SinglePubInfo;
}
// Type: Org.BouncyCastle.Asn1.Crmf::SinglePubInfo
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(122))
// CS Name: Org.BouncyCastle.Asn1.Crmf.SinglePubInfo
class CORDL_TYPE SinglePubInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SinglePubInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SinglePubInfo", modifiers: " const&", def_value: None }]
constexpr SinglePubInfo(SinglePubInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SinglePubInfo", modifiers: "&&", def_value: None }]
constexpr SinglePubInfo(SinglePubInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SinglePubInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SinglePubInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SinglePubInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SinglePubInfo& operator=(SinglePubInfo&& o) noexcept = default;
  constexpr SinglePubInfo& operator=(SinglePubInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_pubMethod, put=__set_pubMethod))  pubMethod;

constexpr void __set_pubMethod(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_pubMethod() const;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_pubLocation, put=__set_pubLocation))  pubLocation;

constexpr void __set_pubLocation(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_pubLocation() const;


// Properties

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_PubLocation))  PubLocation;


// Methods

static Org::BouncyCastle::Asn1::Crmf::SinglePubInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdfa82c size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf91dc size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::SinglePubInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_PubLocation addr 0xdfa8b0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_PubLocation() ;

/// @brief Method ToAsn1Object addr 0xdfa8b8 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::SinglePubInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::SinglePubInfo, "Org.BouncyCastle.Asn1.Crmf", "SinglePubInfo");
