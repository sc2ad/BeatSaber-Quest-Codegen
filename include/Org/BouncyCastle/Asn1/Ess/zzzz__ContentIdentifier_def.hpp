#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class ContentIdentifier;
}
// Type: Org.BouncyCastle.Asn1.Ess::ContentIdentifier
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(161))
// CS Name: Org.BouncyCastle.Asn1.Ess.ContentIdentifier
class CORDL_TYPE ContentIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ContentIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentIdentifier", modifiers: " const&", def_value: None }]
constexpr ContentIdentifier(ContentIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentIdentifier", modifiers: "&&", def_value: None }]
constexpr ContentIdentifier(ContentIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentIdentifier(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ContentIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentIdentifier& operator=(ContentIdentifier&& o) noexcept = default;
  constexpr ContentIdentifier& operator=(ContentIdentifier const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_value() const;


// Properties

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method GetInstance addr 0xe0bb2c size 0x194 virtual false final false
static ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier GetInstance(::bs_hook::Il2CppWrapperType o) ;

// Ctor Parameters [CppParam { name: "value", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit ContentIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

/// @brief Method .ctor addr 0xe0bcc0 size 0x28 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

// Ctor Parameters [CppParam { name: "value", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ContentIdentifier(::ArrayW<uint8_t> value) ;

/// @brief Method .ctor addr 0xe0bce8 size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> value) ;

/// @brief Method get_Value addr 0xe0bd64 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_Value() ;

/// @brief Method ToAsn1Object addr 0xe0bd6c size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ess
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::ContentIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::ContentIdentifier, "Org.BouncyCastle.Asn1.Ess", "ContentIdentifier");
