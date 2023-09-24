#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_def.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SHA384SignatureDescription;
}
// Type: System.Security.Cryptography::RSAPKCS1SHA384SignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2963))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2966))
// CS Name: System.Security.Cryptography.RSAPKCS1SHA384SignatureDescription
class CORDL_TYPE RSAPKCS1SHA384SignatureDescription : public System::Security::Cryptography::RSAPKCS1SignatureDescription {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~RSAPKCS1SHA384SignatureDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SHA384SignatureDescription", modifiers: " const&", def_value: None }]
constexpr RSAPKCS1SHA384SignatureDescription(RSAPKCS1SHA384SignatureDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SHA384SignatureDescription", modifiers: "&&", def_value: None }]
constexpr RSAPKCS1SHA384SignatureDescription(RSAPKCS1SHA384SignatureDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RSAPKCS1SHA384SignatureDescription(void* ptr) noexcept : System::Security::Cryptography::RSAPKCS1SignatureDescription(ptr) {
}


  constexpr RSAPKCS1SHA384SignatureDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RSAPKCS1SHA384SignatureDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RSAPKCS1SHA384SignatureDescription& operator=(RSAPKCS1SHA384SignatureDescription&& o) noexcept = default;
  constexpr RSAPKCS1SHA384SignatureDescription& operator=(RSAPKCS1SHA384SignatureDescription const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription New_ctor() ;

/// @brief Method .ctor addr 0x22fef98 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription, "System.Security.Cryptography", "RSAPKCS1SHA384SignatureDescription");
