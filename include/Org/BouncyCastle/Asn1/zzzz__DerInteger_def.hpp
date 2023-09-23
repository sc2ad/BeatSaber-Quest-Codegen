#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Type: Org.BouncyCastle.Asn1::DerInteger
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(123))
// CS Name: Org.BouncyCastle.Asn1.DerInteger
class CORDL_TYPE DerInteger : public Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DerInteger() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerInteger", modifiers: " const&", def_value: None }]
constexpr DerInteger(DerInteger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerInteger", modifiers: "&&", def_value: None }]
constexpr DerInteger(DerInteger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerInteger(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr DerInteger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerInteger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerInteger& operator=(DerInteger&& o) noexcept = default;
  constexpr DerInteger& operator=(DerInteger const& o) noexcept = default;
                


// Fields

/// @brief Field AllowUnsafeProperty offset 0
static constexpr ::ConstString  AllowUnsafeProperty{u"Org.BouncyCastle.Asn1.AllowUnsafeInteger"};

/// @brief Field SignExtSigned offset 0
static constexpr int32_t  SignExtSigned{-1};

/// @brief Field SignExtUnsigned offset 0
static constexpr int32_t  SignExtUnsigned{255};

 ::ArrayW<uint8_t> __declspec(property(get=__get_bytes, put=__set_bytes))  bytes;

constexpr void __set_bytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_bytes() const;

 int32_t __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(int32_t value) ;

constexpr int32_t __get_start() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_PositiveValue))  PositiveValue;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Value))  Value;

 int32_t __declspec(property(get=get_IntPositiveValueExact))  IntPositiveValueExact;

 int32_t __declspec(property(get=get_IntValueExact))  IntValueExact;

 int64_t __declspec(property(get=get_LongValueExact))  LongValueExact;


// Methods

/// @brief Method AllowUnsafe addr 0xdfaa00 size 0xb0 virtual false final false
static bool AllowUnsafe() ;

/// @brief Method GetInstance addr 0xdf44b8 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::DerInteger GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xdf70e8 size 0x124 virtual false final false
static Org::BouncyCastle::Asn1::DerInteger GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
explicit DerInteger(int32_t value) ;

/// @brief Method .ctor addr 0xdf340c size 0x8c virtual false final false
 void _ctor(int32_t value) ;

// Ctor Parameters [CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: None }]
explicit DerInteger(int64_t value) ;

/// @brief Method .ctor addr 0xdfaab8 size 0x8c virtual false final false
 void _ctor(int64_t value) ;

// Ctor Parameters [CppParam { name: "value", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit DerInteger(Org::BouncyCastle::Math::BigInteger value) ;

/// @brief Method .ctor addr 0xdfab44 size 0x88 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger value) ;

// Ctor Parameters [CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerInteger(::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0xdfaab0 size 0x8 virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes) ;

// Ctor Parameters [CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "clone", ty: "bool", modifiers: "", def_value: None }]
explicit DerInteger(::ArrayW<uint8_t> bytes, bool clone) ;

/// @brief Method .ctor addr 0xdfabcc size 0x104 virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes, bool clone) ;

/// @brief Method get_PositiveValue addr 0xdfadb0 size 0x6c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_PositiveValue() ;

/// @brief Method get_Value addr 0xdfae1c size 0x68 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Value() ;

/// @brief Method HasValue addr 0xdfae84 size 0x74 virtual false final false
 bool HasValue(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method get_IntPositiveValueExact addr 0xdfafcc size 0x9c virtual false final false
 int32_t get_IntPositiveValueExact() ;

/// @brief Method get_IntValueExact addr 0xdf72c8 size 0x80 virtual false final false
 int32_t get_IntValueExact() ;

/// @brief Method get_LongValueExact addr 0xdfb068 size 0x80 virtual false final false
 int64_t get_LongValueExact() ;

/// @brief Method Encode addr 0xdfb1c0 size 0x28 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1GetHashCode addr 0xdfb1e8 size 0x5c virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0xdfb244 size 0xc8 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method ToString addr 0xdfb30c size 0x20 virtual true final false
 ::StringW ToString() ;

/// @brief Method IntValue addr 0xdfaef8 size 0xd4 virtual false final false
static int32_t IntValue(::ArrayW<uint8_t> bytes, int32_t start, int32_t signExt) ;

/// @brief Method LongValue addr 0xdfb0e8 size 0xd8 virtual false final false
static int64_t LongValue(::ArrayW<uint8_t> bytes, int32_t start, int32_t signExt) ;

/// @brief Method IsMalformed addr 0xdfacd0 size 0x7c virtual false final false
static bool IsMalformed(::ArrayW<uint8_t> bytes) ;

/// @brief Method SignBytesToSkip addr 0xdfad4c size 0x64 virtual false final false
static int32_t SignBytesToSkip(::ArrayW<uint8_t> bytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerInteger);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerInteger, "Org.BouncyCastle.Asn1", "DerInteger");
