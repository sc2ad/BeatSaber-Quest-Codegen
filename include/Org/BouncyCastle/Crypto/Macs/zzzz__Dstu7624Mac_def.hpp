#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Engines {
class Dstu7624Engine;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class Dstu7624Mac;
}
// Type: Org.BouncyCastle.Crypto.Macs::Dstu7624Mac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(940))
// CS Name: Org.BouncyCastle.Crypto.Macs.Dstu7624Mac
class CORDL_TYPE Dstu7624Mac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMac
constexpr operator  Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Dstu7624Mac() = default;

// Ctor Parameters [CppParam { name: "", ty: "Dstu7624Mac", modifiers: " const&", def_value: None }]
constexpr Dstu7624Mac(Dstu7624Mac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Dstu7624Mac", modifiers: "&&", def_value: None }]
constexpr Dstu7624Mac(Dstu7624Mac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Dstu7624Mac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Dstu7624Mac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Dstu7624Mac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Dstu7624Mac& operator=(Dstu7624Mac&& o) noexcept = default;
  constexpr Dstu7624Mac& operator=(Dstu7624Mac const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;

 Org::BouncyCastle::Crypto::Engines::Dstu7624Engine __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(Org::BouncyCastle::Crypto::Engines::Dstu7624Engine value) ;

constexpr Org::BouncyCastle::Crypto::Engines::Dstu7624Engine __get_engine() const;

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_c() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_cTemp, put=__set_cTemp))  cTemp;

constexpr void __set_cTemp(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_cTemp() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_kDelta, put=__set_kDelta))  kDelta;

constexpr void __set_kDelta(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_kDelta() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf() const;

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "blockSizeBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "q", ty: "int32_t", modifiers: "", def_value: None }]
explicit Dstu7624Mac(int32_t blockSizeBits, int32_t q) ;

/// @brief Method .ctor addr 0xe80358 size 0xf8 virtual false final false
 void _ctor(int32_t blockSizeBits, int32_t q) ;

/// @brief Method Init addr 0xe80450 size 0x130 virtual true final true
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe80580 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetMacSize addr 0xe805c0 size 0x8 virtual true final true
 int32_t GetMacSize() ;

/// @brief Method Update addr 0xe805c8 size 0x80 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe80690 size 0x140 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method processBlock addr 0xe80648 size 0x48 virtual false final false
 void processBlock(::ArrayW<uint8_t> input, int32_t inOff) ;

/// @brief Method Xor addr 0xe807d0 size 0x90 virtual false final false
 void Xor(::ArrayW<uint8_t> c, int32_t cOff, ::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> xorResult) ;

/// @brief Method DoFinal addr 0xe80860 size 0x134 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe80994 size 0xd8 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(Org::BouncyCastle::Crypto::Macs::Dstu7624Mac);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, "Org.BouncyCastle.Crypto.Macs", "Dstu7624Mac");
