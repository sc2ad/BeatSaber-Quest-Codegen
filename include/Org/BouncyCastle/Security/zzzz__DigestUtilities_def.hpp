#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
struct Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm;
}
namespace Org::BouncyCastle::Security {
class DigestUtilities;
}
// Type: ::DigestAlgorithm
namespace Org::BouncyCastle::Security {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1744))
// CS Name: Org.BouncyCastle.Security.DigestUtilities::DigestAlgorithm
struct CORDL_TYPE Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm(int32_t value__) noexcept;


                    constexpr Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm(Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const&) = default;
                    constexpr Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm(Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm&&) = default;
                    constexpr Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm& operator=(Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm& operator=(Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm_Unwrapped : int32_t {
__BLAKE2B_160 = 0,
__BLAKE2B_256 = 1,
__BLAKE2B_384 = 2,
__BLAKE2B_512 = 3,
__BLAKE2S_128 = 4,
__BLAKE2S_160 = 5,
__BLAKE2S_224 = 6,
__BLAKE2S_256 = 7,
__DSTU7564_256 = 8,
__DSTU7564_384 = 9,
__DSTU7564_512 = 10,
__GOST3411 = 11,
__GOST3411_2012_256 = 12,
__GOST3411_2012_512 = 13,
__KECCAK_224 = 14,
__KECCAK_256 = 15,
__KECCAK_288 = 16,
__KECCAK_384 = 17,
__KECCAK_512 = 18,
__MD2 = 19,
__MD4 = 20,
__MD5 = 21,
__NONE = 22,
__RIPEMD128 = 23,
__RIPEMD160 = 24,
__RIPEMD256 = 25,
__RIPEMD320 = 26,
__SHA_1 = 27,
__SHA_224 = 28,
__SHA_256 = 29,
__SHA_384 = 30,
__SHA_512 = 31,
__SHA_512_224 = 32,
__SHA_512_256 = 33,
__SHA3_224 = 34,
__SHA3_256 = 35,
__SHA3_384 = 36,
__SHA3_512 = 37,
__SHAKE128 = 38,
__SHAKE256 = 39,
__SM3 = 40,
__TIGER = 41,
__WHIRLPOOL = 42,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm_Unwrapped () const noexcept {
return std::bit_cast<__Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BLAKE2B_160 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const BLAKE2B_160;

/// @brief Field BLAKE2B_256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const BLAKE2B_256;

/// @brief Field BLAKE2B_384 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const BLAKE2B_384;

/// @brief Field BLAKE2B_512 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const BLAKE2B_512;

/// @brief Field BLAKE2S_128 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const BLAKE2S_128;

/// @brief Field BLAKE2S_160 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const BLAKE2S_160;

/// @brief Field BLAKE2S_224 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const BLAKE2S_224;

/// @brief Field BLAKE2S_256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const BLAKE2S_256;

/// @brief Field DSTU7564_256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const DSTU7564_256;

/// @brief Field DSTU7564_384 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const DSTU7564_384;

/// @brief Field DSTU7564_512 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const DSTU7564_512;

/// @brief Field GOST3411 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const GOST3411;

/// @brief Field GOST3411_2012_256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const GOST3411_2012_256;

/// @brief Field GOST3411_2012_512 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const GOST3411_2012_512;

/// @brief Field KECCAK_224 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const KECCAK_224;

/// @brief Field KECCAK_256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const KECCAK_256;

/// @brief Field KECCAK_288 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const KECCAK_288;

/// @brief Field KECCAK_384 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const KECCAK_384;

/// @brief Field KECCAK_512 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const KECCAK_512;

/// @brief Field MD2 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const MD2;

/// @brief Field MD4 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const MD4;

/// @brief Field MD5 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const MD5;

/// @brief Field NONE offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const NONE;

/// @brief Field RIPEMD128 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const RIPEMD128;

/// @brief Field RIPEMD160 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const RIPEMD160;

/// @brief Field RIPEMD256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const RIPEMD256;

/// @brief Field RIPEMD320 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const RIPEMD320;

/// @brief Field SHA_1 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA_1;

/// @brief Field SHA_224 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA_224;

/// @brief Field SHA_256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA_256;

/// @brief Field SHA_384 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA_384;

/// @brief Field SHA_512 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA_512;

/// @brief Field SHA_512_224 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA_512_224;

/// @brief Field SHA_512_256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA_512_256;

/// @brief Field SHA3_224 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA3_224;

/// @brief Field SHA3_256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA3_256;

/// @brief Field SHA3_384 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA3_384;

/// @brief Field SHA3_512 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHA3_512;

/// @brief Field SHAKE128 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHAKE128;

/// @brief Field SHAKE256 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SHAKE256;

/// @brief Field SM3 offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const SM3;

/// @brief Field TIGER offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const TIGER;

/// @brief Field WHIRLPOOL offset 0
static Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm const WHIRLPOOL;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
// Type: Org.BouncyCastle.Security::DigestUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1745))
// CS Name: Org.BouncyCastle.Security.DigestUtilities
class CORDL_TYPE DigestUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DigestAlgorithm = Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DigestUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestUtilities", modifiers: " const&", def_value: None }]
constexpr DigestUtilities(DigestUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DigestUtilities", modifiers: "&&", def_value: None }]
constexpr DigestUtilities(DigestUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DigestUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DigestUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DigestUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DigestUtilities& operator=(DigestUtilities&& o) noexcept = default;
  constexpr DigestUtilities& operator=(DigestUtilities const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithms() ;

static System::Collections::IDictionary __declspec(property(get=__get_oids, put=__set_oids))  oids;

static void __set_oids(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_oids() ;


// Properties

static System::Collections::ICollection __declspec(property(get=get_Algorithms))  Algorithms;


// Methods

// Ctor Parameters []
explicit DigestUtilities() ;

/// @brief Method .ctor addr 0x109807c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetObjectIdentifier addr 0x109bac4 size 0x25c virtual false final false
static Org::BouncyCastle::Asn1::DerObjectIdentifier GetObjectIdentifier(::StringW mechanism) ;

/// @brief Method get_Algorithms addr 0x109bd20 size 0xcc virtual false final false
static System::Collections::ICollection get_Algorithms() ;

/// @brief Method GetDigest addr 0x109bdec size 0x60 virtual false final false
static Org::BouncyCastle::Crypto::IDigest GetDigest(Org::BouncyCastle::Asn1::DerObjectIdentifier id) ;

/// @brief Method GetDigest addr 0x109be4c size 0xc04 virtual false final false
static Org::BouncyCastle::Crypto::IDigest GetDigest(::StringW algorithm) ;

/// @brief Method GetAlgorithmName addr 0x109ca50 size 0x108 virtual false final false
static ::StringW GetAlgorithmName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method CalculateDigest addr 0x109cb58 size 0x68 virtual false final false
static ::ArrayW<uint8_t> CalculateDigest(Org::BouncyCastle::Asn1::DerObjectIdentifier id, ::ArrayW<uint8_t> input) ;

/// @brief Method CalculateDigest addr 0x109cbc0 size 0xf8 virtual false final false
static ::ArrayW<uint8_t> CalculateDigest(::StringW algorithm, ::ArrayW<uint8_t> input) ;

/// @brief Method DoFinal addr 0x109ccb8 size 0x134 virtual false final false
static ::ArrayW<uint8_t> DoFinal(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method DoFinal addr 0x109cdec size 0xec virtual false final false
static ::ArrayW<uint8_t> DoFinal(Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Org__BouncyCastle__Security__DigestUtilities__DigestAlgorithm, "Org.BouncyCastle.Security", "DigestUtilities/DigestAlgorithm");
NEED_NO_BOX(Org::BouncyCastle::Security::DigestUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::DigestUtilities, "Org.BouncyCastle.Security", "DigestUtilities");
