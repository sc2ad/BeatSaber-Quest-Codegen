#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Cms {
class OtherKeyAttribute;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class KekIdentifier;
}
// Type: Org.BouncyCastle.Asn1.Cms::KekIdentifier
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(75))
// CS Name: Org.BouncyCastle.Asn1.Cms.KekIdentifier
class CORDL_TYPE KekIdentifier : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~KekIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "KekIdentifier", modifiers: " const&", def_value: None }]
constexpr KekIdentifier(KekIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KekIdentifier", modifiers: "&&", def_value: None }]
constexpr KekIdentifier(KekIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KekIdentifier(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr KekIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KekIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KekIdentifier& operator=(KekIdentifier&& o) noexcept = default;
  constexpr KekIdentifier& operator=(KekIdentifier const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_keyIdentifier, put=__set_keyIdentifier))  keyIdentifier;

constexpr void __set_keyIdentifier(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_keyIdentifier() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_date, put=__set_date))  date;

constexpr void __set_date(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_date() const;

 Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute __declspec(property(get=__get_other, put=__set_other))  other;

constexpr void __set_other(Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute value) ;

constexpr Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute __get_other() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_KeyIdentifier))  KeyIdentifier;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_Date))  Date;

 Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute __declspec(property(get=get_Other))  Other;


// Methods

// Ctor Parameters [CppParam { name: "keyIdentifier", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "date", ty: "Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }, CppParam { name: "other", ty: "Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute", modifiers: "", def_value: None }]
explicit KekIdentifier(::ArrayW<uint8_t> keyIdentifier, Org::BouncyCastle::Asn1::DerGeneralizedTime date, Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute other) ;

/// @brief Method .ctor addr 0xdeb668 size 0x90 virtual false final false
 void _ctor(::ArrayW<uint8_t> keyIdentifier, Org::BouncyCastle::Asn1::DerGeneralizedTime date, Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute other) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit KekIdentifier(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdeb6f8 size 0x298 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdebb18 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::KekIdentifier GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xdebb30 size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::Cms::KekIdentifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_KeyIdentifier addr 0xdebca8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_KeyIdentifier() ;

/// @brief Method get_Date addr 0xdebcb0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_Date() ;

/// @brief Method get_Other addr 0xdebcb8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute get_Other() ;

/// @brief Method ToAsn1Object addr 0xdebcc0 size 0x174 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::KekIdentifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::KekIdentifier, "Org.BouncyCastle.Asn1.Cms", "KekIdentifier");
