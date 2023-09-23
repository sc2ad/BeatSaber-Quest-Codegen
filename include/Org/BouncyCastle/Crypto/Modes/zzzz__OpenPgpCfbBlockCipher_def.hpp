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
class OpenPgpCfbBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::OpenPgpCfbBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(976))
// CS Name: Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher
class CORDL_TYPE OpenPgpCfbBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~OpenPgpCfbBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenPgpCfbBlockCipher", modifiers: " const&", def_value: None }]
constexpr OpenPgpCfbBlockCipher(OpenPgpCfbBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenPgpCfbBlockCipher", modifiers: "&&", def_value: None }]
constexpr OpenPgpCfbBlockCipher(OpenPgpCfbBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenPgpCfbBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OpenPgpCfbBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenPgpCfbBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenPgpCfbBlockCipher& operator=(OpenPgpCfbBlockCipher&& o) noexcept = default;
  constexpr OpenPgpCfbBlockCipher& operator=(OpenPgpCfbBlockCipher const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_IV, put=__set_IV))  IV;

constexpr void __set_IV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_IV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_FR, put=__set_FR))  FR;

constexpr void __set_FR(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_FR() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_FRE, put=__set_FRE))  FRE;

constexpr void __set_FRE(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_FRE() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;

 int32_t __declspec(property(get=__get_count, put=__set_count))  count;

constexpr void __set_count(int32_t value) ;

constexpr int32_t __get_count() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit OpenPgpCfbBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe99714 size 0x100 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method GetUnderlyingCipher addr 0xe99814 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method get_AlgorithmName addr 0xe9981c size 0xc0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe998dc size 0x8 virtual true final true
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe998e4 size 0xa4 virtual true final true
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe99988 size 0x10 virtual true final true
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe9a5e4 size 0xc8 virtual true final true
 void Reset() ;

/// @brief Method Init addr 0xe9a6ac size 0x1a8 virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method EncryptByte addr 0xe9a854 size 0x34 virtual false final false
 uint8_t EncryptByte(uint8_t data, int32_t blockOff) ;

/// @brief Method EncryptBlock addr 0xe99fe4 size 0x600 virtual false final false
 int32_t EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0xe99998 size 0x64c virtual false final false
 int32_t DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::OpenPgpCfbBlockCipher, "Org.BouncyCastle.Crypto.Modes", "OpenPgpCfbBlockCipher");
