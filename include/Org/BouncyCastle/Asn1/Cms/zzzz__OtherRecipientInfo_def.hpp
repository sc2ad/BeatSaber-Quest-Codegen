#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OtherRecipientInfo;
}
// Type: Org.BouncyCastle.Asn1.Cms::OtherRecipientInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(85))
// CS Name: Org.BouncyCastle.Asn1.Cms.OtherRecipientInfo
class CORDL_TYPE OtherRecipientInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherRecipientInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherRecipientInfo", modifiers: " const&", def_value: None }]
constexpr OtherRecipientInfo(OtherRecipientInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherRecipientInfo", modifiers: "&&", def_value: None }]
constexpr OtherRecipientInfo(OtherRecipientInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherRecipientInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherRecipientInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherRecipientInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherRecipientInfo& operator=(OtherRecipientInfo&& o) noexcept = default;
  constexpr OtherRecipientInfo& operator=(OtherRecipientInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_oriType, put=__set_oriType))  oriType;

constexpr void __set_oriType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_oriType() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_oriValue, put=__set_oriValue))  oriValue;

constexpr void __set_oriValue(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_oriValue() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_OriType))  OriType;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_OriValue))  OriValue;


// Methods

static Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier oriType, Org::BouncyCastle::Asn1::Asn1Encodable oriValue) ;

/// @brief Method .ctor addr 0xdee838 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier oriType, Org::BouncyCastle::Asn1::Asn1Encodable oriValue) ;

static Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdee864 size 0xac virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdee910 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xdee928 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_OriType addr 0xdee9cc size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_OriType() ;

/// @brief Method get_OriValue addr 0xdee9d4 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_OriValue() ;

/// @brief Method ToAsn1Object addr 0xdee9dc size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::OtherRecipientInfo, "Org.BouncyCastle.Asn1.Cms", "OtherRecipientInfo");
