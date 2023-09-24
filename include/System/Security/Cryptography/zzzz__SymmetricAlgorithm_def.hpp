#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class KeySizes;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
struct PaddingMode;
}
namespace System::Security::Cryptography {
struct CipherMode;
}
// Forward declare root types
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
// Type: System.Security.Cryptography::SymmetricAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2969))
// CS Name: System.Security.Cryptography.SymmetricAlgorithm
class CORDL_TYPE SymmetricAlgorithm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SymmetricAlgorithm() = default;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricAlgorithm", modifiers: " const&", def_value: None }]
constexpr SymmetricAlgorithm(SymmetricAlgorithm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SymmetricAlgorithm", modifiers: "&&", def_value: None }]
constexpr SymmetricAlgorithm(SymmetricAlgorithm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SymmetricAlgorithm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SymmetricAlgorithm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SymmetricAlgorithm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SymmetricAlgorithm& operator=(SymmetricAlgorithm&& o) noexcept = default;
  constexpr SymmetricAlgorithm& operator=(SymmetricAlgorithm const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_BlockSizeValue, put=__set_BlockSizeValue))  BlockSizeValue;

constexpr void __set_BlockSizeValue(int32_t value) ;

constexpr int32_t __get_BlockSizeValue() const;

 int32_t __declspec(property(get=__get_FeedbackSizeValue, put=__set_FeedbackSizeValue))  FeedbackSizeValue;

constexpr void __set_FeedbackSizeValue(int32_t value) ;

constexpr int32_t __get_FeedbackSizeValue() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_IVValue, put=__set_IVValue))  IVValue;

constexpr void __set_IVValue(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_IVValue() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_KeyValue, put=__set_KeyValue))  KeyValue;

constexpr void __set_KeyValue(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_KeyValue() const;

 ::ArrayW<System::Security::Cryptography::KeySizes> __declspec(property(get=__get_LegalBlockSizesValue, put=__set_LegalBlockSizesValue))  LegalBlockSizesValue;

constexpr void __set_LegalBlockSizesValue(::ArrayW<System::Security::Cryptography::KeySizes> value) ;

constexpr ::ArrayW<System::Security::Cryptography::KeySizes> __get_LegalBlockSizesValue() const;

 ::ArrayW<System::Security::Cryptography::KeySizes> __declspec(property(get=__get_LegalKeySizesValue, put=__set_LegalKeySizesValue))  LegalKeySizesValue;

constexpr void __set_LegalKeySizesValue(::ArrayW<System::Security::Cryptography::KeySizes> value) ;

constexpr ::ArrayW<System::Security::Cryptography::KeySizes> __get_LegalKeySizesValue() const;

 int32_t __declspec(property(get=__get_KeySizeValue, put=__set_KeySizeValue))  KeySizeValue;

constexpr void __set_KeySizeValue(int32_t value) ;

constexpr int32_t __get_KeySizeValue() const;

 System::Security::Cryptography::CipherMode __declspec(property(get=__get_ModeValue, put=__set_ModeValue))  ModeValue;

constexpr void __set_ModeValue(System::Security::Cryptography::CipherMode value) ;

constexpr System::Security::Cryptography::CipherMode __get_ModeValue() const;

 System::Security::Cryptography::PaddingMode __declspec(property(get=__get_PaddingValue, put=__set_PaddingValue))  PaddingValue;

constexpr void __set_PaddingValue(System::Security::Cryptography::PaddingMode value) ;

constexpr System::Security::Cryptography::PaddingMode __get_PaddingValue() const;


// Properties

 int32_t __declspec(property(get=get_BlockSize, put=set_BlockSize))  BlockSize;

 int32_t __declspec(property(get=get_FeedbackSize))  FeedbackSize;

 ::ArrayW<uint8_t> __declspec(property(get=get_IV, put=set_IV))  IV;

 ::ArrayW<uint8_t> __declspec(property(get=get_Key, put=set_Key))  Key;

 ::ArrayW<System::Security::Cryptography::KeySizes> __declspec(property(get=get_LegalKeySizes))  LegalKeySizes;

 int32_t __declspec(property(get=get_KeySize, put=set_KeySize))  KeySize;

 System::Security::Cryptography::CipherMode __declspec(property(get=get_Mode, put=set_Mode))  Mode;

 System::Security::Cryptography::PaddingMode __declspec(property(get=get_Padding, put=set_Padding))  Padding;


// Methods

static System::Security::Cryptography::SymmetricAlgorithm New_ctor() ;

/// @brief Method .ctor addr 0x22ff120 size 0x24 virtual false final false
 void _ctor() ;

/// @brief Method Dispose addr 0x22ff144 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Clear addr 0x22ff1b0 size 0x94 virtual false final false
 void Clear() ;

/// @brief Method Dispose addr 0x22ff244 size 0x4c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_BlockSize addr 0x22ff290 size 0x8 virtual true final false
 int32_t get_BlockSize() ;

/// @brief Method set_BlockSize addr 0x22ff298 size 0xf0 virtual true final false
 void set_BlockSize(int32_t value) ;

/// @brief Method get_FeedbackSize addr 0x22ff388 size 0x8 virtual true final false
 int32_t get_FeedbackSize() ;

/// @brief Method get_IV addr 0x22ff390 size 0x94 virtual true final false
 ::ArrayW<uint8_t> get_IV() ;

/// @brief Method set_IV addr 0x22ff424 size 0x168 virtual true final false
 void set_IV(::ArrayW<uint8_t> value) ;

/// @brief Method get_Key addr 0x22ff58c size 0x94 virtual true final false
 ::ArrayW<uint8_t> get_Key() ;

/// @brief Method set_Key addr 0x22ff620 size 0x160 virtual true final false
 void set_Key(::ArrayW<uint8_t> value) ;

/// @brief Method get_LegalKeySizes addr 0x22ff81c size 0x78 virtual true final false
 ::ArrayW<System::Security::Cryptography::KeySizes> get_LegalKeySizes() ;

/// @brief Method get_KeySize addr 0x22ff894 size 0x8 virtual true final false
 int32_t get_KeySize() ;

/// @brief Method set_KeySize addr 0x22ff89c size 0x84 virtual true final false
 void set_KeySize(int32_t value) ;

/// @brief Method get_Mode addr 0x22ff920 size 0x8 virtual true final false
 System::Security::Cryptography::CipherMode get_Mode() ;

/// @brief Method set_Mode addr 0x22ff928 size 0x7c virtual true final false
 void set_Mode(System::Security::Cryptography::CipherMode value) ;

/// @brief Method get_Padding addr 0x22ff9a4 size 0x8 virtual true final false
 System::Security::Cryptography::PaddingMode get_Padding() ;

/// @brief Method set_Padding addr 0x22ff9ac size 0x7c virtual true final false
 void set_Padding(System::Security::Cryptography::PaddingMode value) ;

/// @brief Method ValidKeySize addr 0x22ff780 size 0x9c virtual false final false
 bool ValidKeySize(int32_t bitLength) ;

/// @brief Method Create addr 0x22ffa28 size 0xa0 virtual false final false
static System::Security::Cryptography::SymmetricAlgorithm Create(::StringW algName) ;

/// @brief Method CreateEncryptor addr 0x22ffb20 size 0x50 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateEncryptor() ;

/// @brief Method CreateEncryptor addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method CreateDecryptor addr 0x22ffb70 size 0x50 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateDecryptor() ;

/// @brief Method CreateDecryptor addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method GenerateKey addr 0x0 size 0xffffffffffffffff virtual true final false
 void GenerateKey() ;

/// @brief Method GenerateIV addr 0x0 size 0xffffffffffffffff virtual true final false
 void GenerateIV() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::SymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SymmetricAlgorithm, "System.Security.Cryptography", "SymmetricAlgorithm");
