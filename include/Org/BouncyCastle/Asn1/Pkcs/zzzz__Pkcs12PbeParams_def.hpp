#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class Pkcs12PbeParams;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::Pkcs12PbeParams
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(244))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.Pkcs12PbeParams
class CORDL_TYPE Pkcs12PbeParams : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Pkcs12PbeParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12PbeParams", modifiers: " const&", def_value: None }]
constexpr Pkcs12PbeParams(Pkcs12PbeParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12PbeParams", modifiers: "&&", def_value: None }]
constexpr Pkcs12PbeParams(Pkcs12PbeParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs12PbeParams(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Pkcs12PbeParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs12PbeParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs12PbeParams& operator=(Pkcs12PbeParams&& o) noexcept = default;
  constexpr Pkcs12PbeParams& operator=(Pkcs12PbeParams const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_iterations, put=__set_iterations))  iterations;

constexpr void __set_iterations(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_iterations() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_iv, put=__set_iv))  iv;

constexpr void __set_iv(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_iv() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Iterations))  Iterations;


// Methods

// Ctor Parameters [CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterations", ty: "int32_t", modifiers: "", def_value: None }]
explicit Pkcs12PbeParams(::ArrayW<uint8_t> salt, int32_t iterations) ;

/// @brief Method .ctor addr 0xefca04 size 0xb4 virtual false final false
 void _ctor(::ArrayW<uint8_t> salt, int32_t iterations) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Pkcs12PbeParams(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xefcab8 size 0xe8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xefcba0 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Iterations addr 0xefcd28 size 0x1c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Iterations() ;

/// @brief Method GetIV addr 0xefcd44 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetIV() ;

/// @brief Method ToAsn1Object addr 0xefcd64 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::Pkcs12PbeParams, "Org.BouncyCastle.Asn1.Pkcs", "Pkcs12PbeParams");
