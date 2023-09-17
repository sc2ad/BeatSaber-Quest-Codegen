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
namespace Org::BouncyCastle::Crypto::Modes {
class SicBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::SicBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(977))
// CS Name: Org.BouncyCastle.Crypto.Modes.SicBlockCipher
class CORDL_TYPE SicBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SicBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "SicBlockCipher", modifiers: " const&", def_value: None }]
constexpr SicBlockCipher(SicBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SicBlockCipher", modifiers: "&&", def_value: None }]
constexpr SicBlockCipher(SicBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SicBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SicBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SicBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SicBlockCipher& operator=(SicBlockCipher&& o) noexcept = default;
  constexpr SicBlockCipher& operator=(SicBlockCipher const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_counter, put=__set_counter))  counter;

constexpr void __set_counter(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_counter() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_counterOut, put=__set_counterOut))  counterOut;

constexpr void __set_counterOut(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_counterOut() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_IV, put=__set_IV))  IV;

constexpr void __set_IV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_IV() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "::Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit SicBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe9a888 size 0x100 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method GetUnderlyingCipher addr 0xe9a988 size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method Init addr 0xe9a990 size 0x2e8 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe9ac78 size 0xc0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe9ad38 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe9ad40 size 0xa4 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe9ade4 size 0x1bc virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe9afa0 size 0xfc virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::SicBlockCipher, "Org.BouncyCastle.Crypto.Modes", "SicBlockCipher");
