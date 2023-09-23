#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlReason;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class RevokedInfo;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::RevokedInfo
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(219))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.RevokedInfo
class CORDL_TYPE RevokedInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RevokedInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "RevokedInfo", modifiers: " const&", def_value: None }]
constexpr RevokedInfo(RevokedInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RevokedInfo", modifiers: "&&", def_value: None }]
constexpr RevokedInfo(RevokedInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RevokedInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RevokedInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RevokedInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RevokedInfo& operator=(RevokedInfo&& o) noexcept = default;
  constexpr RevokedInfo& operator=(RevokedInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_revocationTime, put=__set_revocationTime))  revocationTime;

constexpr void __set_revocationTime(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_revocationTime() const;

 Org::BouncyCastle::Asn1::X509::CrlReason __declspec(property(get=__get_revocationReason, put=__set_revocationReason))  revocationReason;

constexpr void __set_revocationReason(Org::BouncyCastle::Asn1::X509::CrlReason value) ;

constexpr Org::BouncyCastle::Asn1::X509::CrlReason __get_revocationReason() const;


// Properties

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_RevocationTime))  RevocationTime;

 Org::BouncyCastle::Asn1::X509::CrlReason __declspec(property(get=get_RevocationReason))  RevocationReason;


// Methods

/// @brief Method GetInstance addr 0xef1f90 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::RevokedInfo GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef53f4 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::RevokedInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "revocationTime", ty: "Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }]
explicit RevokedInfo(Org::BouncyCastle::Asn1::DerGeneralizedTime revocationTime) ;

/// @brief Method .ctor addr 0xef573c size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerGeneralizedTime revocationTime) ;

// Ctor Parameters [CppParam { name: "revocationTime", ty: "Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }, CppParam { name: "revocationReason", ty: "Org::BouncyCastle::Asn1::X509::CrlReason", modifiers: "", def_value: None }]
explicit RevokedInfo(Org::BouncyCastle::Asn1::DerGeneralizedTime revocationTime, Org::BouncyCastle::Asn1::X509::CrlReason revocationReason) ;

/// @brief Method .ctor addr 0xef5744 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerGeneralizedTime revocationTime, Org::BouncyCastle::Asn1::X509::CrlReason revocationReason) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit RevokedInfo(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef557c size 0x1c0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_RevocationTime addr 0xef57c0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_RevocationTime() ;

/// @brief Method get_RevocationReason addr 0xef57c8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::CrlReason get_RevocationReason() ;

/// @brief Method ToAsn1Object addr 0xef57d0 size 0x114 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ocsp::RevokedInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ocsp::RevokedInfo, "Org.BouncyCastle.Asn1.Ocsp", "RevokedInfo");
