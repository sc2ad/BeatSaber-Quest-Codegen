#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_def.hpp"
namespace {
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SHA512SignatureDescription;
}
// Type: System.Security.Cryptography::RSAPKCS1SHA512SignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2967))
// CS Name: System.Security.Cryptography.RSAPKCS1SHA512SignatureDescription
class CORDL_TYPE RSAPKCS1SHA512SignatureDescription : public ::System::Security::Cryptography::RSAPKCS1SignatureDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RSAPKCS1SHA512SignatureDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SHA512SignatureDescription", modifiers: " const&", def_value: None }]
constexpr RSAPKCS1SHA512SignatureDescription(RSAPKCS1SHA512SignatureDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SHA512SignatureDescription", modifiers: "&&", def_value: None }]
constexpr RSAPKCS1SHA512SignatureDescription(RSAPKCS1SHA512SignatureDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RSAPKCS1SHA512SignatureDescription(void* ptr) noexcept : ::System::Security::Cryptography::RSAPKCS1SignatureDescription(ptr) {
}


  constexpr RSAPKCS1SHA512SignatureDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RSAPKCS1SHA512SignatureDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RSAPKCS1SHA512SignatureDescription& operator=(RSAPKCS1SHA512SignatureDescription&& o) noexcept = default;
  constexpr RSAPKCS1SHA512SignatureDescription& operator=(RSAPKCS1SHA512SignatureDescription const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RSAPKCS1SHA512SignatureDescription() ;

/// @brief Method .ctor addr 0x22ff000 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SHA512SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SHA512SignatureDescription, "System.Security.Cryptography", "RSAPKCS1SHA512SignatureDescription");
