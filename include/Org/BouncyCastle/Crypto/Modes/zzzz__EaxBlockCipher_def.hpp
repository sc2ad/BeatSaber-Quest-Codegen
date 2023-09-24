#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
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
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
struct Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class SicBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
struct Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag;
}
namespace Org::BouncyCastle::Crypto::Modes {
class EaxBlockCipher;
}
// Type: ::Tag
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(968))
// CS Name: Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Tag
struct CORDL_TYPE Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag(uint8_t value__) noexcept;


                    constexpr Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag(Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag const&) = default;
                    constexpr Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag(Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag&&) = default;
                    constexpr Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag& operator=(Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag& operator=(Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag_Unwrapped : uint8_t {
__N = 0u,
__H = 1u,
__C = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag_Unwrapped () const noexcept {
return std::bit_cast<__Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field N offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag const N;

/// @brief Field H offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag const H;

/// @brief Field C offset 0
static Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag const C;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
// Type: Org.BouncyCastle.Crypto.Modes::EaxBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(969))
// CS Name: Org.BouncyCastle.Crypto.Modes.EaxBlockCipher
class CORDL_TYPE EaxBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Tag = Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::IAeadCipher
constexpr operator  Org::BouncyCastle::Crypto::Modes::IAeadCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~EaxBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "EaxBlockCipher", modifiers: " const&", def_value: None }]
constexpr EaxBlockCipher(EaxBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EaxBlockCipher", modifiers: "&&", def_value: None }]
constexpr EaxBlockCipher(EaxBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EaxBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EaxBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EaxBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EaxBlockCipher& operator=(EaxBlockCipher&& o) noexcept = default;
  constexpr EaxBlockCipher& operator=(EaxBlockCipher const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Modes::SicBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::Modes::SicBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::Modes::SicBlockCipher __get_cipher() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 int32_t __declspec(property(get=__get_blockSize, put=__set_blockSize))  blockSize;

constexpr void __set_blockSize(int32_t value) ;

constexpr int32_t __get_blockSize() const;

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_mac() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_nonceMac, put=__set_nonceMac))  nonceMac;

constexpr void __set_nonceMac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_nonceMac() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_associatedTextMac, put=__set_associatedTextMac))  associatedTextMac;

constexpr void __set_associatedTextMac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_associatedTextMac() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_macBlock, put=__set_macBlock))  macBlock;

constexpr void __set_macBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_macBlock() const;

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_bufBlock, put=__set_bufBlock))  bufBlock;

constexpr void __set_bufBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_bufBlock() const;

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;

 bool __declspec(property(get=__get_cipherInitialized, put=__set_cipherInitialized))  cipherInitialized;

constexpr void __set_cipherInitialized(bool value) ;

constexpr bool __get_cipherInitialized() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_initialAssociatedText, put=__set_initialAssociatedText))  initialAssociatedText;

constexpr void __set_initialAssociatedText(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_initialAssociatedText() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Modes::EaxBlockCipher New_ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe8fc38 size 0x24c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method get_AlgorithmName addr 0xe8fe84 size 0xd4 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetUnderlyingCipher addr 0xe8ff58 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method GetBlockSize addr 0xe8ff60 size 0x24 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method Init addr 0xe8ff84 size 0x490 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method InitCipher addr 0xe90414 size 0x198 virtual false final false
 void InitCipher() ;

/// @brief Method CalculateMac addr 0xe905ac size 0x158 virtual false final false
 void CalculateMac() ;

/// @brief Method Reset addr 0xe90704 size 0x8 virtual true final false
 void Reset() ;

/// @brief Method Reset addr 0xe9070c size 0x1f8 virtual false final false
 void Reset(bool clearMac) ;

/// @brief Method ProcessAadByte addr 0xe90904 size 0x100 virtual true final false
 void ProcessAadByte(uint8_t input) ;

/// @brief Method ProcessAadBytes addr 0xe90a04 size 0x118 virtual true final false
 void ProcessAadBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) ;

/// @brief Method ProcessByte addr 0xe90b1c size 0x40 virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xe90db8 size 0x94 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe90e4c size 0x350 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method GetMac addr 0xe91230 size 0x74 virtual true final false
 ::ArrayW<uint8_t> GetMac() ;

/// @brief Method GetUpdateOutputSize addr 0xe912a4 size 0x34 virtual true final false
 int32_t GetUpdateOutputSize(int32_t len) ;

/// @brief Method GetOutputSize addr 0xe912d8 size 0x28 virtual true final false
 int32_t GetOutputSize(int32_t len) ;

/// @brief Method Process addr 0xe90b5c size 0x25c virtual false final false
 int32_t Process(uint8_t b, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method VerifyMac addr 0xe9119c size 0x94 virtual false final false
 bool VerifyMac(::ArrayW<uint8_t> mac, int32_t off) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Org__BouncyCastle__Crypto__Modes__EaxBlockCipher__Tag, "Org.BouncyCastle.Crypto.Modes", "EaxBlockCipher/Tag");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::EaxBlockCipher, "Org.BouncyCastle.Crypto.Modes", "EaxBlockCipher");
