#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Gost3411_2012Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Gost3411_2012Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(752))
// CS Name: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
class CORDL_TYPE Gost3411_2012Digest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Utilities::IMemoable
constexpr operator  Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Gost3411_2012Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012Digest", modifiers: " const&", def_value: None }]
constexpr Gost3411_2012Digest(Gost3411_2012Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012Digest", modifiers: "&&", def_value: None }]
constexpr Gost3411_2012Digest(Gost3411_2012Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3411_2012Digest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gost3411_2012Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3411_2012Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3411_2012Digest& operator=(Gost3411_2012Digest&& o) noexcept = default;
  constexpr Gost3411_2012Digest& operator=(Gost3411_2012Digest const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_IV, put=__set_IV))  IV;

constexpr void __set_IV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_IV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_N, put=__set_N))  N;

constexpr void __set_N(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_N() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Sigma, put=__set_Sigma))  Sigma;

constexpr void __set_Sigma(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Sigma() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Ki, put=__set_Ki))  Ki;

constexpr void __set_Ki(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Ki() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m, put=__set_m))  m;

constexpr void __set_m(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_h, put=__set_h))  h;

constexpr void __set_h(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_h() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_tmp, put=__set_tmp))  tmp;

constexpr void __set_tmp(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_tmp() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_block, put=__set_block))  block;

constexpr void __set_block(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_block() const;

 int32_t __declspec(property(get=__get_bOff, put=__set_bOff))  bOff;

constexpr void __set_bOff(int32_t value) ;

constexpr int32_t __get_bOff() const;

static ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_C, put=__set_C))  C;

static void __set_C(::ArrayW<::ArrayW<uint8_t>> value) ;

static ::ArrayW<::ArrayW<uint8_t>> __get_C() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_Zero, put=__set_Zero))  Zero;

static void __set_Zero(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Zero() ;

static ::ArrayW<::ArrayW<uint64_t>> __declspec(property(get=__get_T, put=__set_T))  T;

static void __set_T(::ArrayW<::ArrayW<uint64_t>> value) ;

static ::ArrayW<::ArrayW<uint64_t>> __get_T() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest New_ctor(::ArrayW<uint8_t> IV) ;

/// @brief Method .ctor addr 0x1198004 size 0x104 virtual false final false
 void _ctor(::ArrayW<uint8_t> IV) ;

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method DoFinal addr 0x1198108 size 0x178 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method GetByteLength addr 0x11984f4 size 0x8 virtual true final true
 int32_t GetByteLength() ;

/// @brief Method GetDigestSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method Reset addr 0x1198450 size 0xa4 virtual true final true
 void Reset() ;

/// @brief Method Reset addr 0x11984fc size 0x14c virtual true final true
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

/// @brief Method Update addr 0x1198648 size 0x7c virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x11986c4 size 0x140 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method F addr 0x1198804 size 0xb54 virtual false final false
 void F(::ArrayW<uint8_t> V) ;

/// @brief Method xor512 addr 0x1199358 size 0x5c virtual false final false
 void xor512(::ArrayW<uint8_t> A, ::ArrayW<uint8_t> B) ;

/// @brief Method E addr 0x11993b4 size 0x11c virtual false final false
 void E(::ArrayW<uint8_t> K, ::ArrayW<uint8_t> m) ;

/// @brief Method g_N addr 0x1198280 size 0x80 virtual false final false
 void g_N(::ArrayW<uint8_t> h, ::ArrayW<uint8_t> N, ::ArrayW<uint8_t> m) ;

/// @brief Method addMod512 addr 0x1198300 size 0x80 virtual false final false
 void addMod512(::ArrayW<uint8_t> A, int32_t num) ;

/// @brief Method addMod512 addr 0x1198380 size 0x60 virtual false final false
 void addMod512(::ArrayW<uint8_t> A, ::ArrayW<uint8_t> B) ;

/// @brief Method reverse addr 0x11983e0 size 0x70 virtual false final false
 void reverse(::ArrayW<uint8_t> src, ::ArrayW<uint8_t> dst) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012Digest");
