#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class ISO9797Alg3Mac;
}
// Type: Org.BouncyCastle.Crypto.Macs::ISO9797Alg3Mac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(944))
// CS Name: Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac
class CORDL_TYPE ISO9797Alg3Mac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMac
constexpr operator  Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ISO9797Alg3Mac() = default;

// Ctor Parameters [CppParam { name: "", ty: "ISO9797Alg3Mac", modifiers: " const&", def_value: None }]
constexpr ISO9797Alg3Mac(ISO9797Alg3Mac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ISO9797Alg3Mac", modifiers: "&&", def_value: None }]
constexpr ISO9797Alg3Mac(ISO9797Alg3Mac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISO9797Alg3Mac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ISO9797Alg3Mac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ISO9797Alg3Mac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ISO9797Alg3Mac& operator=(ISO9797Alg3Mac&& o) noexcept = default;
  constexpr ISO9797Alg3Mac& operator=(ISO9797Alg3Mac const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mac() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buf, put=__set_buf))  buf;

constexpr void __set_buf(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buf() const;

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;

 Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding __declspec(property(get=__get_padding, put=__set_padding))  padding;

constexpr void __set_padding(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding value) ;

constexpr Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding __get_padding() const;

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;

 Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_lastKey2, put=__set_lastKey2))  lastKey2;

constexpr void __set_lastKey2(Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_lastKey2() const;

 Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_lastKey3, put=__set_lastKey3))  lastKey3;

constexpr void __set_lastKey3(Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_lastKey3() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe82a1c size 0xb8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

static Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding padding) ;

/// @brief Method .ctor addr 0xe82d38 size 0xc4 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding padding) ;

static Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t macSizeInBits) ;

/// @brief Method .ctor addr 0xe82dfc size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t macSizeInBits) ;

static Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t macSizeInBits, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding padding) ;

/// @brief Method .ctor addr 0xe82ad4 size 0x264 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t macSizeInBits, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding padding) ;

/// @brief Method get_AlgorithmName addr 0xe82e04 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe82e44 size 0x3e0 virtual true final true
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetMacSize addr 0xe832e4 size 0x8 virtual true final true
 int32_t GetMacSize() ;

/// @brief Method Update addr 0xe832ec size 0x118 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe83404 size 0x294 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xe83698 size 0x354 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe83224 size 0xc0 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac, "Org.BouncyCastle.Crypto.Macs", "ISO9797Alg3Mac");
