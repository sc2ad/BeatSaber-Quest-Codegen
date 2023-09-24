#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectKeyIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorIdentifierOrKey;
}
// Type: Org.BouncyCastle.Asn1.Cms::OriginatorIdentifierOrKey
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(81))
// CS Name: Org.BouncyCastle.Asn1.Cms.OriginatorIdentifierOrKey
class CORDL_TYPE OriginatorIdentifierOrKey : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OriginatorIdentifierOrKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorIdentifierOrKey", modifiers: " const&", def_value: None }]
constexpr OriginatorIdentifierOrKey(OriginatorIdentifierOrKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorIdentifierOrKey", modifiers: "&&", def_value: None }]
constexpr OriginatorIdentifierOrKey(OriginatorIdentifierOrKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OriginatorIdentifierOrKey(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OriginatorIdentifierOrKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OriginatorIdentifierOrKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OriginatorIdentifierOrKey& operator=(OriginatorIdentifierOrKey&& o) noexcept = default;
  constexpr OriginatorIdentifierOrKey& operator=(OriginatorIdentifierOrKey const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_id() const;


// Properties

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_ID))  ID;

 Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber __declspec(property(get=get_IssuerAndSerialNumber))  IssuerAndSerialNumber;

 Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier __declspec(property(get=get_SubjectKeyIdentifier))  SubjectKeyIdentifier;

 Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey __declspec(property(get=get_OriginatorKey))  OriginatorKey;

 Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey __declspec(property(get=get_OriginatorPublicKey))  OriginatorPublicKey;


// Methods

static Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey New_ctor(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber id) ;

/// @brief Method .ctor addr 0xded9cc size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber id) ;

static Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey New_ctor(Org::BouncyCastle::Asn1::Asn1OctetString id) ;

/// @brief Method .ctor addr 0xded9f4 size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1OctetString id) ;

static Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey New_ctor(Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier id) ;

/// @brief Method .ctor addr 0xdeda68 size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier id) ;

static Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey New_ctor(Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey id) ;

/// @brief Method .ctor addr 0xdedaec size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey id) ;

static Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey New_ctor(Org::BouncyCastle::Asn1::Asn1Object id) ;

/// @brief Method .ctor addr 0xdedb70 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Object id) ;

static Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey New_ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject id) ;

/// @brief Method .ctor addr 0xdedb98 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1TaggedObject id) ;

/// @brief Method GetInstance addr 0xdec964 size 0x6c virtual false final false
static Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject o, bool explicitly) ;

/// @brief Method GetInstance addr 0xdedbc0 size 0x2ac virtual false final false
static Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey GetInstance(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method get_ID addr 0xdede6c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_ID() ;

/// @brief Method get_IssuerAndSerialNumber addr 0xdede74 size 0x7c virtual false final false
 Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber get_IssuerAndSerialNumber() ;

/// @brief Method get_SubjectKeyIdentifier addr 0xdedef0 size 0x94 virtual false final false
 Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier get_SubjectKeyIdentifier() ;

/// @brief Method get_OriginatorKey addr 0xdedf84 size 0x4 virtual false final false
 Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey get_OriginatorKey() ;

/// @brief Method get_OriginatorPublicKey addr 0xdedf88 size 0x9c virtual false final false
 Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey get_OriginatorPublicKey() ;

/// @brief Method ToAsn1Object addr 0xdee03c size 0x20 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey, "Org.BouncyCastle.Asn1.Cms", "OriginatorIdentifierOrKey");
