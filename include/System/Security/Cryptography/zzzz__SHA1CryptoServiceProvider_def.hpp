#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SHA1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class SHA1Internal;
}
// Forward declare root types
namespace System::Security::Cryptography {
class SHA1CryptoServiceProvider;
}
// Type: System.Security.Cryptography::SHA1CryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2954))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2982))
// CS Name: System.Security.Cryptography.SHA1CryptoServiceProvider
class CORDL_TYPE SHA1CryptoServiceProvider : public System::Security::Cryptography::SHA1 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SHA1CryptoServiceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA1CryptoServiceProvider", modifiers: " const&", def_value: None }]
constexpr SHA1CryptoServiceProvider(SHA1CryptoServiceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA1CryptoServiceProvider", modifiers: "&&", def_value: None }]
constexpr SHA1CryptoServiceProvider(SHA1CryptoServiceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SHA1CryptoServiceProvider(void* ptr) noexcept : System::Security::Cryptography::SHA1(ptr) {
}


  constexpr SHA1CryptoServiceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SHA1CryptoServiceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SHA1CryptoServiceProvider& operator=(SHA1CryptoServiceProvider&& o) noexcept = default;
  constexpr SHA1CryptoServiceProvider& operator=(SHA1CryptoServiceProvider const& o) noexcept = default;
                


// Fields

 System::Security::Cryptography::SHA1Internal __declspec(property(get=__get_sha, put=__set_sha))  sha;

constexpr void __set_sha(System::Security::Cryptography::SHA1Internal value) ;

constexpr System::Security::Cryptography::SHA1Internal __get_sha() const;


// Methods

// Ctor Parameters []
explicit SHA1CryptoServiceProvider() ;

/// @brief Method .ctor addr 0x2303294 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2309588 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2309628 size 0xc virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method HashCore addr 0x2309634 size 0x24 virtual true final false
 void HashCore(::ArrayW<uint8_t> rgb, int32_t ibStart, int32_t cbSize) ;

/// @brief Method HashFinal addr 0x2309658 size 0x20 virtual true final false
 ::ArrayW<uint8_t> HashFinal() ;

/// @brief Method Initialize addr 0x2309678 size 0x18 virtual true final false
 void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::SHA1CryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA1CryptoServiceProvider, "System.Security.Cryptography", "SHA1CryptoServiceProvider");
