#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
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
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
// Type: Org.BouncyCastle.Asn1.Cmp::InfoTypeAndValue
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(25))
// CS Name: Org.BouncyCastle.Asn1.Cmp.InfoTypeAndValue
class CORDL_TYPE InfoTypeAndValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InfoTypeAndValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "InfoTypeAndValue", modifiers: " const&", def_value: None }]
constexpr InfoTypeAndValue(InfoTypeAndValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InfoTypeAndValue", modifiers: "&&", def_value: None }]
constexpr InfoTypeAndValue(InfoTypeAndValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InfoTypeAndValue(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr InfoTypeAndValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InfoTypeAndValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InfoTypeAndValue& operator=(InfoTypeAndValue&& o) noexcept = default;
  constexpr InfoTypeAndValue& operator=(InfoTypeAndValue const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_infoType, put=__set_infoType))  infoType;

constexpr void __set_infoType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_infoType() const;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_infoValue, put=__set_infoValue))  infoValue;

constexpr void __set_infoValue(::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable __get_infoValue() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_InfoType))  InfoType;

 ::Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_InfoValue))  InfoValue;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit InfoTypeAndValue(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xddac40 size 0xc8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdda784 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "infoType", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit InfoTypeAndValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier infoType) ;

/// @brief Method .ctor addr 0xddad08 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier infoType) ;

// Ctor Parameters [CppParam { name: "infoType", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "optionalValue", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit InfoTypeAndValue(::Org::BouncyCastle::Asn1::DerObjectIdentifier infoType, ::Org::BouncyCastle::Asn1::Asn1Encodable optionalValue) ;

/// @brief Method .ctor addr 0xddad30 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier infoType, ::Org::BouncyCastle::Asn1::Asn1Encodable optionalValue) ;

/// @brief Method get_InfoType addr 0xddad5c size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_InfoType() ;

/// @brief Method get_InfoValue addr 0xddad64 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Encodable get_InfoValue() ;

/// @brief Method ToAsn1Object addr 0xddad6c size 0x148 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue, "Org.BouncyCastle.Asn1.Cmp", "InfoTypeAndValue");
