#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricSignatureDeformatter;
}
// Type: System.Security.Cryptography::AsymmetricSignatureDeformatter
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2915))
// CS Name: System.Security.Cryptography.AsymmetricSignatureDeformatter
class CORDL_TYPE AsymmetricSignatureDeformatter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AsymmetricSignatureDeformatter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureDeformatter", modifiers: " const&", def_value: None }]
constexpr AsymmetricSignatureDeformatter(AsymmetricSignatureDeformatter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureDeformatter", modifiers: "&&", def_value: None }]
constexpr AsymmetricSignatureDeformatter(AsymmetricSignatureDeformatter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsymmetricSignatureDeformatter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsymmetricSignatureDeformatter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsymmetricSignatureDeformatter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsymmetricSignatureDeformatter& operator=(AsymmetricSignatureDeformatter&& o) noexcept = default;
  constexpr AsymmetricSignatureDeformatter& operator=(AsymmetricSignatureDeformatter const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AsymmetricSignatureDeformatter() ;

/// @brief Method .ctor addr 0x22efdb4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method SetKey addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm key) ;

/// @brief Method SetHashAlgorithm addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetHashAlgorithm(::StringW strName) ;

/// @brief Method VerifySignature addr 0x0 size 0xffffffffffffffff virtual true final false
 bool VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricSignatureDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricSignatureDeformatter, "System.Security.Cryptography", "AsymmetricSignatureDeformatter");
