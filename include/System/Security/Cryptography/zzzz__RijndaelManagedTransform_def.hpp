#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
struct CipherMode;
}
namespace System::Security::Cryptography {
struct RijndaelManagedTransformMode;
}
namespace System::Security::Cryptography {
struct PaddingMode;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RijndaelManagedTransform;
}
// Type: System.Security.Cryptography::RijndaelManagedTransform
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2948))
// CS Name: System.Security.Cryptography.RijndaelManagedTransform
class CORDL_TYPE RijndaelManagedTransform : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Security::Cryptography::ICryptoTransform
constexpr operator  ::System::Security::Cryptography::ICryptoTransform() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RijndaelManagedTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "RijndaelManagedTransform", modifiers: " const&", def_value: None }]
constexpr RijndaelManagedTransform(RijndaelManagedTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RijndaelManagedTransform", modifiers: "&&", def_value: None }]
constexpr RijndaelManagedTransform(RijndaelManagedTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RijndaelManagedTransform(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RijndaelManagedTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RijndaelManagedTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RijndaelManagedTransform& operator=(RijndaelManagedTransform&& o) noexcept = default;
  constexpr RijndaelManagedTransform& operator=(RijndaelManagedTransform const& o) noexcept = default;
                


// Fields

 ::System::Security::Cryptography::CipherMode __declspec(property(get=__get_m_cipherMode, put=__set_m_cipherMode))  m_cipherMode;

constexpr void __set_m_cipherMode(::System::Security::Cryptography::CipherMode value) ;

constexpr ::System::Security::Cryptography::CipherMode __get_m_cipherMode() const;

 ::System::Security::Cryptography::PaddingMode __declspec(property(get=__get_m_paddingValue, put=__set_m_paddingValue))  m_paddingValue;

constexpr void __set_m_paddingValue(::System::Security::Cryptography::PaddingMode value) ;

constexpr ::System::Security::Cryptography::PaddingMode __get_m_paddingValue() const;

 ::System::Security::Cryptography::RijndaelManagedTransformMode __declspec(property(get=__get_m_transformMode, put=__set_m_transformMode))  m_transformMode;

constexpr void __set_m_transformMode(::System::Security::Cryptography::RijndaelManagedTransformMode value) ;

constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode __get_m_transformMode() const;

 int32_t __declspec(property(get=__get_m_blockSizeBits, put=__set_m_blockSizeBits))  m_blockSizeBits;

constexpr void __set_m_blockSizeBits(int32_t value) ;

constexpr int32_t __get_m_blockSizeBits() const;

 int32_t __declspec(property(get=__get_m_blockSizeBytes, put=__set_m_blockSizeBytes))  m_blockSizeBytes;

constexpr void __set_m_blockSizeBytes(int32_t value) ;

constexpr int32_t __get_m_blockSizeBytes() const;

 int32_t __declspec(property(get=__get_m_inputBlockSize, put=__set_m_inputBlockSize))  m_inputBlockSize;

constexpr void __set_m_inputBlockSize(int32_t value) ;

constexpr int32_t __get_m_inputBlockSize() const;

 int32_t __declspec(property(get=__get_m_outputBlockSize, put=__set_m_outputBlockSize))  m_outputBlockSize;

constexpr void __set_m_outputBlockSize(int32_t value) ;

constexpr int32_t __get_m_outputBlockSize() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_encryptKeyExpansion, put=__set_m_encryptKeyExpansion))  m_encryptKeyExpansion;

constexpr void __set_m_encryptKeyExpansion(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_encryptKeyExpansion() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_decryptKeyExpansion, put=__set_m_decryptKeyExpansion))  m_decryptKeyExpansion;

constexpr void __set_m_decryptKeyExpansion(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_decryptKeyExpansion() const;

 int32_t __declspec(property(get=__get_m_Nr, put=__set_m_Nr))  m_Nr;

constexpr void __set_m_Nr(int32_t value) ;

constexpr int32_t __get_m_Nr() const;

 int32_t __declspec(property(get=__get_m_Nb, put=__set_m_Nb))  m_Nb;

constexpr void __set_m_Nb(int32_t value) ;

constexpr int32_t __get_m_Nb() const;

 int32_t __declspec(property(get=__get_m_Nk, put=__set_m_Nk))  m_Nk;

constexpr void __set_m_Nk(int32_t value) ;

constexpr int32_t __get_m_Nk() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_encryptindex, put=__set_m_encryptindex))  m_encryptindex;

constexpr void __set_m_encryptindex(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_encryptindex() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_decryptindex, put=__set_m_decryptindex))  m_decryptindex;

constexpr void __set_m_decryptindex(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_decryptindex() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_IV, put=__set_m_IV))  m_IV;

constexpr void __set_m_IV(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_IV() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_lastBlockBuffer, put=__set_m_lastBlockBuffer))  m_lastBlockBuffer;

constexpr void __set_m_lastBlockBuffer(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_lastBlockBuffer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_depadBuffer, put=__set_m_depadBuffer))  m_depadBuffer;

constexpr void __set_m_depadBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_depadBuffer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_shiftRegister, put=__set_m_shiftRegister))  m_shiftRegister;

constexpr void __set_m_shiftRegister(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_shiftRegister() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_s_Sbox, put=__set_s_Sbox))  s_Sbox;

static void __set_s_Sbox(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_s_Sbox() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_s_Rcon, put=__set_s_Rcon))  s_Rcon;

static void __set_s_Rcon(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_Rcon() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_s_T, put=__set_s_T))  s_T;

static void __set_s_T(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_T() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_s_TF, put=__set_s_TF))  s_TF;

static void __set_s_TF(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_TF() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_s_iT, put=__set_s_iT))  s_iT;

static void __set_s_iT(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_iT() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_s_iTF, put=__set_s_iTF))  s_iTF;

static void __set_s_iTF(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_iTF() ;


// Properties

 int32_t __declspec(property(get=get_InputBlockSize))  InputBlockSize;

 int32_t __declspec(property(get=get_OutputBlockSize))  OutputBlockSize;

 bool __declspec(property(get=get_CanTransformMultipleBlocks))  CanTransformMultipleBlocks;


// Methods

// Ctor Parameters [CppParam { name: "rgbKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::Security::Cryptography::CipherMode", modifiers: "", def_value: None }, CppParam { name: "rgbIV", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "blockSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "feedbackSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PaddingValue", ty: "::System::Security::Cryptography::PaddingMode", modifiers: "", def_value: None }, CppParam { name: "transformMode", ty: "::System::Security::Cryptography::RijndaelManagedTransformMode", modifiers: "", def_value: None }]
explicit RijndaelManagedTransform(::ArrayW<uint8_t> rgbKey, ::System::Security::Cryptography::CipherMode mode, ::ArrayW<uint8_t> rgbIV, int32_t blockSize, int32_t feedbackSize, ::System::Security::Cryptography::PaddingMode PaddingValue, ::System::Security::Cryptography::RijndaelManagedTransformMode transformMode) ;

/// @brief Method .ctor addr 0x22f597c size 0x610 virtual false final false
 void _ctor(::ArrayW<uint8_t> rgbKey, ::System::Security::Cryptography::CipherMode mode, ::ArrayW<uint8_t> rgbIV, int32_t blockSize, int32_t feedbackSize, ::System::Security::Cryptography::PaddingMode PaddingValue, ::System::Security::Cryptography::RijndaelManagedTransformMode transformMode) ;

/// @brief Method Dispose addr 0x22f64e8 size 0x8 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x22f64f0 size 0xbc virtual false final false
 void Dispose(bool disposing) ;

/// @brief Method get_InputBlockSize addr 0x22f65ac size 0x8 virtual true final true
 int32_t get_InputBlockSize() ;

/// @brief Method get_OutputBlockSize addr 0x22f65b4 size 0x8 virtual true final true
 int32_t get_OutputBlockSize() ;

/// @brief Method get_CanTransformMultipleBlocks addr 0x22f65bc size 0x8 virtual true final true
 bool get_CanTransformMultipleBlocks() ;

/// @brief Method TransformBlock addr 0x22f65c4 size 0x2d8 virtual true final true
 int32_t TransformBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t> outputBuffer, int32_t outputOffset) ;

/// @brief Method TransformFinalBlock addr 0x22f7eb8 size 0x2e8 virtual true final true
 ::ArrayW<uint8_t> TransformFinalBlock(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount) ;

/// @brief Method Reset addr 0x22f81a0 size 0x68 virtual false final false
 void Reset() ;

/// @brief Method EncryptData addr 0x22f689c size 0xbb0 virtual false final false
 int32_t EncryptData(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ByRef<::ArrayW<uint8_t>> outputBuffer, int32_t outputOffset, ::System::Security::Cryptography::PaddingMode paddingMode, bool fLast) ;

/// @brief Method DecryptData addr 0x22f744c size 0xa6c virtual false final false
 int32_t DecryptData(::ArrayW<uint8_t> inputBuffer, int32_t inputOffset, int32_t inputCount, ByRef<::ArrayW<uint8_t>> outputBuffer, int32_t outputOffset, ::System::Security::Cryptography::PaddingMode paddingMode, bool fLast) ;

/// @brief Method Enc addr 0x22f8208 size 0x1c4 virtual false final false
 void Enc(void* encryptindex, void* encryptKeyExpansion, void* T, void* TF, void* work, void* temp) ;

/// @brief Method Dec addr 0x22f83cc size 0x1e0 virtual false final false
 void Dec(void* decryptindex, void* decryptKeyExpansion, void* iT, void* iTF, void* work, void* temp) ;

/// @brief Method GenerateKeyExpansion addr 0x22f5f8c size 0x55c virtual false final false
 void GenerateKeyExpansion(::ArrayW<uint8_t> rgbKey) ;

/// @brief Method rot1 addr 0x22f86a4 size 0x8 virtual false final false
static int32_t rot1(int32_t val) ;

/// @brief Method rot2 addr 0x22f869c size 0x8 virtual false final false
static int32_t rot2(int32_t val) ;

/// @brief Method rot3 addr 0x22f85ac size 0x8 virtual false final false
static int32_t rot3(int32_t val) ;

/// @brief Method SubWord addr 0x22f85b4 size 0xc4 virtual false final false
static int32_t SubWord(int32_t a) ;

/// @brief Method MulX addr 0x22f8678 size 0x24 virtual false final false
static int32_t MulX(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::RijndaelManagedTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RijndaelManagedTransform, "System.Security.Cryptography", "RijndaelManagedTransform");
