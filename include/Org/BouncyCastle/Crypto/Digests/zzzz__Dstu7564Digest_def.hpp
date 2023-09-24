#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Dstu7564Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Dstu7564Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(749))
// CS Name: Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
class CORDL_TYPE Dstu7564Digest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Utilities::IMemoable
constexpr operator  Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Dstu7564Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Dstu7564Digest", modifiers: " const&", def_value: None }]
constexpr Dstu7564Digest(Dstu7564Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Dstu7564Digest", modifiers: "&&", def_value: None }]
constexpr Dstu7564Digest(Dstu7564Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Dstu7564Digest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Dstu7564Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Dstu7564Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Dstu7564Digest& operator=(Dstu7564Digest&& o) noexcept = default;
  constexpr Dstu7564Digest& operator=(Dstu7564Digest const& o) noexcept = default;
                


// Fields

/// @brief Field NB_512 offset 0
static constexpr int32_t  NB_512{8};

/// @brief Field NB_1024 offset 0
static constexpr int32_t  NB_1024{16};

/// @brief Field NR_512 offset 0
static constexpr int32_t  NR_512{10};

/// @brief Field NR_1024 offset 0
static constexpr int32_t  NR_1024{14};

 int32_t __declspec(property(get=__get_hashSize, put=__set_hashSize))  hashSize;

constexpr void __set_hashSize(int32_t value) ;

constexpr int32_t __get_hashSize() const;

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;

 int32_t __declspec(property(get=__get_columns, put=__set_columns))  columns;

constexpr void __set_columns(int32_t value) ;

constexpr int32_t __get_columns() const;

 int32_t __declspec(property(get=__get_rounds, put=__set_rounds))  rounds;

constexpr void __set_rounds(int32_t value) ;

constexpr int32_t __get_rounds() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_state() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_tempState1, put=__set_tempState1))  tempState1;

constexpr void __set_tempState1(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_tempState1() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_tempState2, put=__set_tempState2))  tempState2;

constexpr void __set_tempState2(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_tempState2() const;

 uint64_t __declspec(property(get=__get_inputBlocks, put=__set_inputBlocks))  inputBlocks;

constexpr void __set_inputBlocks(uint64_t value) ;

constexpr uint64_t __get_inputBlocks() const;

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_S0, put=__set_S0))  S0;

static void __set_S0(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S0() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_S1, put=__set_S1))  S1;

static void __set_S1(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S1() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_S2, put=__set_S2))  S2;

static void __set_S2(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S2() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_S3, put=__set_S3))  S3;

static void __set_S3(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S3() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Digests::Dstu7564Digest New_ctor(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest digest) ;

/// @brief Method .ctor addr 0x1194f78 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest digest) ;

/// @brief Method CopyIn addr 0x1194fa4 size 0x130 virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest digest) ;

static Org::BouncyCastle::Crypto::Digests::Dstu7564Digest New_ctor(int32_t hashSizeBits) ;

/// @brief Method .ctor addr 0x11950d4 size 0x14c virtual false final false
 void _ctor(int32_t hashSizeBits) ;

/// @brief Method get_AlgorithmName addr 0x1195220 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x1195260 size 0x8 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method GetByteLength addr 0x1195268 size 0x8 virtual true final false
 int32_t GetByteLength() ;

/// @brief Method Update addr 0x1195270 size 0x7c virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x11952ec size 0x128 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method DoFinal addr 0x1195414 size 0x260 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x1195728 size 0x50 virtual true final false
 void Reset() ;

/// @brief Method ProcessBlock addr 0x1195778 size 0x150 virtual true final false
 void ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method P addr 0x1195674 size 0xb4 virtual false final false
 void P(::ArrayW<uint64_t> s) ;

/// @brief Method Q addr 0x11958c8 size 0xd0 virtual false final false
 void Q(::ArrayW<uint64_t> s) ;

/// @brief Method MixColumn addr 0x119607c size 0xb8 virtual false final false
static uint64_t MixColumn(uint64_t c) ;

/// @brief Method MixColumns addr 0x1195fc0 size 0xbc virtual false final false
 void MixColumns(::ArrayW<uint64_t> s) ;

/// @brief Method Rotate addr 0x1196134 size 0x8 virtual false final false
static uint64_t Rotate(int32_t n, uint64_t x) ;

/// @brief Method ShiftRows addr 0x1195998 size 0x480 virtual false final false
 void ShiftRows(::ArrayW<uint64_t> s) ;

/// @brief Method SubBytes addr 0x1195e18 size 0x1a8 virtual false final false
 void SubBytes(::ArrayW<uint64_t> s) ;

/// @brief Method Copy addr 0x119613c size 0x6c virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x11961a8 size 0x84 virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Dstu7564Digest, "Org.BouncyCastle.Crypto.Digests", "Dstu7564Digest");
