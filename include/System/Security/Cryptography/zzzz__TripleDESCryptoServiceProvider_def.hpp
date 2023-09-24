#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class TripleDESCryptoServiceProvider;
}
// Type: System.Security.Cryptography::TripleDESCryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2970))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2971))
// CS Name: System.Security.Cryptography.TripleDESCryptoServiceProvider
class CORDL_TYPE TripleDESCryptoServiceProvider : public System::Security::Cryptography::TripleDES {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TripleDESCryptoServiceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "TripleDESCryptoServiceProvider", modifiers: " const&", def_value: None }]
constexpr TripleDESCryptoServiceProvider(TripleDESCryptoServiceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TripleDESCryptoServiceProvider", modifiers: "&&", def_value: None }]
constexpr TripleDESCryptoServiceProvider(TripleDESCryptoServiceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TripleDESCryptoServiceProvider(void* ptr) noexcept : System::Security::Cryptography::TripleDES(ptr) {
}


  constexpr TripleDESCryptoServiceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TripleDESCryptoServiceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TripleDESCryptoServiceProvider& operator=(TripleDESCryptoServiceProvider&& o) noexcept = default;
  constexpr TripleDESCryptoServiceProvider& operator=(TripleDESCryptoServiceProvider const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::TripleDESCryptoServiceProvider New_ctor() ;

/// @brief Method .ctor addr 0x2300088 size 0x60 virtual false final false
 void _ctor() ;

/// @brief Method CreateEncryptor addr 0x23004cc size 0x114 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method CreateDecryptor addr 0x2300900 size 0x114 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method GenerateKey addr 0x2300a14 size 0xc8 virtual true final false
 void GenerateKey() ;

/// @brief Method GenerateIV addr 0x2300b7c size 0x68 virtual true final false
 void GenerateIV() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::TripleDESCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::TripleDESCryptoServiceProvider, "System.Security.Cryptography", "TripleDESCryptoServiceProvider");
