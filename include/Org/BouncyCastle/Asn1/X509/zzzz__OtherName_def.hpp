#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class OtherName;
}
// Type: Org.BouncyCastle.Asn1.X509::OtherName
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(373))
// CS Name: Org.BouncyCastle.Asn1.X509.OtherName
class CORDL_TYPE OtherName : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherName() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherName", modifiers: " const&", def_value: None }]
constexpr OtherName(OtherName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherName", modifiers: "&&", def_value: None }]
constexpr OtherName(OtherName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherName(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherName& operator=(OtherName&& o) noexcept = default;
  constexpr OtherName& operator=(OtherName const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_typeID, put=__set_typeID))  typeID;

constexpr void __set_typeID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_typeID() const;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable __get_value() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_TypeID))  TypeID;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method GetInstance addr 0x1109d10 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::OtherName GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "typeID", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit OtherName(::Org::BouncyCastle::Asn1::DerObjectIdentifier typeID, ::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method .ctor addr 0x1109e74 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier typeID, ::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OtherName(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1109db4 size 0xc0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_TypeID addr 0x1109ea0 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_TypeID() ;

/// @brief Method get_Value addr 0x1109ea8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Encodable get_Value() ;

/// @brief Method ToAsn1Object addr 0x1109eb0 size 0x124 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::OtherName);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::OtherName, "Org.BouncyCastle.Asn1.X509", "OtherName");
