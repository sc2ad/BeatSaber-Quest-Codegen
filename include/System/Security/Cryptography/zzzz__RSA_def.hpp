#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
struct RSAParameters;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSA;
}
// Type: System.Security.Cryptography::RSA
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2914))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2952))
// CS Name: System.Security.Cryptography.RSA
class CORDL_TYPE RSA : public System::Security::Cryptography::AsymmetricAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RSA() = default;

// Ctor Parameters [CppParam { name: "", ty: "RSA", modifiers: " const&", def_value: None }]
constexpr RSA(RSA const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RSA", modifiers: "&&", def_value: None }]
constexpr RSA(RSA&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RSA(void* ptr) noexcept : System::Security::Cryptography::AsymmetricAlgorithm(ptr) {
}


  constexpr RSA& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RSA& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RSA& operator=(RSA&& o) noexcept = default;
  constexpr RSA& operator=(RSA const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RSA() ;

/// @brief Method .ctor addr 0x22fa444 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22fa44c size 0x74 virtual false final false
static System::Security::Cryptography::RSA Create() ;

/// @brief Method EncryptValue addr 0x22fa4ec size 0x60 virtual true final false
 ::ArrayW<uint8_t> EncryptValue(::ArrayW<uint8_t> rgb) ;

/// @brief Method FromXmlString addr 0x22fa54c size 0x558 virtual true final false
 void FromXmlString(::StringW xmlString) ;

/// @brief Method ToXmlString addr 0x22faaa4 size 0x43c virtual true final false
 ::StringW ToXmlString(bool includePrivateParameters) ;

/// @brief Method ExportParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters) ;

/// @brief Method ImportParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 void ImportParameters(System::Security::Cryptography::RSAParameters parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::RSA);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSA, "System.Security.Cryptography", "RSA");
