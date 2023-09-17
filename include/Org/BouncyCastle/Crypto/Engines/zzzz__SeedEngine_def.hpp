#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SeedEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::SeedEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(867))
// CS Name: Org.BouncyCastle.Crypto.Engines.SeedEngine
class CORDL_TYPE SeedEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SeedEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "SeedEngine", modifiers: " const&", def_value: None }]
constexpr SeedEngine(SeedEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SeedEngine", modifiers: "&&", def_value: None }]
constexpr SeedEngine(SeedEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SeedEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SeedEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SeedEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SeedEngine& operator=(SeedEngine&& o) noexcept = default;
  constexpr SeedEngine& operator=(SeedEngine const& o) noexcept = default;
                


// Fields

/// @brief Field BlockSize offset 0
static constexpr int32_t  BlockSize{16};

static ::ArrayW<uint32_t> __declspec(property(get=__get_SS0, put=__set_SS0))  SS0;

static void __set_SS0(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SS0() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SS1, put=__set_SS1))  SS1;

static void __set_SS1(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SS1() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SS2, put=__set_SS2))  SS2;

static void __set_SS2(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SS2() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SS3, put=__set_SS3))  SS3;

static void __set_SS3(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SS3() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_KC, put=__set_KC))  KC;

static void __set_KC(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KC() ;

 ::ArrayW<int32_t> __declspec(property(get=__get_wKey, put=__set_wKey))  wKey;

constexpr void __set_wKey(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_wKey() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method Init addr 0xe55060 size 0xac virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe552b4 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe552f4 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe552fc size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe55304 size 0x1f8 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> inBuf, int32_t inOff, ::ArrayW<uint8_t> outBuf, int32_t outOff) ;

/// @brief Method Reset addr 0xe55614 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method createWorkingKey addr 0xe5510c size 0x1a8 virtual false final false
 ::ArrayW<int32_t> createWorkingKey(::ArrayW<uint8_t> inKey) ;

/// @brief Method extractW1 addr 0xe55620 size 0x8 virtual false final false
 int32_t extractW1(int64_t lVal) ;

/// @brief Method extractW0 addr 0xe55618 size 0x8 virtual false final false
 int32_t extractW0(int64_t lVal) ;

/// @brief Method rotateLeft8 addr 0xe5571c size 0x8 virtual false final false
 int64_t rotateLeft8(int64_t x) ;

/// @brief Method rotateRight8 addr 0xe55714 size 0x8 virtual false final false
 int64_t rotateRight8(int64_t x) ;

/// @brief Method bytesToLong addr 0xe554fc size 0x5c virtual false final false
 int64_t bytesToLong(::ArrayW<uint8_t> src, int32_t srcOff) ;

/// @brief Method longToBytes addr 0xe555bc size 0x58 virtual false final false
 void longToBytes(::ArrayW<uint8_t> dest, int32_t destOff, int64_t value) ;

/// @brief Method G addr 0xe55628 size 0xec virtual false final false
 int32_t G(int32_t x) ;

/// @brief Method F addr 0xe55558 size 0x64 virtual false final false
 int64_t F(int32_t ki0, int32_t ki1, int64_t r) ;

/// @brief Method phaseCalc1 addr 0xe55764 size 0x20 virtual false final false
 int32_t phaseCalc1(int32_t r0, int32_t ki0, int32_t r1, int32_t ki1) ;

/// @brief Method phaseCalc2 addr 0xe55724 size 0x40 virtual false final false
 int32_t phaseCalc2(int32_t r0, int32_t ki0, int32_t r1, int32_t ki1) ;

// Ctor Parameters []
explicit SeedEngine() ;

/// @brief Method .ctor addr 0xe55918 size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SeedEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SeedEngine, "Org.BouncyCastle.Crypto.Engines", "SeedEngine");
