#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
// Type: Org.BouncyCastle.Asn1::DerEnumerated
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(213))
// CS Name: Org.BouncyCastle.Asn1.DerEnumerated
class CORDL_TYPE DerEnumerated : public Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DerEnumerated() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerEnumerated", modifiers: " const&", def_value: None }]
constexpr DerEnumerated(DerEnumerated const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerEnumerated", modifiers: "&&", def_value: None }]
constexpr DerEnumerated(DerEnumerated&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerEnumerated(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Object(ptr) {
}


  constexpr DerEnumerated& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerEnumerated& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerEnumerated& operator=(DerEnumerated&& o) noexcept = default;
  constexpr DerEnumerated& operator=(DerEnumerated const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_bytes, put=__set_bytes))  bytes;

constexpr void __set_bytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_bytes() const;

 int32_t __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(int32_t value) ;

constexpr int32_t __get_start() const;

static ::ArrayW<Org::BouncyCastle::Asn1::DerEnumerated> __declspec(property(get=__get_cache, put=__set_cache))  cache;

static void __set_cache(::ArrayW<Org::BouncyCastle::Asn1::DerEnumerated> value) ;

static ::ArrayW<Org::BouncyCastle::Asn1::DerEnumerated> __get_cache() ;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Value))  Value;

 int32_t __declspec(property(get=get_IntValueExact))  IntValueExact;


// Methods

/// @brief Method GetInstance addr 0xef32a8 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::DerEnumerated GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xef3540 size 0x140 virtual false final false
static Org::BouncyCastle::Asn1::DerEnumerated GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "val", ty: "int32_t", modifiers: "", def_value: None }]
explicit DerEnumerated(int32_t val) ;

/// @brief Method .ctor addr 0xef382c size 0xe8 virtual false final false
 void _ctor(int32_t val) ;

// Ctor Parameters [CppParam { name: "val", ty: "int64_t", modifiers: "", def_value: None }]
explicit DerEnumerated(int64_t val) ;

/// @brief Method .ctor addr 0xef3914 size 0xe8 virtual false final false
 void _ctor(int64_t val) ;

// Ctor Parameters [CppParam { name: "val", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit DerEnumerated(Org::BouncyCastle::Math::BigInteger val) ;

/// @brief Method .ctor addr 0xef39fc size 0xa8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger val) ;

// Ctor Parameters [CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerEnumerated(::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0xef3aa4 size 0x130 virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes) ;

/// @brief Method get_Value addr 0xef3bd4 size 0x68 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Value() ;

/// @brief Method HasValue addr 0xef3c3c size 0x78 virtual false final false
 bool HasValue(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method get_IntValueExact addr 0xef3cb4 size 0x84 virtual false final false
 int32_t get_IntValueExact() ;

/// @brief Method Encode addr 0xef3d38 size 0x28 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0xef3d60 size 0xc8 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0xef3e28 size 0x5c virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method FromOctetString addr 0xef3680 size 0x1ac virtual false final false
static Org::BouncyCastle::Asn1::DerEnumerated FromOctetString(::ArrayW<uint8_t> enc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerEnumerated);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerEnumerated, "Org.BouncyCastle.Asn1", "DerEnumerated");
