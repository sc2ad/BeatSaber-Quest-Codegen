#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OtherKeyAttribute;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientKeyIdentifier;
}
// Type: Org.BouncyCastle.Asn1.Cms::RecipientKeyIdentifier
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(91))
// CS Name: Org.BouncyCastle.Asn1.Cms.RecipientKeyIdentifier
class CORDL_TYPE RecipientKeyIdentifier : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RecipientKeyIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientKeyIdentifier", modifiers: " const&", def_value: None }]
constexpr RecipientKeyIdentifier(RecipientKeyIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecipientKeyIdentifier", modifiers: "&&", def_value: None }]
constexpr RecipientKeyIdentifier(RecipientKeyIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecipientKeyIdentifier(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr RecipientKeyIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecipientKeyIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecipientKeyIdentifier& operator=(RecipientKeyIdentifier&& o) noexcept = default;
  constexpr RecipientKeyIdentifier& operator=(RecipientKeyIdentifier const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_subjectKeyIdentifier, put=__set_subjectKeyIdentifier))  subjectKeyIdentifier;

constexpr void __set_subjectKeyIdentifier(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_subjectKeyIdentifier() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_date, put=__set_date))  date;

constexpr void __set_date(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_date() const;

 Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute __declspec(property(get=__get_other, put=__set_other))  other;

constexpr void __set_other(Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute value) ;

constexpr Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute __get_other() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_SubjectKeyIdentifier))  SubjectKeyIdentifier;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_Date))  Date;

 Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute __declspec(property(get=get_OtherKeyAttribute))  OtherKeyAttribute;


// Methods

static Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier New_ctor(Org::BouncyCastle::Asn1::Asn1OctetString subjectKeyIdentifier, Org::BouncyCastle::Asn1::DerGeneralizedTime date, Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute other) ;

/// @brief Method .ctor addr 0xdefdfc size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1OctetString subjectKeyIdentifier, Org::BouncyCastle::Asn1::DerGeneralizedTime date, Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute other) ;

static Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier New_ctor(::ArrayW<uint8_t> subjectKeyIdentifier) ;

/// @brief Method .ctor addr 0xdefe38 size 0xc virtual false final false
 void _ctor(::ArrayW<uint8_t> subjectKeyIdentifier) ;

static Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier New_ctor(::ArrayW<uint8_t> subjectKeyIdentifier, Org::BouncyCastle::Asn1::DerGeneralizedTime date, Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute other) ;

/// @brief Method .ctor addr 0xdefe44 size 0x90 virtual false final false
 void _ctor(::ArrayW<uint8_t> subjectKeyIdentifier, Org::BouncyCastle::Asn1::DerGeneralizedTime date, Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute other) ;

static Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdefed4 size 0x234 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdec568 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject ato, bool explicitly) ;

/// @brief Method GetInstance addr 0xdf0108 size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_SubjectKeyIdentifier addr 0xdf0280 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_SubjectKeyIdentifier() ;

/// @brief Method get_Date addr 0xdf0288 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_Date() ;

/// @brief Method get_OtherKeyAttribute addr 0xdf0290 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute get_OtherKeyAttribute() ;

/// @brief Method ToAsn1Object addr 0xdf0298 size 0x174 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier, "Org.BouncyCastle.Asn1.Cms", "RecipientKeyIdentifier");
