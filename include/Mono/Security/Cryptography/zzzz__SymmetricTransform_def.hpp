#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System::Security::Cryptography {
struct PaddingMode;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class SymmetricTransform;
}
// Type: Mono.Security.Cryptography::SymmetricTransform
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2284))
// CS Name: Mono.Security.Cryptography.SymmetricTransform
class CORDL_TYPE SymmetricTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Security::Cryptography::ICryptoTransform
constexpr operator  System::Security::Cryptography::ICryptoTransform() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SymmetricTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricTransform", modifiers: " const&", def_value: None }]
constexpr SymmetricTransform(SymmetricTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricTransform", modifiers: "&&", def_value: None }]
constexpr SymmetricTransform(SymmetricTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SymmetricTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SymmetricTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SymmetricTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SymmetricTransform& operator=(SymmetricTransform&& o) noexcept = default;
  constexpr SymmetricTransform& operator=(SymmetricTransform const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::SymmetricAlgorithm __declspec(property(get=__get_algo, put=__set_algo))  algo;

constexpr void __set_algo(System::Security::Cryptography::SymmetricAlgorithm value) ;

constexpr System::Security::Cryptography::SymmetricAlgorithm __get_algo() const;

 bool __declspec(property(get=__get_encrypt, put=__set_encrypt))  encrypt;

constexpr void __set_encrypt(bool value) ;

constexpr bool __get_encrypt() const;

 int32_t __declspec(property(get=__get_BlockSizeByte, put=__set_BlockSizeByte))  BlockSizeByte;

constexpr void __set_BlockSizeByte(int32_t value) ;

constexpr int32_t __get_BlockSizeByte() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_temp, put=__set_temp))  temp;

constexpr void __set_temp(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_temp() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_temp2, put=__set_temp2))  temp2;

constexpr void __set_temp2(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_temp2() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_workBuff, put=__set_workBuff))  workBuff;

constexpr void __set_workBuff(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_workBuff() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_workout, put=__set_workout))  workout;

constexpr void __set_workout(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_workout() const;

 System::Security::Cryptography::PaddingMode __declspec(property(get=__get_padmode, put=__set_padmode))  padmode;

constexpr void __set_padmode(System::Security::Cryptography::PaddingMode value) ;

constexpr System::Security::Cryptography::PaddingMode __get_padmode() const;

 int32_t __declspec(property(get=__get_FeedBackByte, put=__set_FeedBackByte))  FeedBackByte;

constexpr void __set_FeedBackByte(int32_t value) ;

constexpr int32_t __get_FeedBackByte() const;

 bool __declspec(property(get=__get_m_disposed, put=__set_m_disposed))  m_disposed;

constexpr void __set_m_disposed(bool value) ;

constexpr bool __get_m_disposed() const;

 bool __declspec(property(get=__get_lastBlock, put=__set_lastBlock))  lastBlock;

constexpr void __set_lastBlock(bool value) ;

constexpr bool __get_lastBlock() const;

 System::Security::Cryptography::RandomNumberGenerator __declspec(property(get=__get__rng, put=__set__rng))  _rng;

constexpr void __set__rng(System::Security::Cryptography::RandomNumberGenerator value) ;

constexpr System::Security::Cryptography::RandomNumberGenerator __get__rng() const;


// Properties

 bool __declspec(property(get=get_CanTransformMultipleBlocks))  CanTransformMultipleBlocks;

 int32_t __declspec(property(get=get_InputBlockSize))  InputBlockSize;

 int32_t __declspec(property(get=get_OutputBlockSize))  OutputBlockSize;

 bool __declspec(property(get=get_KeepLastBlock))  KeepLastBlock;


// Methods

// Ctor Parameters [CppParam { name: "symmAlgo", ty: "System::Security::Cryptography::SymmetricAlgorithm", modifiers: "", def_value: None }, CppParam { name: "encryption", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rgbIV", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SymmetricTransform(System::Security::Cryptography::SymmetricAlgorithm symmAlgo, bool encryption, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method .ctor addr 0x22b79b8 size 0x2c8 virtual false final false
 void _ctor(System::Security::Cryptography::SymmetricAlgorithm symmAlgo, bool encryption, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method Finalize addr 0x22b7c80 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method System.IDisposable.Dispose addr 0x22b7d20 size 0x6c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method Dispose addr 0x22b7d8c size 0x54 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_CanTransformMultipleBlocks addr 0x22b7de0 size 0x8 virtual true final false
 bool get_CanTransformMultipleBlocks() ;

/// @brief Method get_InputBlockSize addr 0x22b7de8 size 0x8 virtual true final false
 int32_t get_InputBlockSize() ;

/// @brief Method get_OutputBlockSize addr 0x22b7df0 size 0x8 virtual true final false
 int32_t get_OutputBlockSize() ;

/// @brief Method Transform addr 0x22b7df8 size 0x164 virtual true final false
 void Transform(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method ECB addr 0x0 size 0xffffffffffffffff virtual true final false
 void ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method CBC addr 0x22b8044 size 0x164 virtual true final false
 void CBC(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method CFB addr 0x22b81a8 size 0x1c8 virtual true final false
 void CFB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method OFB addr 0x22b8370 size 0x50 virtual true final false
 void OFB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method CTS addr 0x22b83c0 size 0x50 virtual true final false
 void CTS(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method CheckInput addr 0x22b8410 size 0x154 virtual false final false
 void CheckInput(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

/// @brief Method TransformBlock addr 0x22b8564 size 0x218 virtual true final false
 int32_t TransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer, int32_t outputOffset) ;

/// @brief Method get_KeepLastBlock addr 0x22b877c size 0x24 virtual false final false
 bool get_KeepLastBlock() ;

/// @brief Method InternalTransformBlock addr 0x22b87a0 size 0x1bc virtual false final false
 int32_t InternalTransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer, int32_t outputOffset) ;

/// @brief Method Random addr 0x22b895c size 0xb0 virtual false final false
 void Random(::ArrayW<uint8_t> buffer, int32_t start, int32_t length) ;

/// @brief Method ThrowBadPaddingException addr 0x22b8a0c size 0x1a8 virtual false final false
 void ThrowBadPaddingException(System::Security::Cryptography::PaddingMode padding, int32_t length, int32_t position) ;

/// @brief Method FinalEncrypt addr 0x22b8bf8 size 0x2a0 virtual true final false
 ::ArrayW<uint8_t> FinalEncrypt(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

/// @brief Method FinalDecrypt addr 0x22b8e98 size 0x2ac virtual true final false
 ::ArrayW<uint8_t> FinalDecrypt(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

/// @brief Method TransformFinalBlock addr 0x22b9144 size 0xb4 virtual true final false
 ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(Mono::Security::Cryptography::SymmetricTransform);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::SymmetricTransform, "Mono.Security.Cryptography", "SymmetricTransform");
