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
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class CMac;
}
// Type: Org.BouncyCastle.Crypto.Macs::CMac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(938))
// CS Name: Org.BouncyCastle.Crypto.Macs.CMac
class CORDL_TYPE CMac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMac
constexpr operator  Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~CMac() = default;

// Ctor Parameters [CppParam { name: "", ty: "CMac", modifiers: " const&", def_value: None }]
constexpr CMac(CMac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CMac", modifiers: "&&", def_value: None }]
constexpr CMac(CMac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CMac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CMac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CMac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CMac& operator=(CMac&& o) noexcept = default;
  constexpr CMac& operator=(CMac const& o) noexcept = default;
                


// Fields

/// @brief Field CONSTANT_128 offset 0
static constexpr uint8_t  CONSTANT_128{135u};

/// @brief Field CONSTANT_64 offset 0
static constexpr uint8_t  CONSTANT_64{27u};

 ::ArrayW<uint8_t> __declspec(property(get=__get_ZEROES, put=__set_ZEROES))  ZEROES;

constexpr void __set_ZEROES(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ZEROES() const;

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

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_L, put=__set_L))  L;

constexpr void __set_L(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_L() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Lu, put=__set_Lu))  Lu;

constexpr void __set_Lu(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Lu() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Lu2, put=__set_Lu2))  Lu2;

constexpr void __set_Lu2(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Lu2() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Macs::CMac New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe7ebc8 size 0xb4 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

static Org::BouncyCastle::Crypto::Macs::CMac New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t macSizeInBits) ;

/// @brief Method .ctor addr 0xe7ec7c size 0x454 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t macSizeInBits) ;

/// @brief Method get_AlgorithmName addr 0xe7f0d0 size 0xa0 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method ShiftLeft addr 0xe7f170 size 0x84 virtual false final false
static int32_t ShiftLeft(::ArrayW<uint8_t> block, ::ArrayW<uint8_t> output) ;

/// @brief Method DoubleLu addr 0xe7f1f4 size 0xb8 virtual false final false
static ::ArrayW<uint8_t> DoubleLu(::ArrayW<uint8_t> input) ;

/// @brief Method Init addr 0xe7f2ac size 0x220 virtual true final true
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetMacSize addr 0xe7f58c size 0x8 virtual true final true
 int32_t GetMacSize() ;

/// @brief Method Update addr 0xe7f594 size 0x118 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe7f6ac size 0x294 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xe7f940 size 0x220 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Reset addr 0xe7f4cc size 0xc0 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(Org::BouncyCastle::Crypto::Macs::CMac);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::CMac, "Org.BouncyCastle.Crypto.Macs", "CMac");
