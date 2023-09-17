#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class SinglePubInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiPublicationInfo;
}
// Type: Org.BouncyCastle.Asn1.Crmf::PkiPublicationInfo
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(116))
// CS Name: Org.BouncyCastle.Asn1.Crmf.PkiPublicationInfo
class CORDL_TYPE PkiPublicationInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PkiPublicationInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiPublicationInfo", modifiers: " const&", def_value: None }]
constexpr PkiPublicationInfo(PkiPublicationInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkiPublicationInfo", modifiers: "&&", def_value: None }]
constexpr PkiPublicationInfo(PkiPublicationInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkiPublicationInfo(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PkiPublicationInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkiPublicationInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkiPublicationInfo& operator=(PkiPublicationInfo&& o) noexcept = default;
  constexpr PkiPublicationInfo& operator=(PkiPublicationInfo const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_action() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_pubInfos, put=__set_pubInfos))  pubInfos;

constexpr void __set_pubInfos(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_pubInfos() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Action))  Action;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PkiPublicationInfo(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf8ee8 size 0x68 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf8f50 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Action addr 0xdf90d8 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Action() ;

/// @brief Method GetPubInfos addr 0xdf90e0 size 0xfc virtual true final false
 ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo> GetPubInfos() ;

/// @brief Method ToAsn1Object addr 0xdf9364 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo, "Org.BouncyCastle.Asn1.Crmf", "PkiPublicationInfo");
