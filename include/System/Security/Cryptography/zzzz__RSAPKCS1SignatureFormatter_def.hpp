#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureFormatter;
}
// Type: System.Security.Cryptography::RSAPKCS1SignatureFormatter
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2916))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2980))
// CS Name: System.Security.Cryptography.RSAPKCS1SignatureFormatter
class CORDL_TYPE RSAPKCS1SignatureFormatter : public System::Security::Cryptography::AsymmetricSignatureFormatter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RSAPKCS1SignatureFormatter() = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureFormatter", modifiers: " const&", def_value: None }]
constexpr RSAPKCS1SignatureFormatter(RSAPKCS1SignatureFormatter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureFormatter", modifiers: "&&", def_value: None }]
constexpr RSAPKCS1SignatureFormatter(RSAPKCS1SignatureFormatter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RSAPKCS1SignatureFormatter(void* ptr) noexcept : System::Security::Cryptography::AsymmetricSignatureFormatter(ptr) {
}


  constexpr RSAPKCS1SignatureFormatter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RSAPKCS1SignatureFormatter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RSAPKCS1SignatureFormatter& operator=(RSAPKCS1SignatureFormatter&& o) noexcept = default;
  constexpr RSAPKCS1SignatureFormatter& operator=(RSAPKCS1SignatureFormatter const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RSAPKCS1SignatureFormatter() ;

/// @brief Method .ctor addr 0x230328c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::RSAPKCS1SignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAPKCS1SignatureFormatter, "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
