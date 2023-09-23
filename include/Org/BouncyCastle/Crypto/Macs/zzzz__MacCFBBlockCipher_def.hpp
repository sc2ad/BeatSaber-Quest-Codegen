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
namespace Org::BouncyCastle::Crypto::Macs {
class MacCFBBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Macs::MacCFBBlockCipher
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(936))
// CS Name: Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher
class CORDL_TYPE MacCFBBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MacCFBBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "MacCFBBlockCipher", modifiers: " const&", def_value: None }]
constexpr MacCFBBlockCipher(MacCFBBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MacCFBBlockCipher", modifiers: "&&", def_value: None }]
constexpr MacCFBBlockCipher(MacCFBBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MacCFBBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MacCFBBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MacCFBBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MacCFBBlockCipher& operator=(MacCFBBlockCipher&& o) noexcept = default;
  constexpr MacCFBBlockCipher& operator=(MacCFBBlockCipher const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_IV, put=__set_IV))  IV;

constexpr void __set_IV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_IV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_cfbV, put=__set_cfbV))  cfbV;

constexpr void __set_cfbV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_cfbV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_cfbOutV, put=__set_cfbOutV))  cfbOutV;

constexpr void __set_cfbOutV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_cfbOutV() const;

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }, CppParam { name: "bitBlockSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit MacCFBBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t bitBlockSize) ;

/// @brief Method .ctor addr 0xe7dcac size 0x1e0 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t bitBlockSize) ;

/// @brief Method Init addr 0xe7de8c size 0x13c virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe7e084 size 0x104 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe7e188 size 0x8 virtual true final true
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe7e190 size 0x8 virtual true final true
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe7e198 size 0x258 virtual true final true
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Reset addr 0xe7dfc8 size 0xbc virtual true final true
 void Reset() ;

/// @brief Method GetMacBlock addr 0xe7e3f0 size 0xbc virtual false final false
 void GetMacBlock(::ArrayW<uint8_t> mac) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher, "Org.BouncyCastle.Crypto.Macs", "MacCFBBlockCipher");
