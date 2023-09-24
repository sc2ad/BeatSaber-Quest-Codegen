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
class RijndaelManaged;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AesManaged;
}
// Type: System.Security.Cryptography::AesManaged
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2913))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14531))
// CS Name: System.Security.Cryptography.AesManaged
class CORDL_TYPE AesManaged : public System::Security::Cryptography::Aes {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~AesManaged() = default;

// Ctor Parameters [CppParam { name: "", ty: "AesManaged", modifiers: " const&", def_value: None }]
constexpr AesManaged(AesManaged const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AesManaged", modifiers: "&&", def_value: None }]
constexpr AesManaged(AesManaged&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AesManaged(void* ptr) noexcept : System::Security::Cryptography::Aes(ptr) {
}


  constexpr AesManaged& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AesManaged& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AesManaged& operator=(AesManaged&& o) noexcept = default;
  constexpr AesManaged& operator=(AesManaged const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::RijndaelManaged __declspec(property(get=__get_m_rijndael, put=__set_m_rijndael))  m_rijndael;

constexpr void __set_m_rijndael(System::Security::Cryptography::RijndaelManaged value) ;

constexpr System::Security::Cryptography::RijndaelManaged __get_m_rijndael() const;


// Properties

 int32_t __declspec(property(get=get_FeedbackSize))  FeedbackSize;

 ::ArrayW<uint8_t> __declspec(property(get=get_IV, put=set_IV))  IV;

 ::ArrayW<uint8_t> __declspec(property(get=get_Key, put=set_Key))  Key;

 int32_t __declspec(property(get=get_KeySize, put=set_KeySize))  KeySize;

 System::Security::Cryptography::CipherMode __declspec(property(get=get_Mode, put=set_Mode))  Mode;

 System::Security::Cryptography::PaddingMode __declspec(property(get=get_Padding, put=set_Padding))  Padding;


// Methods

static System::Security::Cryptography::AesManaged New_ctor() ;

/// @brief Method .ctor addr 0x267b7b8 size 0x164 virtual false final false
 void _ctor() ;

/// @brief Method get_FeedbackSize addr 0x267b91c size 0x20 virtual true final false
 int32_t get_FeedbackSize() ;

/// @brief Method get_IV addr 0x267b93c size 0x20 virtual true final false
 ::ArrayW<uint8_t> get_IV() ;

/// @brief Method set_IV addr 0x267b95c size 0x20 virtual true final false
 void set_IV(::ArrayW<uint8_t> value) ;

/// @brief Method get_Key addr 0x267b97c size 0x20 virtual true final false
 ::ArrayW<uint8_t> get_Key() ;

/// @brief Method set_Key addr 0x267b99c size 0x20 virtual true final false
 void set_Key(::ArrayW<uint8_t> value) ;

/// @brief Method get_KeySize addr 0x267b9bc size 0x24 virtual true final false
 int32_t get_KeySize() ;

/// @brief Method set_KeySize addr 0x267b9e0 size 0x24 virtual true final false
 void set_KeySize(int32_t value) ;

/// @brief Method get_Mode addr 0x267ba04 size 0x24 virtual true final false
 System::Security::Cryptography::CipherMode get_Mode() ;

/// @brief Method set_Mode addr 0x267ba28 size 0x88 virtual true final false
 void set_Mode(System::Security::Cryptography::CipherMode value) ;

/// @brief Method get_Padding addr 0x267bab0 size 0x24 virtual true final false
 System::Security::Cryptography::PaddingMode get_Padding() ;

/// @brief Method set_Padding addr 0x267bad4 size 0x24 virtual true final false
 void set_Padding(System::Security::Cryptography::PaddingMode value) ;

/// @brief Method CreateDecryptor addr 0x267baf8 size 0x24 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateDecryptor() ;

/// @brief Method CreateDecryptor addr 0x267bb1c size 0x14c virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateDecryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method CreateEncryptor addr 0x267bc68 size 0x24 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateEncryptor() ;

/// @brief Method CreateEncryptor addr 0x267bc8c size 0x14c virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateEncryptor(::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) ;

/// @brief Method Dispose addr 0x267bdd8 size 0x130 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method GenerateIV addr 0x267bf08 size 0x24 virtual true final false
 void GenerateIV() ;

/// @brief Method GenerateKey addr 0x267bf2c size 0x24 virtual true final false
 void GenerateKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::AesManaged);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AesManaged, "System.Security.Cryptography", "AesManaged");
