#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class GOfbBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::GOfbBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(971))
// CS Name: Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher
class CORDL_TYPE GOfbBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GOfbBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "GOfbBlockCipher", modifiers: " const&", def_value: None }]
constexpr GOfbBlockCipher(GOfbBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GOfbBlockCipher", modifiers: "&&", def_value: None }]
constexpr GOfbBlockCipher(GOfbBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GOfbBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GOfbBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GOfbBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GOfbBlockCipher& operator=(GOfbBlockCipher&& o) noexcept = default;
  constexpr GOfbBlockCipher& operator=(GOfbBlockCipher const& o) noexcept = default;
                


// Fields

/// @brief Field C1 offset 0
static constexpr int32_t  C1{16843012};

/// @brief Field C2 offset 0
static constexpr int32_t  C2{16843009};

 ::ArrayW<uint8_t> __declspec(property(get=__get_IV, put=__set_IV))  IV;

constexpr void __set_IV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_IV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_ofbV, put=__set_ofbV))  ofbV;

constexpr void __set_ofbV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ofbV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_ofbOutV, put=__set_ofbOutV))  ofbOutV;

constexpr void __set_ofbOutV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ofbOutV() const;

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;

 bool __declspec(property(get=__get_firstStep, put=__set_firstStep))  firstStep;

constexpr void __set_firstStep(bool value) ;

constexpr bool __get_firstStep() const;

 int32_t __declspec(property(get=__get_N3, put=__set_N3))  N3;

constexpr void __set_N3(int32_t value) ;

constexpr int32_t __get_N3() const;

 int32_t __declspec(property(get=__get_N4, put=__set_N4))  N4;

constexpr void __set_N4(int32_t value) ;

constexpr int32_t __get_N4() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit GOfbBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe931f4 size 0x284 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method GetUnderlyingCipher addr 0xe93478 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method Init addr 0xe93480 size 0x1c8 virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe9370c size 0xc0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe937cc size 0x8 virtual true final true
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe937d4 size 0x8 virtual true final true
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe937dc size 0x34c virtual true final true
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe93648 size 0xc4 virtual true final true
 void Reset() ;

/// @brief Method bytesToint addr 0xe93b28 size 0x74 virtual false final false
 int32_t bytesToint(::ArrayW<uint8_t> inBytes, int32_t inOff) ;

/// @brief Method intTobytes addr 0xe93b9c size 0x80 virtual false final false
 void intTobytes(int32_t num, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::GOfbBlockCipher, "Org.BouncyCastle.Crypto.Modes", "GOfbBlockCipher");
