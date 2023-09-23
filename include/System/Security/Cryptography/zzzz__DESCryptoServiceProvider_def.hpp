#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__DES_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DESCryptoServiceProvider;
}
// Type: System.Security.Cryptography::DESCryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2925))
// CS Name: System.Security.Cryptography.DESCryptoServiceProvider
class CORDL_TYPE DESCryptoServiceProvider : public System::Security::Cryptography::DES {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~DESCryptoServiceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "DESCryptoServiceProvider", modifiers: " const&", def_value: None }]
constexpr DESCryptoServiceProvider(DESCryptoServiceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DESCryptoServiceProvider", modifiers: "&&", def_value: None }]
constexpr DESCryptoServiceProvider(DESCryptoServiceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DESCryptoServiceProvider(void* ptr) noexcept : System::Security::Cryptography::DES(ptr) {
}


  constexpr DESCryptoServiceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DESCryptoServiceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DESCryptoServiceProvider& operator=(DESCryptoServiceProvider&& o) noexcept = default;
  constexpr DESCryptoServiceProvider& operator=(DESCryptoServiceProvider const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DESCryptoServiceProvider() ;

/// @brief Method .ctor addr 0x22f1afc size 0xd0 virtual false final false
 void _ctor() ;

/// @brief Method CreateEncryptor addr 0x22f1bcc size 0x148 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method CreateDecryptor addr 0x22f1d14 size 0x148 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method GenerateKey addr 0x22f1e5c size 0xe8 virtual true final false
 void GenerateKey() ;

/// @brief Method GenerateIV addr 0x22f1f44 size 0x6c virtual true final false
 void GenerateIV() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::DESCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DESCryptoServiceProvider, "System.Security.Cryptography", "DESCryptoServiceProvider");
