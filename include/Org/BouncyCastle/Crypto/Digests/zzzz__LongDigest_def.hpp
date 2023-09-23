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
class LongDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::LongDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(756))
// CS Name: Org.BouncyCastle.Crypto.Digests.LongDigest
class CORDL_TYPE LongDigest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Utilities::IMemoable
constexpr operator  Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~LongDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "LongDigest", modifiers: " const&", def_value: None }]
constexpr LongDigest(LongDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LongDigest", modifiers: "&&", def_value: None }]
constexpr LongDigest(LongDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LongDigest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LongDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LongDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LongDigest& operator=(LongDigest&& o) noexcept = default;
  constexpr LongDigest& operator=(LongDigest const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_MyByteLength, put=__set_MyByteLength))  MyByteLength;

constexpr void __set_MyByteLength(int32_t value) ;

constexpr int32_t __get_MyByteLength() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_xBuf, put=__set_xBuf))  xBuf;

constexpr void __set_xBuf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_xBuf() const;

 int32_t __declspec(property(get=__get_xBufOff, put=__set_xBufOff))  xBufOff;

constexpr void __set_xBufOff(int32_t value) ;

constexpr int32_t __get_xBufOff() const;

 int64_t __declspec(property(get=__get_byteCount1, put=__set_byteCount1))  byteCount1;

constexpr void __set_byteCount1(int64_t value) ;

constexpr int64_t __get_byteCount1() const;

 int64_t __declspec(property(get=__get_byteCount2, put=__set_byteCount2))  byteCount2;

constexpr void __set_byteCount2(int64_t value) ;

constexpr int64_t __get_byteCount2() const;

 uint64_t __declspec(property(get=__get_H1, put=__set_H1))  H1;

constexpr void __set_H1(uint64_t value) ;

constexpr uint64_t __get_H1() const;

 uint64_t __declspec(property(get=__get_H2, put=__set_H2))  H2;

constexpr void __set_H2(uint64_t value) ;

constexpr uint64_t __get_H2() const;

 uint64_t __declspec(property(get=__get_H3, put=__set_H3))  H3;

constexpr void __set_H3(uint64_t value) ;

constexpr uint64_t __get_H3() const;

 uint64_t __declspec(property(get=__get_H4, put=__set_H4))  H4;

constexpr void __set_H4(uint64_t value) ;

constexpr uint64_t __get_H4() const;

 uint64_t __declspec(property(get=__get_H5, put=__set_H5))  H5;

constexpr void __set_H5(uint64_t value) ;

constexpr uint64_t __get_H5() const;

 uint64_t __declspec(property(get=__get_H6, put=__set_H6))  H6;

constexpr void __set_H6(uint64_t value) ;

constexpr uint64_t __get_H6() const;

 uint64_t __declspec(property(get=__get_H7, put=__set_H7))  H7;

constexpr void __set_H7(uint64_t value) ;

constexpr uint64_t __get_H7() const;

 uint64_t __declspec(property(get=__get_H8, put=__set_H8))  H8;

constexpr void __set_H8(uint64_t value) ;

constexpr uint64_t __get_H8() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_W, put=__set_W))  W;

constexpr void __set_W(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_W() const;

 int32_t __declspec(property(get=__get_wOff, put=__set_wOff))  wOff;

constexpr void __set_wOff(int32_t value) ;

constexpr int32_t __get_wOff() const;

static ::ArrayW<uint64_t> __declspec(property(get=__get_K, put=__set_K))  K;

static void __set_K(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get_K() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit LongDigest() ;

/// @brief Method .ctor addr 0x119b578 size 0xa0 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "Org::BouncyCastle::Crypto::Digests::LongDigest", modifiers: "", def_value: None }]
explicit LongDigest(Org::BouncyCastle::Crypto::Digests::LongDigest t) ;

/// @brief Method .ctor addr 0x119b618 size 0xac virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::LongDigest t) ;

/// @brief Method CopyIn addr 0x119b6c4 size 0x9c virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::LongDigest t) ;

/// @brief Method Update addr 0x119b760 size 0x74 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x119b848 size 0x110 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Finish addr 0x119b958 size 0x6c virtual false final false
 void Finish() ;

/// @brief Method Reset addr 0x119bfd4 size 0x6c virtual true final false
 void Reset() ;

/// @brief Method ProcessWord addr 0x119b7d4 size 0x74 virtual false final false
 void ProcessWord(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method AdjustByteCounts addr 0x119b9c4 size 0x24 virtual false final false
 void AdjustByteCounts() ;

/// @brief Method ProcessLength addr 0x119b9e8 size 0x60 virtual false final false
 void ProcessLength(int64_t lowW, int64_t hiW) ;

/// @brief Method ProcessBlock addr 0x119ba48 size 0x58c virtual false final false
 void ProcessBlock() ;

/// @brief Method Ch addr 0x119c070 size 0x10 virtual false final false
static uint64_t Ch(uint64_t x, uint64_t y, uint64_t z) ;

/// @brief Method Maj addr 0x119c090 size 0x14 virtual false final false
static uint64_t Maj(uint64_t x, uint64_t y, uint64_t z) ;

/// @brief Method Sum0 addr 0x119c080 size 0x10 virtual false final false
static uint64_t Sum0(uint64_t x) ;

/// @brief Method Sum1 addr 0x119c060 size 0x10 virtual false final false
static uint64_t Sum1(uint64_t x) ;

/// @brief Method Sigma0 addr 0x119c050 size 0x10 virtual false final false
static uint64_t Sigma0(uint64_t x) ;

/// @brief Method Sigma1 addr 0x119c040 size 0x10 virtual false final false
static uint64_t Sigma1(uint64_t x) ;

/// @brief Method GetByteLength addr 0x119c0a4 size 0x8 virtual true final true
 int32_t GetByteLength() ;

/// @brief Method get_AlgorithmName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method DoFinal addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Copy addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::LongDigest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::LongDigest, "Org.BouncyCastle.Crypto.Digests", "LongDigest");
