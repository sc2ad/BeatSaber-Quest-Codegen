#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
struct DSAParameters;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DSA;
}
// Type: System.Security.Cryptography::DSA
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2914))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2927))
// CS Name: System.Security.Cryptography.DSA
class CORDL_TYPE DSA : public System::Security::Cryptography::AsymmetricAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DSA() = default;

// Ctor Parameters [CppParam { name: "", ty: "DSA", modifiers: " const&", def_value: None }]
constexpr DSA(DSA const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DSA", modifiers: "&&", def_value: None }]
constexpr DSA(DSA&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DSA(void* ptr) noexcept : System::Security::Cryptography::AsymmetricAlgorithm(ptr) {
}


  constexpr DSA& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DSA& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DSA& operator=(DSA&& o) noexcept = default;
  constexpr DSA& operator=(DSA const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::DSA New_ctor() ;

/// @brief Method .ctor addr 0x22f1fb0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22f1fb8 size 0x5c virtual false final false
static System::Security::Cryptography::DSA Create() ;

/// @brief Method VerifySignature addr 0x0 size 0xffffffffffffffff virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature) ;

/// @brief Method FromXmlString addr 0x22f2014 size 0x6ac virtual true final false
 void FromXmlString(::StringW xmlString) ;

/// @brief Method ToXmlString addr 0x22f26c0 size 0x468 virtual true final false
 ::StringW ToXmlString(bool includePrivateParameters) ;

/// @brief Method ExportParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters) ;

/// @brief Method ImportParameters addr 0x0 size 0xffffffffffffffff virtual true final false
 void ImportParameters(System::Security::Cryptography::DSAParameters parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::DSA);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DSA, "System.Security.Cryptography", "DSA");
