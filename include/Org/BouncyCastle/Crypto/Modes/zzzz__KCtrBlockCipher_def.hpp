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
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class KCtrBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::KCtrBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(973))
// CS Name: Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher
class CORDL_TYPE KCtrBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IStreamCipher
constexpr operator  Org::BouncyCastle::Crypto::IStreamCipher() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~KCtrBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "KCtrBlockCipher", modifiers: " const&", def_value: None }]
constexpr KCtrBlockCipher(KCtrBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KCtrBlockCipher", modifiers: "&&", def_value: None }]
constexpr KCtrBlockCipher(KCtrBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KCtrBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KCtrBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KCtrBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KCtrBlockCipher& operator=(KCtrBlockCipher&& o) noexcept = default;
  constexpr KCtrBlockCipher& operator=(KCtrBlockCipher const& o) noexcept = default;
                


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

 bool __declspec(property(get=__get_initialised, put=__set_initialised))  initialised;

constexpr void __set_initialised(bool value) ;

constexpr bool __get_initialised() const;

 int32_t __declspec(property(get=__get_byteCount, put=__set_byteCount))  byteCount;

constexpr void __set_byteCount(int32_t value) ;

constexpr int32_t __get_byteCount() const;

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

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit KCtrBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe965c0 size 0x228 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method GetUnderlyingCipher addr 0xe967e8 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method Init addr 0xe967f0 size 0x1b4 virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe96ad8 size 0xc0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe96b98 size 0x8 virtual true final true
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe96ba0 size 0xa4 virtual true final true
 int32_t GetBlockSize() ;

/// @brief Method ReturnByte addr 0xe96c44 size 0x4 virtual true final true
 uint8_t ReturnByte(uint8_t input) ;

/// @brief Method ProcessBytes addr 0xe96d98 size 0x140 virtual true final true
 void ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method CalculateByte addr 0xe96c48 size 0x150 virtual false final false
 uint8_t CalculateByte(uint8_t b) ;

/// @brief Method ProcessBlock addr 0xe96f20 size 0x100 virtual true final true
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe969a4 size 0x134 virtual true final true
 void Reset() ;

/// @brief Method incrementCounterAt addr 0xe96ed8 size 0x44 virtual false final false
 void incrementCounterAt(int32_t pos) ;

/// @brief Method checkCounter addr 0xe96f1c size 0x4 virtual false final false
 void checkCounter() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::KCtrBlockCipher, "Org.BouncyCastle.Crypto.Modes", "KCtrBlockCipher");
