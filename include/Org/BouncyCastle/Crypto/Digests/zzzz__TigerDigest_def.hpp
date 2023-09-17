#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class TigerDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::TigerDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(783))
// CS Name: Org.BouncyCastle.Crypto.Digests.TigerDigest
class CORDL_TYPE TigerDigest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IDigest
constexpr operator  ::Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Utilities::IMemoable
constexpr operator  ::Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TigerDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "TigerDigest", modifiers: " const&", def_value: None }]
constexpr TigerDigest(TigerDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TigerDigest", modifiers: "&&", def_value: None }]
constexpr TigerDigest(TigerDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TigerDigest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TigerDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TigerDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TigerDigest& operator=(TigerDigest&& o) noexcept = default;
  constexpr TigerDigest& operator=(TigerDigest const& o) noexcept = default;
                


// Fields

/// @brief Field MyByteLength offset 0
static constexpr int32_t  MyByteLength{64};

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{24};

static ::ArrayW<int64_t> __declspec(property(get=__get_t1, put=__set_t1))  t1;

static void __set_t1(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_t1() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_t2, put=__set_t2))  t2;

static void __set_t2(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_t2() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_t3, put=__set_t3))  t3;

static void __set_t3(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_t3() ;

static ::ArrayW<int64_t> __declspec(property(get=__get_t4, put=__set_t4))  t4;

static void __set_t4(::ArrayW<int64_t> value) ;

static ::ArrayW<int64_t> __get_t4() ;

 int64_t __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(int64_t value) ;

constexpr int64_t __get_a() const;

 int64_t __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(int64_t value) ;

constexpr int64_t __get_b() const;

 int64_t __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(int64_t value) ;

constexpr int64_t __get_c() const;

 int64_t __declspec(property(get=__get_byteCount, put=__set_byteCount))  byteCount;

constexpr void __set_byteCount(int64_t value) ;

constexpr int64_t __get_byteCount() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Buffer, put=__set_Buffer))  Buffer;

constexpr void __set_Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Buffer() const;

 int32_t __declspec(property(get=__get_bOff, put=__set_bOff))  bOff;

constexpr void __set_bOff(int32_t value) ;

constexpr int32_t __get_bOff() const;

 ::ArrayW<int64_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get_x() const;

 int32_t __declspec(property(get=__get_xOff, put=__set_xOff))  xOff;

constexpr void __set_xOff(int32_t value) ;

constexpr int32_t __get_xOff() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit TigerDigest() ;

/// @brief Method .ctor addr 0xe1c368 size 0x8c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "::Org::BouncyCastle::Crypto::Digests::TigerDigest", modifiers: "", def_value: None }]
explicit TigerDigest(::Org::BouncyCastle::Crypto::Digests::TigerDigest t) ;

/// @brief Method .ctor addr 0xe1c498 size 0x94 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Digests::TigerDigest t) ;

/// @brief Method get_AlgorithmName addr 0xe1c614 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0xe1c654 size 0x8 virtual true final true
 int32_t GetDigestSize() ;

/// @brief Method GetByteLength addr 0xe1c65c size 0x8 virtual true final true
 int32_t GetByteLength() ;

/// @brief Method ProcessWord addr 0xe1c664 size 0x11c virtual false final false
 void ProcessWord(::ArrayW<uint8_t> b, int32_t off) ;

/// @brief Method Update addr 0xe1cb64 size 0x70 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe1cbd4 size 0x110 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method RoundABC addr 0xe1cce4 size 0x184 virtual false final false
 void RoundABC(int64_t x, int64_t mul) ;

/// @brief Method RoundBCA addr 0xe1ce68 size 0x180 virtual false final false
 void RoundBCA(int64_t x, int64_t mul) ;

/// @brief Method RoundCAB addr 0xe1cfe8 size 0x180 virtual false final false
 void RoundCAB(int64_t x, int64_t mul) ;

/// @brief Method KeySchedule addr 0xe1d168 size 0xdc virtual false final false
 void KeySchedule() ;

/// @brief Method ProcessBlock addr 0xe1c780 size 0x3e4 virtual false final false
 void ProcessBlock() ;

/// @brief Method UnpackWord addr 0xe1d244 size 0xf0 virtual false final false
 void UnpackWord(int64_t r, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessLength addr 0xe1d334 size 0x2c virtual false final false
 void ProcessLength(int64_t bitLength) ;

/// @brief Method Finish addr 0xe1d360 size 0x4c virtual false final false
 void Finish() ;

/// @brief Method DoFinal addr 0xe1d3ac size 0x60 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe1c3f4 size 0xa4 virtual true final true
 void Reset() ;

/// @brief Method Copy addr 0xe1d40c size 0x60 virtual true final true
 ::Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0xe1c52c size 0xe8 virtual true final true
 void Reset(::Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::TigerDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::TigerDigest, "Org.BouncyCastle.Crypto.Digests", "TigerDigest");
