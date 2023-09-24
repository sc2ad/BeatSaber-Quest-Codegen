#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricSignatureFormatter;
}
// Type: System.Security.Cryptography::AsymmetricSignatureFormatter
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2916))
// CS Name: System.Security.Cryptography.AsymmetricSignatureFormatter
class CORDL_TYPE AsymmetricSignatureFormatter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AsymmetricSignatureFormatter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureFormatter", modifiers: " const&", def_value: None }]
constexpr AsymmetricSignatureFormatter(AsymmetricSignatureFormatter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureFormatter", modifiers: "&&", def_value: None }]
constexpr AsymmetricSignatureFormatter(AsymmetricSignatureFormatter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsymmetricSignatureFormatter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsymmetricSignatureFormatter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsymmetricSignatureFormatter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsymmetricSignatureFormatter& operator=(AsymmetricSignatureFormatter&& o) noexcept = default;
  constexpr AsymmetricSignatureFormatter& operator=(AsymmetricSignatureFormatter const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::AsymmetricSignatureFormatter New_ctor() ;

/// @brief Method .ctor addr 0x22efdbc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::AsymmetricSignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsymmetricSignatureFormatter, "System.Security.Cryptography", "AsymmetricSignatureFormatter");
