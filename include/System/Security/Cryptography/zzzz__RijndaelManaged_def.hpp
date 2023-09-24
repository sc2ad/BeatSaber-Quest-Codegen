#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__Rijndael_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
struct CipherMode;
}
namespace System::Security::Cryptography {
struct RijndaelManagedTransformMode;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RijndaelManaged;
}
// Type: System.Security.Cryptography::RijndaelManaged
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2945))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2946))
// CS Name: System.Security.Cryptography.RijndaelManaged
class CORDL_TYPE RijndaelManaged : public System::Security::Cryptography::Rijndael {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~RijndaelManaged() = default;

// Ctor Parameters [CppParam { name: "", ty: "RijndaelManaged", modifiers: " const&", def_value: None }]
constexpr RijndaelManaged(RijndaelManaged const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RijndaelManaged", modifiers: "&&", def_value: None }]
constexpr RijndaelManaged(RijndaelManaged&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RijndaelManaged(void* ptr) noexcept : System::Security::Cryptography::Rijndael(ptr) {
}


  constexpr RijndaelManaged& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RijndaelManaged& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RijndaelManaged& operator=(RijndaelManaged&& o) noexcept = default;
  constexpr RijndaelManaged& operator=(RijndaelManaged const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::RijndaelManaged New_ctor() ;

/// @brief Method .ctor addr 0x22f5718 size 0xe0 virtual false final false
 void _ctor() ;

/// @brief Method CreateEncryptor addr 0x22f57f8 size 0x14 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method CreateDecryptor addr 0x22f5908 size 0x14 virtual true final false
 System::Security::Cryptography::ICryptoTransform CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) ;

/// @brief Method GenerateKey addr 0x22f591c size 0x30 virtual true final false
 void GenerateKey() ;

/// @brief Method GenerateIV addr 0x22f594c size 0x30 virtual true final false
 void GenerateIV() ;

/// @brief Method NewEncryptor addr 0x22f580c size 0xfc virtual false final false
 System::Security::Cryptography::ICryptoTransform NewEncryptor(::ArrayW<uint8_t> rgbKey, System::Security::Cryptography::CipherMode mode, ::ArrayW<uint8_t> rgbIV, int32_t feedbackSize, System::Security::Cryptography::RijndaelManagedTransformMode encryptMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::RijndaelManaged);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RijndaelManaged, "System.Security.Cryptography", "RijndaelManaged");
