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
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class Poly1305;
}
// Type: Org.BouncyCastle.Crypto.Macs::Poly1305
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(945))
// CS Name: Org.BouncyCastle.Crypto.Macs.Poly1305
class CORDL_TYPE Poly1305 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMac
constexpr operator  Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~Poly1305() = default;

// Ctor Parameters [CppParam { name: "", ty: "Poly1305", modifiers: " const&", def_value: None }]
constexpr Poly1305(Poly1305 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Poly1305", modifiers: "&&", def_value: None }]
constexpr Poly1305(Poly1305&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Poly1305(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Poly1305& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Poly1305& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Poly1305& operator=(Poly1305&& o) noexcept = default;
  constexpr Poly1305& operator=(Poly1305 const& o) noexcept = default;
                


// Fields

/// @brief Field BlockSize offset 0
static constexpr int32_t  BlockSize{16};

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_singleByte, put=__set_singleByte))  singleByte;

constexpr void __set_singleByte(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_singleByte() const;

 uint32_t __declspec(property(get=__get_r0, put=__set_r0))  r0;

constexpr void __set_r0(uint32_t value) ;

constexpr uint32_t __get_r0() const;

 uint32_t __declspec(property(get=__get_r1, put=__set_r1))  r1;

constexpr void __set_r1(uint32_t value) ;

constexpr uint32_t __get_r1() const;

 uint32_t __declspec(property(get=__get_r2, put=__set_r2))  r2;

constexpr void __set_r2(uint32_t value) ;

constexpr uint32_t __get_r2() const;

 uint32_t __declspec(property(get=__get_r3, put=__set_r3))  r3;

constexpr void __set_r3(uint32_t value) ;

constexpr uint32_t __get_r3() const;

 uint32_t __declspec(property(get=__get_r4, put=__set_r4))  r4;

constexpr void __set_r4(uint32_t value) ;

constexpr uint32_t __get_r4() const;

 uint32_t __declspec(property(get=__get_s1, put=__set_s1))  s1;

constexpr void __set_s1(uint32_t value) ;

constexpr uint32_t __get_s1() const;

 uint32_t __declspec(property(get=__get_s2, put=__set_s2))  s2;

constexpr void __set_s2(uint32_t value) ;

constexpr uint32_t __get_s2() const;

 uint32_t __declspec(property(get=__get_s3, put=__set_s3))  s3;

constexpr void __set_s3(uint32_t value) ;

constexpr uint32_t __get_s3() const;

 uint32_t __declspec(property(get=__get_s4, put=__set_s4))  s4;

constexpr void __set_s4(uint32_t value) ;

constexpr uint32_t __get_s4() const;

 uint32_t __declspec(property(get=__get_k0, put=__set_k0))  k0;

constexpr void __set_k0(uint32_t value) ;

constexpr uint32_t __get_k0() const;

 uint32_t __declspec(property(get=__get_k1, put=__set_k1))  k1;

constexpr void __set_k1(uint32_t value) ;

constexpr uint32_t __get_k1() const;

 uint32_t __declspec(property(get=__get_k2, put=__set_k2))  k2;

constexpr void __set_k2(uint32_t value) ;

constexpr uint32_t __get_k2() const;

 uint32_t __declspec(property(get=__get_k3, put=__set_k3))  k3;

constexpr void __set_k3(uint32_t value) ;

constexpr uint32_t __get_k3() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_currentBlock, put=__set_currentBlock))  currentBlock;

constexpr void __set_currentBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_currentBlock() const;

 int32_t __declspec(property(get=__get_currentBlockOffset, put=__set_currentBlockOffset))  currentBlockOffset;

constexpr void __set_currentBlockOffset(int32_t value) ;

constexpr int32_t __get_currentBlockOffset() const;

 uint32_t __declspec(property(get=__get_h0, put=__set_h0))  h0;

constexpr void __set_h0(uint32_t value) ;

constexpr uint32_t __get_h0() const;

 uint32_t __declspec(property(get=__get_h1, put=__set_h1))  h1;

constexpr void __set_h1(uint32_t value) ;

constexpr uint32_t __get_h1() const;

 uint32_t __declspec(property(get=__get_h2, put=__set_h2))  h2;

constexpr void __set_h2(uint32_t value) ;

constexpr uint32_t __get_h2() const;

 uint32_t __declspec(property(get=__get_h3, put=__set_h3))  h3;

constexpr void __set_h3(uint32_t value) ;

constexpr uint32_t __get_h3() const;

 uint32_t __declspec(property(get=__get_h4, put=__set_h4))  h4;

constexpr void __set_h4(uint32_t value) ;

constexpr uint32_t __get_h4() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Macs::Poly1305 New_ctor() ;

/// @brief Method .ctor addr 0xe839ec size 0x74 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Crypto::Macs::Poly1305 New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe83a60 size 0x14c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method Init addr 0xe83bac size 0x19c virtual true final true
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method SetKey addr 0xe83d48 size 0x344 virtual false final false
 void SetKey(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> nonce) ;

/// @brief Method get_AlgorithmName addr 0xe84098 size 0xe8 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetMacSize addr 0xe84180 size 0x8 virtual true final true
 int32_t GetMacSize() ;

/// @brief Method Update addr 0xe84188 size 0x34 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe841bc size 0xe8 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method ProcessBlock addr 0xe842a4 size 0x21c virtual false final false
 void ProcessBlock() ;

/// @brief Method DoFinal addr 0xe844c8 size 0x1e0 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe8408c size 0xc virtual true final true
 void Reset() ;

/// @brief Method mul32x32_64 addr 0xe844c0 size 0x8 virtual false final false
static uint64_t mul32x32_64(uint32_t i1, uint32_t i2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(Org::BouncyCastle::Crypto::Macs::Poly1305);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::Poly1305, "Org.BouncyCastle.Crypto.Macs", "Poly1305");
