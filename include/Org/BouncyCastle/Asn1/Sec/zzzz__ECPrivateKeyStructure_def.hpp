#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Sec {
class ECPrivateKeyStructure;
}
// Type: Org.BouncyCastle.Asn1.Sec::ECPrivateKeyStructure
namespace Org::BouncyCastle::Asn1::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(255))
// CS Name: Org.BouncyCastle.Asn1.Sec.ECPrivateKeyStructure
class CORDL_TYPE ECPrivateKeyStructure : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ECPrivateKeyStructure() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyStructure", modifiers: " const&", def_value: None }]
constexpr ECPrivateKeyStructure(ECPrivateKeyStructure const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECPrivateKeyStructure", modifiers: "&&", def_value: None }]
constexpr ECPrivateKeyStructure(ECPrivateKeyStructure&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECPrivateKeyStructure(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ECPrivateKeyStructure& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECPrivateKeyStructure& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECPrivateKeyStructure& operator=(ECPrivateKeyStructure&& o) noexcept = default;
  constexpr ECPrivateKeyStructure& operator=(ECPrivateKeyStructure const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_seq, put=__set_seq))  seq;

constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_seq() const;


// Methods

/// @brief Method GetInstance addr 0xfdda18 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit ECPrivateKeyStructure(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xfddabc size 0x78 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "key", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ECPrivateKeyStructure(::Org::BouncyCastle::Math::BigInteger key) ;

/// @brief Method .ctor addr 0xfddb34 size 0x1c0 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger key) ;

// Ctor Parameters [CppParam { name: "orderBitLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ECPrivateKeyStructure(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger key) ;

/// @brief Method .ctor addr 0xfddcf4 size 0xc virtual false final false
 void _ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger key) ;

// Ctor Parameters [CppParam { name: "key", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit ECPrivateKeyStructure(::Org::BouncyCastle::Math::BigInteger key, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method .ctor addr 0xfddd0c size 0xc virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger key, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

// Ctor Parameters [CppParam { name: "key", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "::Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit ECPrivateKeyStructure(::Org::BouncyCastle::Math::BigInteger key, ::Org::BouncyCastle::Asn1::DerBitString publicKey, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method .ctor addr 0xfddd18 size 0x284 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger key, ::Org::BouncyCastle::Asn1::DerBitString publicKey, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

// Ctor Parameters [CppParam { name: "orderBitLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit ECPrivateKeyStructure(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger key, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method .ctor addr 0xfddd00 size 0xc virtual false final false
 void _ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger key, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

// Ctor Parameters [CppParam { name: "orderBitLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "::Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit ECPrivateKeyStructure(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger key, ::Org::BouncyCastle::Asn1::DerBitString publicKey, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method .ctor addr 0xfddf9c size 0x2fc virtual false final false
 void _ctor(int32_t orderBitLength, ::Org::BouncyCastle::Math::BigInteger key, ::Org::BouncyCastle::Asn1::DerBitString publicKey, ::Org::BouncyCastle::Asn1::Asn1Encodable parameters) ;

/// @brief Method GetKey addr 0xfde298 size 0xd8 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger GetKey() ;

/// @brief Method GetPublicKey addr 0xfde370 size 0x80 virtual true final false
 ::Org::BouncyCastle::Asn1::DerBitString GetPublicKey() ;

/// @brief Method GetParameters addr 0xfde74c size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object GetParameters() ;

/// @brief Method GetObjectInTag addr 0xfde3f0 size 0x35c virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object GetObjectInTag(int32_t tagNo) ;

/// @brief Method ToAsn1Object addr 0xfde754 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Sec
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Sec::ECPrivateKeyStructure, "Org.BouncyCastle.Asn1.Sec", "ECPrivateKeyStructure");
