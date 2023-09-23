#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
struct PaddingMode;
}
namespace System::Security::Cryptography {
struct CipherMode;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AesCryptoServiceProvider;
}
// Type: System.Security.Cryptography::AesCryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2913))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14532))
// CS Name: System.Security.Cryptography.AesCryptoServiceProvider
class CORDL_TYPE AesCryptoServiceProvider : public System::Security::Cryptography::Aes {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~AesCryptoServiceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "AesCryptoServiceProvider", modifiers: " const&", def_value: None }]
constexpr AesCryptoServiceProvider(AesCryptoServiceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AesCryptoServiceProvider", modifiers: "&&", def_value: None }]
constexpr AesCryptoServiceProvider(AesCryptoServiceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AesCryptoServiceProvider(void* ptr) noexcept : System::Security::Cryptography::Aes(ptr) {
}


  constexpr AesCryptoServiceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AesCryptoServiceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AesCryptoServiceProvider& operator=(AesCryptoServiceProvider&& o) noexcept = default;
  constexpr AesCryptoServiceProvider& operator=(AesCryptoServiceProvider const& o) noexcept = default;
                


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_IV, put=set_IV))  IV;

 ::ArrayW<uint8_t> __declspec(property(get=get_Key, put=set_Key))  Key;

 int32_t __declspec(property(get=get_KeySize, put=set_KeySize))  KeySize;

 int32_t __declspec(property(get=get_FeedbackSize))  FeedbackSize;

 System::Security::Cryptography::CipherMode __declspec(property(get=get_Mode, put=set_Mode))  Mode;

 System::Security::Cryptography::PaddingMode __declspec(property(get=get_Padding, put=set_Padding))  Padding;


// Methods

// Ctor Parameters []
explicit AesCryptoServiceProvider() ;

/// @brief Method .ctor addr 0x267bf50 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method GenerateIV addr 0x267bfb4 size 0x24 virtual true final false
 void GenerateIV() ;

/// @brief Method GenerateKey addr 0x267bfd8 size 0x24 virtual true final false
 void GenerateKey() ;

/// @brief Method CreateDecryptor addr 0x267bffc size 0xfc virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateDecryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method CreateEncryptor addr 0x267c7ec size 0xfc virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateEncryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method get_IV addr 0x267c8e8 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_IV() ;

/// @brief Method set_IV addr 0x267c8f0 size 0x8 virtual true final false
 void set_IV(::ArrayW<uint8_t> value) ;

/// @brief Method get_Key addr 0x267c8f8 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_Key() ;

/// @brief Method set_Key addr 0x267c900 size 0x8 virtual true final false
 void set_Key(::ArrayW<uint8_t> value) ;

/// @brief Method get_KeySize addr 0x267c908 size 0x8 virtual true final false
 int32_t get_KeySize() ;

/// @brief Method set_KeySize addr 0x267c910 size 0x8 virtual true final false
 void set_KeySize(int32_t value) ;

/// @brief Method get_FeedbackSize addr 0x267c918 size 0x8 virtual true final false
 int32_t get_FeedbackSize() ;

/// @brief Method get_Mode addr 0x267c920 size 0x8 virtual true final false
 System::Security::Cryptography::CipherMode get_Mode() ;

/// @brief Method set_Mode addr 0x267c928 size 0x60 virtual true final false
 void set_Mode(System::Security::Cryptography::CipherMode value) ;

/// @brief Method get_Padding addr 0x267c988 size 0x8 virtual true final false
 System::Security::Cryptography::PaddingMode get_Padding() ;

/// @brief Method set_Padding addr 0x267c990 size 0x8 virtual true final false
 void set_Padding(System::Security::Cryptography::PaddingMode value) ;

/// @brief Method CreateDecryptor addr 0x267c998 size 0x50 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateDecryptor() ;

/// @brief Method CreateEncryptor addr 0x267c9e8 size 0x50 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateEncryptor() ;

/// @brief Method Dispose addr 0x267ca38 size 0xc virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::AesCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AesCryptoServiceProvider, "System.Security.Cryptography", "AesCryptoServiceProvider");
