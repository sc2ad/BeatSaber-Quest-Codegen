#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class OcbBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::OcbBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(974))
// CS Name: Org.BouncyCastle.Crypto.Modes.OcbBlockCipher
class CORDL_TYPE OcbBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::IAeadCipher
constexpr operator  Org::BouncyCastle::Crypto::Modes::IAeadCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~OcbBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcbBlockCipher", modifiers: " const&", def_value: None }]
constexpr OcbBlockCipher(OcbBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcbBlockCipher", modifiers: "&&", def_value: None }]
constexpr OcbBlockCipher(OcbBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcbBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OcbBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcbBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcbBlockCipher& operator=(OcbBlockCipher&& o) noexcept = default;
  constexpr OcbBlockCipher& operator=(OcbBlockCipher const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{16};

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_hashCipher, put=__set_hashCipher))  hashCipher;

constexpr void __set_hashCipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_hashCipher() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_mainCipher, put=__set_mainCipher))  mainCipher;

constexpr void __set_mainCipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_mainCipher() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_initialAssociatedText, put=__set_initialAssociatedText))  initialAssociatedText;

constexpr void __set_initialAssociatedText(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_initialAssociatedText() const;

 System::Collections::IList __declspec(property(get=__get_L, put=__set_L))  L;

constexpr void __set_L(System::Collections::IList value) ;

constexpr System::Collections::IList __get_L() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_L_Asterisk, put=__set_L_Asterisk))  L_Asterisk;

constexpr void __set_L_Asterisk(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_L_Asterisk() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_L_Dollar, put=__set_L_Dollar))  L_Dollar;

constexpr void __set_L_Dollar(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_L_Dollar() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_KtopInput, put=__set_KtopInput))  KtopInput;

constexpr void __set_KtopInput(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_KtopInput() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Stretch, put=__set_Stretch))  Stretch;

constexpr void __set_Stretch(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Stretch() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_OffsetMAIN_0, put=__set_OffsetMAIN_0))  OffsetMAIN_0;

constexpr void __set_OffsetMAIN_0(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_OffsetMAIN_0() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_hashBlock, put=__set_hashBlock))  hashBlock;

constexpr void __set_hashBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_hashBlock() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mainBlock, put=__set_mainBlock))  mainBlock;

constexpr void __set_mainBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mainBlock() const;

 int32_t __declspec(property(get=__get_hashBlockPos, put=__set_hashBlockPos))  hashBlockPos;

constexpr void __set_hashBlockPos(int32_t value) ;

constexpr int32_t __get_hashBlockPos() const;

 int32_t __declspec(property(get=__get_mainBlockPos, put=__set_mainBlockPos))  mainBlockPos;

constexpr void __set_mainBlockPos(int32_t value) ;

constexpr int32_t __get_mainBlockPos() const;

 int64_t __declspec(property(get=__get_hashBlockCount, put=__set_hashBlockCount))  hashBlockCount;

constexpr void __set_hashBlockCount(int64_t value) ;

constexpr int64_t __get_hashBlockCount() const;

 int64_t __declspec(property(get=__get_mainBlockCount, put=__set_mainBlockCount))  mainBlockCount;

constexpr void __set_mainBlockCount(int64_t value) ;

constexpr int64_t __get_mainBlockCount() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_OffsetHASH, put=__set_OffsetHASH))  OffsetHASH;

constexpr void __set_OffsetHASH(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_OffsetHASH() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Sum, put=__set_Sum))  Sum;

constexpr void __set_Sum(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Sum() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_OffsetMAIN, put=__set_OffsetMAIN))  OffsetMAIN;

constexpr void __set_OffsetMAIN(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_OffsetMAIN() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Checksum, put=__set_Checksum))  Checksum;

constexpr void __set_Checksum(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Checksum() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_macBlock, put=__set_macBlock))  macBlock;

constexpr void __set_macBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_macBlock() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

static Org::BouncyCastle::Crypto::Modes::OcbBlockCipher New_ctor(Org::BouncyCastle::Crypto::IBlockCipher hashCipher, Org::BouncyCastle::Crypto::IBlockCipher mainCipher) ;

/// @brief Method .ctor addr 0xe97020 size 0x3e4 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher hashCipher, Org::BouncyCastle::Crypto::IBlockCipher mainCipher) ;

/// @brief Method GetUnderlyingCipher addr 0xe97404 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method get_AlgorithmName addr 0xe9740c size 0xc0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe974cc size 0x6dc virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ProcessNonce addr 0xe97c40 size 0x238 virtual true final false
 int32_t ProcessNonce(::ArrayW<uint8_t> N) ;

/// @brief Method GetBlockSize addr 0xe97e78 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetMac addr 0xe97e80 size 0x88 virtual true final false
 ::ArrayW<uint8_t> GetMac() ;

/// @brief Method GetOutputSize addr 0xe97f08 size 0x28 virtual true final false
 int32_t GetOutputSize(int32_t len) ;

/// @brief Method GetUpdateOutputSize addr 0xe97f30 size 0x38 virtual true final false
 int32_t GetUpdateOutputSize(int32_t len) ;

/// @brief Method ProcessAadByte addr 0xe97f68 size 0x68 virtual true final false
 void ProcessAadByte(uint8_t input) ;

/// @brief Method ProcessAadBytes addr 0xe97fd0 size 0xb4 virtual true final false
 void ProcessAadBytes(::ArrayW<uint8_t> input, int32_t off, int32_t len) ;

/// @brief Method ProcessByte addr 0xe98084 size 0x7c virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xe98100 size 0xe0 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe981e0 size 0x40c virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe986a4 size 0x14 virtual true final false
 void Reset() ;

/// @brief Method Clear addr 0xe986b8 size 0x1c virtual true final false
 void Clear(::ArrayW<uint8_t> bs) ;

/// @brief Method GetLSub addr 0xe986d4 size 0x2cc virtual true final false
 ::ArrayW<uint8_t> GetLSub(int32_t n) ;

/// @brief Method ProcessHashBlock addr 0xe989a0 size 0x70 virtual true final false
 void ProcessHashBlock() ;

/// @brief Method ProcessMainBlock addr 0xe98a44 size 0x1d0 virtual true final false
 void ProcessMainBlock(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe98c14 size 0x1ec virtual true final false
 void Reset(bool clearMac) ;

/// @brief Method UpdateHASH addr 0xe98e00 size 0xe0 virtual true final false
 void UpdateHASH(::ArrayW<uint8_t> LSub) ;

/// @brief Method OCB_double addr 0xe97ba8 size 0x98 virtual false final false
static ::ArrayW<uint8_t> OCB_double(::ArrayW<uint8_t> block) ;

/// @brief Method OCB_extend addr 0xe985ec size 0x60 virtual false final false
static void OCB_extend(::ArrayW<uint8_t> block, int32_t pos) ;

/// @brief Method OCB_ntz addr 0xe98a10 size 0x34 virtual false final false
static int32_t OCB_ntz(int64_t x) ;

/// @brief Method ShiftLeft addr 0xe98ee0 size 0x60 virtual false final false
static int32_t ShiftLeft(::ArrayW<uint8_t> block, ::ArrayW<uint8_t> output) ;

/// @brief Method Xor addr 0xe9864c size 0x58 virtual false final false
static void Xor(::ArrayW<uint8_t> block, ::ArrayW<uint8_t> val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::OcbBlockCipher, "Org.BouncyCastle.Crypto.Modes", "OcbBlockCipher");
