#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__LongDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha512tDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Sha512tDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(756))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(772))
// CS Name: Org.BouncyCastle.Crypto.Digests.Sha512tDigest
class CORDL_TYPE Sha512tDigest : public Org::BouncyCastle::Crypto::Digests::LongDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~Sha512tDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha512tDigest", modifiers: " const&", def_value: None }]
constexpr Sha512tDigest(Sha512tDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha512tDigest", modifiers: "&&", def_value: None }]
constexpr Sha512tDigest(Sha512tDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Sha512tDigest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::LongDigest(ptr) {
}


  constexpr Sha512tDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Sha512tDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Sha512tDigest& operator=(Sha512tDigest&& o) noexcept = default;
  constexpr Sha512tDigest& operator=(Sha512tDigest const& o) noexcept = default;
                


// Fields

/// @brief Field A5 offset 0
static constexpr uint64_t  A5{11936128518282651045u};

 int32_t __declspec(property(get=__get_digestLength, put=__set_digestLength))  digestLength;

constexpr void __set_digestLength(int32_t value) ;

constexpr int32_t __get_digestLength() const;

 uint64_t __declspec(property(get=__get_H1t, put=__set_H1t))  H1t;

constexpr void __set_H1t(uint64_t value) ;

constexpr uint64_t __get_H1t() const;

 uint64_t __declspec(property(get=__get_H2t, put=__set_H2t))  H2t;

constexpr void __set_H2t(uint64_t value) ;

constexpr uint64_t __get_H2t() const;

 uint64_t __declspec(property(get=__get_H3t, put=__set_H3t))  H3t;

constexpr void __set_H3t(uint64_t value) ;

constexpr uint64_t __get_H3t() const;

 uint64_t __declspec(property(get=__get_H4t, put=__set_H4t))  H4t;

constexpr void __set_H4t(uint64_t value) ;

constexpr uint64_t __get_H4t() const;

 uint64_t __declspec(property(get=__get_H5t, put=__set_H5t))  H5t;

constexpr void __set_H5t(uint64_t value) ;

constexpr uint64_t __get_H5t() const;

 uint64_t __declspec(property(get=__get_H6t, put=__set_H6t))  H6t;

constexpr void __set_H6t(uint64_t value) ;

constexpr uint64_t __get_H6t() const;

 uint64_t __declspec(property(get=__get_H7t, put=__set_H7t))  H7t;

constexpr void __set_H7t(uint64_t value) ;

constexpr uint64_t __get_H7t() const;

 uint64_t __declspec(property(get=__get_H8t, put=__set_H8t))  H8t;

constexpr void __set_H8t(uint64_t value) ;

constexpr uint64_t __get_H8t() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "bitLength", ty: "int32_t", modifiers: "", def_value: None }]
explicit Sha512tDigest(int32_t bitLength) ;

/// @brief Method .ctor addr 0xe17b08 size 0x168 virtual false final false
 void _ctor(int32_t bitLength) ;

// Ctor Parameters [CppParam { name: "t", ty: "Org::BouncyCastle::Crypto::Digests::Sha512tDigest", modifiers: "", def_value: None }]
explicit Sha512tDigest(Org::BouncyCastle::Crypto::Digests::Sha512tDigest t) ;

/// @brief Method .ctor addr 0xe17df8 size 0x90 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::Sha512tDigest t) ;

/// @brief Method get_AlgorithmName addr 0xe17e88 size 0x88 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe17f10 size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method DoFinal addr 0xe17f18 size 0xfc virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe18078 size 0x38 virtual true final false
 void Reset() ;

/// @brief Method tIvGenerate addr 0xe17c70 size 0x188 virtual false final false
 void tIvGenerate(int32_t bitLength) ;

/// @brief Method UInt64_To_BE addr 0xe18014 size 0x64 virtual false final false
static void UInt64_To_BE(uint64_t n, ::ArrayW<uint8_t> bs, int32_t off, int32_t max) ;

/// @brief Method UInt32_To_BE addr 0xe180b0 size 0xc0 virtual false final false
static void UInt32_To_BE(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off, int32_t max) ;

/// @brief Method Copy addr 0xe18170 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0xe181d0 size 0x10c virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Sha512tDigest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha512tDigest, "Org.BouncyCastle.Crypto.Digests", "Sha512tDigest");
