#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class Pbkdf2Params;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::Pbkdf2Params
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(242))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.Pbkdf2Params
class CORDL_TYPE Pbkdf2Params : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Pbkdf2Params() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pbkdf2Params", modifiers: " const&", def_value: None }]
constexpr Pbkdf2Params(Pbkdf2Params const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pbkdf2Params", modifiers: "&&", def_value: None }]
constexpr Pbkdf2Params(Pbkdf2Params&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pbkdf2Params(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Pbkdf2Params& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pbkdf2Params& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pbkdf2Params& operator=(Pbkdf2Params&& o) noexcept = default;
  constexpr Pbkdf2Params& operator=(Pbkdf2Params const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algid_hmacWithSHA1, put=__set_algid_hmacWithSHA1))  algid_hmacWithSHA1;

static void __set_algid_hmacWithSHA1(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

static ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algid_hmacWithSHA1() ;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_octStr, put=__set_octStr))  octStr;

constexpr void __set_octStr(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_octStr() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_iterationCount, put=__set_iterationCount))  iterationCount;

constexpr void __set_iterationCount(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_iterationCount() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_keyLength, put=__set_keyLength))  keyLength;

constexpr void __set_keyLength(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_keyLength() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_prf, put=__set_prf))  prf;

constexpr void __set_prf(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_prf() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_IterationCount))  IterationCount;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_KeyLength))  KeyLength;

 bool __declspec(property(get=get_IsDefaultPrf))  IsDefaultPrf;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Prf))  Prf;


// Methods

/// @brief Method GetInstance addr 0xefbb9c size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Pbkdf2Params(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xefbe24 size 0x330 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit Pbkdf2Params(::ArrayW<uint8_t> salt, int32_t iterationCount) ;

/// @brief Method .ctor addr 0xefc154 size 0xb4 virtual false final false
 void _ctor(::ArrayW<uint8_t> salt, int32_t iterationCount) ;

// Ctor Parameters [CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyLength", ty: "int32_t", modifiers: "", def_value: None }]
explicit Pbkdf2Params(::ArrayW<uint8_t> salt, int32_t iterationCount, int32_t keyLength) ;

/// @brief Method .ctor addr 0xefc208 size 0x90 virtual false final false
 void _ctor(::ArrayW<uint8_t> salt, int32_t iterationCount, int32_t keyLength) ;

// Ctor Parameters [CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prf", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit Pbkdf2Params(::ArrayW<uint8_t> salt, int32_t iterationCount, int32_t keyLength, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier prf) ;

/// @brief Method .ctor addr 0xefc298 size 0x24 virtual false final false
 void _ctor(::ArrayW<uint8_t> salt, int32_t iterationCount, int32_t keyLength, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier prf) ;

// Ctor Parameters [CppParam { name: "salt", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "prf", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }]
explicit Pbkdf2Params(::ArrayW<uint8_t> salt, int32_t iterationCount, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier prf) ;

/// @brief Method .ctor addr 0xefc2bc size 0x24 virtual false final false
 void _ctor(::ArrayW<uint8_t> salt, int32_t iterationCount, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier prf) ;

/// @brief Method GetSalt addr 0xefc2e0 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetSalt() ;

/// @brief Method get_IterationCount addr 0xefc300 size 0x1c virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_IterationCount() ;

/// @brief Method get_KeyLength addr 0xefc31c size 0x14 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_KeyLength() ;

/// @brief Method get_IsDefaultPrf addr 0xefc330 size 0x7c virtual false final false
 bool get_IsDefaultPrf() ;

/// @brief Method get_Prf addr 0xefc3ac size 0x64 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Prf() ;

/// @brief Method ToAsn1Object addr 0xefc410 size 0x190 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::Pbkdf2Params, "Org.BouncyCastle.Asn1.Pkcs", "Pbkdf2Params");
