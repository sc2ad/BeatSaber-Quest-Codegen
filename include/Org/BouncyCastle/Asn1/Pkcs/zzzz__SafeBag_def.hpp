#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class SafeBag;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::SafeBag
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(251))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.SafeBag
class CORDL_TYPE SafeBag : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SafeBag() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeBag", modifiers: " const&", def_value: None }]
constexpr SafeBag(SafeBag const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeBag", modifiers: "&&", def_value: None }]
constexpr SafeBag(SafeBag&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeBag(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SafeBag& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeBag& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeBag& operator=(SafeBag&& o) noexcept = default;
  constexpr SafeBag& operator=(SafeBag const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_bagID, put=__set_bagID))  bagID;

constexpr void __set_bagID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_bagID() const;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_bagValue, put=__set_bagValue))  bagValue;

constexpr void __set_bagValue(::Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object __get_bagValue() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_bagAttributes, put=__set_bagAttributes))  bagAttributes;

constexpr void __set_bagAttributes(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_bagAttributes() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_BagID))  BagID;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_BagValue))  BagValue;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_BagAttributes))  BagAttributes;


// Methods

/// @brief Method GetInstance addr 0xf01240 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::SafeBag GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "::Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }]
explicit SafeBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Asn1::Asn1Object obj) ;

/// @brief Method .ctor addr 0xf014b0 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Asn1::Asn1Object obj) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "obj", ty: "::Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }, CppParam { name: "bagAttributes", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit SafeBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Asn1::Asn1Object obj, ::Org::BouncyCastle::Asn1::Asn1Set bagAttributes) ;

/// @brief Method .ctor addr 0xf014e0 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Asn1::Asn1Object obj, ::Org::BouncyCastle::Asn1::Asn1Set bagAttributes) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SafeBag(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xf012e4 size 0x1cc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_BagID addr 0xf0151c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_BagID() ;

/// @brief Method get_BagValue addr 0xf01524 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object get_BagValue() ;

/// @brief Method get_BagAttributes addr 0xf0152c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Set get_BagAttributes() ;

/// @brief Method ToAsn1Object addr 0xf01534 size 0x1a4 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::SafeBag);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::SafeBag, "Org.BouncyCastle.Asn1.Pkcs", "SafeBag");
