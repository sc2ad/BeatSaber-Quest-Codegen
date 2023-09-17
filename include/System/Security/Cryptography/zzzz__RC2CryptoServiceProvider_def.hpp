#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RC2CryptoServiceProvider;
}
// Type: System.Security.Cryptography::RC2CryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2943))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2944))
// CS Name: System.Security.Cryptography.RC2CryptoServiceProvider
class CORDL_TYPE RC2CryptoServiceProvider : public ::System::Security::Cryptography::RC2 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~RC2CryptoServiceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2CryptoServiceProvider", modifiers: " const&", def_value: None }]
constexpr RC2CryptoServiceProvider(RC2CryptoServiceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC2CryptoServiceProvider", modifiers: "&&", def_value: None }]
constexpr RC2CryptoServiceProvider(RC2CryptoServiceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC2CryptoServiceProvider(void* ptr) noexcept : ::System::Security::Cryptography::RC2(ptr) {
}


  constexpr RC2CryptoServiceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC2CryptoServiceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC2CryptoServiceProvider& operator=(RC2CryptoServiceProvider&& o) noexcept = default;
  constexpr RC2CryptoServiceProvider& operator=(RC2CryptoServiceProvider const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_use40bitSalt, put=__set_m_use40bitSalt))  m_use40bitSalt;

constexpr void __set_m_use40bitSalt(bool value) ;

constexpr bool __get_m_use40bitSalt() const;

static ::ArrayW<::System::Security::Cryptography::KeySizes> __declspec(property(get=__get_s_legalKeySizes, put=__set_s_legalKeySizes))  s_legalKeySizes;

static void __set_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes> value) ;

static ::ArrayW<::System::Security::Cryptography::KeySizes> __get_s_legalKeySizes() ;


// Properties

 int32_t __declspec(property(get=get_EffectiveKeySize))  EffectiveKeySize;


// Methods

// Ctor Parameters []
explicit RC2CryptoServiceProvider() ;

/// @brief Method .ctor addr 0x22f5060 size 0x174 virtual false final false
 void _ctor() ;

/// @brief Method get_EffectiveKeySize addr 0x22f51d4 size 0x8 virtual true final false
 int32_t get_EffectiveKeySize() ;

/// @brief Method CreateEncryptor addr 0x22f51dc size 0xd4 virtual true final false
 ::System::Security::Cryptography::ICryptoTransform CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method CreateDecryptor addr 0x22f52b0 size 0xd4 virtual true final false
 ::System::Security::Cryptography::ICryptoTransform CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method GenerateKey addr 0x22f5384 size 0x7c virtual true final false
 void GenerateKey() ;

/// @brief Method GenerateIV addr 0x22f5400 size 0x6c virtual true final false
 void GenerateIV() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::RC2CryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RC2CryptoServiceProvider, "System.Security.Cryptography", "RC2CryptoServiceProvider");
