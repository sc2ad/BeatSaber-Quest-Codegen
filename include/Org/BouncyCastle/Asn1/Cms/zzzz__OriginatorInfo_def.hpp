#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
// Type: Org.BouncyCastle.Asn1.Cms::OriginatorInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(82))
// CS Name: Org.BouncyCastle.Asn1.Cms.OriginatorInfo
class CORDL_TYPE OriginatorInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OriginatorInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorInfo", modifiers: " const&", def_value: None }]
constexpr OriginatorInfo(OriginatorInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorInfo", modifiers: "&&", def_value: None }]
constexpr OriginatorInfo(OriginatorInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OriginatorInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OriginatorInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OriginatorInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OriginatorInfo& operator=(OriginatorInfo&& o) noexcept = default;
  constexpr OriginatorInfo& operator=(OriginatorInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_certs, put=__set_certs))  certs;

constexpr void __set_certs(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_certs() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_crls, put=__set_crls))  crls;

constexpr void __set_crls(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_crls() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_Certificates))  Certificates;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_Crls))  Crls;


// Methods

// Ctor Parameters [CppParam { name: "certs", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "crls", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit OriginatorInfo(Org::BouncyCastle::Asn1::Asn1Set certs, Org::BouncyCastle::Asn1::Asn1Set crls) ;

/// @brief Method .ctor addr 0xdee05c size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Set certs, Org::BouncyCastle::Asn1::Asn1Set crls) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OriginatorInfo(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdee088 size 0x2a0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xde5734 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::OriginatorInfo GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xde609c size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::Cms::OriginatorInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Certificates addr 0xdee328 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_Certificates() ;

/// @brief Method get_Crls addr 0xdee330 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_Crls() ;

/// @brief Method ToAsn1Object addr 0xdee338 size 0xc0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::OriginatorInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::OriginatorInfo, "Org.BouncyCastle.Asn1.Cms", "OriginatorInfo");
