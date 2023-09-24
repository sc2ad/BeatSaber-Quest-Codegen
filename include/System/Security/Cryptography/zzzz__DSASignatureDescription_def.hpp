#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__SignatureDescription_def.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class DSASignatureDescription;
}
// Type: System.Security.Cryptography::DSASignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2962))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2968))
// CS Name: System.Security.Cryptography.DSASignatureDescription
class CORDL_TYPE DSASignatureDescription : public System::Security::Cryptography::SignatureDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DSASignatureDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureDescription", modifiers: " const&", def_value: None }]
constexpr DSASignatureDescription(DSASignatureDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DSASignatureDescription", modifiers: "&&", def_value: None }]
constexpr DSASignatureDescription(DSASignatureDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DSASignatureDescription(void* ptr) noexcept : System::Security::Cryptography::SignatureDescription(ptr) {
}


  constexpr DSASignatureDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DSASignatureDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DSASignatureDescription& operator=(DSASignatureDescription&& o) noexcept = default;
  constexpr DSASignatureDescription& operator=(DSASignatureDescription const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::DSASignatureDescription New_ctor() ;

/// @brief Method .ctor addr 0x22ff068 size 0xb8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::DSASignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DSASignatureDescription, "System.Security.Cryptography", "DSASignatureDescription");
