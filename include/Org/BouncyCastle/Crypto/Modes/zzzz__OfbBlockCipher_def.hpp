#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class OfbBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::OfbBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(975))
// CS Name: Org.BouncyCastle.Crypto.Modes.OfbBlockCipher
class CORDL_TYPE OfbBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OfbBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "OfbBlockCipher", modifiers: " const&", def_value: None }]
constexpr OfbBlockCipher(OfbBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OfbBlockCipher", modifiers: "&&", def_value: None }]
constexpr OfbBlockCipher(OfbBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OfbBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OfbBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OfbBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OfbBlockCipher& operator=(OfbBlockCipher&& o) noexcept = default;
  constexpr OfbBlockCipher& operator=(OfbBlockCipher const& o) noexcept = default;
                


// Fields

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


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

static Org::BouncyCastle::Crypto::Modes::OfbBlockCipher New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t blockSize) ;

/// @brief Method .ctor addr 0xe98f40 size 0x1e0 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t blockSize) ;

/// @brief Method GetUnderlyingCipher addr 0xe99120 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method Init addr 0xe99128 size 0x1bc virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe993a8 size 0x104 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe994ac size 0x8 virtual true final true
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe994b4 size 0x8 virtual true final true
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe994bc size 0x258 virtual true final true
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe992e4 size 0xc4 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::OfbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::OfbBlockCipher, "Org.BouncyCastle.Crypto.Modes", "OfbBlockCipher");
